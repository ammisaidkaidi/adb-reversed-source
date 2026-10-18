// Function: _ZN6google8protobuf8internal14ArenaStringPtr12SetAllocatedEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
// Address: 00500310
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal14ArenaStringPtr12SetAllocatedEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS0_5ArenaE
               (ulong *param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulong *puVar5;
  long *in_FS_OFFSET;
  
  puVar5 = (ulong *)(*param_1 ^ 2);
  if (((ulong)puVar5 & 3) == 0 && puVar5 != (ulong *)0x0) {
    if ((*puVar5 & 1) != 0) {
      _ZdaPvSt11align_val_t(puVar5[2],*puVar5 & 0xfffffffffffffffe);
    }
    _ZdaPvSt11align_val_t(puVar5,0x18);
  }
  if (param_2 == 0) {
    *param_1 = (ulong)_ZN6google8protobuf8internal26fixed_address_empty_stringE;
  }
  else {
    if (param_3 != (long *)0x0) {
      uVar3 = param_2 | 3;
      *param_1 = uVar3;
      if (*(long *)(*in_FS_OFFSET + -0x118) == *param_3) {
        lVar2 = *(long *)(*in_FS_OFFSET + -0x110);
      }
      else {
        lVar2 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm
                          (param_3,0x10);
      }
      puVar5 = *(ulong **)(lVar2 + 0x58);
      if (puVar5 < *(ulong **)(lVar2 + 0x60)) {
        *(ulong **)(lVar2 + 0x58) = puVar5 + 2;
        *puVar5 = param_2;
        puVar5[1] = (ulong)
                    _ZN6google8protobuf8internal19arena_delete_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv
        ;
      }
      else {
        _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
                  (lVar2 + 0x50,param_2,
                   _ZN6google8protobuf8internal19arena_delete_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv
                   ,lVar2,param_5,param_6,uVar3,unaff_RBX,unaff_R14,unaff_R15,unaff_RBP);
      }
      uVar3 = *(ulong *)(lVar2 + 0x58);
      uVar1 = *(ulong *)(lVar2 + 0x68);
      if (((long)(uVar1 - uVar3) < 0x181) && (uVar4 = *(ulong *)(lVar2 + 0x60), uVar1 < uVar4)) {
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
        uVar1 = uVar3;
        if (uVar3 + 0x180 < uVar4) {
          uVar4 = uVar3 + 0x180;
        }
        for (; uVar1 < uVar4; uVar1 = uVar1 + 0x40) {
        }
      }
      *(ulong *)(lVar2 + 0x68) = uVar1;
      return;
    }
    *param_1 = param_2 | 2;
  }
  return;
}


