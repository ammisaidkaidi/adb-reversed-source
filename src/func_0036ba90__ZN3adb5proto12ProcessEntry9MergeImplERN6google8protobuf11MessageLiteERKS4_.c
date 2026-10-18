// Function: _ZN3adb5proto12ProcessEntry9MergeImplERN6google8protobuf11MessageLiteERKS4_
// Address: 0036ba90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto12ProcessEntry9MergeImplERN6google8protobuf11MessageLiteERKS4_
               (long param_1,long param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  byte bStack_48;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 8);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((char)uVar3 != '\0') {
    if (((uVar3 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvRKS2_PNS0_5ArenaE
                (param_1 + 0x18,param_2 + 0x18,uVar4);
    }
    if ((uVar3 & 2) != 0) {
      pbVar5 = (byte *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
      if ((*pbVar5 & 1) == 0) {
        uVar4 = (ulong)(*pbVar5 >> 1);
      }
      else {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      pbVar2 = (byte *)(param_1 + 0x30);
      if (uVar4 == 0) {
        if ((*pbVar2 & 3) == 0) {
          bStack_48 = 0;
          uStack_47 = 0;
          uVar4 = *puVar1;
          if ((uVar4 & 1) != 0) {
            uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
          }
          _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                    (pbVar2,&bStack_48,uVar4);
          if ((bStack_48 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_38,
                       CONCAT62(uStack_46,CONCAT11(uStack_47,bStack_48)) & 0xfffffffffffffffe);
          }
        }
      }
      else {
        uVar4 = *puVar1;
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (pbVar2,pbVar5,uVar4);
      }
    }
    if ((uVar3 & 4) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                (param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar4);
    }
    if (((uVar3 & 8) != 0) && (*(long *)(param_2 + 0x40) != 0)) {
      *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
    }
    if ((uVar3 & 0x10) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar3 & 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if (((uVar3 & 0x40) != 0) && (*(char *)(param_2 + 0x58) == '\x01')) {
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    if (((char)uVar3 < '\0') && (*(char *)(param_2 + 0x59) == '\x01')) {
      *(undefined1 *)(param_1 + 0x59) = 1;
    }
  }
  if ((uVar3 & 0x100) != 0) {
    *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (puVar1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_30) {
    func_0x0099bd00();
    return;
  }
  return;
}


