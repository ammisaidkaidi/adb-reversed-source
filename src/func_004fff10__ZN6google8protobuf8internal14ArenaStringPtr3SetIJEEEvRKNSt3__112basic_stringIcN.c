// Function: _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
// Address: 004fff10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN6google8protobuf8internal14ArenaStringPtr3SetIJEEEvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPNS0_5ArenaE
                  (ulong *param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  long extraout_RDX;
  ulong *puVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  bool bVar14;
  ulong uVar15;
  
  if ((*param_1 & 3) == 0) {
    bVar14 = ((byte)*param_2 & 1) != 0;
    pbVar7 = (byte *)((long)param_2 + 1);
    if (bVar14) {
      pbVar7 = (byte *)param_2[2];
    }
    uVar8 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar14) {
      uVar8 = param_2[1];
    }
    if (param_3 == (ulong *)0x0) {
      param_3 = (ulong *)0x18;
      plVar6 = (long *)_Znwm();
      if (0xfffffffffffffff6 < uVar8) goto code_r0x005000c5;
      if (uVar8 < 0x17) {
        *(char *)plVar6 = (char)uVar8 * '\x02';
        pcVar10 = (char *)((long)plVar6 + 1);
      }
      else {
        lVar11 = 0x1a;
        if ((uVar8 | 7) != 0x17) {
          lVar11 = (uVar8 | 7) + 1;
        }
        pcVar10 = (char *)_Znwm(lVar11);
        *plVar6 = lVar11 + 1;
        plVar6[1] = uVar8;
        plVar6[2] = (long)pcVar10;
      }
      func_0x0099bda0(pcVar10,pbVar7,uVar8);
      uVar4 = 2;
    }
    else {
      plVar6 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
      if (0xfffffffffffffff6 < uVar8) {
code_r0x005000c5:
        func_0x0032e8f0();
        if ((*param_3 & 3) == 0) {
          if (extraout_RDX == 0) {
            puVar9 = (ulong *)_Znwm(0x18);
            uVar8 = 2;
          }
          else {
            puVar9 = (ulong *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                        (extraout_RDX);
            uVar8 = 3;
          }
          puVar9[2] = param_2[2];
          uVar4 = param_2[1];
          *puVar9 = *param_2;
          puVar9[1] = uVar4;
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          *param_3 = uVar8 | (ulong)puVar9;
        }
        else {
          puVar13 = (ulong *)(*param_3 & 0xfffffffffffffffc);
          if ((*puVar13 & 1) != 0) {
            _ZdaPvSt11align_val_t(puVar13[2],*puVar13 & 0xfffffffffffffffe);
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
          }
          puVar9 = (ulong *)param_2[2];
          puVar13[2] = (ulong)puVar9;
          uVar8 = param_2[1];
          *puVar13 = *param_2;
          puVar13[1] = uVar8;
          *(undefined2 *)param_2 = 0;
        }
        return puVar9;
      }
      if (uVar8 < 0x17) {
        *(char *)plVar6 = (char)uVar8 * '\x02';
        pcVar10 = (char *)((long)plVar6 + 1);
      }
      else {
        lVar11 = 0x1a;
        if ((uVar8 | 7) != 0x17) {
          lVar11 = (uVar8 | 7) + 1;
        }
        pcVar10 = (char *)_Znwm(lVar11);
        *plVar6 = lVar11 + 1;
        plVar6[1] = uVar8;
        plVar6[2] = (long)pcVar10;
      }
      func_0x0099bd90(pcVar10,pbVar7,uVar8);
      uVar4 = 3;
    }
    pcVar10[uVar8] = '\0';
    *param_1 = (ulong)plVar6 | uVar4;
  }
  else {
    puVar9 = (ulong *)(*param_1 & 0xfffffffffffffffc);
    if (param_2 != puVar9) {
      bVar1 = (byte)*param_2;
      if ((*puVar9 & 1) != 0) {
        bVar14 = (bVar1 & 1) != 0;
        pbVar7 = (byte *)((long)param_2 + 1);
        if (bVar14) {
          pbVar7 = (byte *)param_2[2];
        }
        uVar8 = (ulong)(bVar1 >> 1);
        if (bVar14) {
          uVar8 = param_2[1];
        }
        uVar4 = *puVar9 & 0xfffffffffffffffe;
        if (uVar8 < uVar4) {
          uVar4 = puVar9[2];
          puVar9[1] = uVar8;
          func_0x0099bd90(uVar4,pbVar7,uVar8);
          *(undefined1 *)(uVar4 + uVar8) = 0;
        }
        else {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (puVar9,uVar4 - 1,(uVar8 - uVar4) + 1,puVar9[1],0,puVar9[1],uVar8,pbVar7,pbVar7)
          ;
        }
        return puVar9;
      }
      if ((bVar1 & 1) != 0) {
        uVar8 = param_2[1];
        uVar4 = param_2[2];
        if (uVar8 < 0x17) {
          *(char *)puVar9 = (char)uVar8 * '\x02';
          func_0x0099bd90((byte *)((long)puVar9 + 1),uVar4,uVar8);
          *(byte *)((long)puVar9 + uVar8 + 1) = 0;
        }
        else {
          if (0xfffffffffffffff6 < uVar8) {
            func_0x0032e8f0();
            pcVar3 = (code *)swi(3);
            puVar9 = (ulong *)(*pcVar3)();
            return puVar9;
          }
          uVar15 = (ulong)(byte)*puVar9 << 0x38;
          uVar2 = puVar9[2];
          uVar5 = 0x2c;
          if (0x2c < uVar8) {
            uVar5 = uVar8;
          }
          uVar12 = (uVar5 | 7) + 1;
          uVar5 = _Znwm(uVar12);
          func_0x0099bda0(uVar5,uVar4,uVar8);
          *(undefined1 *)(uVar5 + uVar8) = 0;
          if ((uVar15 & 0x100000000000000) != 0) {
            _ZdaPvSt11align_val_t(uVar2,*puVar9 & 0xfffffffffffffffe);
          }
          *puVar9 = uVar12 | 1;
          puVar9[1] = uVar8;
          puVar9[2] = uVar5;
        }
        return puVar9;
      }
      param_1 = (ulong *)param_2[2];
      puVar9[2] = (ulong)param_1;
      uVar8 = param_2[1];
      *puVar9 = *param_2;
      puVar9[1] = uVar8;
    }
  }
  return param_1;
}


