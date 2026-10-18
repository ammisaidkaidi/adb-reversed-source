// Function: _ZN32BugreportStandardStreamsCallback11ProcessLineERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003303c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN32BugreportStandardStreamsCallback11ProcessLineERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  bool bVar25;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = *param_2;
  if ((bVar3 & 1) == 0) {
    uVar12 = (ulong)(bVar3 >> 1);
    if (uVar12 != 0) goto code_r0x00330406;
code_r0x00330745:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
    func_0x0099bd00();
  }
  else {
    uVar12 = *(ulong *)(param_2 + 8);
    if (uVar12 == 0) goto code_r0x00330745;
code_r0x00330406:
    pbVar24 = param_2 + 1;
    pbVar20 = pbVar24;
    if ((bVar3 & 1) != 0) {
      pbVar20 = *(byte **)(param_2 + 0x10);
    }
    cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (pbVar20,uVar12,&UNK_0018c3fe,6);
    bVar3 = *param_2;
    pbVar20 = pbVar24;
    if ((bVar3 & 1) != 0) {
      pbVar20 = *(byte **)(param_2 + 0x10);
    }
    if (cVar9 == '\0') {
      if ((bVar3 & 1) == 0) {
        uVar12 = (ulong)(bVar3 >> 1);
      }
      else {
        uVar12 = *(ulong *)(param_2 + 8);
      }
      cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                        (pbVar20,uVar12,&UNK_0018c405,3);
      bVar3 = *param_2;
      pbVar20 = pbVar24;
      if ((bVar3 & 1) != 0) {
        pbVar20 = *(byte **)(param_2 + 0x10);
      }
      if (cVar9 == '\0') {
        if ((bVar3 & 1) == 0) {
          uVar12 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar12 = *(ulong *)(param_2 + 8);
        }
        cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                          (pbVar20,uVar12,&UNK_0018c409,5);
        if (cVar9 == '\0') {
          if (*(char *)(param_1 + 0x88) == '\x01') {
            bVar25 = (*param_2 & 1) == 0;
            pbVar20 = *(byte **)(param_2 + 0x10);
            if (bVar25) {
              pbVar20 = pbVar24;
            }
            uVar12 = (ulong)(*param_2 >> 1);
            if (!bVar25) {
              uVar12 = *(ulong *)(param_2 + 8);
            }
            cVar9 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                              (pbVar20,uVar12,&UNK_0018c40f,9);
            if (cVar9 != '\0') {
              pbVar20 = *(byte **)(param_2 + 0x10);
              pbVar4 = *(byte **)(param_2 + 8);
              if ((*param_2 & 1) == 0) {
                pbVar20 = pbVar24;
                pbVar4 = (byte *)(ulong)(*param_2 >> 1);
              }
              pbVar2 = pbVar20 + (long)pbVar4;
              pbVar17 = pbVar2;
              pbVar19 = pbVar20;
              if (pbVar4 == (byte *)0x0) {
                pbVar21 = (byte *)0x8;
                pbVar19 = pbVar2;
              }
              else {
                while( true ) {
                  do {
                    do {
                      do {
                        do {
                          do {
                            do {
                              do {
                                pbVar21 = pbVar19 + 8;
                                while (pbVar19 = pbVar21 + -7, pbVar21[-8] != 0x50) {
                                  pbVar21 = pbVar21 + 1;
                                  if (pbVar19 == pbVar2) goto code_r0x00330767;
                                }
                                if (pbVar19 == pbVar2) goto code_r0x00330767;
                              } while (*pbVar19 != 0x52);
                              if (pbVar21 + -6 == pbVar2) goto code_r0x00330767;
                            } while (pbVar21[-6] != 0x4f);
                            if (pbVar21 + -5 == pbVar2) goto code_r0x00330767;
                          } while (pbVar21[-5] != 0x47);
                          if (pbVar21 + -4 == pbVar2) goto code_r0x00330767;
                        } while (pbVar21[-4] != 0x52);
                        if (pbVar21 + -3 == pbVar2) goto code_r0x00330767;
                      } while (pbVar21[-3] != 0x45);
                      if (pbVar21 + -2 == pbVar2) goto code_r0x00330767;
                    } while (pbVar21[-2] != 0x53);
                    if (pbVar21 + -1 == pbVar2) goto code_r0x00330767;
                  } while (pbVar21[-1] != 0x53);
                  if (pbVar21 == pbVar2) break;
                  if (*pbVar21 == 0x3a) {
                    pbVar17 = pbVar21 + -8;
                  }
                }
code_r0x00330767:
                pbVar1 = pbVar20;
                pbVar21 = (byte *)0x8;
                pbVar18 = pbVar2;
                if (pbVar17 != pbVar2) {
                  pbVar21 = pbVar17 + (9 - (long)pbVar20);
                }
                do {
                  while (pbVar19 = pbVar1, pbVar1 = pbVar19 + 1, *pbVar19 != 0x2f) {
                    pbVar19 = pbVar18;
                    if (pbVar1 == pbVar2) goto code_r0x003307b9;
                  }
                  pbVar18 = pbVar19;
                } while (pbVar1 != pbVar2);
              }
code_r0x003307b9:
              lVar16 = -1;
              if (pbVar19 != pbVar2) {
                lVar16 = (long)pbVar19 - (long)pbVar20;
              }
              if (pbVar4 < pbVar21) goto code_r0x003309fe;
              uVar12 = lVar16 - (long)pbVar21;
              if ((ulong)((long)pbVar4 - (long)pbVar21) < (ulong)(lVar16 - (long)pbVar21)) {
                uVar12 = (long)pbVar4 - (long)pbVar21;
              }
              if (uVar12 < 0xfffffffffffffff7) {
                if (uVar12 < 0x17) {
                  uStack_80 = CONCAT71(uStack_80._1_7_,(char)uVar12 * '\x02');
                  lVar14 = (long)&uStack_80 + 1;
                }
                else {
                  lVar13 = 0x1a;
                  if ((uVar12 | 7) != 0x17) {
                    lVar13 = (uVar12 | 7) + 1;
                  }
                  lVar14 = _Znwm(lVar13);
                  uStack_80 = lVar13 + 1;
                  uStack_78 = uVar12;
                  lStack_70 = lVar14;
                }
                func_0x0099bd90(lVar14,pbVar20 + (long)pbVar21,uVar12);
                *(undefined1 *)(lVar14 + uVar12) = 0;
                iVar10 = _ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                                   (&uStack_80,0,10);
                if ((uStack_80 & 1) != 0) {
                  _ZdaPvSt11align_val_t(lStack_70,uStack_80 & 0xfffffffffffffffe);
                }
                uVar12 = lVar16 + 1;
                bVar3 = *param_2;
                if ((bVar3 & 1) == 0) {
                  uVar22 = (ulong)(bVar3 >> 1);
                }
                else {
                  uVar22 = *(ulong *)(param_2 + 8);
                }
                uVar23 = uVar22 - uVar12;
                if (uVar22 < uVar12) goto code_r0x003309fe;
                if (uVar23 < 0xfffffffffffffff7) {
                  pbVar20 = *(byte **)(param_2 + 0x10);
                  if (uVar23 < 0x17) {
                    uStack_80 = CONCAT71(uStack_80._1_7_,(char)uVar23 * '\x02');
                    lVar13 = (long)&uStack_80 + 1;
                  }
                  else {
                    lVar16 = 0x1a;
                    if ((uVar23 | 7) != 0x17) {
                      lVar16 = (uVar23 | 7) + 1;
                    }
                    lVar13 = _Znwm(lVar16);
                    uStack_80 = lVar16 + 1;
                    uStack_78 = uVar23;
                    lStack_70 = lVar13;
                  }
                  if ((bVar3 & 1) == 0) {
                    pbVar20 = pbVar24;
                  }
                  func_0x0099bd90(lVar13,pbVar20 + uVar12,uVar23);
                  *(undefined1 *)(lVar13 + uVar23) = 0;
                  iVar11 = _ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                                     (&uStack_80,0,10);
                  if ((uStack_80 & 1) != 0) {
                    _ZdaPvSt11align_val_t(lStack_70,uStack_80 & 0xfffffffffffffffe);
                  }
                  uVar12 = (long)(iVar10 * 100) / (long)iVar11;
                  iVar10 = (int)uVar12;
                  if ((iVar10 == 0) || (*(int *)(param_1 + 0xa8) < iVar10)) {
                    *(int *)(param_1 + 0xa8) = iVar10;
                    (**(code **)(**(long **)(param_1 + 8) + 0x10))
                              (*(long **)(param_1 + 8),param_1 + 0x58,uVar12 & 0xffffffff);
                  }
                  goto code_r0x00330745;
                }
              }
              goto code_r0x003309f9;
            }
          }
          puVar15 = *(undefined4 **)(param_1 + 0x78);
          if (puVar15 < *(undefined4 **)(param_1 + 0x80)) {
            if ((*param_2 & 1) == 0) {
              *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(param_2 + 0x10);
              uVar6 = *(undefined4 *)(param_2 + 4);
              uVar7 = *(undefined4 *)(param_2 + 8);
              uVar8 = *(undefined4 *)(param_2 + 0xc);
              *puVar15 = *(undefined4 *)param_2;
              puVar15[1] = uVar6;
              puVar15[2] = uVar7;
              puVar15[3] = uVar8;
            }
            else {
              func_0x00330340(puVar15,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
            }
            puVar15 = puVar15 + 6;
          }
          else {
            puVar15 = (undefined4 *)
                      _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRKS6_EEEPS6_DpOT_
                                (param_1 + 0x70,param_2);
          }
          *(undefined4 **)(param_1 + 0x78) = puVar15;
        }
        else {
          if ((*param_2 & 1) != 0) {
            pbVar24 = *(byte **)(param_2 + 0x10);
          }
          func_0x0099bd30(_stderr,&UNK_00173c01,pbVar24 + 5);
          *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
        }
        goto code_r0x00330745;
      }
      uVar12 = func_0x0099bcf0(pbVar20 + 3);
      if (uVar12 < 0xfffffffffffffff7) {
        if (uVar12 < 0x17) {
          uStack_68 = CONCAT71(uStack_68._1_7_,(char)uVar12 * '\x02');
          lVar13 = (long)&uStack_68 + 1;
        }
        else {
          lVar16 = 0x1a;
          if ((uVar12 | 7) != 0x17) {
            lVar16 = (uVar12 | 7) + 1;
          }
          lVar13 = _Znwm(lVar16);
          uStack_68 = lVar16 + 1;
          uStack_60 = uVar12;
          lStack_58 = lVar13;
        }
        func_0x0099bd90(lVar13,pbVar20 + 3,uVar12);
        *(undefined1 *)(lVar13 + uVar12) = 0;
        _ZN32BugreportStandardStreamsCallback10SetSrcFileENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (param_1,&uStack_68);
        uVar12 = uStack_68;
        lVar16 = lStack_58;
        goto joined_r0x00330718;
      }
    }
    else {
      uVar12 = func_0x0099bcf0(pbVar20 + 6);
      if (uVar12 < 0xfffffffffffffff7) {
        if (uVar12 < 0x17) {
          uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar12 * '\x02');
          lVar13 = (long)&uStack_50 + 1;
        }
        else {
          lVar16 = 0x1a;
          if ((uVar12 | 7) != 0x17) {
            lVar16 = (uVar12 | 7) + 1;
          }
          lVar13 = _Znwm(lVar16);
          uStack_50 = lVar16 + 1;
          uStack_48 = uVar12;
          lStack_40 = lVar13;
        }
        func_0x0099bd90(lVar13,pbVar20 + 6,uVar12);
        *(undefined1 *)(lVar13 + uVar12) = 0;
        _ZN32BugreportStandardStreamsCallback10SetSrcFileENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (param_1,&uStack_50);
        uVar12 = uStack_50;
        lVar16 = lStack_40;
joined_r0x00330718:
        if ((uVar12 & 1) != 0) {
          _ZdaPvSt11align_val_t(lVar16,uVar12 & 0xfffffffffffffffe);
        }
        goto code_r0x00330745;
      }
    }
  }
code_r0x003309f9:
  func_0x0032e8f0();
code_r0x003309fe:
  func_0x0032fc60();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


