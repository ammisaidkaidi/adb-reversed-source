# Tools used by this reconstruction

| Tool | Version | Install location | Source |
|------|---------|------------------|--------|
| REA (npm: `rea-agents`) | 6.5.0 | `/home/z/.npm-global/bin/rea` | https://github.com/morluto/rea |
| Ghidra | 12.1.4 | `/home/z/my-project/tools/ghidra` | https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.4_build |
| OpenJDK (Temurin) | 21.0.5 | `/home/z/my-project/tools/jdk21` | https://github.com/adoptium/temurin21-binaries |
| pwntools | 4.15.0 | `~/.local/lib/python3.13/site-packages` | https://github.com/Gallopsled/pwntools |
| GNU objdump | 2.44 | `/usr/bin/objdump` | system binutils |

## Tool install scripts

- `scripts/install_jdk.sh`     — Downloads Temurin JDK 21
- `scripts/install_ghidra.sh`  — Downloads Ghidra 12.1.4
- `scripts/download_adb.sh`         — Downloads Windows adb.exe from Google
- `scripts/download_adb_linux.sh`   — Downloads Linux adb from Google
- `scripts/pyghidra_reconstruct.py` — Main reconstruction script (uses PyGhidra to drive Ghidra headless)
