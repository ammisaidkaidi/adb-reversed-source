// Function: _ZN3adb5proto6Device8CopyFromERKS1_
// Address: 0041ec80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto6Device8CopyFromERKS1_(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  byte bStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined8 uStack_30;
  long lStack_28;
  undefined *puStack_20;
  
  if (param_2 == param_1) {
    return;
  }
  puStack_20 = &UNK_0041ec97;
  _ZN3adb5proto6Device5ClearEv();
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        uVar3 = (ulong)(*pbVar4 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar4 + 8);
      }
      pbVar1 = (byte *)(param_1 + 0x18);
      if (uVar3 == 0) {
        if ((*pbVar1 & 3) == 0) {
          bStack_40 = 0;
          uStack_3f = 0;
          uVar3 = *(ulong *)(param_1 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                    (pbVar1,&bStack_40,uVar3);
          if ((bStack_40 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_30,
                       CONCAT62(uStack_3e,CONCAT11(uStack_3f,bStack_40)) & 0xfffffffffffffffe);
          }
        }
      }
      else {
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (pbVar1,pbVar4,uVar3);
      }
    }
    if ((uVar2 & 2) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        uVar3 = (ulong)(*pbVar4 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar4 + 8);
      }
      pbVar1 = (byte *)(param_1 + 0x20);
      if (uVar3 == 0) {
        if ((*pbVar1 & 3) == 0) {
          bStack_40 = 0;
          uStack_3f = 0;
          uVar3 = *(ulong *)(param_1 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                    (pbVar1,&bStack_40,uVar3);
          if ((bStack_40 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_30,
                       CONCAT62(uStack_3e,CONCAT11(uStack_3f,bStack_40)) & 0xfffffffffffffffe);
          }
        }
      }
      else {
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (pbVar1,pbVar4,uVar3);
      }
    }
    if ((uVar2 & 4) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        uVar3 = (ulong)(*pbVar4 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar4 + 8);
      }
      pbVar1 = (byte *)(param_1 + 0x28);
      if (uVar3 == 0) {
        if ((*pbVar1 & 3) == 0) {
          bStack_40 = 0;
          uStack_3f = 0;
          uVar3 = *(ulong *)(param_1 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                    (pbVar1,&bStack_40,uVar3);
          if ((bStack_40 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_30,
                       CONCAT62(uStack_3e,CONCAT11(uStack_3f,bStack_40)) & 0xfffffffffffffffe);
          }
        }
      }
      else {
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (pbVar1,pbVar4,uVar3);
      }
    }
    if ((uVar2 & 8) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        uVar3 = (ulong)(*pbVar4 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar4 + 8);
      }
      pbVar1 = (byte *)(param_1 + 0x30);
      if (uVar3 == 0) {
        if ((*pbVar1 & 3) == 0) {
          bStack_40 = 0;
          uStack_3f = 0;
          uVar3 = *(ulong *)(param_1 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                    (pbVar1,&bStack_40,uVar3);
          if ((bStack_40 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_30,
                       CONCAT62(uStack_3e,CONCAT11(uStack_3f,bStack_40)) & 0xfffffffffffffffe);
          }
        }
      }
      else {
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (pbVar1,pbVar4,uVar3);
      }
    }
    if ((uVar2 & 0x10) != 0) {
      pbVar4 = (byte *)(*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc);
      if ((*pbVar4 & 1) == 0) {
        uVar3 = (ulong)(*pbVar4 >> 1);
      }
      else {
        uVar3 = *(ulong *)(pbVar4 + 8);
      }
      pbVar1 = (byte *)(param_1 + 0x38);
      if (uVar3 == 0) {
        if ((*pbVar1 & 3) == 0) {
          bStack_40 = 0;
          uStack_3f = 0;
          uVar3 = *(ulong *)(param_1 + 8);
          if ((uVar3 & 1) != 0) {
            uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
          }
          _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                    (pbVar1,&bStack_40,uVar3);
          if ((bStack_40 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_30,
                       CONCAT62(uStack_3e,CONCAT11(uStack_3f,bStack_40)) & 0xfffffffffffffffe);
          }
        }
      }
      else {
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (pbVar1,pbVar4,uVar3);
      }
    }
    if (((uVar2 & 0x20) != 0) && (*(int *)(param_2 + 0x40) != 0)) {
      *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
    }
    if (((uVar2 & 0x40) != 0) && (*(int *)(param_2 + 0x44) != 0)) {
      *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
    }
    if (((char)uVar2 < '\0') && (*(long *)(param_2 + 0x48) != 0)) {
      *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
    }
  }
  if ((uVar2 & 0x300) != 0) {
    if (((uVar2 & 0x100) != 0) && (*(long *)(param_2 + 0x50) != 0)) {
      *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
    }
    if (((uVar2 & 0x200) != 0) && (*(long *)(param_2 + 0x58) != 0)) {
      *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  return;
}


