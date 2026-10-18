// Function: _ZN6google8protobuf8internal14ArenaStringPtr7MutableERKNS1_10LazyStringEPNS0_5ArenaE
// Address: 005001e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal14ArenaStringPtr7MutableERKNS1_10LazyStringEPNS0_5ArenaE
          (ulong *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if ((*param_1 & 2) != 0) {
    return (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  }
  pbVar3 = *(byte **)(param_2 + 0x18);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = (byte *)_ZNK6google8protobuf8internal10LazyString4InitEv(param_2);
  }
  if (param_3 == 0) {
    puVar2 = (undefined8 *)_Znwm(0x18);
    if ((*pbVar3 & 1) == 0) {
      puVar2[2] = *(undefined8 *)(pbVar3 + 0x10);
      uVar1 = *(undefined8 *)(pbVar3 + 8);
      *puVar2 = *(undefined8 *)pbVar3;
      puVar2[1] = uVar1;
    }
    else {
      func_0x00330340(puVar2,*(undefined8 *)(pbVar3 + 0x10),*(undefined8 *)(pbVar3 + 8));
    }
    uVar4 = 2;
  }
  else {
    puVar2 = (undefined8 *)
             _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(param_3);
    if ((*pbVar3 & 1) == 0) {
      puVar2[2] = *(undefined8 *)(pbVar3 + 0x10);
      uVar1 = *(undefined8 *)(pbVar3 + 8);
      *puVar2 = *(undefined8 *)pbVar3;
      puVar2[1] = uVar1;
    }
    else {
      func_0x00330340(puVar2,*(undefined8 *)(pbVar3 + 0x10),*(undefined8 *)(pbVar3 + 8));
    }
    uVar4 = 3;
  }
  *param_1 = uVar4 | (ulong)puVar2;
  return puVar2;
}


