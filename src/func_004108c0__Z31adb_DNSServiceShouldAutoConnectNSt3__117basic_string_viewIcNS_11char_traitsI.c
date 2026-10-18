// Function: _Z31adb_DNSServiceShouldAutoConnectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
// Address: 004108c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

undefined8
_Z31adb_DNSServiceShouldAutoConnectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *******param_4)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint ******ppppppuVar5;
  uint *******pppppppuVar6;
  uint *******pppppppuVar7;
  long lVar8;
  ulong uVar9;
  uint *******pppppppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *******pppppppuVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  uint *******unaff_RBX;
  undefined *puVar17;
  uint *******pppppppuVar18;
  uint *******unaff_R14;
  uint uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  uint *******pppppppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  uint *******pppppppuStack_68;
  long lStack_60;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar20 = cRam0000000000a00898 == '\0';
  if (bVar20) {
    cRam0000000000a00898 = '\x01';
  }
  UNLOCK();
  if (!bVar20) goto code_r0x00410ee7;
  pppppppuVar6 = pppppppuRam00000000009fa610;
  if (pppppppuRam00000000009fa610 == (uint *******)0x0) {
    unaff_RBX = (uint *******)0x9fa610;
    unaff_R14 = (uint *******)0x9fa610;
  }
  else {
    do {
      while (unaff_RBX = pppppppuVar6, (int)*(uint *)((long)unaff_RBX + 0x1c) < 3) {
        if (*(uint *)((long)unaff_RBX + 0x1c) == 2) goto code_r0x00410995;
        pppppppuVar6 = (uint *******)unaff_RBX[1];
        if ((uint *******)unaff_RBX[1] == (uint *******)0x0) {
          unaff_R14 = unaff_RBX + 1;
          goto code_r0x00410948;
        }
      }
      pppppppuVar6 = (uint *******)*unaff_RBX;
      unaff_R14 = unaff_RBX;
    } while ((uint *******)*unaff_RBX != (uint *******)0x0);
  }
code_r0x00410948:
  ppppppuVar5 = (uint ******)_Znwm(0x20);
  *(undefined4 *)((long)ppppppuVar5 + 0x1c) = 2;
  *ppppppuVar5 = (uint *****)0x0;
  ppppppuVar5[1] = (uint *****)0x0;
  ppppppuVar5[2] = (uint *****)unaff_RBX;
  *unaff_R14 = ppppppuVar5;
  if ((uint *******)*pppppppuRam00000000009fa608 != (uint *******)0x0) {
    ppppppuVar5 = *unaff_R14;
    pppppppuRam00000000009fa608 = (uint *******)*pppppppuRam00000000009fa608;
  }
  func_0x003d6af0(pppppppuRam00000000009fa610,ppppppuVar5);
  lRam00000000009fa618 = lRam00000000009fa618 + 1;
code_r0x00410995:
  pppppppuVar6 = (uint *******)func_0x0099be70(&UNK_0016ee17);
  if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00410ee7;
  if ((*(byte *)pppppppuVar6 == 0x30) && (*(byte *)((long)pppppppuVar6 + 1) == 0)) {
    if ((((byte)adb_trace_mask & 8) != 0) &&
       (((int)adb_trace_severity._12_4_ < 2 &&
        (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')))) {
      puVar14 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar14;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_58,&UNK_00181cb9,0x34,1,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_58);
      func_0x0032eb30(uVar12,&UNK_00184ba7,0x1d);
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_58);
      *puVar14 = uVar1;
      unaff_R14 = param_4;
    }
    unaff_RBX = (uint *******)0x9fa610;
    pppppppuStack_58 = (uint *******)0x9fa610;
    func_0x00411410(&pppppppuStack_58,pppppppuRam00000000009fa610);
    pppppppuRam00000000009fa608 = (uint *******)0x9fa610;
    pppppppuRam00000000009fa610 = (uint *******)0x0;
    lRam00000000009fa618 = 0;
    goto code_r0x00410ee7;
  }
  iVar4 = func_0x0099bdd0(pppppppuVar6,&UNK_001893cc);
  if (iVar4 == 0) {
    if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
       (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
      puVar14 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar14;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pppppppuStack_58,&UNK_00181cb9,0x3a,1,0,0xffffffff);
      uVar12 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_58);
      func_0x0032eb30(uVar12,&UNK_0017a2cf,0x19);
      _ZN7android4base10LogMessageD2Ev(&pppppppuStack_58);
      *puVar14 = uVar1;
      unaff_R14 = param_4;
    }
    pppppppuVar6 = pppppppuRam00000000009fa610;
    if (pppppppuRam00000000009fa610 == (uint *******)0x0) {
      unaff_RBX = (uint *******)0x9fa610;
      unaff_R14 = (uint *******)0x9fa610;
    }
    else {
      do {
        while (unaff_RBX = pppppppuVar6, (int)*(uint *)((long)unaff_RBX + 0x1c) < 1) {
          if (*(uint *)((long)unaff_RBX + 0x1c) == 0) goto code_r0x00410ee7;
          pppppppuVar6 = (uint *******)unaff_RBX[1];
          if ((uint *******)unaff_RBX[1] == (uint *******)0x0) {
            unaff_R14 = unaff_RBX + 1;
            goto code_r0x00410a87;
          }
        }
        pppppppuVar6 = (uint *******)*unaff_RBX;
        unaff_R14 = unaff_RBX;
      } while ((uint *******)*unaff_RBX != (uint *******)0x0);
    }
code_r0x00410a87:
    ppppppuVar5 = (uint ******)_Znwm(0x20);
    *(undefined4 *)((long)ppppppuVar5 + 0x1c) = 0;
    *ppppppuVar5 = (uint *****)0x0;
    ppppppuVar5[1] = (uint *****)0x0;
    ppppppuVar5[2] = (uint *****)unaff_RBX;
    *unaff_R14 = ppppppuVar5;
    if ((uint *******)*pppppppuRam00000000009fa608 != (uint *******)0x0) {
      ppppppuVar5 = *unaff_R14;
      pppppppuRam00000000009fa608 = (uint *******)*pppppppuRam00000000009fa608;
    }
    func_0x003d6af0(pppppppuRam00000000009fa610,ppppppuVar5);
    lRam00000000009fa618 = lRam00000000009fa618 + 1;
    goto code_r0x00410ee7;
  }
  pppppppuStack_58 = (uint *******)0x0;
  pppppppuStack_50 = (uint *******)0x0;
  uStack_48 = 0;
  pppppppuVar7 = (uint *******)func_0x0099bcf0(pppppppuVar6);
  unaff_RBX = pppppppuVar6;
  pppppppuVar13 = param_4;
  pppppppuStack_c8 = param_4;
  if ((uint *******)0xfffffffffffffff6 < pppppppuVar7) goto code_r0x0041130d;
  if (pppppppuVar7 < (uint *******)0x17) {
    uStack_70 = (uint *******)CONCAT71(uStack_70._1_7_,(char)pppppppuVar7 * '\x02');
    lVar8 = (long)&uStack_70 + 1;
  }
  else {
    lVar16 = 0x1a;
    if (((ulong)pppppppuVar7 | 7) != 0x17) {
      lVar16 = ((ulong)pppppppuVar7 | 7) + 1;
    }
    lVar8 = _Znwm(lVar16);
    uStack_70 = (uint *******)(lVar16 + 1);
    pppppppuStack_68 = pppppppuVar7;
    lStack_60 = lVar8;
  }
  func_0x0099bd90(lVar8,pppppppuVar6,pppppppuVar7);
  *(byte *)(lVar8 + (long)pppppppuVar7) = 0;
  uStack_88 = (uint *******)CONCAT53(uStack_88._3_5_,0x2c02);
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (&pppppppuStack_58,&uStack_70,&uStack_88);
  if (((ulong)uStack_88 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_70 & 1) != 0) {
    _ZdaPvSt11align_val_t(lStack_60,(ulong)uStack_70 & 0xfffffffffffffffe);
  }
  pppppppuVar6 = pppppppuStack_50;
  uStack_70 = (uint *******)&pppppppuStack_68;
  pppppppuStack_68 = (uint *******)0x0;
  lStack_60 = 0;
  unaff_R14 = pppppppuRam00000000009fa608;
  pppppppuVar13 = pppppppuStack_58;
  if (pppppppuStack_58 != pppppppuStack_50) {
    do {
      uStack_88 = (uint *******)0x0;
      uStack_80 = 0;
      lStack_78 = 0;
      if (((ulong)*pppppppuVar13 & 1) == 0) {
        ppppppuVar5 = (uint ******)((long)pppppppuVar13 + 1);
      }
      else {
        ppppppuVar5 = pppppppuVar13[2];
      }
      _ZN7android4base12StringPrintfEPKcz(&uStack_88,&UNK_00162fc7,ppppppuVar5);
      bVar2 = (byte)uStack_88;
      uVar11 = (ulong)uStack_88 & 1;
      lVar16 = (long)&uStack_88 + 1;
      if (((ulong)uStack_88 & 1) != 0) {
        lVar16 = lStack_78;
      }
      uVar9 = _Z25adb_DNSServiceIndexByNameNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
                        (lVar16);
      if (uVar9 >> 0x20 != 0) {
        pppppppuVar7 = (uint *******)&pppppppuStack_68;
        pppppppuVar10 = pppppppuStack_68;
        while (uVar19 = (uint)uVar9, pppppppuVar18 = pppppppuVar7,
              pppppppuVar10 != (uint *******)0x0) {
          while (pppppppuVar7 = pppppppuVar10,
                (int)*(uint *)((long)pppppppuVar7 + 0x1c) <= (int)uVar19) {
            if (*(uint *)((long)pppppppuVar7 + 0x1c) == uVar19) {
              if (uVar11 != 0) goto code_r0x00410ca4;
              goto code_r0x00410ba0;
            }
            pppppppuVar10 = (uint *******)pppppppuVar7[1];
            if ((uint *******)pppppppuVar7[1] == (uint *******)0x0) {
              pppppppuVar18 = pppppppuVar7 + 1;
              goto code_r0x00410c47;
            }
          }
          pppppppuVar10 = (uint *******)*pppppppuVar7;
        }
code_r0x00410c47:
        ppppppuVar5 = (uint ******)_Znwm(0x20);
        *(uint *)((long)ppppppuVar5 + 0x1c) = uVar19;
        *ppppppuVar5 = (uint *****)0x0;
        ppppppuVar5[1] = (uint *****)0x0;
        ppppppuVar5[2] = (uint *****)pppppppuVar7;
        *pppppppuVar18 = ppppppuVar5;
        if ((uint *******)*uStack_70 != (uint *******)0x0) {
          ppppppuVar5 = *pppppppuVar18;
          uStack_70 = (uint *******)*uStack_70;
        }
        func_0x003d6af0(pppppppuStack_68,ppppppuVar5);
        lStack_60 = lStack_60 + 1;
        bVar2 = (byte)uStack_88;
      }
      if ((bVar2 & 1) != 0) {
code_r0x00410ca4:
        _ZdaPvSt11align_val_t(lStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
      }
code_r0x00410ba0:
      pppppppuVar13 = pppppppuVar13 + 3;
    } while (pppppppuVar13 != pppppppuVar6);
    unaff_R14 = pppppppuRam00000000009fa608;
    if (lStack_60 != 0) {
      uStack_88 = (uint *******)0x9fa610;
      func_0x00411410(&uStack_88,pppppppuRam00000000009fa610);
      pppppppuRam00000000009fa608 = uStack_70;
      pppppppuRam00000000009fa610 = pppppppuStack_68;
      lRam00000000009fa618 = lStack_60;
      unaff_R14 = uStack_70;
      if (lStack_60 == 0) {
        pppppppuRam00000000009fa608 = (uint *******)0x9fa610;
        uStack_88 = (uint *******)0x0;
        uStack_80 = 0;
        lStack_78 = 0;
        goto code_r0x00410e32;
      }
      pppppppuStack_68[2] = (uint ******)0x9fa610;
      pppppppuStack_68 = (uint *******)0x0;
      lStack_60 = 0;
      uStack_70 = (uint *******)&pppppppuStack_68;
    }
  }
  uStack_88 = (uint *******)0x0;
  uStack_80 = 0;
  lStack_78 = 0;
  if (unaff_R14 != (uint *******)0x9fa610) {
    do {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_88,
                 *(undefined8 *)(kADBDNSServices + (long)(int)*(uint *)((long)unaff_R14 + 0x1c) * 8)
                );
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_88,&UNK_00167802);
      pppppppuVar6 = (uint *******)unaff_R14[1];
      pppppppuVar13 = unaff_R14;
      if ((uint *******)unaff_R14[1] == (uint *******)0x0) {
        do {
          unaff_R14 = (uint *******)pppppppuVar13[2];
          bVar20 = pppppppuVar13 != (uint *******)*unaff_R14;
          pppppppuVar13 = unaff_R14;
        } while (bVar20);
      }
      else {
        do {
          unaff_R14 = pppppppuVar6;
          pppppppuVar6 = (uint *******)*unaff_R14;
        } while ((uint *******)*unaff_R14 != (uint *******)0x0);
      }
    } while (unaff_R14 != (uint *******)0x9fa610);
  }
code_r0x00410e32:
  uStack_c0 = param_2;
  uStack_b8 = param_1;
  if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
     (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    unaff_RBX = (uint *******)func_0x0099bce0();
    unaff_R14 = (uint *******)(ulong)*(uint *)unaff_RBX;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_90,&UNK_00181cb9,0x55,1,0,0xffffffff);
    pppppppuVar13 = (uint *******)_ZN7android4base10LogMessage6streamEv(auStack_90);
    lVar16 = lStack_78;
    if (((ulong)uStack_88 & 1) == 0) goto code_r0x00411312;
    goto code_r0x00411316;
  }
  do {
    if (((ulong)uStack_88 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
    }
    uStack_88 = (uint *******)&pppppppuStack_68;
    func_0x00411410(&uStack_88,pppppppuStack_68);
    unaff_RBX = pppppppuStack_58;
    param_2 = uStack_c0;
    param_1 = uStack_b8;
    param_4 = pppppppuStack_c8;
    pppppppuVar6 = pppppppuStack_50;
    if (pppppppuStack_58 != (uint *******)0x0) {
      while (unaff_R14 = pppppppuVar6, unaff_RBX != unaff_R14) {
        if (((ulong)unaff_R14[-3] & 1) != 0) {
          _ZdaPvSt11align_val_t(unaff_R14[-1],(ulong)unaff_R14[-3] & 0xfffffffffffffffe);
        }
        pppppppuVar6 = unaff_R14 + -3;
      }
      pppppppuStack_50 = unaff_RBX;
      _ZdaPvSt11align_val_t();
    }
code_r0x00410ee7:
    uVar11 = _Z25adb_DNSServiceIndexByNameNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
                       (param_1);
    pppppppuVar6 = pppppppuRam00000000009fa610;
    pppppppuVar13 = param_4;
    if (uVar11 >> 0x20 == 0) {
      uVar12 = 0;
      if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar12 = 0;
        if (cVar3 != '\0') {
          unaff_RBX = (uint *******)func_0x0099bce0();
          uVar19 = *(uint *)unaff_RBX;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pppppppuStack_58,&UNK_00181cb9,0x61,1,0,0xffffffff);
          uVar12 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_58);
          uVar12 = func_0x0032eb30(uVar12,&UNK_0017d781,0x13);
          uVar12 = func_0x0032eb30(uVar12,param_1,param_2);
          puVar17 = &UNK_00162c6d;
          uVar15 = 1;
code_r0x00411186:
          unaff_R14 = (uint *******)(ulong)uVar19;
          func_0x0032eb30(uVar12,puVar17,uVar15);
          _ZN7android4base10LogMessageD2Ev(&pppppppuStack_58);
          uVar12 = 0;
          *(uint *)unaff_RBX = uVar19;
          pppppppuVar13 = (uint *******)&pppppppuStack_58;
        }
      }
    }
    else {
      for (; pppppppuVar6 != (uint *******)0x0; pppppppuVar6 = (uint *******)*pppppppuVar6) {
        while ((int)*(uint *)((long)pppppppuVar6 + 0x1c) <= (int)(uint)uVar11) {
          if (*(uint *)((long)pppppppuVar6 + 0x1c) == (uint)uVar11) {
            if (pppppppuVar6 == (uint *******)0x9fa610) goto code_r0x00410fd8;
            cVar3 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                              (param_3,param_4,&UNK_00169706,0xc);
            uVar12 = 1;
            if (((cVar3 != '\0') && (uVar12 = 0, (adb_trace_mask._1_1_ & 0x40) != 0)) &&
               ((int)adb_trace_severity._56_4_ < 2)) {
              cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
              uVar12 = 0;
              if (cVar3 != '\0') {
                unaff_RBX = (uint *******)func_0x0099bce0();
                uVar19 = *(uint *)unaff_RBX;
                pppppppuVar13 = (uint *******)(ulong)uVar19;
                unaff_R14 = (uint *******)&pppppppuStack_58;
                _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                          (unaff_R14,&UNK_00181cb9,0x6c,1,0,0xffffffff);
                uVar12 = _ZN7android4base10LogMessage6streamEv(unaff_R14);
                uVar12 = func_0x0032eb30(uVar12,&UNK_00169713,0x25);
                uVar12 = func_0x0032eb30(uVar12,param_3,param_4);
                func_0x0032eb30(uVar12,&UNK_00178ae2,1);
                _ZN7android4base10LogMessageD2Ev(unaff_R14);
                uVar12 = 0;
                *(uint *)unaff_RBX = uVar19;
              }
            }
            goto code_r0x00410ff8;
          }
          pppppppuVar6 = (uint *******)pppppppuVar6[1];
          if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00410fd8;
        }
      }
code_r0x00410fd8:
      uVar12 = 0;
      if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
        cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        uVar12 = 0;
        if (cVar3 != '\0') {
          unaff_RBX = (uint *******)func_0x0099bce0();
          uVar19 = *(uint *)unaff_RBX;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pppppppuStack_58,&UNK_00181cb9,0x66,1,0,0xffffffff);
          uVar12 = _ZN7android4base10LogMessage6streamEv(&pppppppuStack_58);
          uVar12 = func_0x0032eb30(uVar12,&UNK_00159773,0x1b);
          uVar12 = func_0x0032eb30(uVar12,param_1,param_2);
          puVar17 = &UNK_00187f25;
          uVar15 = 10;
          goto code_r0x00411186;
        }
      }
    }
code_r0x00410ff8:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar12;
    }
    func_0x0099bd00();
code_r0x0041130d:
    func_0x0032e8f0();
code_r0x00411312:
    lVar16 = (long)&uStack_88 + 1;
code_r0x00411316:
    _ZN7android4base12StringPrintfEPKcz(&bStack_a8,&UNK_0015fd2e,lVar16);
    func_0x0032e5a0(pppppppuVar13,&bStack_a8);
    if ((bStack_a8 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_98,CONCAT71(uStack_a7,bStack_a8) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_90);
    *(uint *)unaff_RBX = (uint)unaff_R14;
  } while( true );
}


