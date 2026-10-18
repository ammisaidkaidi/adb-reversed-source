// Function: _ZN6google8protobuf8internal14ArenaStringPtr3SetENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaE
// Address: 004ffdc0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN6google8protobuf8internal14ArenaStringPtr3SetENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPNS0_5ArenaE
                  (ulong *param_1,ulong *param_2,ulong param_3,ulong *param_4)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong *puVar10;
  ulong *extraout_RDX;
  long extraout_RDX_00;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  bool bVar16;
  ulong uVar17;
  
  cVar4 = (char)param_3;
  if ((*param_1 & 3) != 0) {
    puVar11 = (ulong *)(*param_1 & 0xfffffffffffffffc);
    uVar8 = *puVar11;
    uVar5 = 0x16;
    if ((*puVar11 & 1) != 0) {
      uVar5 = (uVar8 & 0xfffffffffffffffe) - 1;
    }
    if (param_3 < uVar5 || param_3 - uVar5 == 0) {
      if ((uVar8 & 1) == 0) {
        pbVar9 = (byte *)((long)puVar11 + 1);
      }
      else {
        pbVar9 = (byte *)puVar11[2];
      }
      func_0x0099bd90(pbVar9,param_2,param_3);
      if ((*puVar11 & 1) == 0) {
        *(char *)puVar11 = cVar4 * '\x02';
      }
      else {
        puVar11[1] = param_3;
      }
      pbVar9[param_3] = 0;
    }
    else {
      if ((uVar8 & 1) == 0) {
        uVar8 = (ulong)((uint)(uVar8 >> 1) & 0x7f);
      }
      else {
        uVar8 = puVar11[1];
      }
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (puVar11,uVar5,param_3 - uVar5,uVar8,0,uVar8);
    }
    return puVar11;
  }
  puVar11 = param_2;
  if (param_4 == (ulong *)0x0) {
    param_4 = (ulong *)0x18;
    plVar7 = (long *)_Znwm();
    if (param_3 < 0xfffffffffffffff7) {
      if (param_3 < 0x17) {
        *(char *)plVar7 = cVar4 * '\x02';
        pcVar15 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar13 = 0x1a;
        if ((param_3 | 7) != 0x17) {
          lVar13 = (param_3 | 7) + 1;
        }
        pcVar15 = (char *)_Znwm(lVar13);
        *plVar7 = lVar13 + 1;
        plVar7[1] = param_3;
        plVar7[2] = (long)pcVar15;
      }
      func_0x0099bda0(pcVar15,param_2,param_3);
      uVar8 = 2;
      goto code_r0x004ffee3;
    }
  }
  else {
    plVar7 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
    if (param_3 < 0xfffffffffffffff7) {
      if (param_3 < 0x17) {
        *(char *)plVar7 = cVar4 * '\x02';
        pcVar15 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar13 = 0x1a;
        if ((param_3 | 7) != 0x17) {
          lVar13 = (param_3 | 7) + 1;
        }
        pcVar15 = (char *)_Znwm(lVar13);
        *plVar7 = lVar13 + 1;
        plVar7[1] = param_3;
        plVar7[2] = (long)pcVar15;
      }
      func_0x0099bd90(pcVar15,param_2,param_3);
      uVar8 = 3;
code_r0x004ffee3:
      pcVar15[param_3] = '\0';
      *param_1 = (ulong)plVar7 | uVar8;
      return param_1;
    }
  }
  func_0x0032e8f0();
  if ((*param_4 & 3) == 0) {
    bVar16 = ((byte)*puVar11 & 1) != 0;
    pbVar9 = (byte *)((long)puVar11 + 1);
    if (bVar16) {
      pbVar9 = (byte *)puVar11[2];
    }
    uVar8 = (ulong)(byte)((byte)*puVar11 >> 1);
    if (bVar16) {
      uVar8 = puVar11[1];
    }
    if (extraout_RDX == (ulong *)0x0) {
      puVar12 = (ulong *)0x18;
      plVar7 = (long *)_Znwm();
      if (0xfffffffffffffff6 < uVar8) goto code_r0x005000c5;
      if (uVar8 < 0x17) {
        *(char *)plVar7 = (char)uVar8 * '\x02';
        pcVar15 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar13 = 0x1a;
        if ((uVar8 | 7) != 0x17) {
          lVar13 = (uVar8 | 7) + 1;
        }
        pcVar15 = (char *)_Znwm(lVar13);
        *plVar7 = lVar13 + 1;
        plVar7[1] = uVar8;
        plVar7[2] = (long)pcVar15;
      }
      func_0x0099bda0(pcVar15,pbVar9,uVar8);
      uVar5 = 2;
    }
    else {
      puVar12 = extraout_RDX;
      plVar7 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
      if (0xfffffffffffffff6 < uVar8) {
code_r0x005000c5:
        func_0x0032e8f0();
        if ((*puVar12 & 3) == 0) {
          if (extraout_RDX_00 == 0) {
            puVar10 = (ulong *)_Znwm(0x18);
            uVar8 = 2;
          }
          else {
            puVar10 = (ulong *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                         (extraout_RDX_00);
            uVar8 = 3;
          }
          puVar10[2] = puVar11[2];
          uVar5 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar5;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar12 = uVar8 | (ulong)puVar10;
        }
        else {
          puVar12 = (ulong *)(*puVar12 & 0xfffffffffffffffc);
          if ((*puVar12 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar12[2],*puVar12 & 0xfffffffffffffffe);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
          }
          puVar10 = (ulong *)puVar11[2];
          puVar12[2] = (ulong)puVar10;
          uVar8 = puVar11[1];
          *puVar12 = *puVar11;
          puVar12[1] = uVar8;
          *(undefined2 *)puVar11 = 0;
        }
        return puVar10;
      }
      if (uVar8 < 0x17) {
        *(char *)plVar7 = (char)uVar8 * '\x02';
        pcVar15 = (char *)((long)plVar7 + 1);
      }
      else {
        lVar13 = 0x1a;
        if ((uVar8 | 7) != 0x17) {
          lVar13 = (uVar8 | 7) + 1;
        }
        pcVar15 = (char *)_Znwm(lVar13);
        *plVar7 = lVar13 + 1;
        plVar7[1] = uVar8;
        plVar7[2] = (long)pcVar15;
      }
      func_0x0099bd90(pcVar15,pbVar9,uVar8);
      uVar5 = 3;
    }
    pcVar15[uVar8] = '\0';
    *param_4 = (ulong)plVar7 | uVar5;
  }
  else {
    puVar12 = (ulong *)(*param_4 & 0xfffffffffffffffc);
    if (puVar11 != puVar12) {
      bVar1 = (byte)*puVar11;
      if ((*puVar12 & 1) != 0) {
        bVar16 = (bVar1 & 1) != 0;
        pbVar9 = (byte *)((long)puVar11 + 1);
        if (bVar16) {
          pbVar9 = (byte *)puVar11[2];
        }
        uVar8 = (ulong)(bVar1 >> 1);
        if (bVar16) {
          uVar8 = puVar11[1];
        }
        uVar5 = *puVar12 & 0xfffffffffffffffe;
        if (uVar8 < uVar5) {
          uVar5 = puVar12[2];
          puVar12[1] = uVar8;
          func_0x0099bd90(uVar5,pbVar9,uVar8);
          *(undefined1 *)(uVar5 + uVar8) = 0;
        }
        else {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (puVar12,uVar5 - 1,(uVar8 - uVar5) + 1,puVar12[1],0,puVar12[1],uVar8,pbVar9,
                     pbVar9,param_3);
        }
        return puVar12;
      }
      if ((bVar1 & 1) != 0) {
        uVar8 = puVar11[1];
        uVar5 = puVar11[2];
        if (uVar8 < 0x17) {
          *(char *)puVar12 = (char)uVar8 * '\x02';
          func_0x0099bd90((byte *)((long)puVar12 + 1),uVar5,uVar8);
          *(byte *)((long)puVar12 + uVar8 + 1) = 0;
        }
        else {
          if (0xfffffffffffffff6 < uVar8) {
            func_0x0032e8f0();
            pcVar3 = (code *)swi(3);
            puVar11 = (ulong *)(*pcVar3)();
            return puVar11;
          }
          uVar17 = (ulong)(byte)*puVar12 << 0x38;
          uVar2 = puVar12[2];
          uVar6 = 0x2c;
          if (0x2c < uVar8) {
            uVar6 = uVar8;
          }
          uVar14 = (uVar6 | 7) + 1;
          uVar6 = _Znwm(uVar14);
          func_0x0099bda0(uVar6,uVar5,uVar8);
          *(undefined1 *)(uVar6 + uVar8) = 0;
          if ((uVar17 & 0x100000000000000) != 0) {
            _ZdaPvSt11align_val_t(uVar2,*puVar12 & 0xfffffffffffffffe);
          }
          *puVar12 = uVar14 | 1;
          puVar12[1] = uVar8;
          puVar12[2] = uVar6;
        }
        return puVar12;
      }
      param_4 = (ulong *)puVar11[2];
      puVar12[2] = (ulong)param_4;
      uVar8 = puVar11[1];
      *puVar12 = *puVar11;
      puVar12[1] = uVar8;
    }
  }
  return param_4;
}


