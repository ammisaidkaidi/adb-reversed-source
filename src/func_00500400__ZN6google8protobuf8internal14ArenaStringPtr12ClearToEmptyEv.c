// Function: _ZN6google8protobuf8internal14ArenaStringPtr12ClearToEmptyEv
// Address: 00500400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal14ArenaStringPtr12ClearToEmptyEv(ulong *param_1)

{
  byte *pbVar1;
  
  if ((*param_1 & 3) != 0) {
    pbVar1 = (byte *)(*param_1 & 0xfffffffffffffffc);
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
    }
  }
  return;
}


