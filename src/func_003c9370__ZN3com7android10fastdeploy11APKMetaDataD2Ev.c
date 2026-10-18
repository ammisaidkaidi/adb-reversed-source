// Function: _ZN3com7android10fastdeploy11APKMetaDataD2Ev
// Address: 003c9370
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3com7android10fastdeploy11APKMetaDataD2Ev(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvv
              (param_1 + 8);
  }
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar4 = (ulong *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x28) == 0) {
      uVar5 = *puVar4;
      uVar2 = (uint)uVar5;
      if ((uVar5 & 1) == 0) {
        uVar3 = (uint)(uVar5 != 0);
      }
      else {
        uVar3 = *(uint *)(uVar5 + 3);
      }
      puVar7 = (ulong *)(uVar5 + 7);
      if ((uVar5 & 1) == 0) {
        puVar7 = puVar4;
      }
      if (0 < (int)uVar3) {
        lVar6 = 5;
        do {
          if ((long *)puVar7[lVar6 + -5] != (long *)0x0) {
            (**(code **)(*(long *)puVar7[lVar6 + -5] + 8))();
          }
          lVar1 = lVar6 - (ulong)uVar3;
          lVar6 = lVar6 + 1;
        } while (lVar1 != 4);
        uVar5 = *puVar4;
        uVar2 = (uint)uVar5;
      }
      if ((uVar2 & 1) != 0) {
        _ZdaPvSt11align_val_t(uVar5 - 1,(long)*(int *)(uVar5 - 1) * 8 + 8);
      }
    }
    *puVar4 = 0;
    return;
  }
  return;
}


