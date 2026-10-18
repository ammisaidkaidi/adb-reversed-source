#!/bin/bash
set -euo pipefail

# Download Android platform-tools (Windows) and extract adb.exe into rev/
REV_DIR="/home/z/my-project/rea/rev"
mkdir -p "$REV_DIR"

TMP_DIR="$(mktemp -d)"
trap 'rm -rf "$TMP_DIR"' EXIT

URL="https://dl.google.com/android/repository/platform-tools-latest-windows.zip"
ZIP="$TMP_DIR/platform-tools-windows.zip"

echo "Downloading Android platform-tools (Windows) from Google..."
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

# Locate adb.exe inside extracted platform-tools
ADB_EXE="$(find "$TMP_DIR/platform-tools" -maxdepth 1 -iname 'adb.exe' -print -quit || true)"
if [ -z "$ADB_EXE" ] || [ ! -f "$ADB_EXE" ]; then
  echo "ERROR: adb.exe not found in extracted archive" >&2
  exit 1
fi

echo "Copying adb.exe to $REV_DIR/ ..."
cp -f "$ADB_EXE" "$REV_DIR/adb.exe"
chmod 0644 "$REV_DIR/adb.exe"

echo "Done."
ls -la "$REV_DIR"
file "$REV_DIR/adb.exe" || true
