// Function: _Z18close_smartsocketsv
// Address: 003d1b60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


uint ******* _Z18close_smartsocketsv(undefined8 param_1,uint *******param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *******pppppppuVar4;
  uint ******ppppppuVar5;
  undefined **ppuVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint ******ppppppuVar10;
  ulong uVar11;
  uint *****pppppuVar12;
  uint ******ppppppuVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint *******pppppppuVar18;
  uint ******ppppppuVar19;
  uint *******pppppppuVar20;
  uint *******extraout_RDX;
  long extraout_RDX_00;
  uint *******pppppppuVar21;
  uint *****pppppuVar22;
  uint *******pppppppuVar23;
  uint *******in_R9;
  long lVar24;
  uint *******unaff_R12;
  uint *******unaff_R13;
  uint *******unaff_R14;
  uint ******unaff_R15;
  long in_FS_OFFSET;
  bool bVar25;
  uint uStack_15c;
  uint ******ppppppuStack_158;
  uint ******ppppppuStack_150;
  uint *****pppppuStack_148;
  uint ******ppppppuStack_140;
  uint ******ppppppuStack_138;
  undefined *puStack_130;
  uint uStack_120;
  undefined4 uStack_11c;
  uint ******ppppppuStack_118;
  uint ******ppppppuStack_110;
  uint ******ppppppuStack_108;
  uint ******ppppppuStack_100;
  undefined *apuStack_f8 [2];
  uint ******ppppppuStack_e8;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint ******ppppppuStack_d0;
  uint ******ppppppuStack_c8;
  uint uStack_bc;
  uint ******ppppppuStack_b8;
  uint uStack_ac;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  uint ****ppppuStack_98;
  long lStack_90;
  uint ******ppppppuStack_88;
  uint ******ppppppuStack_80;
  uint ******ppppppuStack_78;
  uint ******ppppppuStack_70;
  uint *****pppppuStack_68;
  undefined *apuStack_60 [2];
  uint ******ppppppuStack_50;
  uint ******ppppppuStack_48;
  long lStack_40;
  uint ******ppppppuStack_38;
  
  pppppppuVar21 = pppppppuRam0000000000a00618;
  ppppppuStack_38 = *(uint *******)(in_FS_OFFSET + 0x28);
  apuStack_60[0] = &UNK_003d1b8d;
  _ZNSt3__15mutex4lockEv(pppppppuRam0000000000a00618);
  pppppppuVar15 = pppppppuRam0000000000a00620;
  pppppppuVar18 = &ppppppuStack_50;
  ppppppuStack_50 = (uint ******)pppppppuVar18;
  ppppppuStack_48 = (uint ******)pppppppuVar18;
  lStack_40 = 0;
  pppppppuVar23 = (uint *******)pppppppuRam0000000000a00620[1];
  if (pppppppuVar23 != pppppppuRam0000000000a00620) {
    param_2 = (uint *******)0x6f737472616d732a;
    pppppppuVar20 = pppppppuVar18;
    do {
      ppppppuVar19 = pppppppuVar23[2];
      bVar2 = *(byte *)(ppppppuVar19 + 5);
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0xd) goto code_r0x003d1c00;
code_r0x003d1c29:
        pppppppuVar23 = (uint *******)pppppppuVar23[1];
      }
      else {
        if (ppppppuVar19[6] != (uint *****)0xd) goto code_r0x003d1c29;
code_r0x003d1c00:
        if ((bVar2 & 1) == 0) {
          pppppuVar12 = (uint *****)((long)ppppppuVar19 + 0x29);
        }
        else {
          pppppuVar12 = ppppppuVar19[7];
        }
        if (*(long *)((long)pppppuVar12 + 5) != 0x2a74656b636f7374 ||
            *pppppuVar12 != (uint ****)0x6f737472616d732a) goto code_r0x003d1c29;
        bVar25 = true;
        for (pppppppuVar14 = (uint *******)pppppppuVar23[1]; pppppppuVar14 != pppppppuVar15;
            pppppppuVar14 = (uint *******)pppppppuVar14[1]) {
          ppppppuVar19 = pppppppuVar14[2];
          bVar2 = *(byte *)(ppppppuVar19 + 5);
          unaff_R14 = (uint *******)(ulong)bVar2;
          if ((bVar2 & 1) == 0) {
            unaff_R15 = (uint ******)(ulong)(bVar2 >> 1);
            if (unaff_R15 == (uint ******)0xd) goto code_r0x003d1c84;
code_r0x003d1d16:
            bVar25 = false;
            break;
          }
          unaff_R15 = (uint ******)ppppppuVar19[6];
          if (unaff_R15 != (uint ******)0xd) goto code_r0x003d1d16;
code_r0x003d1c84:
          if ((bVar2 & 1) == 0) {
            pppppuVar12 = (uint *****)((long)ppppppuVar19 + 0x29);
          }
          else {
            pppppuVar12 = ppppppuVar19[7];
          }
          unaff_R14 = (uint *******)((ulong)*pppppuVar12 ^ 0x6f737472616d732a);
          if (*(long *)((long)pppppuVar12 + 5) != 0x2a74656b636f7374 ||
              unaff_R14 != (uint *******)0x0) goto code_r0x003d1d16;
        }
        if (pppppppuVar23 != pppppppuVar14) {
          pppppppuVar20 = (uint *******)*pppppppuVar14;
          if (pppppppuVar18 != pppppppuVar15) {
            lVar24 = 1;
            for (pppppppuVar4 = pppppppuVar23; pppppppuVar4 != pppppppuVar20;
                pppppppuVar4 = (uint *******)pppppppuVar4[1]) {
              lVar24 = lVar24 + 1;
            }
            pppppppuVar15[2] = (uint ******)((long)pppppppuVar15[2] - lVar24);
            lStack_40 = lStack_40 + lVar24;
          }
          ppppppuVar19 = pppppppuVar20[1];
          (*pppppppuVar23)[1] = (uint *****)ppppppuVar19;
          unaff_R14 = (uint *******)*pppppppuVar23;
          *ppppppuVar19 = (uint *****)unaff_R14;
          ppppppuStack_50[1] = (uint *****)pppppppuVar23;
          *pppppppuVar23 = ppppppuStack_50;
          ppppppuStack_50 = (uint ******)pppppppuVar20;
          pppppppuVar20[1] = (uint ******)pppppppuVar18;
        }
        pppppppuVar23 = pppppppuVar14;
        if (!bVar25) goto code_r0x003d1c29;
      }
    } while (pppppppuVar23 != pppppppuVar15);
    in_R9 = pppppppuVar23;
    if (lStack_40 != 0) {
      ppppppuVar19 = pppppppuVar20[1];
      (*ppppppuStack_48)[1] = (uint ****)ppppppuVar19;
      pppppppuVar18 = (uint *******)*ppppppuStack_48;
      *ppppppuVar19 = (uint *****)pppppppuVar18;
      lStack_40 = 0;
      unaff_R12 = &ppppppuStack_50;
      unaff_R14 = (uint *******)ppppppuStack_48;
      while (unaff_R14 != unaff_R12) {
        unaff_R13 = (uint *******)unaff_R14[1];
        unaff_R15 = unaff_R14[2];
        unaff_R14[2] = (uint ******)0x0;
        if (unaff_R15 != (uint ******)0x0) {
          apuStack_60[0] = &UNK_003d1db2;
          _ZN9alistenerD1Ev(unaff_R15);
          apuStack_60[0] = &UNK_003d1dbf;
          _ZdaPvSt11align_val_t(unaff_R15,0x58);
        }
        param_2 = (uint *******)0x18;
        apuStack_60[0] = &UNK_003d1d8d;
        _ZdaPvSt11align_val_t(unaff_R14);
        unaff_R14 = unaff_R13;
      }
    }
  }
  uVar8 = (uint)pppppppuVar18;
  apuStack_60[0] = &UNK_003d1d61;
  pppppppuVar18 = pppppppuVar21;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(uint ********)(in_FS_OFFSET + 0x28) == (uint *******)ppppppuStack_38) {
    return *(uint ********)(in_FS_OFFSET + 0x28);
  }
  apuStack_60[0] = &UNK_003d1dc6;
  func_0x0099bd00();
  ppppppuStack_88 = (uint ******)pppppppuVar21;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  ppppppuStack_b8 = (uint ******)pppppppuRam0000000000a00618;
  apuStack_f8[0] = &UNK_003d1e18;
  ppppppuStack_e8 = (uint ******)pppppppuVar23;
  ppppppuStack_e0 = (uint ******)pppppppuVar18;
  ppppppuStack_d8 = (uint ******)extraout_RDX;
  ppppppuStack_d0 = (uint ******)param_2;
  ppppppuStack_c8 = (uint ******)in_R9;
  uStack_bc = uVar8;
  ppppppuStack_80 = (uint ******)unaff_R12;
  ppppppuStack_78 = (uint ******)unaff_R13;
  ppppppuStack_70 = (uint ******)unaff_R14;
  pppppuStack_68 = (uint *****)unaff_R15;
  apuStack_60[0] = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv();
  pppppppuVar23 = pppppppuRam0000000000a00620;
  pppppppuVar18 = (uint *******)pppppppuRam0000000000a00620[1];
  if (pppppppuVar18 != pppppppuRam0000000000a00620) {
    if ((*(byte *)ppppppuStack_e0 & 1) == 0) {
      pppppppuVar21 = (uint *******)(ulong)(*(byte *)ppppppuStack_e0 >> 1);
      ppppppuVar19 = (uint ******)((long)ppppppuStack_e0 + 1);
    }
    else {
      pppppppuVar21 = (uint *******)ppppppuStack_e0[1];
      ppppppuVar19 = (uint ******)ppppppuStack_e0[2];
    }
    do {
      ppppppuVar10 = pppppppuVar18[2];
      bVar2 = *(byte *)(ppppppuVar10 + 2);
      if ((bVar2 & 1) == 0) {
        pppppppuVar15 = (uint *******)(ulong)(bVar2 >> 1);
      }
      else {
        pppppppuVar15 = (uint *******)ppppppuVar10[3];
      }
      if (pppppppuVar21 == pppppppuVar15) {
        if ((bVar2 & 1) == 0) {
          param_2 = (uint *******)((long)ppppppuVar10 + 0x11);
        }
        else {
          param_2 = (uint *******)ppppppuVar10[4];
        }
        apuStack_f8[0] = &UNK_003d1e60;
        iVar7 = func_0x0099bf90(ppppppuVar19,param_2,pppppppuVar21);
        if (iVar7 == 0) {
          bVar2 = *(byte *)(ppppppuVar10 + 5);
          if ((bVar2 & 1) == 0) {
            pppppuVar12 = (uint *****)(ulong)(bVar2 >> 1);
          }
          else {
            pppppuVar12 = ppppppuVar10[6];
          }
          if (pppppuVar12 == (uint *****)0xd) {
            if ((bVar2 & 1) == 0) {
              pppppuVar12 = (uint *****)((long)ppppppuVar10 + 0x29);
            }
            else {
              pppppuVar12 = ppppppuVar10[7];
            }
            if (*(long *)((long)pppppuVar12 + 5) == 0x2a74656b636f7374 &&
                *pppppuVar12 == (uint ****)0x6f737472616d732a) {
              param_2 = (uint *******)&UNK_0015fbb3;
              apuStack_f8[0] = &UNK_003d224c;
              func_0x0032ea60(ppppppuStack_c8);
              pppppppuVar21 = (uint *******)0xffffffff;
              goto code_r0x003d2125;
            }
          }
          if ((uStack_bc & 1) == 0) {
            ppppppuVar10 = ppppppuVar10 + 5;
            apuStack_f8[0] = &UNK_003d21b1;
            func_0x0032ea60(ppppppuVar10);
            ppppppuVar19 = ppppppuStack_d8;
            param_2 = (uint *******)pppppppuVar18[2];
            pppppppuVar21 = (uint *******)0x0;
            if (param_2[8] != ppppppuStack_d8) {
              apuStack_f8[0] = &UNK_003d21d4;
              _ZN10atransport16RemoveDisconnectEP11adisconnect(param_2[8],param_2 + 9);
              pppppppuVar18[2][8] = (uint *****)ppppppuVar19;
              param_2 = (uint *******)(pppppppuVar18[2] + 9);
              apuStack_f8[0] = &UNK_003d21ed;
              _ZN10atransport13AddDisconnectEP11adisconnect(pppppppuVar18[2][8]);
              pppppppuVar23 = (uint *******)ppppppuVar19;
            }
          }
          else {
            if (((ulong)*ppppppuStack_c8 & 1) == 0) {
              *(byte *)ppppppuStack_c8 = 0x1a;
              ppppppuVar19 = (uint ******)((long)ppppppuStack_c8 + 1);
            }
            else {
              ppppppuStack_c8[1] = (uint *****)0xd;
              ppppppuVar19 = (uint ******)ppppppuStack_c8[2];
            }
            pbVar1 = (byte *)((long)ppppppuVar19 + 5);
            pbVar1[0] = 0x74;
            pbVar1[1] = 0x20;
            pbVar1[2] = 0x72;
            pbVar1[3] = 0x65;
            pbVar1[4] = 0x62;
            pbVar1[5] = 0x69;
            pbVar1[6] = 0x6e;
            pbVar1[7] = 100;
            *ppppppuVar19 = (uint *****)0x7220746f6e6e6163;
            *(byte *)((long)ppppppuVar19 + 0xd) = 0;
            pppppppuVar21 = (uint *******)0xfffffffd;
            param_2 = (uint *******)ppppppuStack_d0;
          }
          goto code_r0x003d2125;
        }
      }
      pppppppuVar18 = (uint *******)pppppppuVar18[1];
    } while (pppppppuVar18 != pppppppuVar23);
  }
  apuStack_f8[0] = &UNK_003d1eae;
  ppppppuVar10 = (uint ******)_Znwm(0x58);
  pppppppuVar23 = (uint *******)ppppppuStack_d0;
  apuStack_f8[0] = &UNK_003d1ebd;
  pppppppuVar15 = (uint *******)ppppppuStack_d0;
  uVar11 = func_0x0099bcf0();
  if (0xfffffffffffffff6 < uVar11) goto code_r0x003d225b;
  if (uVar11 < 0x17) {
    _auStack_a8 = CONCAT71(stack0xffffffffffffff59,(char)uVar11 * '\x02');
    pppppuVar12 = (uint *****)(auStack_a8 + 1);
  }
  else {
    lVar24 = 0x1a;
    if ((uVar11 | 7) != 0x17) {
      lVar24 = (uVar11 | 7) + 1;
    }
    apuStack_f8[0] = &UNK_003d1efe;
    pppppuVar12 = (uint *****)_Znwm(lVar24);
    _auStack_a8 = lVar24 + 1;
    uStack_a0 = uVar11;
    ppppuStack_98 = (uint ****)pppppuVar12;
  }
  pppppppuVar18 = (uint *******)ppppppuStack_c8;
  apuStack_f8[0] = &UNK_003d1f22;
  func_0x0099bda0(pppppuVar12,pppppppuVar23,uVar11);
  *(undefined1 *)((long)pppppuVar12 + uVar11) = 0;
  apuStack_f8[0] = &UNK_003d1f38;
  _ZN9alistenerC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
            (ppppppuVar10,ppppppuStack_e0,auStack_a8);
  if ((_auStack_a8 & 1) != 0) {
    apuStack_f8[0] = &UNK_003d1f4f;
    _ZdaPvSt11align_val_t(ppppuStack_98,_auStack_a8 & 0xfffffffffffffffe);
  }
  bVar25 = (*(byte *)(ppppppuVar10 + 2) & 1) != 0;
  pppppuVar12 = (uint *****)((long)ppppppuVar10 + 0x11);
  if (bVar25) {
    pppppuVar12 = ppppppuVar10[4];
  }
  uStack_ac = 0;
  pppppuVar22 = (uint *****)(ulong)(*(byte *)(ppppppuVar10 + 2) >> 1);
  if (bVar25) {
    pppppuVar22 = ppppppuVar10[3];
  }
  apuStack_f8[0] = &UNK_003d1f7f;
  iVar7 = _Z18socket_spec_listenNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPi
                    (pppppuVar12,pppppuVar22,pppppppuVar18,&uStack_ac);
  ppppppuVar19 = ppppppuStack_e8;
  *(int *)(ppppppuVar10 + 1) = iVar7;
  if (iVar7 < 0) {
    apuStack_f8[0] = &UNK_003d202f;
    _ZN9alistenerD1Ev(ppppppuVar10);
    param_2 = (uint *******)0x0;
    apuStack_f8[0] = &UNK_003d203c;
    _ZdaPvSt11align_val_t(ppppppuVar10);
    pppppppuVar21 = (uint *******)0xfffffffe;
  }
  else {
    if (uStack_ac != 0) {
      apuStack_f8[0] = &UNK_003d1fb1;
      _ZN7android4base12StringPrintfEPKcz(auStack_a8,&UNK_00186185);
      if (((ulong)ppppppuVar10[2] & 1) != 0) {
        apuStack_f8[0] = &UNK_003d1fc9;
        _ZdaPvSt11align_val_t(ppppppuVar10[4],(ulong)ppppppuVar10[2] & 0xfffffffffffffffe);
      }
      ppppppuVar10[4] = (uint *****)ppppuStack_98;
      *(undefined1 (*) [4])(ppppppuVar10 + 2) = auStack_a8;
      *(undefined4 *)((long)ppppppuVar10 + 0x14) = uStack_a4;
      *(undefined4 *)(ppppppuVar10 + 3) = (undefined4)uStack_a0;
      *(undefined4 *)((long)ppppppuVar10 + 0x1c) = uStack_a0._4_4_;
      if ((uint *******)ppppppuVar19 != (uint *******)0x0) {
        *(uint *)ppppppuVar19 = uStack_ac;
      }
    }
    uVar3 = *(undefined4 *)(ppppppuVar10 + 1);
    apuStack_f8[0] = &UNK_003d1ff6;
    uVar8 = func_0x0099bf10(uVar3,1);
    if ((uVar8 & 0x80000001) == 0) {
      apuStack_f8[0] = &UNK_003d2010;
      func_0x0099bf10(uVar3,2,uVar8 | 1);
    }
    bVar2 = *(byte *)(ppppppuVar10 + 5);
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0xd) goto code_r0x003d2053;
code_r0x003d209f:
      param_2 = (uint *******)&UNK_003d23a0;
    }
    else {
      if (ppppppuVar10[6] != (uint *****)0xd) goto code_r0x003d209f;
code_r0x003d2053:
      if ((bVar2 & 1) == 0) {
        pppppuVar12 = (uint *****)((long)ppppppuVar10 + 0x29);
      }
      else {
        pppppuVar12 = ppppppuVar10[7];
      }
      if (*(long *)((long)pppppuVar12 + 5) != 0x2a74656b636f7374 ||
          *pppppuVar12 != (uint ****)0x6f737472616d732a) goto code_r0x003d209f;
      param_2 = (uint *******)&UNK_003d2260;
    }
    apuStack_f8[0] = &UNK_003d20b3;
    pppppuVar12 = (uint *****)
                  _Z14fdevent_createiPFvijPvES_
                            (*(undefined4 *)(ppppppuVar10 + 1),param_2,ppppppuVar10);
    *ppppppuVar10 = pppppuVar12;
    if ((uStack_bc & 2) == 0) {
      param_2 = (uint *******)0x1;
      apuStack_f8[0] = &UNK_003d20ca;
      _Z11fdevent_setP7fdeventj(pppppuVar12);
    }
    ppppppuVar10[8] = (uint *****)ppppppuStack_d8;
    if ((uint *******)ppppppuStack_d8 != (uint *******)0x0) {
      ppppppuVar10[10] = (uint *****)ppppppuVar10;
      param_2 = (uint *******)(ppppppuVar10 + 9);
      ppppppuVar10[9] = (uint *****)&UNK_003d24d0;
      apuStack_f8[0] = &UNK_003d20f5;
      _ZN10atransport13AddDisconnectEP11adisconnect();
    }
    pppppppuVar18 = pppppppuRam0000000000a00620;
    apuStack_f8[0] = &UNK_003d2106;
    ppppppuVar13 = (uint ******)_Znwm(0x18);
    ppppppuVar13[2] = (uint *****)ppppppuVar10;
    ppppppuVar13[1] = (uint *****)pppppppuVar18;
    ppppppuVar5 = *pppppppuVar18;
    *ppppppuVar13 = (uint *****)ppppppuVar5;
    ppppppuVar5[1] = (uint *****)ppppppuVar13;
    *pppppppuVar18 = ppppppuVar13;
    pppppppuVar18[2] = (uint ******)((long)pppppppuVar18[2] + 1);
    pppppppuVar21 = (uint *******)0x0;
    pppppppuVar18 = (uint *******)ppppppuVar19;
  }
code_r0x003d2125:
  apuStack_f8[0] = &UNK_003d212a;
  pppppppuVar15 = (uint *******)ppppppuStack_b8;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return pppppppuVar21;
  }
  apuStack_f8[0] = &UNK_003d225b;
  func_0x0099bd00();
code_r0x003d225b:
  apuStack_f8[0] = &UNK_003d2260;
  func_0x0032e8f0();
  ppppppuStack_118 = *(uint *******)(in_FS_OFFSET + 0x28);
  pppppppuVar20 = pppppppuVar15;
  ppppppuStack_110 = (uint ******)pppppppuVar21;
  ppppppuStack_108 = (uint ******)pppppppuVar18;
  ppppppuStack_100 = (uint ******)pppppppuVar23;
  apuStack_f8[0] = (undefined *)apuStack_60;
  if (((ulong)param_2 & 1) != 0) {
    pppppppuVar21 = (uint *******)((ulong)pppppppuVar15 & 0xffffffff);
    apuStack_f8[0] = (undefined *)apuStack_60;
    do {
      pppppppuVar20 = (uint *******)((ulong)pppppppuVar15 & 0xffffffff);
      param_2 = (uint *******)0x0;
      puStack_130 = &UNK_003d229b;
      uVar8 = func_0x0099c280(pppppppuVar20,0,0);
      if (uVar8 != 0xffffffff) {
        if ((int)uVar8 < 0) {
          pppppppuVar21 = (uint *******)(ulong)uVar8;
          puStack_130 = &UNK_003d2360;
          pppppppuVar14 = (uint *******)func_0x0099bce0();
          pppppppuVar23 = (uint *******)(ulong)*(uint *)pppppppuVar14;
          pppppppuVar20 = (uint *******)(ulong)uVar8;
          puStack_130 = &UNK_003d236d;
          func_0x0099bd10();
          pppppppuVar18 = pppppppuVar14;
        }
        else {
          puStack_130 = &UNK_003d22cb;
          uVar9 = func_0x0099bf10(uVar8,1);
          if ((uVar9 & 0x80000001) == 0) {
            puStack_130 = &UNK_003d22e5;
            func_0x0099bf10(uVar8,2,uVar9 | 1);
          }
          puStack_130 = &UNK_003d22ea;
          pppppppuVar14 = (uint *******)func_0x0099bce0();
          uStack_11c = 0x10000;
          param_2 = (uint *******)0x1;
          puStack_130 = &UNK_003d230f;
          func_0x0099bf50(uVar8,1,8,&uStack_11c,4);
          puStack_130 = &UNK_003d231b;
          uStack_120 = uVar8;
          pppppppuVar15 =
               (uint *******)
               _Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE
                         (&uStack_120);
          uVar8 = *(uint *)pppppppuVar14;
          pppppppuVar23 = (uint *******)(ulong)uVar8;
          pppppppuVar20 = (uint *******)(ulong)uStack_120;
          if (uStack_120 != 0xffffffff) {
            puStack_130 = &UNK_003d2334;
            func_0x0099bd10();
          }
          uStack_120 = 0xffffffff;
          *(uint *)pppppppuVar14 = uVar8;
          pppppppuVar21 = (uint *******)0x0;
          pppppppuVar18 = pppppppuVar14;
          if (pppppppuVar15 != (uint *******)0x0) {
            puStack_130 = &UNK_003d2351;
            _Z22connect_to_smartsocketP7asocket();
            pppppppuVar23 = (uint *******)(ulong)*(uint *)pppppppuVar14;
            pppppppuVar21 = pppppppuVar14;
            pppppppuVar20 = pppppppuVar15;
          }
        }
        break;
      }
      puStack_130 = &UNK_003d22a5;
      pppppppuVar14 = (uint *******)func_0x0099bce0();
      pppppppuVar23 = (uint *******)(ulong)*(uint *)pppppppuVar14;
    } while (*(uint *)pppppppuVar14 == 4);
    *(uint *)pppppppuVar14 = (uint)pppppppuVar23;
  }
  if (*(uint ********)(in_FS_OFFSET + 0x28) == (uint *******)ppppppuStack_118) {
    return *(uint ********)(in_FS_OFFSET + 0x28);
  }
  puStack_130 = &UNK_003d2392;
  func_0x0099bd00();
  ppppppuStack_158 = *(uint *******)(in_FS_OFFSET + 0x28);
  ppppppuStack_150 = (uint ******)pppppppuVar21;
  pppppuStack_148 = (uint *****)ppppppuVar10;
  ppppppuStack_140 = (uint ******)pppppppuVar18;
  ppppppuStack_138 = (uint ******)pppppppuVar23;
  puStack_130 = (undefined *)apuStack_f8;
  ppuVar6 = apuStack_f8;
  if (((ulong)param_2 & 1) != 0) {
    do {
      puStack_130 = (undefined *)ppuVar6;
      pppppppuVar18 = (uint *******)((ulong)pppppppuVar20 & 0xffffffff);
      uVar8 = func_0x0099c280(pppppppuVar18,0,0);
      if (uVar8 != 0xffffffff) {
        if (-1 < (int)uVar8) {
          uVar9 = func_0x0099bf10(uVar8,1);
          if ((uVar9 & 0x80000001) == 0) {
            func_0x0099bf10(uVar8,2,uVar9 | 1);
          }
          puVar17 = (undefined4 *)func_0x0099bce0();
          *puVar17 = *puVar17;
          uStack_15c = uVar8;
          pppppppuVar18 =
               (uint *******)
               _Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE
                         (&uStack_15c);
          uVar3 = *puVar17;
          pppppppuVar20 = (uint *******)(ulong)uStack_15c;
          if (uStack_15c != 0xffffffff) {
            func_0x0099bd10();
          }
          uStack_15c = 0xffffffff;
          *puVar17 = uVar3;
          if (pppppppuVar18 != (uint *******)0x0) {
            pppppppuVar18[7] = *(uint *******)(extraout_RDX_00 + 0x40);
            bVar25 = (*(byte *)(extraout_RDX_00 + 0x28) & 1) != 0;
            lVar24 = extraout_RDX_00 + 0x29;
            if (bVar25) {
              lVar24 = *(long *)(extraout_RDX_00 + 0x38);
            }
            uVar11 = (ulong)(*(byte *)(extraout_RDX_00 + 0x28) >> 1);
            if (bVar25) {
              uVar11 = *(ulong *)(extraout_RDX_00 + 0x30);
            }
            _Z17connect_to_remoteP7asocketNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                      (pppppppuVar18,lVar24,uVar11);
            pppppppuVar20 = pppppppuVar18;
          }
          goto code_r0x003d24a5;
        }
        piVar16 = (int *)func_0x0099bce0();
        iVar7 = *piVar16;
        pppppppuVar18 = (uint *******)(ulong)uVar8;
        func_0x0099bd10();
        break;
      }
      piVar16 = (int *)func_0x0099bce0();
      iVar7 = *piVar16;
      ppuVar6 = (undefined **)puStack_130;
    } while (iVar7 == 4);
    *piVar16 = iVar7;
    pppppppuVar20 = pppppppuVar18;
  }
code_r0x003d24a5:
  if (*(uint ********)(in_FS_OFFSET + 0x28) == (uint *******)ppppppuStack_158) {
    return *(uint ********)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  pppppppuVar23 = pppppppuRam0000000000a00618;
  _ZNSt3__15mutex4lockEv(pppppppuRam0000000000a00618);
  pppppppuVar21 = pppppppuRam0000000000a00620;
  pppppppuVar18 = pppppppuRam0000000000a00620;
  do {
    pppppppuVar18 = (uint *******)pppppppuVar18[1];
    if (pppppppuVar18 == pppppppuRam0000000000a00620) goto code_r0x003d2562;
  } while ((uint *******)pppppppuVar18[2] != pppppppuVar20);
  pppppppuVar18[2][8] = (uint *****)0x0;
  ppppppuVar19 = pppppppuVar18[1];
  (*pppppppuVar18)[1] = (uint *****)ppppppuVar19;
  *ppppppuVar19 = (uint *****)*pppppppuVar18;
  pppppppuVar21[2] = (uint ******)((long)pppppppuVar21[2] + -1);
  ppppppuVar19 = pppppppuVar18[2];
  pppppppuVar18[2] = (uint ******)0x0;
  if (ppppppuVar19 != (uint ******)0x0) {
    _ZN9alistenerD1Ev(ppppppuVar19);
    _ZdaPvSt11align_val_t(ppppppuVar19,0x58);
  }
  _ZdaPvSt11align_val_t(pppppppuVar18,0x18);
code_r0x003d2562:
  pppppppuVar18 = (uint *******)pthread_mutex_unlock(pppppppuVar23);
  return pppppppuVar18;
}


