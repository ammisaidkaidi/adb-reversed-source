#!/bin/bash
set -euo pipefail

# Download and extract Ghidra 12.1.4 for REA deep native analysis
GHIDRA_VERSION="12.1.4"
GHIDRA_BUILD="20260921"
URL="https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_${GHIDRA_VERSION}_build/ghidra_${GHIDRA_VERSION}_PUBLIC_${GHIDRA_BUILD}.zip"
DEST_DIR="/home/z/my-project/tools"
mkdir -p "$DEST_DIR"

ZIP="$DEST_DIR/ghidra-${GHIDRA_VERSION}.zip"
TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

if [ ! -f "$ZIP" ]; then
  echo "Downloading Ghidra $GHIDRA_VERSION..."
  if ! curl -fL --retry 3 --retry-delay 5 -o "$ZIP" "$URL"; then
    echo "ERROR: failed to download $URL" >&2
    exit 1
  fi
fi
echo "Downloaded $(stat -c%s "$ZIP") bytes."

echo "Extracting..."
if ! unzip -q -o "$ZIP" -d "$DEST_DIR"; then
  echo "ERROR: failed to unzip" >&2
  exit 1
fi

EXTRACTED=$(find "$DEST_DIR" -maxdepth 1 -type d -name 'ghidra-*' | head -1)
if [ -z "$EXTRACTED" ] || [ ! -d "$EXTRACTED" ]; then
  echo "ERROR: extracted directory not found" >&2
  exit 1
fi

# Normalize to a stable path
TARGET="$DEST_DIR/ghidra"
if [ "$EXTRACTED" != "$TARGET" ]; then
  rm -rf "$TARGET"
  mv "$EXTRACTED" "$TARGET"
fi

echo "Ghidra installed at: $TARGET"
ls -la "$TARGET" | head -10
echo "GHIDRA_INSTALL_DIR=$TARGET" > /home/z/my-project/rea/rev/ghidra.env
