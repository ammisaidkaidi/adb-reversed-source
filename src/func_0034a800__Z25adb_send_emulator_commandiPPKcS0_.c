// Function: _Z25adb_send_emulator_commandiPPKcS0_
// Address: 0034a800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _Z25adb_send_emulator_commandiPPKcS0_(uint param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  byte bVar5;
  undefined7 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined1 uVar18;
  long lVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  undefined8 uStack_20a8;
  ulong uStack_20a0;
  long lStack_2098;
  byte bStack_2088;
  undefined1 uStack_2087;
  undefined1 uStack_2086;
  undefined1 uStack_2085;
  undefined4 uStack_2084;
  undefined4 uStack_2080;
  undefined4 uStack_207c;
  long lStack_2078;
  byte bStack_2070;
  undefined7 uStack_206f;
  byte bStack_2068;
  undefined4 uStack_2067;
  undefined1 uStack_2063;
  undefined2 uStack_2062;
  long lStack_2060;
  undefined8 uStack_2058;
  ulong uStack_2050;
  long lStack_2048;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  long lStack_2028;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uStack_2038 = 0;
    uStack_2030 = 0;
    lStack_2028 = 0;
    uStack_2058 = 0;
    uStack_2050 = 0;
    lStack_2048 = 0;
    bStack_2070 = 0x18;
    uStack_206f = 0x65643a74736f68;
    bStack_2068 = 0x76;
    uStack_2067 = 0x73656369;
    uStack_2063 = 0;
    cVar7 = _Z9adb_queryRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_S8_b
                      (&bStack_2070,&uStack_2038,&uStack_2058,0);
    if ((bStack_2070 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_2060,CONCAT71(uStack_206f,bStack_2070) & 0xfffffffffffffffe);
    }
    if (cVar7 == '\0') {
      lVar12 = lStack_2048;
      if ((uStack_2058 & 1) == 0) {
        lVar12 = (long)&uStack_2058 + 1;
      }
      func_0x0099bd30(_stderr,&UNK_0017eb91,lVar12);
      iVar8 = -1;
    }
    else {
      uStack_20a8 = CONCAT44(uStack_20a8._4_4_,0xffffffff);
      bStack_2088 = 2;
      uStack_2087 = 10;
      uStack_2086 = 0;
      _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                (&bStack_2070,&uStack_2038,&bStack_2088);
      pbVar14 = (byte *)CONCAT71(uStack_206f,bStack_2070);
      pbVar3 = (byte *)CONCAT26(uStack_2062,CONCAT15(uStack_2063,CONCAT41(uStack_2067,bStack_2068)))
      ;
      bVar2 = true;
      if (pbVar14 == pbVar3) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        do {
          pbVar17 = pbVar14 + 1;
          if ((*pbVar14 & 1) != 0) {
            pbVar17 = *(byte **)(pbVar14 + 0x10);
          }
          iVar8 = func_0x0099bdc0(pbVar17,&UNK_001862a3,&uStack_20a8);
          bVar2 = bVar4;
          if ((iVar8 == 1) && (bVar2 = true, bVar4)) {
            func_0x0099bd40(&UNK_00184828,0x2f,1,_stderr);
            bVar2 = false;
            bVar4 = false;
            goto code_r0x0034a9f0;
          }
          bVar4 = bVar2;
          pbVar14 = pbVar14 + 0x18;
        } while (pbVar14 != pbVar3);
        bVar4 = !bVar4;
        bVar2 = true;
      }
code_r0x0034a9f0:
      uVar6 = uStack_206f;
      bVar5 = bStack_2070;
      lVar12 = CONCAT71(uStack_206f,bStack_2070);
      if (lVar12 != 0) {
        lVar19 = CONCAT26(uStack_2062,CONCAT15(uStack_2063,CONCAT41(uStack_2067,bStack_2068)));
        if (lVar12 != lVar19) {
          do {
            if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
              _ZdaPvSt11align_val_t
                        (*(undefined8 *)(lVar19 + -8),
                         *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
            }
            lVar19 = lVar19 + -0x18;
          } while (lVar19 != lVar12);
          lVar12 = CONCAT71(uStack_206f,bStack_2070);
        }
        bStack_2068 = bVar5;
        uStack_2067 = (undefined4)uVar6;
        uStack_2063 = (undefined1)((uint7)uVar6 >> 0x20);
        uStack_2062 = (undefined2)((uint7)uVar6 >> 0x28);
        _ZdaPvSt11align_val_t(lVar12,lStack_2060 - lVar12);
      }
      if ((bStack_2088 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (lStack_2078,
                   CONCAT44(uStack_2084,
                            CONCAT13(uStack_2085,
                                     CONCAT12(uStack_2086,CONCAT11(uStack_2087,bStack_2088)))) &
                   0xfffffffffffffffe);
      }
      iVar8 = -1;
      if (bVar2) {
        if (bVar4) {
          func_0x0099bd40(&UNK_00173dcf,0x1c,1,_stderr);
        }
        else {
          iVar8 = (int)uStack_20a8;
        }
      }
    }
    if ((uStack_2058 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_2048,uStack_2058 & 0xfffffffffffffffe);
    }
    if ((uStack_2038 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_2028,uStack_2038 & 0xfffffffffffffffe);
      goto joined_r0x0034aba5;
    }
    if (iVar8 == -1) goto code_r0x0034abab;
code_r0x0034aac8:
    uStack_2038 = 0;
    uStack_2030 = 0;
    lStack_2028 = 0;
    iVar9 = _Z23network_loopback_clientiiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                      (iVar8,1,&uStack_2038);
    if (iVar9 == -1) {
      lVar12 = lStack_2028;
      if ((uStack_2038 & 1) == 0) {
        lVar12 = (long)&uStack_2038 + 1;
      }
      func_0x0099bd30(_stderr,&UNK_001754c6,iVar8,lVar12);
    }
    if ((uStack_2038 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_2028,uStack_2038 & 0xfffffffffffffffe);
    }
    piVar10 = (int *)func_0x0099bce0();
    if (iVar9 != -1) {
      uStack_20a8 = 0;
      uStack_20a0 = 0;
      lStack_2098 = 0;
      _Z20adb_get_homedir_pathv(&bStack_2088);
      uStack_2038 = 0;
      uStack_2030 = 0;
      lStack_2028 = 0;
      if ((bStack_2088 & 1) == 0) {
        lStack_2028 = lStack_2078;
        uStack_2038 = CONCAT44(uStack_2084,
                               CONCAT13(uStack_2085,
                                        CONCAT12(uStack_2086,CONCAT11(uStack_2087,bStack_2088))));
        uStack_2030 = CONCAT44(uStack_207c,uStack_2080);
      }
      else {
        func_0x00330340(&uStack_2038,lStack_2078,CONCAT44(uStack_207c,uStack_2080));
      }
      if ((uStack_2038 & 1) == 0) {
        uVar20 = 0x16;
        if ((byte)uStack_2038 == 0x2c) {
code_r0x0034ac2f:
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (&uStack_2038,uVar20,1,uVar20,uVar20,0,0);
          uVar16 = uVar20;
          goto code_r0x0034ac57;
        }
        uVar16 = (ulong)((byte)uStack_2038 >> 1);
        uStack_2038 = CONCAT71(uStack_2038._1_7_,(byte)uStack_2038 + 2);
        lVar12 = (long)&uStack_2038 + 1;
      }
      else {
        uVar20 = (uStack_2038 & 0xfffffffffffffffe) - 1;
        uVar16 = uStack_2030;
        if (uStack_2030 == uVar20) goto code_r0x0034ac2f;
code_r0x0034ac57:
        uStack_2030 = uVar16 + 1;
        lVar12 = lStack_2028;
      }
      *(undefined2 *)(lVar12 + uVar16) = 0x2f;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_2038,&UNK_0018ca80);
      uStack_2058 = 0;
      uStack_2050 = 0;
      lStack_2048 = 0;
      cVar7 = _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b
                        (&uStack_2038,&uStack_2058,0);
      if (cVar7 == '\0') {
        uStack_20a8 = 0;
        uStack_20a0 = 0;
        lStack_2098 = 0;
      }
      else {
        _ZN7android4base4TrimIRNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEES8_OT_
                  (&bStack_2070,&uStack_2058);
        if ((uStack_2058 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_2048,uStack_2058 & 0xfffffffffffffffe);
        }
        lStack_2048 = lStack_2060;
        uStack_2058 = CONCAT71(uStack_206f,bStack_2070);
        uStack_2050 = CONCAT26(uStack_2062,CONCAT15(uStack_2063,CONCAT41(uStack_2067,bStack_2068)));
        uVar16 = uStack_2050;
        if ((bStack_2070 & 1) == 0) {
          uVar16 = (ulong)(bStack_2070 >> 1);
        }
        uStack_20a8 = 0;
        uStack_20a0 = 0;
        lStack_2098 = 0;
        if (uVar16 != 0) {
          uStack_20a8 = 0x20687475610a;
          func_0x0032e820(&uStack_20a8,&uStack_2058);
          if ((uStack_20a8 & 1) == 0) {
            uVar20 = 0x16;
            if ((byte)uStack_20a8 == 0x2c) {
code_r0x0034adbe:
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                        (&uStack_20a8,uVar20,1,uVar20,uVar20,0,0);
              uVar16 = uVar20;
              goto code_r0x0034ade6;
            }
            uVar16 = (ulong)((byte)uStack_20a8 >> 1);
            uStack_20a8 = CONCAT71(uStack_20a8._1_7_,(byte)uStack_20a8 + 2);
            lVar12 = (long)&uStack_20a8 + 1;
          }
          else {
            uVar20 = (uStack_20a8 & 0xfffffffffffffffe) - 1;
            uVar16 = uStack_20a0;
            if (uStack_20a0 == uVar20) goto code_r0x0034adbe;
code_r0x0034ade6:
            uStack_20a0 = uVar16 + 1;
            lVar12 = lStack_2098;
          }
          *(undefined2 *)(lVar12 + uVar16) = 10;
        }
      }
      if ((uStack_2058 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_2048,uStack_2058 & 0xfffffffffffffffe);
      }
      if ((uStack_2038 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_2028,uStack_2038 & 0xfffffffffffffffe);
      }
      if ((bStack_2088 & 1) != 0) {
        _ZdaPvSt11align_val_t
                  (lStack_2078,
                   CONCAT44(uStack_2084,
                            CONCAT13(uStack_2085,
                                     CONCAT12(uStack_2086,CONCAT11(uStack_2087,bStack_2088)))) &
                   0xfffffffffffffffe);
      }
      if (1 < (int)param_1) {
        uVar16 = 1;
        do {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                    (&uStack_20a8,*(undefined8 *)(param_2 + uVar16 * 8));
          uVar18 = 0x20;
          if (param_1 - 1 == uVar16) {
            uVar18 = 10;
          }
          if ((uStack_20a8 & 1) == 0) {
            uVar15 = 0x16;
            if ((byte)uStack_20a8 == 0x2c) {
code_r0x0034aea0:
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                        (&uStack_20a8,uVar15,1,uVar15,uVar15,0,0);
              uVar20 = uVar15;
              goto code_r0x0034aec8;
            }
            uVar20 = (ulong)((byte)uStack_20a8 >> 1);
            uStack_20a8 = CONCAT71(uStack_20a8._1_7_,(byte)uStack_20a8 + 2);
            lVar12 = (long)&uStack_20a8 + 1;
          }
          else {
            uVar15 = (uStack_20a8 & 0xfffffffffffffffe) - 1;
            uVar20 = uStack_20a0;
            if (uStack_20a0 == uVar15) goto code_r0x0034aea0;
code_r0x0034aec8:
            uStack_20a0 = uVar20 + 1;
            lVar12 = lStack_2098;
          }
          *(undefined1 *)(lVar12 + uVar20) = uVar18;
          *(undefined1 *)(lVar12 + 1 + uVar20) = 0;
          uVar16 = uVar16 + 1;
        } while (param_1 != uVar16);
      }
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_20a8,&UNK_001754c0);
      cVar7 = _Z14WriteFdExactlyN7android4base11borrowed_fdERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                        (iVar9,&uStack_20a8);
      uVar11 = _stderr;
      if (cVar7 == '\0') {
        uVar13 = func_0x0099bd20(*piVar10);
        func_0x0099bd30(uVar11,&UNK_00157587,uVar13);
        uVar11 = 1;
      }
      else {
        uStack_2058 = 0;
        uStack_2050 = 0;
        lStack_2048 = 0;
        while( true ) {
          func_0x0099bdb0(&uStack_2038,0,0x2000);
          while (lVar12 = func_0x0099be20(iVar9,&uStack_2038,0x2000), lVar12 == -1) {
            if (*piVar10 != 4) goto code_r0x0034b0f1;
          }
          if ((int)(uint)lVar12 < 1) break;
          lVar19 = (uStack_2058 & 0xfffffffffffffffe) - 1;
          if ((uStack_2058 & 1) == 0) {
            lVar19 = 0x16;
          }
          uVar16 = uStack_2050;
          if ((uStack_2058 & 1) == 0) {
            uVar16 = (ulong)((uint)(uStack_2058 >> 1) & 0x7f);
          }
          uVar20 = (ulong)((uint)lVar12 & 0x7fffffff);
          if (lVar19 - uVar16 < uVar20) {
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                      (&uStack_2058,lVar19,(uVar20 - lVar19) + uVar16,uVar16,uVar16,0,uVar20,
                       &uStack_2038);
          }
          else {
            lVar12 = (long)&uStack_2058 + 1;
            if ((uStack_2058 & 1) != 0) {
              lVar12 = lStack_2048;
            }
            func_0x0099bd90(lVar12 + uVar16,&uStack_2038,uVar20);
            uVar16 = uVar16 + uVar20;
            uVar20 = uVar16;
            if ((uStack_2058 & 1) == 0) {
              uStack_2058 = CONCAT71(uStack_2058._1_7_,(char)uVar16 * '\x02');
              uVar20 = uStack_2050;
            }
            uStack_2050 = uVar20;
            *(undefined1 *)(lVar12 + uVar16) = 0;
          }
        }
code_r0x0034b0f1:
        uStack_2030 = 0;
        lStack_2028 = 0;
        uStack_2038 = 0xa0d4b4f08;
        lVar19 = 0;
        lVar12 = func_0x0034b350(&uStack_2058,&uStack_2038,0);
        if (lVar12 != -1) {
          uVar16 = uStack_2030;
          if ((uStack_2038 & 1) == 0) {
            uVar16 = uStack_2038 >> 1 & 0x7f;
          }
          lVar19 = uVar16 + lVar12;
          lVar12 = func_0x0034b350(&uStack_2058,&uStack_2038,lVar19);
          if (lVar12 != -1) {
            uVar16 = uStack_2030;
            if ((uStack_2038 & 1) == 0) {
              uVar16 = uStack_2038 >> 1 & 0x7f;
            }
            lVar19 = uVar16 + lVar12;
          }
        }
        lVar12 = (long)&uStack_2058 + 1;
        if ((uStack_2058 & 1) != 0) {
          lVar12 = lStack_2048;
        }
        func_0x0099be10(&UNK_0016c5ec,lVar12 + lVar19);
        if ((uStack_2038 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_2028,uStack_2038 & 0xfffffffffffffffe);
        }
        if ((uStack_2058 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_2048,uStack_2058 & 0xfffffffffffffffe);
        }
        uVar11 = 0;
      }
      if ((uStack_20a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_2098,uStack_20a8 & 0xfffffffffffffffe);
      }
      iVar8 = *piVar10;
      func_0x0099bd10(iVar9);
      goto code_r0x0034b21f;
    }
  }
  else {
    uStack_2038 = uStack_2038 & 0xffffffff00000000;
    iVar8 = func_0x0099bdc0(param_3,&UNK_001862a3,&uStack_2038);
    if (iVar8 == 1) {
      iVar8 = (int)uStack_2038;
joined_r0x0034aba5:
      if (iVar8 != -1) goto code_r0x0034aac8;
    }
code_r0x0034abab:
    piVar10 = (int *)func_0x0099bce0();
  }
  iVar8 = *piVar10;
  uVar11 = 1;
code_r0x0034b21f:
  *piVar10 = iVar8;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar1 = (code *)swi(3);
    uVar11 = (*pcVar1)();
    return uVar11;
  }
  return uVar11;
}


