// Function: _ZN3adb5proto11MdnsService10SharedDtorERN6google8protobuf11MessageLiteE
// Address: 00423240
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto11MdnsService10SharedDtorERN6google8protobuf11MessageLiteE(long param_1)

{
  long lVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata21DeleteOutOfLineHelperINS0_15UnknownFieldSetEEEvv
              (param_1 + 8);
  }
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x30);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x38);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x40);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x48);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x50);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x58);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x60);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x68);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x70);
  _ZN6google8protobuf8internal14ArenaStringPtr7DestroyEv(param_1 + 0x78);
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  puVar6 = (ulong *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar7 = *puVar6;
    uVar3 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      uVar4 = (uint)(uVar7 != 0);
    }
    else {
      uVar4 = *(uint *)(uVar7 + 3);
    }
    puVar8 = (ulong *)(uVar7 + 7);
    if ((uVar7 & 1) == 0) {
      puVar8 = puVar6;
    }
    if (0 < (int)uVar4) {
      lVar5 = 5;
      do {
        puVar2 = (ulong *)puVar8[lVar5 + -5];
        if (puVar2 != (ulong *)0x0) {
          if ((*puVar2 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar2[2],*puVar2 & 0xfffffffffffffffe);
          }
          _ZdaPvSt11align_val_t(puVar2,0x18);
        }
        lVar1 = lVar5 - (ulong)uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar1 != 4);
      uVar7 = *puVar6;
      uVar3 = (uint)uVar7;
    }
    if ((uVar3 & 1) != 0) {
      free(uVar7 - 1,(long)*(int *)(uVar7 - 1) * 8 + 8);
      return;
    }
  }
  return;
}


