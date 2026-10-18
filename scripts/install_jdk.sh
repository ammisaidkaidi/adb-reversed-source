#!/bin/bash
set -euo pipefail

# Install Adoptium Temurin JDK 21 to /home/z/my-project/tools/jdk
DEST=/home/z/my-project/tools
mkdir -p "$DEST"

URL="https://github.com/adoptium/temurin21-binaries/releases/download/jdk-21.0.5%2B11/OpenJDK21U-jdk_x64_linux_hotspot_21.0.5_11.tar.gz"
TGZ="$DEST/jdk21.tar.gz"

if [ ! -f "$TGZ" ]; then
  echo "Downloading Temurin JDK 21..."
  curl -fL --retry 3 -o "$TGZ" "$URL"
fi
echo "Downloaded $(stat -c%s "$TGZ") bytes."

TARGET="$DEST/jdk21"
rm -rf "$TARGET"
mkdir -p "$TARGET"
tar -xzf "$TGZ" -C "$TARGET" --strip-components=1

echo "JDK installed at: $TARGET"
"$TARGET/bin/javac" -version
echo "JAVA_HOME=$TARGET" > /home/z/my-project/rea/rev/jdk.env
