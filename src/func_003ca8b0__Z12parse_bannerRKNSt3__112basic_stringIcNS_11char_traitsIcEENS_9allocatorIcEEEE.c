// Function: _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport
// Address: 003ca8b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport
               (byte *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char cVar7;
  undefined4 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte bStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined5 uStack_bd;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  byte bStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined5 uStack_85;
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined5 uStack_6d;
  byte *pbStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
     (cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar5 = *puVar8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_70,&UNK_00181a61,0x160,1,0,0xffffffff);
    uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
    if ((*param_1 & 1) == 0) {
      pbVar15 = param_1 + 1;
    }
    else {
      pbVar15 = *(byte **)(param_1 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(auStack_58,&UNK_0015c79c,pbVar15);
    func_0x0032e5a0(uVar13,auStack_58);
    if ((auStack_58[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_48,auStack_58._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&bStack_70);
    *puVar8 = uVar5;
  }
  auStack_58 = (undefined1  [16])0x0;
  lStack_48 = 0;
  bStack_70 = 2;
  uStack_6f = 0x3a;
  uStack_6e = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_58,param_1,&bStack_70);
  if ((bStack_70 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_60,
               CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,bStack_70))) &
               0xfffffffffffffffe);
  }
  bStack_70 = 0;
  uStack_6f = 0;
  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_2,&bStack_70);
  if ((bStack_70 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_60,
               CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,bStack_70))) &
               0xfffffffffffffffe);
  }
  if (2 < (ulong)(((long)(auStack_58._8_8_ - auStack_58._0_8_) >> 3) * -0x5555555555555555)) {
    bStack_88 = 2;
    uStack_87 = 0x3b;
    uStack_86 = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (&bStack_70,(byte *)(auStack_58._0_8_ + 0x30),&bStack_88);
    pbVar11 = pbStack_68;
    pbVar15 = (byte *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,bStack_70)));
    if (pbVar15 != pbStack_68) {
      pauVar1 = (undefined1 (*) [16])(param_2 + 0x70);
      pauVar2 = (undefined1 (*) [16])(param_2 + 0x58);
      pauVar3 = (undefined1 (*) [16])(param_2 + 0x40);
      do {
        if ((*pbVar15 & 1) == 0) {
          if (*pbVar15 >> 1 != 0) goto code_r0x003caa37;
        }
        else if (*(long *)(pbVar15 + 8) != 0) {
code_r0x003caa37:
          auStack_a8 = (undefined1  [16])0x0;
          lStack_98 = 0;
          bStack_c0 = 2;
          uStack_bf = 0x3d;
          uStack_be = 0;
          _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                    (auStack_a8,pbVar15,&bStack_c0);
          if ((bStack_c0 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_b0,
                       CONCAT53(uStack_bd,CONCAT12(uStack_be,CONCAT11(uStack_bf,bStack_c0))) &
                       0xfffffffffffffffe);
          }
          pbVar10 = (byte *)auStack_a8._0_8_;
          if (auStack_a8._8_8_ - auStack_a8._0_8_ == 0x30) {
            bVar4 = *(byte *)auStack_a8._0_8_;
            if ((bVar4 & 1) == 0) {
              uVar9 = (ulong)(bVar4 >> 1);
            }
            else {
              uVar9 = *(ulong *)(auStack_a8._0_8_ + 8);
            }
            if (uVar9 - 8 < 10) {
              pauVar14 = (undefined1 (*) [16])(auStack_a8._0_8_ + 0x18);
              switch(uVar9) {
              case 8:
                if ((bVar4 & 1) == 0) {
                  pbVar10 = (byte *)(auStack_a8._0_8_ + 1);
                }
                else {
                  pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x10);
                }
                if (*(long *)pbVar10 == 0x7365727574616566) {
                  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (param_2);
                }
                break;
              case 0xf:
                if ((bVar4 & 1) == 0) {
                  pbVar10 = (byte *)(auStack_a8._0_8_ + 1);
                }
                else {
                  pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x10);
                }
                if (pauVar3 != pauVar14 &&
                    (*(long *)(pbVar10 + 7) == 0x656d616e2e746375 &&
                    *(long *)pbVar10 == 0x75646f72702e6f72)) {
                  bVar4 = (*pauVar14)[0];
                  if (((*pauVar3)[0] & 1) == 0) {
                    if ((bVar4 & 1) == 0) {
                      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(auStack_a8._0_8_ + 0x28);
                      *pauVar3 = *pauVar14;
                    }
                    else {
                      uVar13 = *(undefined8 *)(auStack_a8._0_8_ + 0x20);
                      uVar12 = *(undefined8 *)(auStack_a8._0_8_ + 0x28);
                      pauVar14 = pauVar3;
code_r0x003cacfa:
                      func_0x0032e990(pauVar14,uVar12,uVar13);
                    }
                  }
                  else {
                    bVar18 = (bVar4 & 1) != 0;
                    pbVar10 = (byte *)(auStack_a8._0_8_ + 0x19);
                    if (bVar18) {
                      pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x28);
                    }
                    uVar9 = (ulong)(bVar4 >> 1);
                    if (bVar18) {
                      uVar9 = *(ulong *)(auStack_a8._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar3,pbVar10,uVar9);
                  }
                }
                break;
              case 0x10:
                if ((bVar4 & 1) == 0) {
                  pbVar10 = (byte *)(auStack_a8._0_8_ + 1);
                }
                else {
                  pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x10);
                }
                auVar19[0] = -(*pbVar10 == 0x72);
                auVar19[1] = -(pbVar10[1] == 0x6f);
                auVar19[2] = -(pbVar10[2] == 0x2e);
                auVar19[3] = -(pbVar10[3] == 0x70);
                auVar19[4] = -(pbVar10[4] == 0x72);
                auVar19[5] = -(pbVar10[5] == 0x6f);
                auVar19[6] = -(pbVar10[6] == 100);
                auVar19[7] = -(pbVar10[7] == 0x75);
                auVar19[8] = -(pbVar10[8] == 99);
                auVar19[9] = -(pbVar10[9] == 0x74);
                auVar19[10] = -(pbVar10[10] == 0x2e);
                auVar19[0xb] = -(pbVar10[0xb] == 0x6d);
                auVar19[0xc] = -(pbVar10[0xc] == 0x6f);
                auVar19[0xd] = -(pbVar10[0xd] == 100);
                auVar19[0xe] = -(pbVar10[0xe] == 0x65);
                auVar19[0xf] = -(pbVar10[0xf] == 0x6c);
                if (pauVar2 != pauVar14 &&
                    (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar14)[0];
                  if (((*pauVar2)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar13 = *(undefined8 *)(auStack_a8._0_8_ + 0x20);
                      uVar12 = *(undefined8 *)(auStack_a8._0_8_ + 0x28);
                      pauVar14 = pauVar2;
                      goto code_r0x003cacfa;
                    }
                    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(auStack_a8._0_8_ + 0x28);
                    *pauVar2 = *pauVar14;
                  }
                  else {
                    bVar18 = (bVar4 & 1) != 0;
                    pbVar10 = (byte *)(auStack_a8._0_8_ + 0x19);
                    if (bVar18) {
                      pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x28);
                    }
                    uVar9 = (ulong)(bVar4 >> 1);
                    if (bVar18) {
                      uVar9 = *(ulong *)(auStack_a8._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar2,pbVar10,uVar9);
                  }
                }
                break;
              case 0x11:
                if ((bVar4 & 1) == 0) {
                  pbVar10 = (byte *)(auStack_a8._0_8_ + 1);
                }
                else {
                  pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x10);
                }
                auVar20[0] = -(*pbVar10 == 0x72);
                auVar20[1] = -(pbVar10[1] == 0x6f);
                auVar20[2] = -(pbVar10[2] == 0x2e);
                auVar20[3] = -(pbVar10[3] == 0x70);
                auVar20[4] = -(pbVar10[4] == 0x72);
                auVar20[5] = -(pbVar10[5] == 0x6f);
                auVar20[6] = -(pbVar10[6] == 100);
                auVar20[7] = -(pbVar10[7] == 0x75);
                auVar20[8] = -(pbVar10[8] == 99);
                auVar20[9] = -(pbVar10[9] == 0x74);
                auVar20[10] = -(pbVar10[10] == 0x2e);
                auVar20[0xb] = -(pbVar10[0xb] == 100);
                auVar20[0xc] = -(pbVar10[0xc] == 0x65);
                auVar20[0xd] = -(pbVar10[0xd] == 0x76);
                auVar20[0xe] = -(pbVar10[0xe] == 0x69);
                auVar20[0xf] = -(pbVar10[0xf] == 99);
                auVar21[0] = -(pbVar10[0x10] == 0x65);
                auVar21[1] = 0xff;
                auVar21[2] = 0xff;
                auVar21[3] = 0xff;
                auVar21[4] = 0xff;
                auVar21[5] = 0xff;
                auVar21[6] = 0xff;
                auVar21[7] = 0xff;
                auVar21[8] = 0xff;
                auVar21[9] = 0xff;
                auVar21[10] = 0xff;
                auVar21[0xb] = 0xff;
                auVar21[0xc] = 0xff;
                auVar21[0xd] = 0xff;
                auVar21[0xe] = 0xff;
                auVar21[0xf] = 0xff;
                auVar21 = auVar21 & auVar20;
                if (pauVar1 != pauVar14 &&
                    (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar14)[0];
                  if (((*pauVar1)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar13 = *(undefined8 *)(auStack_a8._0_8_ + 0x20);
                      uVar12 = *(undefined8 *)(auStack_a8._0_8_ + 0x28);
                      pauVar14 = pauVar1;
                      goto code_r0x003cacfa;
                    }
                    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(auStack_a8._0_8_ + 0x28);
                    *pauVar1 = *pauVar14;
                  }
                  else {
                    bVar18 = (bVar4 & 1) != 0;
                    pbVar10 = (byte *)(auStack_a8._0_8_ + 0x19);
                    if (bVar18) {
                      pbVar10 = *(byte **)(auStack_a8._0_8_ + 0x28);
                    }
                    uVar9 = (ulong)(bVar4 >> 1);
                    if (bVar18) {
                      uVar9 = *(ulong *)(auStack_a8._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar1,pbVar10,uVar9);
                  }
                }
              }
            }
            pbVar10 = (byte *)auStack_a8._0_8_;
          }
          if (pbVar10 != (byte *)0x0) {
            pbVar6 = pbVar10;
            for (pbVar17 = (byte *)auStack_a8._8_8_; pbVar10 != pbVar17; pbVar17 = pbVar17 + -0x18)
            {
              if ((pbVar17[-0x18] & 1) != 0) {
                _ZdaPvSt11align_val_t
                          (*(undefined8 *)(pbVar17 + -8),
                           *(ulong *)(pbVar17 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar6 = (byte *)auStack_a8._0_8_;
            }
            auStack_a8._8_8_ = pbVar10;
            _ZdaPvSt11align_val_t(pbVar6,lStack_98 - (long)pbVar6);
          }
        }
        pbVar15 = pbVar15 + 0x18;
      } while (pbVar15 != pbVar11);
      pbVar15 = (byte *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,bStack_70)));
    }
    if (pbVar15 != (byte *)0x0) {
      pbVar11 = pbStack_68;
      pbVar10 = pbVar15;
      if (pbVar15 != pbStack_68) {
        do {
          if ((pbVar11[-0x18] & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(pbVar11 + -8),
                       *(ulong *)(pbVar11 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar11 = pbVar11 + -0x18;
        } while (pbVar11 != pbVar15);
        pbVar10 = (byte *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,bStack_70)));
      }
      pbStack_68 = pbVar15;
      _ZdaPvSt11align_val_t(pbVar10,lStack_60 - (long)pbVar10);
    }
    if ((bStack_88 & 1) != 0) {
      _ZdaPvSt11align_val_t
                (uStack_78,
                 CONCAT53(uStack_85,CONCAT12(uStack_86,CONCAT11(uStack_87,bStack_88))) &
                 0xfffffffffffffffe);
    }
  }
  bVar4 = *(byte *)auStack_58._0_8_;
  if ((bVar4 & 1) == 0) {
    uVar9 = (ulong)(bVar4 >> 1);
    if (uVar9 == 6) goto code_r0x003cae19;
code_r0x003cadf2:
    if (uVar9 == 8) {
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(auStack_58._0_8_ + 1);
      }
      else {
        pbVar15 = *(byte **)(auStack_58._0_8_ + 0x10);
      }
      if (*(long *)pbVar15 == 0x797265766f636572) {
        uVar13 = 9;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar13 = 9;
          }
          else {
            puVar8 = (undefined4 *)func_0x0099bce0();
            uVar5 = *puVar8;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_70,&UNK_00181a61,0x189,1,0,0xffffffff);
            uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
            func_0x0032eb30(uVar13,&UNK_0017d582,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_70);
            *puVar8 = uVar5;
            uVar13 = 9;
          }
        }
        goto code_r0x003cafc3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(auStack_58._0_8_ + 1);
      }
      else {
        pbVar15 = *(byte **)(auStack_58._0_8_ + 0x10);
      }
      if (*(long *)pbVar15 == 0x64616f6c65646973) {
        uVar13 = 10;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar13 = 10;
          }
          else {
            puVar8 = (undefined4 *)func_0x0099bce0();
            uVar5 = *puVar8;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_70,&UNK_00181a61,0x18c,1,0,0xffffffff);
            uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
            func_0x0032eb30(uVar13,&UNK_00162dab,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_70);
            *puVar8 = uVar5;
            uVar13 = 10;
          }
        }
        goto code_r0x003cafc3;
      }
    }
    else if (uVar9 == 10) {
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(auStack_58._0_8_ + 1);
      }
      else {
        pbVar15 = *(byte **)(auStack_58._0_8_ + 0x10);
      }
      if (*(short *)(pbVar15 + 8) == 0x7265 && *(long *)pbVar15 == 0x64616f6c746f6f62) {
        uVar13 = 6;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar13 = 6;
          }
          else {
            puVar8 = (undefined4 *)func_0x0099bce0();
            uVar5 = *puVar8;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_70,&UNK_00181a61,0x183,1,0,0xffffffff);
            uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
            func_0x0032eb30(uVar13,&UNK_001679a3,0x29);
            _ZN7android4base10LogMessageD2Ev(&bStack_70);
            *puVar8 = uVar5;
            uVar13 = 6;
          }
        }
        goto code_r0x003cafc3;
      }
    }
  }
  else {
    uVar9 = *(ulong *)(auStack_58._0_8_ + 8);
    if (uVar9 != 6) goto code_r0x003cadf2;
code_r0x003cae19:
    if ((bVar4 & 1) == 0) {
      pbVar15 = (byte *)(auStack_58._0_8_ + 1);
    }
    else {
      pbVar15 = *(byte **)(auStack_58._0_8_ + 0x10);
    }
    if (*(short *)(pbVar15 + 4) == 0x6563 && *(int *)pbVar15 == 0x69766564) {
      uVar13 = 7;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar7 == '\0') {
          uVar13 = 7;
        }
        else {
          puVar8 = (undefined4 *)func_0x0099bce0();
          uVar5 = *puVar8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_70,&UNK_00181a61,0x186,1,0,0xffffffff);
          uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
          func_0x0032eb30(uVar13,&UNK_00173ed4,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_70);
          *puVar8 = uVar5;
          uVar13 = 7;
        }
      }
      goto code_r0x003cafc3;
    }
    if ((bVar4 & 1) == 0) {
      pbVar15 = (byte *)(auStack_58._0_8_ + 1);
    }
    else {
      pbVar15 = *(byte **)(auStack_58._0_8_ + 0x10);
    }
    if (*(short *)(pbVar15 + 4) == 0x6575 && *(int *)pbVar15 == 0x63736572) {
      uVar13 = 0xb;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar7 == '\0') {
          uVar13 = 0xb;
        }
        else {
          puVar8 = (undefined4 *)func_0x0099bce0();
          uVar5 = *puVar8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_70,&UNK_00181a61,399,1,0,0xffffffff);
          uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
          func_0x0032eb30(uVar13,&UNK_0015959b,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_70);
          *puVar8 = uVar5;
          uVar13 = 0xb;
        }
      }
      goto code_r0x003cafc3;
    }
  }
  uVar13 = 8;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') goto code_r0x003cb105;
    goto code_r0x003cb0f6;
  }
code_r0x003cafc3:
  while( true ) {
    _ZN10atransport18SetConnectionStateE15ConnectionState(param_2,uVar13);
    uVar13 = auStack_58._0_8_;
    if (auStack_58._0_8_ != 0) {
      for (lVar16 = auStack_58._8_8_; uVar13 != lVar16; lVar16 = lVar16 + -0x18) {
        if ((*(byte *)(lVar16 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar16 + -8),*(ulong *)(lVar16 + -0x18) & 0xfffffffffffffffe);
        }
      }
      auStack_58._8_8_ = uVar13;
      _ZdaPvSt11align_val_t(auStack_58._0_8_,lStack_48 - auStack_58._0_8_);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) break;
    func_0x0099bd00();
code_r0x003cb105:
    puVar8 = (undefined4 *)func_0x0099bce0();
    uVar5 = *puVar8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_70,&UNK_00181a61,0x192,1,0,0xffffffff);
    uVar13 = _ZN7android4base10LogMessage6streamEv(&bStack_70);
    func_0x0032eb30(uVar13,&UNK_00170562,0x23);
    _ZN7android4base10LogMessageD2Ev(&bStack_70);
    *puVar8 = uVar5;
code_r0x003cb0f6:
    uVar13 = 8;
  }
  return;
}


