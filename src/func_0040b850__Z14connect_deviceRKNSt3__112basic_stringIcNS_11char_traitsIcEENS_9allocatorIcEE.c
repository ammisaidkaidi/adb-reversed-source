// Function: _Z14connect_deviceRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_
// Address: 0040b850
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _Z14connect_deviceRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_
               (byte *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined *puVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  byte *unaff_R12;
  undefined4 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar21;
  undefined1 auVar22 [16];
  ulong *puStack_120;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [5];
  byte abStack_c3 [3];
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined1 auStack_a8 [16];
  undefined4 *puStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  undefined1 auStack_88 [16];
  undefined1 *puStack_78;
  byte abStack_68 [32];
  byte *pbStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar19 = param_1;
  lVar7 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar7 + 0x10) == '\x01') {
    unaff_R12 = (byte *)_Z19fdevent_get_ambientv();
    lVar7 = _ZN7android4base11GetThreadIdEv();
    if (*(long *)(unaff_R12 + 8) == lVar7) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_88,&UNK_0015b284,0x5a,6,0,0xffffffff);
        uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_88);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00165d45,0xe);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00162e7f,0x29);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0016e934,2);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0015ae05,1);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00183451,0x1c);
        uVar10 = func_0x0032eb30(uVar10,&UNK_0017ed76,0x2c);
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,lVar7);
        uVar10 = func_0x0032eb30(uVar10,&UNK_00165f20,0x1f);
        uVar10 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar10,lVar7);
        func_0x0032eb30(uVar10,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_88);
      } while( true );
    }
  }
  if ((*param_1 & 1) == 0) {
    if (*param_1 >> 1 == 0) goto code_r0x0040baa4;
  }
  else if (*(long *)(param_1 + 8) == 0) {
code_r0x0040baa4:
    if ((*param_2 & 1) == 0) {
      *(byte *)param_2 = 0x1a;
      puVar9 = (uint *)((long)param_2 + 1);
    }
    else {
      param_2[1] = 0xd;
      puVar9 = (uint *)param_2[2];
    }
    pbVar19 = (byte *)((long)puVar9 + 5);
    pbVar19[0] = 0x20;
    pbVar19[1] = 0x61;
    pbVar19[2] = 100;
    pbVar19[3] = 100;
    pbVar19[4] = 0x72;
    pbVar19[5] = 0x65;
    pbVar19[6] = 0x73;
    pbVar19[7] = 0x73;
    puVar9[0] = 0x74706d65;
    puVar9[1] = 0x64612079;
    *(byte *)((long)puVar9 + 0xd) = 0;
    goto code_r0x0040be4d;
  }
  puStack_120 = param_2;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    pbVar19 = (byte *)0x1;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      unaff_R15 = (undefined4 *)func_0x0099bce0();
      uVar17 = *unaff_R15;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_a8,&UNK_0015b284,0x60,1,0,0xffffffff);
      unaff_R12 = (byte *)_ZN7android4base10LogMessage6streamEv(auStack_a8);
      if ((*param_1 & 1) == 0) goto code_r0x0040c006;
      pbVar19 = *(byte **)(param_1 + 0x10);
      goto code_r0x0040c00a;
    }
  }
  do {
    uVar6 = (uint)pbVar19;
    iStack_8c = -1;
    uStack_90 = 0;
    auStack_88 = (undefined1  [16])0x0;
    puStack_78 = (undefined1 *)0x0;
    auStack_a8 = (undefined1  [16])0x0;
    puStack_98 = (undefined4 *)0x0;
    bVar2 = *param_1;
    unaff_R15 = (undefined4 *)(ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      unaff_R15 = *(undefined4 **)(param_1 + 8);
    }
    if (unaff_R15 < (undefined4 *)0x6) {
code_r0x0040b961:
      unaff_R12 = *(byte **)(param_1 + 0x10);
code_r0x0040b97c:
      puStack_b8 = (undefined4 *)0x0;
      uVar12 = 0;
      stack0xffffffffffffff39 = SUB1615((undefined1  [16])0x0,1);
      auStack_c8[0] = ((char)unaff_R15 + '\x04') * '\x02';
code_r0x0040b986:
      pbVar19 = param_1 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar19 = unaff_R12;
      }
      pbVar1 = (byte *)(puStack_b8 + 1);
      bVar21 = (uVar12 & 1) != 0;
      puVar8 = (undefined4 *)(auStack_c8 + 1);
      if (bVar21) {
        puVar8 = puStack_b8;
      }
      *puVar8 = 0x3a706374;
      unaff_R12 = abStack_c3;
      if (bVar21) {
        unaff_R12 = pbVar1;
      }
      func_0x0099bd90(unaff_R12,pbVar19,unaff_R15);
      unaff_R12[(long)unaff_R15] = 0;
      if ((auStack_a8[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
      }
      puStack_98 = puStack_b8;
      auStack_a8._0_8_ = _auStack_c8;
      auStack_a8._8_8_ = puStack_c0;
code_r0x0040b9fd:
    }
    else {
      unaff_R12 = *(byte **)(param_1 + 0x10);
      pbVar19 = unaff_R12;
      if ((bVar2 & 1) == 0) {
        pbVar19 = param_1 + 1;
      }
      if (*(short *)(pbVar19 + 4) != 0x3a6b || *(int *)pbVar19 != 0x636f7376) {
        if (unaff_R15 < (undefined4 *)0x10) goto code_r0x0040b961;
        unaff_R12 = *(byte **)(param_1 + 0x10);
        pbVar19 = param_1 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar19 = unaff_R12;
        }
        auVar22[0] = -(*pbVar19 == 0x6c);
        auVar22[1] = -(pbVar19[1] == 0x6f);
        auVar22[2] = -(pbVar19[2] == 99);
        auVar22[3] = -(pbVar19[3] == 0x61);
        auVar22[4] = -(pbVar19[4] == 0x6c);
        auVar22[5] = -(pbVar19[5] == 0x66);
        auVar22[6] = -(pbVar19[6] == 0x69);
        auVar22[7] = -(pbVar19[7] == 0x6c);
        auVar22[8] = -(pbVar19[8] == 0x65);
        auVar22[9] = -(pbVar19[9] == 0x73);
        auVar22[10] = -(pbVar19[10] == 0x79);
        auVar22[0xb] = -(pbVar19[0xb] == 0x73);
        auVar22[0xc] = -(pbVar19[0xc] == 0x74);
        auVar22[0xd] = -(pbVar19[0xd] == 0x65);
        auVar22[0xe] = -(pbVar19[0xe] == 0x6d);
        auVar22[0xf] = -(pbVar19[0xf] == 0x3a);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x0040bd39;
        _auStack_c8 = (undefined1  [16])0x0;
        puStack_b8 = (undefined4 *)0x0;
        puVar8 = unaff_R15 + 1;
        if (puVar8 < (undefined4 *)0xfffffffffffffff7) {
          if (puVar8 < (undefined4 *)0x17) goto code_r0x0040b97c;
          lVar7 = 0x1a;
          if (((ulong)puVar8 | 7) != 0x17) {
            lVar7 = ((ulong)puVar8 | 7) + 1;
          }
          puStack_b8 = (undefined4 *)_Znwm();
          puStack_c0 = puVar8;
          _auStack_c8 = lVar7 + 1U;
          uVar12 = lVar7 + 1U & 0xffffffff;
          goto code_r0x0040b986;
        }
        func_0x0032e8f0();
        uVar10 = uRam0000000000a00850;
        _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
        lVar7 = 0;
        if ((uRam0000000000a00860 == 0) || (lRam0000000000a00870 == 0)) goto code_r0x0040c160;
        uVar11 = (ulong)(int)uVar6;
        uVar12 = uRam0000000000a00860 - 1;
        if ((uRam0000000000a00860 & uVar12) == 0) {
          uVar14 = uVar12 & uVar11;
        }
        else {
          uVar14 = uVar11;
          if (uRam0000000000a00860 <= uVar11) {
            if ((uVar11 | uRam0000000000a00860) >> 0x20 == 0) {
              uVar14 = (ulong)uVar6 % (uRam0000000000a00860 & 0xffffffff);
            }
            else {
              uVar14 = uVar11 % uRam0000000000a00860;
            }
          }
        }
        puVar20 = *(undefined8 **)(lRam0000000000a00858 + uVar14 * 8);
        if (puVar20 == (undefined8 *)0x0) {
          lVar7 = 0;
          goto code_r0x0040c160;
        }
        puVar20 = (undefined8 *)*puVar20;
        break;
      }
code_r0x0040bd39:
      if (auStack_a8 != param_1) {
        if ((bVar2 & 1) != 0) {
          func_0x0032e990(auStack_a8,unaff_R12);
          goto code_r0x0040ba05;
        }
        puStack_98 = *(undefined4 **)(param_1 + 0x10);
        auStack_a8._0_8_ = *(undefined8 *)param_1;
        auStack_a8._8_8_ = *(undefined8 *)(param_1 + 8);
        goto code_r0x0040b9fd;
      }
    }
code_r0x0040ba05:
    bVar21 = (auStack_a8[0] & 1) != 0;
    puVar8 = (undefined4 *)(auStack_a8 + 1);
    if (bVar21) {
      puVar8 = puStack_98;
    }
    uVar12 = (ulong)(auStack_a8[0] >> 1);
    if (bVar21) {
      uVar12 = auStack_a8._8_8_;
    }
    _Z19socket_spec_connectPN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__117basic_string_viewIcNS5_11char_traitsIcEEEEPiPNS5_12basic_stringIcS8_NS5_9allocatorIcEEEESF_
              (&iStack_8c,puVar8,uVar12,&uStack_90,auStack_88,puStack_120);
    if (iStack_8c != -1) {
      _auStack_c8 = (undefined1  [16])0x0;
      puStack_b8 = (undefined4 *)0x0;
      if ((auStack_a8[0] & 1) == 0) {
        puStack_b8 = puStack_98;
        _auStack_c8 = auStack_a8;
        iVar16 = iStack_8c;
      }
      else {
        func_0x00330340(auStack_c8,puStack_98,auStack_a8._8_8_);
        iVar16 = iStack_8c;
      }
      iStack_cc = 0;
      iStack_d0 = -1;
      iStack_8c = -1;
      puVar8 = (undefined4 *)func_0x0099bce0();
      *puVar8 = *puVar8;
      iStack_d0 = iVar16;
      if ((auStack_88[0] & 1) == 0) {
        puStack_d8 = puStack_78;
        uStack_e8 = auStack_88._0_8_;
        uStack_e0 = auStack_88._8_8_;
      }
      else {
        func_0x00330340(&uStack_e8,puStack_78,auStack_88._8_8_);
      }
      uVar17 = uStack_90;
      puVar4 = puStack_b8;
      uVar10 = _auStack_c8;
      puVar3 = puStack_c0;
      _auStack_c8 = ZEXT816(0);
      puStack_b8 = (undefined4 *)0x0;
      lVar7 = 0x20;
      pbStack_48 = (byte *)_Znwm(0x20);
      *(undefined **)pbStack_48 = &UNK_0099f278;
      *(undefined8 *)(pbStack_48 + 8) = uVar10;
      *(undefined4 **)(pbStack_48 + 0x10) = puVar3;
      *(undefined4 **)(pbStack_48 + 0x18) = puVar4;
      unaff_R12 = abStack_68;
      uVar6 = _Z25register_socket_transportN7android4base14unique_fd_implINS0_13DefaultCloserEEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEibNS4_8functionIF15ReconnectResultP10atransportEEEbPi
                        (&iStack_d0,&uStack_e8,uVar17,0,unaff_R12,0,&iStack_cc);
      unaff_R15 = (undefined4 *)(ulong)uVar6;
      if ((pbStack_48 == unaff_R12) || (lVar7 = 0x28, pbStack_48 != (byte *)0x0)) {
        (**(code **)(*(long *)pbStack_48 + lVar7))();
      }
      if ((uStack_e8 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_d8,uStack_e8 & 0xfffffffffffffffe);
      }
      uVar17 = *puVar8;
      if (iStack_d0 != -1) {
        func_0x0099bd10();
      }
      iStack_d0 = -1;
      *puVar8 = uVar17;
      if ((char)uVar6 == '\0') {
        puVar13 = auStack_88 + 1;
        if (iStack_cc == 1) {
          if ((auStack_88[0] & 1) != 0) {
            puVar13 = puStack_78;
          }
          puVar18 = &UNK_0015b2d4;
        }
        else if (iStack_cc == 0x72) {
          if ((auStack_88[0] & 1) != 0) {
            puVar13 = puStack_78;
          }
          puVar18 = &UNK_0016b03d;
        }
        else {
          if ((auStack_88[0] & 1) != 0) {
            puVar13 = puStack_78;
          }
          puVar18 = &UNK_0017ef46;
        }
      }
      else {
        puVar13 = puStack_78;
        if ((auStack_88[0] & 1) == 0) {
          puVar13 = auStack_88 + 1;
        }
        puVar18 = &UNK_0017727e;
      }
      _ZN7android4base12StringPrintfEPKcz(&uStack_100,puVar18,puVar13);
      if ((*puStack_120 & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_120[2],*puStack_120 & 0xfffffffffffffffe);
      }
      puStack_120[2] = uStack_f0;
      *puStack_120 = uStack_100;
      puStack_120[1] = uStack_f8;
      if ((auStack_c8[0] & 1) != 0) {
        _ZdaPvSt11align_val_t(puStack_b8,_auStack_c8 & 0xfffffffffffffffe);
      }
    }
    if ((auStack_a8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_88[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_78,auStack_88._0_8_ & 0xfffffffffffffffe);
    }
    puVar9 = (uint *)func_0x0099bce0();
    uVar6 = *puVar9;
    param_1 = (byte *)(ulong)uVar6;
    if (iStack_8c != -1) {
      func_0x0099bd10();
    }
    *puVar9 = uVar6;
code_r0x0040be4d:
    uVar17 = SUB84(puVar9,0);
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return *(long *)(in_FS_OFFSET + 0x28);
    }
    func_0x0099bd00();
code_r0x0040c006:
    pbVar19 = param_1 + 1;
code_r0x0040c00a:
    _ZN7android4base12StringPrintfEPKcz(auStack_88,&UNK_0015b2b7,pbVar19);
    func_0x0032e5a0(unaff_R12,auStack_88);
    if ((auStack_88[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(puStack_78,auStack_88._0_8_ & 0xfffffffffffffffe);
    }
    pbVar19 = auStack_a8;
    _ZN7android4base10LogMessageD2Ev();
    *unaff_R15 = uVar17;
  } while( true );
code_r0x0040c109:
  lVar7 = 0;
  if (puVar20 == (undefined8 *)0x0) {
code_r0x0040c160:
    _ZNSt3__115recursive_mutex6unlockEv(uVar10);
    return lVar7;
  }
  uVar15 = puVar20[1];
  if (uVar15 == uVar11) {
    if (*(uint *)(puVar20 + 2) == uVar6) {
      lVar7 = puVar20[3];
      goto code_r0x0040c160;
    }
  }
  else {
    if ((uRam0000000000a00860 & uVar12) == 0) {
      uVar15 = uVar15 & uVar12;
    }
    else if (uRam0000000000a00860 <= uVar15) {
      if ((uVar15 | uRam0000000000a00860) >> 0x20 == 0) {
        uVar15 = (uVar15 & 0xffffffff) % (uRam0000000000a00860 & 0xffffffff);
      }
      else {
        uVar15 = uVar15 % uRam0000000000a00860;
      }
    }
    lVar7 = 0;
    if (uVar15 != uVar14) goto code_r0x0040c160;
  }
  puVar20 = (undefined8 *)*puVar20;
  goto code_r0x0040c109;
}


