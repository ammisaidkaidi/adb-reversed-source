// Function: _ZN14SyncConnectionC2Ev
// Address: 00342770
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN14SyncConnectionC2Ev(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  _ZN5Block8allocateEm(param_1 + 0x10,0x10008);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  uVar5 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x28) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x2c) = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar5 = _ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x3c) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x40) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  _ZN11LinePrinterC2Ev(param_1 + 0x44);
  _ZN5Block6resizeEm(param_1 + 0x10,0);
  param_1[2] = 0x10000;
  param_1[3] = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  lVar6 = _Z19adb_get_feature_setPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
                    (&uStack_58);
  if (*(char *)(lVar6 + 0x18) == '\0') {
    lVar6 = lStack_48;
    if ((uStack_58 & 1) == 0) {
      lVar6 = (long)&uStack_58 + 1;
    }
    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_00172126,lVar6);
joined_r0x00342e40:
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    *(long *)(param_1 + 0x18) = lVar6;
    uVar7 = func_0x0099bcf0(&UNK_00167b7f);
    if (uVar7 < 0xfffffffffffffff7) {
      if (uVar7 < 0x17) {
        uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
        lVar8 = (long)&uStack_78 + 1;
      }
      else {
        lVar10 = 0x1a;
        if ((uVar7 | 7) != 0x17) {
          lVar10 = (uVar7 | 7) + 1;
        }
        lVar8 = _Znwm(lVar10);
        uStack_78 = lVar10 + 1;
        uStack_70 = uVar7;
        lStack_68 = lVar8;
      }
      func_0x0099bd90(lVar8,&UNK_00167b7f,uVar7);
      *(undefined1 *)(lVar8 + uVar7) = 0;
      uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                        (lVar6,&uStack_78);
      *(undefined1 *)(param_1 + 0x1a) = uVar3;
      if ((uStack_78 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
      }
      uVar7 = func_0x0099bcf0(&UNK_0017bb4e);
      if (uVar7 < 0xfffffffffffffff7) {
        if (uVar7 < 0x17) {
          uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
          lVar8 = (long)&uStack_78 + 1;
        }
        else {
          lVar10 = 0x1a;
          if ((uVar7 | 7) != 0x17) {
            lVar10 = (uVar7 | 7) + 1;
          }
          lVar8 = _Znwm(lVar10);
          uStack_78 = lVar10 + 1;
          uStack_70 = uVar7;
          lStack_68 = lVar8;
        }
        func_0x0099bd90(lVar8,&UNK_0017bb4e,uVar7);
        *(undefined1 *)(lVar8 + uVar7) = 0;
        uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                          (lVar6,&uStack_78);
        *(undefined1 *)((long)param_1 + 0x69) = uVar3;
        if ((uStack_78 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
        }
        uVar7 = func_0x0099bcf0(&UNK_00181b82);
        if (uVar7 < 0xfffffffffffffff7) {
          if (uVar7 < 0x17) {
            uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
            lVar8 = (long)&uStack_78 + 1;
          }
          else {
            lVar10 = 0x1a;
            if ((uVar7 | 7) != 0x17) {
              lVar10 = (uVar7 | 7) + 1;
            }
            lVar8 = _Znwm(lVar10);
            uStack_78 = lVar10 + 1;
            uStack_70 = uVar7;
            lStack_68 = lVar8;
          }
          func_0x0099bd90(lVar8,&UNK_00181b82,uVar7);
          *(undefined1 *)(lVar8 + uVar7) = 0;
          uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                            (lVar6,&uStack_78);
          *(undefined1 *)((long)param_1 + 0x6a) = uVar3;
          if ((uStack_78 & 1) != 0) {
            _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
          }
          uVar7 = func_0x0099bcf0(&UNK_00177182);
          if (uVar7 < 0xfffffffffffffff7) {
            if (uVar7 < 0x17) {
              uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
              lVar8 = (long)&uStack_78 + 1;
            }
            else {
              lVar10 = 0x1a;
              if ((uVar7 | 7) != 0x17) {
                lVar10 = (uVar7 | 7) + 1;
              }
              lVar8 = _Znwm(lVar10);
              uStack_78 = lVar10 + 1;
              uStack_70 = uVar7;
              lStack_68 = lVar8;
            }
            func_0x0099bd90(lVar8,&UNK_00177182,uVar7);
            *(undefined1 *)(lVar8 + uVar7) = 0;
            uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                              (lVar6,&uStack_78);
            *(undefined1 *)((long)param_1 + 0x6b) = uVar3;
            if ((uStack_78 & 1) != 0) {
              _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
            }
            uVar7 = func_0x0099bcf0(&UNK_00170669);
            if (uVar7 < 0xfffffffffffffff7) {
              if (uVar7 < 0x17) {
                uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
                lVar8 = (long)&uStack_78 + 1;
              }
              else {
                lVar10 = 0x1a;
                if ((uVar7 | 7) != 0x17) {
                  lVar10 = (uVar7 | 7) + 1;
                }
                lVar8 = _Znwm(lVar10);
                uStack_78 = lVar10 + 1;
                uStack_70 = uVar7;
                lStack_68 = lVar8;
              }
              func_0x0099bd90(lVar8,&UNK_00170669,uVar7);
              *(undefined1 *)(lVar8 + uVar7) = 0;
              uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                                (lVar6,&uStack_78);
              *(undefined1 *)(param_1 + 0x1b) = uVar3;
              if ((uStack_78 & 1) != 0) {
                _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
              }
              uVar7 = func_0x0099bcf0(&UNK_0015e0cb);
              if (uVar7 < 0xfffffffffffffff7) {
                if (uVar7 < 0x17) {
                  uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
                  lVar8 = (long)&uStack_78 + 1;
                }
                else {
                  lVar10 = 0x1a;
                  if ((uVar7 | 7) != 0x17) {
                    lVar10 = (uVar7 | 7) + 1;
                  }
                  lVar8 = _Znwm(lVar10);
                  uStack_78 = lVar10 + 1;
                  uStack_70 = uVar7;
                  lStack_68 = lVar8;
                }
                func_0x0099bd90(lVar8,&UNK_0015e0cb,uVar7);
                *(undefined1 *)(lVar8 + uVar7) = 0;
                uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                                  (lVar6,&uStack_78);
                *(undefined1 *)((long)param_1 + 0x6d) = uVar3;
                if ((uStack_78 & 1) != 0) {
                  _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
                }
                uVar7 = func_0x0099bcf0(&UNK_00184a32);
                if (uVar7 < 0xfffffffffffffff7) {
                  if (uVar7 < 0x17) {
                    uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar7 * '\x02');
                    lVar8 = (long)&uStack_78 + 1;
                  }
                  else {
                    lVar10 = 0x1a;
                    if ((uVar7 | 7) != 0x17) {
                      lVar10 = (uVar7 | 7) + 1;
                    }
                    lVar8 = _Znwm(lVar10);
                    uStack_78 = lVar10 + 1;
                    uStack_70 = uVar7;
                    lStack_68 = lVar8;
                  }
                  func_0x0099bd90(lVar8,&UNK_00184a32,uVar7);
                  *(undefined1 *)(lVar8 + uVar7) = 0;
                  uVar3 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                                    (lVar6,&uStack_78);
                  *(undefined1 *)((long)param_1 + 0x6e) = uVar3;
                  if ((uStack_78 & 1) != 0) {
                    _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
                  }
                  uStack_78 = 0;
                  uStack_70 = 0;
                  lStack_68 = 0;
                  iVar4 = _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
                                    (&UNK_0018aafc,5,&uStack_78);
                  puVar9 = (undefined4 *)func_0x0099bce0();
                  uVar1 = *puVar9;
                  if (*param_1 != -1) {
                    func_0x0099bd10();
                  }
                  *param_1 = iVar4;
                  *puVar9 = uVar1;
                  if (*param_1 < 0) {
                    lVar6 = lStack_68;
                    if ((uStack_78 & 1) == 0) {
                      lVar6 = (long)&uStack_78 + 1;
                    }
                    _ZN14SyncConnection5ErrorEPKcz(param_1,&UNK_0018941f,lVar6);
                  }
                  if ((uStack_78 & 1) != 0) {
                    _ZdaPvSt11align_val_t(lStack_68,uStack_78 & 0xfffffffffffffffe);
                  }
                  goto joined_r0x00342e40;
                }
              }
            }
          }
        }
      }
    }
    func_0x0032e8f0();
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


