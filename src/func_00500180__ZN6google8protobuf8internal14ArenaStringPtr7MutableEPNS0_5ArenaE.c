// Function: _ZN6google8protobuf8internal14ArenaStringPtr7MutableEPNS0_5ArenaE
// Address: 00500180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal14ArenaStringPtr7MutableEPNS0_5ArenaE(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((*param_1 & 2) == 0) {
    if (param_2 == 0) {
      puVar1 = (undefined8 *)_Znwm(0x18);
      uVar2 = 2;
    }
    else {
      puVar1 = (undefined8 *)
               _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(param_2);
      uVar2 = 3;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *param_1 = uVar2 | (ulong)puVar1;
    return puVar1;
  }
  return (undefined8 *)(*param_1 & 0xfffffffffffffffc);
}


