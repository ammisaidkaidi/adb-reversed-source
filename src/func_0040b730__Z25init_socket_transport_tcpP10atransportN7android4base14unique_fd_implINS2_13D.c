// Function: _Z25init_socket_transport_tcpP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEE
// Address: 0040b730
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z25init_socket_transport_tcpP10atransportN7android4base14unique_fd_implINS2_13DefaultCloserEEE
               (byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  undefined4 *puVar8;
  long lVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 **ppuVar20;
  undefined *puVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined4 **ppuStack_168;
  undefined4 *puStack_148;
  undefined4 *puStack_140;
  undefined4 *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  int iStack_118;
  int iStack_114;
  undefined1 auStack_110 [5];
  byte abStack_10b [3];
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  undefined1 auStack_f0 [16];
  undefined4 *puStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 *puStack_c0;
  byte abStack_b0 [32];
  byte *pbStack_90;
  long lStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined4 *puStack_48;
  byte *pbStack_40;
  long *plStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)_Znwm(0x18);
  uVar19 = *param_2;
  *param_2 = 0xffffffff;
  puVar7 = (uint *)func_0x0099bce0();
  plStack_38 = (long *)CONCAT44(plStack_38._4_4_,uVar19);
  _ZN12FdConnectionC1EN7android4base14unique_fd_implINS1_13DefaultCloserEEE(plVar6,&plStack_38);
  uVar5 = *puVar7;
  pbVar10 = (byte *)(ulong)uVar5;
  if ((int)plStack_38 != -1) {
    func_0x0099bd10();
  }
  *puVar7 = uVar5;
  puVar8 = (undefined4 *)_Znwm(0xc0);
  plStack_38 = plVar6;
  _ZN25BlockingConnectionAdapterC1ENSt3__110unique_ptrI18BlockingConnectionNS0_14default_deleteIS2_EEEE
            (puVar8,&plStack_38);
  plVar6 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puStack_48 = puVar8;
  pbStack_40 = (byte *)_Znwm(0x20);
  pbStack_40[8] = 0;
  pbStack_40[9] = 0;
  pbStack_40[10] = 0;
  pbStack_40[0xb] = 0;
  pbStack_40[0xc] = 0;
  pbStack_40[0xd] = 0;
  pbStack_40[0xe] = 0;
  pbStack_40[0xf] = 0;
  pbStack_40[0x10] = 0;
  pbStack_40[0x11] = 0;
  pbStack_40[0x12] = 0;
  pbStack_40[0x13] = 0;
  pbStack_40[0x14] = 0;
  pbStack_40[0x15] = 0;
  pbStack_40[0x16] = 0;
  pbStack_40[0x17] = 0;
  pbStack_40[0] = 0x40;
  pbStack_40[1] = 0xf2;
  pbStack_40[2] = 0x99;
  pbStack_40[3] = 0;
  pbStack_40[4] = 0;
  pbStack_40[5] = 0;
  pbStack_40[6] = 0;
  pbStack_40[7] = 0;
  *(undefined4 **)(pbStack_40 + 0x18) = puVar8;
  ppuVar20 = &puStack_48;
  _ZN10atransport13SetConnectionENSt3__110shared_ptrI10ConnectionEE();
  pbVar22 = pbStack_40;
  if (pbStack_40 != (byte *)0x0) {
    LOCK();
    pbVar1 = pbStack_40 + 8;
    lVar9 = *(long *)pbVar1;
    *(long *)pbVar1 = *(long *)pbVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*(long *)pbStack_40 + 0x10))(pbStack_40);
      param_1 = pbVar22;
      _ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  pbStack_78 = pbVar22;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar22 = param_1;
  pbStack_70 = pbVar10;
  lVar9 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar9 + 0x10) == '\x01') {
    pbVar10 = (byte *)_Z19fdevent_get_ambientv();
    lVar9 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(pbVar10 + 8) == lVar9) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_d0,&UNK_0015b284,0x5a,6,0,0xffffffff);
        uVar12 = _ZN7android4base10LogMessage6streamEv(auStack_d0);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00165d45,0xe);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00162e7f,0x29);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0016e934,2);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0015ae05,1);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00183451,0x1c);
        uVar12 = func_0x0032eb30(uVar12,&UNK_0017ed76,0x2c);
        uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,lVar9);
        uVar12 = func_0x0032eb30(uVar12,&UNK_00165f20,0x1f);
        uVar12 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar12,lVar9);
        func_0x0032eb30(uVar12,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_d0);
      } while( true );
    }
  }
  if ((*param_1 & 1) == 0) {
    if (*param_1 >> 1 == 0) goto code_r0x0040baa4;
  }
  else if (*(long *)(param_1 + 8) == 0) {
code_r0x0040baa4:
    if (((ulong)*ppuVar20 & 1) == 0) {
      *(byte *)ppuVar20 = 0x1a;
      puVar7 = (uint *)((long)ppuVar20 + 1);
    }
    else {
      ppuVar20[1] = (undefined4 *)0xd;
      puVar7 = ppuVar20[2];
    }
    pbVar22 = (byte *)((long)puVar7 + 5);
    pbVar22[0] = 0x20;
    pbVar22[1] = 0x61;
    pbVar22[2] = 100;
    pbVar22[3] = 100;
    pbVar22[4] = 0x72;
    pbVar22[5] = 0x65;
    pbVar22[6] = 0x73;
    pbVar22[7] = 0x73;
    puVar7[0] = 0x74706d65;
    puVar7[1] = 0x64612079;
    *(byte *)((long)puVar7 + 0xd) = 0;
    goto code_r0x0040be4d;
  }
  ppuStack_168 = ppuVar20;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    pbVar22 = (byte *)0x1;
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar8 = (undefined4 *)func_0x0099bce0();
      uVar19 = *puVar8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_f0,&UNK_0015b284,0x60,1,0,0xffffffff);
      pbVar10 = (byte *)_ZN7android4base10LogMessage6streamEv(auStack_f0);
      if ((*param_1 & 1) == 0) goto code_r0x0040c006;
      pbVar22 = *(byte **)(param_1 + 0x10);
      goto code_r0x0040c00a;
    }
  }
  do {
    uVar5 = (uint)pbVar22;
    iStack_d4 = -1;
    uStack_d8 = 0;
    auStack_d0 = (undefined1  [16])0x0;
    puStack_c0 = (undefined1 *)0x0;
    auStack_f0 = (undefined1  [16])0x0;
    puStack_e0 = (undefined4 *)0x0;
    bVar2 = *param_1;
    puVar8 = (undefined4 *)(ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      puVar8 = *(undefined4 **)(param_1 + 8);
    }
    if (puVar8 < (undefined4 *)0x6) {
code_r0x0040b961:
      pbVar10 = *(byte **)(param_1 + 0x10);
code_r0x0040b97c:
      puStack_100 = (undefined4 *)0x0;
      uVar14 = 0;
      stack0xfffffffffffffef1 = SUB1615((undefined1  [16])0x0,1);
      auStack_110[0] = ((char)puVar8 + '\x04') * '\x02';
code_r0x0040b986:
      pbVar22 = param_1 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar22 = pbVar10;
      }
      pbVar1 = (byte *)(puStack_100 + 1);
      bVar24 = (uVar14 & 1) != 0;
      puVar11 = (undefined4 *)(auStack_110 + 1);
      if (bVar24) {
        puVar11 = puStack_100;
      }
      *puVar11 = 0x3a706374;
      pbVar10 = abStack_10b;
      if (bVar24) {
        pbVar10 = pbVar1;
      }
      func_0x0099bd90(pbVar10,pbVar22,puVar8);
      pbVar10[(long)puVar8] = 0;
      if ((auStack_f0[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_e0,auStack_f0._0_8_ & 0xfffffffffffffffe);
      }
      puStack_e0 = puStack_100;
      auStack_f0._0_8_ = _auStack_110;
      auStack_f0._8_8_ = puStack_108;
code_r0x0040b9fd:
    }
    else {
      pbVar10 = *(byte **)(param_1 + 0x10);
      pbVar22 = pbVar10;
      if ((bVar2 & 1) == 0) {
        pbVar22 = param_1 + 1;
      }
      if (*(short *)(pbVar22 + 4) != 0x3a6b || *(int *)pbVar22 != 0x636f7376) {
        if (puVar8 < (undefined4 *)0x10) goto code_r0x0040b961;
        pbVar10 = *(byte **)(param_1 + 0x10);
        pbVar22 = param_1 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar22 = pbVar10;
        }
        auVar25[0] = -(*pbVar22 == 0x6c);
        auVar25[1] = -(pbVar22[1] == 0x6f);
        auVar25[2] = -(pbVar22[2] == 99);
        auVar25[3] = -(pbVar22[3] == 0x61);
        auVar25[4] = -(pbVar22[4] == 0x6c);
        auVar25[5] = -(pbVar22[5] == 0x66);
        auVar25[6] = -(pbVar22[6] == 0x69);
        auVar25[7] = -(pbVar22[7] == 0x6c);
        auVar25[8] = -(pbVar22[8] == 0x65);
        auVar25[9] = -(pbVar22[9] == 0x73);
        auVar25[10] = -(pbVar22[10] == 0x79);
        auVar25[0xb] = -(pbVar22[0xb] == 0x73);
        auVar25[0xc] = -(pbVar22[0xc] == 0x74);
        auVar25[0xd] = -(pbVar22[0xd] == 0x65);
        auVar25[0xe] = -(pbVar22[0xe] == 0x6d);
        auVar25[0xf] = -(pbVar22[0xf] == 0x3a);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x0040bd39;
        _auStack_110 = (undefined1  [16])0x0;
        puStack_100 = (undefined4 *)0x0;
        puVar11 = puVar8 + 1;
        if (puVar11 < (undefined4 *)0xfffffffffffffff7) {
          if (puVar11 < (undefined4 *)0x17) goto code_r0x0040b97c;
          lVar9 = 0x1a;
          if (((ulong)puVar11 | 7) != 0x17) {
            lVar9 = ((ulong)puVar11 | 7) + 1;
          }
          puStack_100 = (undefined4 *)_Znwm();
          puStack_108 = puVar11;
          _auStack_110 = lVar9 + 1U;
          uVar14 = lVar9 + 1U & 0xffffffff;
          goto code_r0x0040b986;
        }
        func_0x0032e8f0();
        uVar12 = uRam0000000000a00850;
        _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
        lVar9 = 0;
        if ((uRam0000000000a00860 == 0) || (lRam0000000000a00870 == 0)) goto code_r0x0040c160;
        uVar13 = (ulong)(int)uVar5;
        uVar14 = uRam0000000000a00860 - 1;
        if ((uRam0000000000a00860 & uVar14) == 0) {
          uVar16 = uVar14 & uVar13;
        }
        else {
          uVar16 = uVar13;
          if (uRam0000000000a00860 <= uVar13) {
            if ((uVar13 | uRam0000000000a00860) >> 0x20 == 0) {
              uVar16 = (ulong)uVar5 % (uRam0000000000a00860 & 0xffffffff);
            }
            else {
              uVar16 = uVar13 % uRam0000000000a00860;
            }
          }
        }
        puVar23 = *(undefined8 **)(lRam0000000000a00858 + uVar16 * 8);
        if (puVar23 == (undefined8 *)0x0) {
          lVar9 = 0;
          goto code_r0x0040c160;
        }
        puVar23 = (undefined8 *)*puVar23;
        break;
      }
code_r0x0040bd39:
      if (auStack_f0 != param_1) {
        if ((bVar2 & 1) != 0) {
          func_0x0032e990(auStack_f0,pbVar10);
          goto code_r0x0040ba05;
        }
        puStack_e0 = *(undefined4 **)(param_1 + 0x10);
        auStack_f0._0_8_ = *(undefined8 *)param_1;
        auStack_f0._8_8_ = *(undefined8 *)(param_1 + 8);
        goto code_r0x0040b9fd;
      }
    }
code_r0x0040ba05:
    bVar24 = (auStack_f0[0] & 1) != 0;
    puVar11 = (undefined4 *)(auStack_f0 + 1);
    if (bVar24) {
      puVar11 = puStack_e0;
    }
    uVar14 = (ulong)(auStack_f0[0] >> 1);
    if (bVar24) {
      uVar14 = auStack_f0._8_8_;
    }
    _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
              (&iStack_d4,puVar11,uVar14,&uStack_d8,auStack_d0,ppuStack_168);
    if (iStack_d4 != -1) {
      _auStack_110 = (undefined1  [16])0x0;
      puStack_100 = (undefined4 *)0x0;
      if ((auStack_f0[0] & 1) == 0) {
        puStack_100 = puStack_e0;
        _auStack_110 = auStack_f0;
        iVar18 = iStack_d4;
      }
      else {
        func_0x00330340(auStack_110,puStack_e0,auStack_f0._8_8_);
        iVar18 = iStack_d4;
      }
      iStack_114 = 0;
      iStack_118 = -1;
      iStack_d4 = -1;
      puVar11 = (undefined4 *)func_0x0099bce0();
      *puVar11 = *puVar11;
      iStack_118 = iVar18;
      if ((auStack_d0[0] & 1) == 0) {
        puStack_120 = puStack_c0;
        uStack_130 = auStack_d0._0_8_;
        uStack_128 = auStack_d0._8_8_;
      }
      else {
        func_0x00330340(&uStack_130,puStack_c0,auStack_d0._8_8_);
      }
      uVar19 = uStack_d8;
      puVar3 = puStack_100;
      uVar12 = _auStack_110;
      puVar8 = puStack_108;
      _auStack_110 = ZEXT816(0);
      puStack_100 = (undefined4 *)0x0;
      lVar9 = 0x20;
      pbStack_90 = (byte *)_Znwm(0x20);
      *(undefined **)pbStack_90 = &UNK_0099f278;
      *(undefined8 *)(pbStack_90 + 8) = uVar12;
      *(undefined4 **)(pbStack_90 + 0x10) = puVar8;
      *(undefined4 **)(pbStack_90 + 0x18) = puVar3;
      pbVar10 = abStack_b0;
      uVar5 = _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                        (&iStack_118,&uStack_130,uVar19,0,pbVar10,0,&iStack_114);
      puVar8 = (undefined4 *)(ulong)uVar5;
      if ((pbStack_90 == pbVar10) || (lVar9 = 0x28, pbStack_90 != (byte *)0x0)) {
        (**(code **)(*(long *)pbStack_90 + lVar9))();
      }
      if ((uStack_130 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_120,uStack_130 & 0xfffffffffffffffe);
      }
      uVar19 = *puVar11;
      if (iStack_118 != -1) {
        func_0x0099bd10();
      }
      iStack_118 = -1;
      *puVar11 = uVar19;
      if ((char)uVar5 == '\0') {
        puVar15 = auStack_d0 + 1;
        if (iStack_114 == 1) {
          if ((auStack_d0[0] & 1) != 0) {
            puVar15 = puStack_c0;
          }
          puVar21 = &UNK_0015b2d4;
        }
        else if (iStack_114 == 0x72) {
          if ((auStack_d0[0] & 1) != 0) {
            puVar15 = puStack_c0;
          }
          puVar21 = &UNK_0016b03d;
        }
        else {
          if ((auStack_d0[0] & 1) != 0) {
            puVar15 = puStack_c0;
          }
          puVar21 = &UNK_0017ef46;
        }
      }
      else {
        puVar15 = puStack_c0;
        if ((auStack_d0[0] & 1) == 0) {
          puVar15 = auStack_d0 + 1;
        }
        puVar21 = &UNK_0017727e;
      }
      _ZN7android4base12StringPrintfEPKcz(&puStack_148,puVar21,puVar15);
      if (((ulong)*ppuStack_168 & 1) != 0) {
        _ZdaPvSt11align_val_t(ppuStack_168[2],(ulong)*ppuStack_168 & 0xfffffffffffffffe);
      }
      ppuStack_168[2] = puStack_138;
      *ppuStack_168 = puStack_148;
      ppuStack_168[1] = puStack_140;
      if ((auStack_110[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_100,_auStack_110 & 0xfffffffffffffffe);
      }
    }
    if ((auStack_f0[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_e0,auStack_f0._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_d0[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_c0,auStack_d0._0_8_ & 0xfffffffffffffffe);
    }
    puVar7 = (uint *)func_0x0099bce0();
    uVar5 = *puVar7;
    param_1 = (byte *)(ulong)uVar5;
    if (iStack_d4 != -1) {
      func_0x0099bd10();
    }
    *puVar7 = uVar5;
code_r0x0040be4d:
    uVar19 = SUB84(puVar7,0);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      return *(long *)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
code_r0x0040c006:
    pbVar22 = param_1 + 1;
code_r0x0040c00a:
    _ZN7android4base12StringPrintfEPKcz(auStack_d0,&UNK_0015b2b7,pbVar22);
    func_0x0032e5a0(pbVar10,auStack_d0);
    if ((auStack_d0[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_c0,auStack_d0._0_8_ & 0xfffffffffffffffe);
    }
    pbVar22 = auStack_f0;
    _ZN7android4base10LogMessageD2Ev();
    *puVar8 = uVar19;
  } while( true );
code_r0x0040c109:
  lVar9 = 0;
  if (puVar23 == (undefined8 *)0x0) {
code_r0x0040c160:
    _ZNSt3__115recursive_mutex6unlockEv(uVar12);
    return lVar9;
  }
  uVar17 = puVar23[1];
  if (uVar17 == uVar13) {
    if (*(uint *)(puVar23 + 2) == uVar5) {
      lVar9 = puVar23[3];
      goto code_r0x0040c160;
    }
  }
  else {
    if ((uRam0000000000a00860 & uVar14) == 0) {
      uVar17 = uVar17 & uVar14;
    }
    else if (uRam0000000000a00860 <= uVar17) {
      if ((uVar17 | uRam0000000000a00860) >> 0x20 == 0) {
        uVar17 = (uVar17 & 0xffffffff) % (uRam0000000000a00860 & 0xffffffff);
      }
      else {
        uVar17 = uVar17 % uRam0000000000a00860;
      }
    }
    lVar9 = 0;
    if (uVar17 != uVar16) goto code_r0x0040c160;
  }
  puVar23 = (undefined8 *)*puVar23;
  goto code_r0x0040c109;
}


