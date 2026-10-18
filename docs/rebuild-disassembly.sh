#!/bin/bash
# Rebuild the original disassembly files from their split parts.
set -e
cd "$(dirname "$0")"

for stem in adb-full-disassembly.asm adb-exe-full-disassembly.asm; do
  parts=$(ls ${stem}.part*.part 2>/dev/null | sort)
  if [ -n "$parts" ]; then
    echo "Reassembling $stem..."
    cat $parts > "$stem"
    echo "  -> $(stat -c%s "$stem") bytes"
  fi
done

echo "Done. You can now safely delete the .part*.part files."
