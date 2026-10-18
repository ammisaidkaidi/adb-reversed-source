// Function: _ZN3com7android10fastdeploy7APKDump8CopyFromERKS2_
// Address: 003c8ca0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 * _ZN3com7android10fastdeploy7APKDump8CopyFromERKS2_(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *in_RAX;
  byte *pbVar4;
  long in_FS_OFFSET;
  byte bStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  undefined *puStack_20;
  
  if (param_2 == param_1) {
    return in_RAX;
  }
  puStack_20 = &UNK_003c8cb7;
  _ZN3com7android10fastdeploy7APKDump5ClearEv();
  puStack_28 = *(undefined1 **)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0xf) != 0) {
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
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEEEvRKT_
              (param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  if (*(undefined1 **)(in_FS_OFFSET + 0x28) == puStack_28) {
    return *(undefined1 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  return _ZN3com7android10fastdeploy19APKDump_class_data_E;
}


