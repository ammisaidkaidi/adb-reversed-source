// Function: _ZN6google8protobuf8internal15ThreadSafeArena5ResetEv
// Address: 004ba400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1  [16] _ZN6google8protobuf8internal15ThreadSafeArena5ResetEv(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *in_FS_OFFSET;
  undefined1 auVar14 [16];
  
  lVar9 = param_1[10];
  puVar5 = (undefined8 *)param_1[2];
  uVar7 = *(uint *)(puVar5 + 1);
  while (uVar7 != 0) {
    uVar1 = *(uint *)((long)puVar5 + 0xc);
    uVar3 = uVar7;
    if (uVar1 < uVar7) {
      uVar3 = uVar1;
    }
    puVar4 = (undefined8 *)*puVar5;
    if (uVar1 != 0) {
      plVar10 = (long *)(((ulong)uVar7 * 8 + 0x17 & 0xffffffff8) + (long)puVar5);
      uVar11 = (ulong)uVar3 * 8 - 8;
      plVar6 = plVar10;
      if ((~(uint)uVar11 & 0x18) != 0) {
        uVar12 = (ulong)(((uint)(uVar11 >> 3) & 0x1fffffff) + 1 & 3);
        do {
          if (*plVar6 != 0) {
            lVar9 = lVar9 + *(long *)(*plVar6 + 0x28);
          }
          plVar6 = plVar6 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (0x17 < uVar11) {
        do {
          if (*plVar6 != 0) {
            lVar9 = lVar9 + *(long *)(*plVar6 + 0x28);
          }
          if (plVar6[1] != 0) {
            lVar9 = lVar9 + *(long *)(plVar6[1] + 0x28);
          }
          if (plVar6[2] != 0) {
            lVar9 = lVar9 + *(long *)(plVar6[2] + 0x28);
          }
          if (plVar6[3] != 0) {
            lVar9 = lVar9 + *(long *)(plVar6[3] + 0x28);
          }
          plVar6 = plVar6 + 4;
        } while (plVar6 != plVar10 + uVar3);
      }
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar5 = puVar4;
    uVar7 = *(uint *)(puVar5 + 1);
  }
  uVar7 = *(uint *)((long *)param_1[2] + 1);
  plVar6 = (long *)param_1[2];
  while (uVar7 != 0) {
    plVar10 = (long *)*plVar6;
    uVar1 = *(uint *)((long)plVar6 + 0xc);
    if (uVar1 != 0) {
      uVar3 = uVar7;
      if (uVar1 < uVar7) {
        uVar3 = uVar1;
      }
      lVar13 = (ulong)uVar3 << 3;
      do {
        _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
                  (*(long *)((long)plVar6 + lVar13 + (((ulong)uVar7 * 8 + 0x17 & 0xffffffff8) - 8))
                   + 0x50);
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    plVar6 = plVar10;
    uVar7 = *(uint *)(plVar10 + 1);
  }
  _ZN6google8protobuf8internal7cleanup9ChunkList7CleanupERKNS1_11SerialArenaE
            (param_1 + 0xf,param_1 + 5);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  auVar14 = _ZN6google8protobuf8internal15ThreadSafeArena4FreeEv(param_1);
  puVar5 = auVar14._0_8_;
  uVar11 = param_1[1];
  if ((uVar11 & 0xfffffffffffffff9) == 0) {
    param_1[8] = (long)&UNK_001ff288;
    param_1[6] = (long)&UNK_001ff288;
    param_1[9] = (long)&UNK_001ff288;
    param_1[7] = (long)&UNK_001ff288;
    param_1[0x13] = 0;
    lVar13 = 0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = auVar14._8_8_;
    param_1[8] = (long)(puVar5 + (ulong)(7 < uVar11) * 4 + 2);
    param_1[6] = (long)(puVar5 + (ulong)(7 < uVar11) * 4 + 2);
    param_1[9] = (auVar14._8_8_ & 0xfffffffffffffff8) + (long)puVar5;
    param_1[7] = (long)puVar5;
    param_1[0x13] = 0;
    lVar13 = puVar5[1];
  }
  param_1[10] = lVar13;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  lVar13 = *in_FS_OFFSET;
  plVar6 = (long *)(lVar13 + -0x120);
  lVar8 = *plVar6;
  if ((char)lVar8 == '\0') {
    LOCK();
    UNLOCK();
    lVar8 = _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E << 8;
    _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E =
         _ZN6google8protobuf8internal15ThreadSafeArena13lifecycle_id_E + 1;
  }
  *plVar6 = lVar8 + 1;
  *param_1 = lVar8;
  param_1[2] = 0xa00988;
  param_1[0x14] = (long)plVar6;
  lVar2 = param_1[10];
  *(long **)(lVar13 + -0x110) = param_1 + 5;
  *(long *)(lVar13 + -0x118) = lVar8;
  auVar14._8_8_ = lVar2;
  auVar14._0_8_ = lVar9;
  return auVar14;
}


