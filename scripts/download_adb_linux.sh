#!/bin/bash
set -euo pipefail

# Download Android platform-tools (Linux) and extract adb binary
REV_DIR="/home/z/my-project/rea/rev"
mkdir -p "$REV_DIR"

TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

URL="https://dl.google.com/android/repository/platform-tools-latest-linux.zip"
ZIP="$TMP_DIR/platform-tools-linux.zip"

echo "Downloading Android platform-tools (Linux) from Google..."
if ! curl -fL --retry 3 --retry-delay 5 -o "$ZIP" "$URL"; then
  echo "ERROR: failed to download $URL" >&2
  exit 1
fi

echo "Downloaded $(stat -c%s "$ZIP") bytes."

echo "Extracting platform-tools..."
if ! unzip -q -o "$ZIP" -d "$TMP_DIR"; then
  echo "ERROR: failed to unzip $ZIP" >&2
  exit 1
fi

ADB_BIN="$(find "$TMP_DIR/platform-tools" -maxdepth 1 -type f -name 'adb' -print -quit || true)"
if [ -z "$ADB_BIN" ] || [ ! -f "$ADB_BIN" ]; then
  echo "ERROR: adb binary not found in extracted archive" >&2
  exit 1
fi

echo "Copying adb to $REV_DIR/adb ..."
cp -f "$ADB_BIN" "$REV_DIR/adb"
chmod 0755 "$REV_DIR/adb"

echo "Done."
ls -la "$REV_DIR"
file "$REV_DIR/adb" || true
