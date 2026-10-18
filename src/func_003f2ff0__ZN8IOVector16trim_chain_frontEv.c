// Function: _ZN8IOVector16trim_chain_frontEv
// Address: 003f2ff0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN8IOVector16trim_chain_frontEv(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x003f3580(param_1 + 0x18,*(long *)(param_1 + 0x18),
                    *(long *)(param_1 + 0x10) * 0x20 + *(long *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


