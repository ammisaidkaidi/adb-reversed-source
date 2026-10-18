// Function: _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
// Address: 004ffc80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNK6google8protobuf8internal15TaggedStringPtr9ForceCopyEPNS0_5ArenaE
                  (ulong *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong extraout_RDX;
  ulong *extraout_RDX_00;
  long extraout_RDX_01;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  
  pbVar6 = (byte *)(*param_1 & 0xfffffffffffffffc);
  bVar1 = *pbVar6;
  puVar12 = (ulong *)(ulong)bVar1;
  bVar17 = (bVar1 & 1) != 0;
  pbVar10 = pbVar6 + 1;
  if (bVar17) {
    pbVar10 = *(byte **)(pbVar6 + 0x10);
  }
  uVar9 = (ulong)(bVar1 >> 1);
  if (bVar17) {
    uVar9 = *(ulong *)(pbVar6 + 8);
  }
  if (param_2 == (ulong *)0x0) {
    puVar13 = (ulong *)0x18;
    plVar7 = (long *)_Znwm();
    if (uVar9 < 0xfffffffffffffff7) {
      if (uVar9 < 0x17) {
        *(char *)plVar7 = (char)uVar9 * '\x02';
        pcVar14 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar15 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          lVar15 = (uVar9 | 7) + 1;
        }
        pcVar14 = (char *)_Znwm(lVar15);
        *plVar7 = lVar15 + 1;
        plVar7[1] = uVar9;
        plVar7[2] = (long)pcVar14;
      }
      func_0x0099bda0(pcVar14,pbVar10,uVar9);
      uVar8 = 2;
      goto code_r0x004ffd92;
    }
  }
  else {
    puVar13 = param_2;
    plVar7 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
    if (uVar9 < 0xfffffffffffffff7) {
      if (uVar9 < 0x17) {
        *(char *)plVar7 = (char)uVar9 * '\x02';
        pcVar14 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar15 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          lVar15 = (uVar9 | 7) + 1;
        }
        pcVar14 = (char *)_Znwm(lVar15);
        *plVar7 = lVar15 + 1;
        plVar7[1] = uVar9;
        plVar7[2] = (long)pcVar14;
      }
      func_0x0099bd90(pcVar14,pbVar10,uVar9);
      uVar8 = 3;
code_r0x004ffd92:
      pcVar14[uVar9] = '\0';
      return (ulong *)((ulong)plVar7 | uVar8);
    }
  }
  func_0x0032e8f0();
  cVar4 = (char)extraout_RDX;
  if ((*puVar13 & 3) != 0) {
    puVar12 = (ulong *)(*puVar13 & 0xfffffffffffffffc);
    uVar9 = *puVar12;
    uVar8 = 0x16;
    if ((*puVar12 & 1) != 0) {
      uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
    }
    if (extraout_RDX < uVar8 || extraout_RDX - uVar8 == 0) {
      if ((uVar9 & 1) == 0) {
        pbVar10 = (byte *)((long)puVar12 + 1);
      }
      else {
        pbVar10 = (byte *)puVar12[2];
      }
      func_0x0099bd90(pbVar10);
      if ((*puVar12 & 1) == 0) {
        *(char *)puVar12 = cVar4 * '\x02';
      }
      else {
        puVar12[1] = extraout_RDX;
      }
      pbVar10[extraout_RDX] = 0;
    }
    else {
      if ((uVar9 & 1) == 0) {
        uVar9 = (ulong)((uint)(uVar9 >> 1) & 0x7f);
      }
      else {
        uVar9 = puVar12[1];
      }
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (puVar12,uVar8,extraout_RDX - uVar8,uVar9,0,uVar9);
    }
    return puVar12;
  }
  puVar11 = param_2;
  if (puVar12 == (ulong *)0x0) {
    puVar12 = (ulong *)0x18;
    plVar7 = (long *)_Znwm();
    if (extraout_RDX < 0xfffffffffffffff7) {
      if (extraout_RDX < 0x17) {
        *(char *)plVar7 = cVar4 * '\x02';
        pcVar14 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar15 = 0x1a;
        if ((extraout_RDX | 7) != 0x17) {
          lVar15 = (extraout_RDX | 7) + 1;
        }
        pcVar14 = (char *)_Znwm(lVar15);
        *plVar7 = lVar15 + 1;
        plVar7[1] = extraout_RDX;
        plVar7[2] = (long)pcVar14;
      }
      func_0x0099bda0(pcVar14,param_2,extraout_RDX);
      uVar9 = 2;
      goto code_r0x004ffee3;
    }
  }
  else {
    plVar7 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
    if (extraout_RDX < 0xfffffffffffffff7) {
      if (extraout_RDX < 0x17) {
        *(char *)plVar7 = cVar4 * '\x02';
        pcVar14 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar15 = 0x1a;
        if ((extraout_RDX | 7) != 0x17) {
          lVar15 = (extraout_RDX | 7) + 1;
        }
        pcVar14 = (char *)_Znwm(lVar15);
        *plVar7 = lVar15 + 1;
        plVar7[1] = extraout_RDX;
        plVar7[2] = (long)pcVar14;
      }
      func_0x0099bd90(pcVar14,param_2,extraout_RDX);
      uVar9 = 3;
code_r0x004ffee3:
      pcVar14[extraout_RDX] = '\0';
      *puVar13 = (ulong)plVar7 | uVar9;
      return puVar13;
    }
  }
  func_0x0032e8f0();
  if ((*puVar12 & 3) == 0) {
    bVar17 = ((byte)*puVar11 & 1) != 0;
    pbVar10 = (byte *)((long)puVar11 + 1);
    if (bVar17) {
      pbVar10 = (byte *)puVar11[2];
    }
    uVar9 = (ulong)(byte)((byte)*puVar11 >> 1);
    if (bVar17) {
      uVar9 = puVar11[1];
    }
    if (extraout_RDX_00 == (ulong *)0x0) {
      puVar13 = (ulong *)0x18;
      plVar7 = (long *)_Znwm();
      if (0xfffffffffffffff6 < uVar9) goto code_r0x005000c5;
      if (uVar9 < 0x17) {
        *(char *)plVar7 = (char)uVar9 * '\x02';
        pcVar14 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar15 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          lVar15 = (uVar9 | 7) + 1;
        }
        pcVar14 = (char *)_Znwm(lVar15);
        *plVar7 = lVar15 + 1;
        plVar7[1] = uVar9;
        plVar7[2] = (long)pcVar14;
      }
      func_0x0099bda0(pcVar14,pbVar10,uVar9);
      uVar8 = 2;
    }
    else {
      puVar13 = extraout_RDX_00;
      plVar7 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
      if (0xfffffffffffffff6 < uVar9) {
code_r0x005000c5:
        func_0x0032e8f0();
        if ((*puVar13 & 3) == 0) {
          if (extraout_RDX_01 == 0) {
            puVar12 = (ulong *)_Znwm(0x18);
            uVar9 = 2;
          }
          else {
            puVar12 = (ulong *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                         (extraout_RDX_01);
            uVar9 = 3;
          }
          puVar12[2] = puVar11[2];
          uVar8 = puVar11[1];
          *puVar12 = *puVar11;
          puVar12[1] = uVar8;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar13 = uVar9 | (ulong)puVar12;
        }
        else {
          puVar13 = (ulong *)(*puVar13 & 0xfffffffffffffffc);
          if ((*puVar13 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar13[2],*puVar13 & 0xfffffffffffffffe);
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
          }
          puVar12 = (ulong *)puVar11[2];
          puVar13[2] = (ulong)puVar12;
          uVar9 = puVar11[1];
          *puVar13 = *puVar11;
          puVar13[1] = uVar9;
          *(undefined2 *)puVar11 = 0;
        }
        return puVar12;
      }
      if (uVar9 < 0x17) {
        *(char *)plVar7 = (char)uVar9 * '\x02';
        pcVar14 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar15 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          lVar15 = (uVar9 | 7) + 1;
        }
        pcVar14 = (char *)_Znwm(lVar15);
        *plVar7 = lVar15 + 1;
        plVar7[1] = uVar9;
        plVar7[2] = (long)pcVar14;
      }
      func_0x0099bd90(pcVar14,pbVar10,uVar9);
      uVar8 = 3;
    }
    pcVar14[uVar9] = '\0';
    *puVar12 = (ulong)plVar7 | uVar8;
  }
  else {
    puVar13 = (ulong *)(*puVar12 & 0xfffffffffffffffc);
    if (puVar11 != puVar13) {
      bVar1 = (byte)*puVar11;
      if ((*puVar13 & 1) != 0) {
        bVar17 = (bVar1 & 1) != 0;
        pbVar10 = (byte *)((long)puVar11 + 1);
        if (bVar17) {
          pbVar10 = (byte *)puVar11[2];
        }
        uVar9 = (ulong)(bVar1 >> 1);
        if (bVar17) {
          uVar9 = puVar11[1];
        }
        uVar8 = *puVar13 & 0xfffffffffffffffe;
        if (uVar9 < uVar8) {
          uVar8 = puVar13[2];
          puVar13[1] = uVar9;
          func_0x0099bd90(uVar8,pbVar10,uVar9);
          *(undefined1 *)(uVar8 + uVar9) = 0;
        }
        else {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (puVar13,uVar8 - 1,(uVar9 - uVar8) + 1,puVar13[1],0,puVar13[1],uVar9,pbVar10,
                     pbVar10,extraout_RDX);
        }
        return puVar13;
      }
      if ((bVar1 & 1) != 0) {
        uVar9 = puVar11[1];
        uVar8 = puVar11[2];
        if (uVar9 < 0x17) {
          *(char *)puVar13 = (char)uVar9 * '\x02';
          func_0x0099bd90((byte *)((long)puVar13 + 1),uVar8,uVar9);
          *(byte *)((long)puVar13 + uVar9 + 1) = 0;
        }
        else {
          if (0xfffffffffffffff6 < uVar9) {
            func_0x0032e8f0();
            pcVar3 = (code *)swi(3);
            puVar12 = (ulong *)(*pcVar3)();
            return puVar12;
          }
          uVar18 = (ulong)(byte)*puVar13 << 0x38;
          uVar2 = puVar13[2];
          uVar5 = 0x2c;
          if (0x2c < uVar9) {
            uVar5 = uVar9;
          }
          uVar16 = (uVar5 | 7) + 1;
          uVar5 = _Znwm(uVar16);
          func_0x0099bda0(uVar5,uVar8,uVar9);
          *(undefined1 *)(uVar5 + uVar9) = 0;
          if ((uVar18 & 0x100000000000000) != 0) {
            _ZdaPvSt11align_val_t(uVar2,*puVar13 & 0xfffffffffffffffe);
          }
          *puVar13 = uVar16 | 1;
          puVar13[1] = uVar9;
          puVar13[2] = uVar5;
        }
        return puVar13;
      }
      puVar12 = (ulong *)puVar11[2];
      puVar13[2] = (ulong)puVar12;
      uVar9 = puVar11[1];
      *puVar13 = *puVar11;
      puVar13[1] = uVar9;
    }
  }
  return puVar12;
}


