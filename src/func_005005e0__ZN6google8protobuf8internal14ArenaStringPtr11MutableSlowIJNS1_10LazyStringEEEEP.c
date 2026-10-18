// Function: _ZN6google8protobuf8internal14ArenaStringPtr11MutableSlowIJNS1_10LazyStringEEEEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS0_5ArenaEDpRKT_
// Address: 005005e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal14ArenaStringPtr11MutableSlowIJNS1_10LazyStringEEEEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPNS0_5ArenaEDpRKT_
               (ulong *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = *(byte **)(param_3 + 0x18);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = (byte *)_ZNK6google8protobuf8internal10LazyString4InitEv(param_3);
  }
  if (param_2 == 0) {
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
             _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(param_2);
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
  return;
}


