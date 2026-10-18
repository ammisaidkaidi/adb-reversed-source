// Function: _ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
// Address: 005004c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN6google8protobuf8internal18EpsCopyInputStream15ReadArenaStringEPKcPNS1_14ArenaStringPtrEPNS0_5ArenaE
                 (long *param_1,byte *param_2,ulong *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  byte *pbStack_40;
  ulong uVar7;
  
  uVar7 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    auVar14 = _ZN6google8protobuf8internal16ReadSizeFallbackEPKcj(param_2,uVar7);
    param_2 = auVar14._0_8_;
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
    uVar7 = auVar14._8_8_ & 0xffffffff;
  }
  else {
    param_2 = param_2 + 1;
  }
  if (param_4 == 0) {
    puVar3 = (ulong *)_Znwm(0x18);
    uVar4 = 2;
  }
  else {
    puVar3 = (ulong *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                (param_4);
    uVar4 = 3;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *param_3 = uVar4 | (ulong)puVar3;
  iVar12 = (int)uVar7;
  cVar1 = _ZN6google8protobuf8internal18EpsCopyInputStream14CanReadFromPtrEiPKc
                    (param_1,uVar7,param_2);
  if (cVar1 != '\0') {
    lVar11 = (long)iVar12;
    _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
              (puVar3,lVar11);
    if ((*puVar3 & 1) == 0) {
      pbVar8 = (byte *)((long)puVar3 + 1);
    }
    else {
      pbVar8 = (byte *)puVar3[2];
    }
    func_0x0099bda0(pbVar8,param_2,lVar11);
    return param_2 + lVar11;
  }
  if ((*puVar3 & 1) == 0) {
    *(undefined2 *)puVar3 = 0;
  }
  else {
    *(undefined1 *)puVar3[2] = 0;
    puVar3[1] = 0;
  }
  iVar2 = (int)param_1[1];
  if ((long)uVar7 <= (long)(iVar2 - (int)param_2) + (long)*(int *)((long)param_1 + 0x1c)) {
    if (((byte)*puVar3 & 1) == 0) {
      uVar4 = (ulong)(byte)((byte)*puVar3 >> 1);
    }
    else {
      uVar4 = puVar3[1];
    }
    iVar2 = 50000000;
    if (iVar12 < 50000000) {
      iVar2 = iVar12;
    }
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (puVar3,(long)iVar2 + uVar4);
    iVar2 = (int)param_1[1];
  }
  uVar10 = (iVar2 - (int)param_2) + 0x10;
  pbStack_40 = (byte *)((long)puVar3 + 1);
  do {
    if (param_1[2] == 0) {
      return (byte *)0x0;
    }
    uVar4 = *puVar3;
    lVar11 = (uVar4 & 0xfffffffffffffffe) - 1;
    if ((*puVar3 & 1) == 0) {
      lVar11 = 0x16;
    }
    if ((uVar4 & 1) == 0) {
      uVar13 = (ulong)((uint)(uVar4 >> 1) & 0x7f);
    }
    else {
      uVar13 = puVar3[1];
    }
    uVar9 = (ulong)(int)uVar10;
    if (lVar11 - uVar13 < uVar9) {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (puVar3,lVar11,(uVar9 - lVar11) + uVar13,uVar13,uVar13,0,uVar9,param_2);
    }
    else if (uVar10 != 0) {
      pbVar8 = pbStack_40;
      if ((uVar4 & 1) != 0) {
        pbVar8 = (byte *)puVar3[2];
      }
      func_0x0099bd90(pbVar8 + uVar13,param_2,uVar9);
      uVar13 = uVar13 + uVar9;
      if ((*puVar3 & 1) == 0) {
        *(char *)puVar3 = (char)uVar13 * '\x02';
      }
      else {
        puVar3[1] = uVar13;
      }
      pbVar8[uVar13] = 0;
    }
    if (*(int *)((long)param_1 + 0x1c) < 0x11) {
      return (byte *)0x0;
    }
    lVar5 = _ZN6google8protobuf8internal18EpsCopyInputStream10NextBufferILb1EEEPKcii
                      (param_1,0,0xffffffff);
    lVar11 = param_1[1];
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 10) = 1;
      *param_1 = lVar11;
      return (byte *)0x0;
    }
    uVar6 = (int)uVar7 - uVar10;
    uVar7 = (ulong)uVar6;
    uVar10 = ((int)lVar5 - (int)lVar11) + *(int *)((long)param_1 + 0x1c);
    *(uint *)((long)param_1 + 0x1c) = uVar10;
    *param_1 = (int)((int)uVar10 >> 0x1f & uVar10) + lVar11;
    param_2 = (byte *)(lVar5 + 0x10);
    uVar10 = ((int)lVar11 - (int)param_2) + 0x10;
  } while (uVar10 < uVar6);
  uVar13 = (ulong)(int)uVar6;
  uVar4 = *puVar3;
  lVar11 = 0x16;
  if ((*puVar3 & 1) != 0) {
    lVar11 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar4 & 1) == 0) {
    uVar9 = (ulong)((uint)(uVar4 >> 1) & 0x7f);
  }
  else {
    uVar9 = puVar3[1];
  }
  if (lVar11 - uVar9 < uVar13) {
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
              (puVar3,lVar11,(uVar13 - lVar11) + uVar9,uVar9,uVar9,0,uVar13,param_2);
  }
  else if (uVar6 != 0) {
    if ((uVar4 & 1) != 0) {
      pbStack_40 = (byte *)puVar3[2];
    }
    func_0x0099bd90(pbStack_40 + uVar9,param_2,uVar13);
    uVar9 = uVar9 + uVar13;
    if ((*puVar3 & 1) == 0) {
      *(char *)puVar3 = (char)uVar9 * '\x02';
    }
    else {
      puVar3[1] = uVar9;
    }
    pbStack_40[uVar9] = 0;
  }
  return param_2 + uVar7;
}


