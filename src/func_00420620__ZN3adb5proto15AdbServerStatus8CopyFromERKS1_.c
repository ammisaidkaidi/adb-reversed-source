// Function: _ZN3adb5proto15AdbServerStatus8CopyFromERKS1_
// Address: 00420620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto15AdbServerStatus8CopyFromERKS1_(long param_1,long param_2)

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
  puStack_20 = &UNK_00420637;
  _ZN3adb5proto15AdbServerStatus5ClearEv();
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
    if ((uVar2 & 0x20) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                (param_1 + 0x40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar2 & 0x40) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                (param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar3);
    }
    if ((char)uVar2 < '\0') {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                (param_1 + 0x50,*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc,uVar3);
    }
  }
  if ((uVar2 & 0x3f00) != 0) {
    if (((uVar2 & 0x100) != 0) && (*(int *)(param_2 + 0x58) != 0)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
    }
    if (((uVar2 & 0x200) != 0) && (*(int *)(param_2 + 0x5c) != 0)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
    }
    if (((uVar2 & 0x400) != 0) && (*(char *)(param_2 + 0x60) == '\x01')) {
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
    if (((uVar2 & 0x800) != 0) && (*(char *)(param_2 + 0x61) == '\x01')) {
      *(undefined1 *)(param_1 + 0x61) = 1;
    }
    if ((uVar2 & 0x1000) != 0) {
      *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
    }
    if ((uVar2 & 0x2000) != 0) {
      *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    func_0x0099bd00();
    return;
  }
  return;
}


