// Function: _Z16send_tls_requestP10atransport
// Address: 003ca570
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z16send_tls_requestP10atransport(undefined8 param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  ulong unaff_R12;
  ulong unaff_R13;
  long lVar20;
  byte *pbVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  byte bStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined5 uStack_15d;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  long lStack_138;
  byte bStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined5 uStack_125;
  undefined8 uStack_118;
  byte bStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined5 uStack_10d;
  byte *pbStack_108;
  long lStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  long lStack_d8;
  undefined8 *puStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  ulong uStack_88;
  byte *pbStack_80;
  long lStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    puStack_40 = &UNK_003ca600;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') {
      puStack_40 = &UNK_003ca609;
      puVar11 = (uint *)func_0x0099bce0();
      uVar5 = *puVar11;
      unaff_R12 = (ulong)uVar5;
      puStack_40 = &UNK_003ca635;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_38,&UNK_00181a61,0x13f,1,0,0xffffffff);
      puStack_40 = &UNK_003ca63d;
      uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_38);
      puStack_40 = &UNK_003ca651;
      func_0x0032eb30(uVar18,&UNK_0016133d,0x18);
      puStack_40 = &UNK_003ca659;
      _ZN7android4base10LogMessageD2Ev(auStack_38);
      *puVar11 = uVar5;
    }
  }
  puStack_40 = &UNK_003ca5b1;
  puVar9 = (undefined8 *)_Znwm(0x38);
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  *puVar9 = 0x1000000534c5453;
  puStack_40 = &UNK_003ca5d8;
  _Z11send_packetP7apacketP10atransport(puVar9,param_1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  puStack_40 = &UNK_003ca666;
  func_0x0099bd00();
  lStack_70 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_68 = param_1;
  uStack_60 = unaff_R12;
  puStack_40 = &stack0xfffffffffffffff8;
  if ((((byte)adb_trace_mask & 1) != 0) &&
     (puStack_40 = &stack0xfffffffffffffff8, (int)adb_trace_severity._0_4_ < 2)) {
    pcStack_a8 = (code *)&UNK_003ca7bb;
    puStack_40 = &stack0xfffffffffffffff8;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') {
      pcStack_a8 = (code *)&UNK_003ca7c8;
      puVar12 = (undefined4 *)func_0x0099bce0();
      uVar8 = *puVar12;
      pcStack_a8 = (code *)&UNK_003ca7f4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_90,&UNK_00181a61,0x148,1,0,0xffffffff);
      pcStack_a8 = (code *)&UNK_003ca7fc;
      uVar18 = _ZN7android4base10LogMessage6streamEv(&uStack_90);
      pcStack_a8 = (code *)&UNK_003ca810;
      func_0x0032eb30(uVar18,&UNK_00164389,0x14);
      pcStack_a8 = (code *)&UNK_003ca818;
      _ZN7android4base10LogMessageD2Ev(&uStack_90);
      *puVar12 = uVar8;
    }
  }
  pcStack_a8 = (code *)&UNK_003ca6b7;
  pbVar10 = (byte *)_Znwm(0x38);
  pbVar10[0xc] = 0;
  pbVar10[0xd] = 0;
  pbVar10[0xe] = 0;
  pbVar10[0xf] = 0;
  pbVar10[0x10] = 0;
  pbVar10[0x11] = 0;
  pbVar10[0x12] = 0;
  pbVar10[0x13] = 0;
  pbVar10[0x14] = 0;
  pbVar10[0x15] = 0;
  pbVar10[0x16] = 0;
  pbVar10[0x17] = 0;
  pbVar10[0] = 0x43;
  pbVar10[1] = 0x4e;
  pbVar10[2] = 0x58;
  pbVar10[3] = 0x4e;
  pbVar10[4] = 1;
  pbVar10[5] = 0;
  pbVar10[6] = 0;
  pbVar10[7] = 1;
  pcStack_a8 = (code *)&UNK_003ca6de;
  uVar8 = _ZNK10atransport15get_max_payloadEv(puVar9);
  *(undefined4 *)(pbVar10 + 8) = uVar8;
  uStack_90 = 0;
  uStack_88 = 0;
  pbStack_80 = (byte *)0x0;
  pcStack_a8 = (code *)&UNK_003ca6fa;
  _Z21get_connection_stringv(&uStack_90);
  if (((uStack_90 & 1) != 0) && (0x1000 < uStack_88)) {
    pcStack_a8 = (code *)&UNK_003ca716;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar7 != '\0') {
      pcStack_a8 = (code *)&UNK_003ca825;
      puVar11 = (uint *)func_0x0099bce0();
      uVar5 = *puVar11;
      unaff_R13 = (ulong)uVar5;
      pcStack_a8 = (code *)&UNK_003ca851;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_98,&UNK_00181a61,0x155,6,0,0xffffffff);
      pcStack_a8 = (code *)&UNK_003ca859;
      uVar18 = _ZN7android4base10LogMessage6streamEv(auStack_98);
      pcStack_a8 = (code *)&UNK_003ca86d;
      uVar18 = func_0x0032eb30(uVar18,&UNK_0018acbf,0x28);
      uVar13 = uStack_88;
      if ((uStack_90 & 1) == 0) {
        uVar13 = uStack_90 >> 1 & 0x7f;
      }
      pcStack_a8 = (code *)&UNK_003ca887;
      uVar18 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar18,uVar13);
      pcStack_a8 = (code *)&UNK_003ca89b;
      func_0x0032eb30(uVar18,&UNK_001692c7,1);
      pcStack_a8 = (code *)&UNK_003ca8a3;
      _ZN7android4base10LogMessageD2Ev(auStack_98);
      *puVar11 = uVar5;
    }
  }
  pbVar15 = (byte *)((long)&uStack_90 + 1);
  uVar13 = uStack_90 >> 1 & 0x7f;
  if ((uStack_90 & 1) != 0) {
    pbVar15 = pbStack_80;
    uVar13 = uStack_88;
  }
  pbVar10[0x28] = 0;
  pbVar10[0x29] = 0;
  pbVar10[0x2a] = 0;
  pbVar10[0x2b] = 0;
  pbVar10[0x2c] = 0;
  pbVar10[0x2d] = 0;
  pbVar10[0x2e] = 0;
  pbVar10[0x2f] = 0;
  pbVar10[0x30] = 0;
  pbVar10[0x31] = 0;
  pbVar10[0x32] = 0;
  pbVar10[0x33] = 0;
  pbVar10[0x34] = 0;
  pbVar10[0x35] = 0;
  pbVar10[0x36] = 0;
  pbVar10[0x37] = 0;
  pbVar10[0x18] = 0;
  pbVar10[0x19] = 0;
  pbVar10[0x1a] = 0;
  pbVar10[0x1b] = 0;
  pbVar10[0x1c] = 0;
  pbVar10[0x1d] = 0;
  pbVar10[0x1e] = 0;
  pbVar10[0x1f] = 0;
  pbVar10[0x20] = 0;
  pbVar10[0x21] = 0;
  pbVar10[0x22] = 0;
  pbVar10[0x23] = 0;
  pbVar10[0x24] = 0;
  pbVar10[0x25] = 0;
  pbVar10[0x26] = 0;
  pbVar10[0x27] = 0;
  pcStack_a8 = (code *)&UNK_003ca754;
  _ZN5Block8allocateEm(pbVar10 + 0x18,uVar13);
  pcStack_a8 = (code *)&UNK_003ca763;
  func_0x0099bd90(*(undefined8 *)(pbVar10 + 0x18),pbVar15,uVar13);
  *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(pbVar10 + 0x28);
  pcStack_a8 = (code *)&UNK_003ca776;
  puVar16 = puVar9;
  pbVar14 = pbVar10;
  _Z11send_packetP7apacketP10atransport();
  if ((uStack_90 & 1) != 0) {
    puVar16 = (undefined8 *)(uStack_90 & 0xfffffffffffffffe);
    pcStack_a8 = (code *)&UNK_003ca78d;
    pbVar14 = pbStack_80;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_70) {
    return;
  }
  pcStack_a8 = 
  _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport;
  func_0x0099bd00();
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_d0 = puVar9;
  pbStack_c8 = pbVar15;
  uStack_c0 = unaff_R13;
  pbStack_b8 = pbVar10;
  uStack_b0 = uVar13;
  pcStack_a8 = (code *)&puStack_40;
  if (((((byte)adb_trace_mask & 1) != 0) &&
      (pcStack_a8 = (code *)&puStack_40, (int)adb_trace_severity._0_4_ < 2)) &&
     (pcStack_a8 = (code *)&puStack_40,
     cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
    puVar12 = (undefined4 *)func_0x0099bce0();
    uVar8 = *puVar12;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_110,&UNK_00181a61,0x160,1,0,0xffffffff);
    uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
    if ((*pbVar14 & 1) == 0) {
      pbVar10 = pbVar14 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar14 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(auStack_f8,&UNK_0015c79c,pbVar10);
    func_0x0032e5a0(uVar18,auStack_f8);
    if ((auStack_f8[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_e8,auStack_f8._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&bStack_110);
    *puVar12 = uVar8;
  }
  auStack_f8 = (undefined1  [16])0x0;
  lStack_e8 = 0;
  bStack_110 = 2;
  uStack_10f = 0x3a;
  uStack_10e = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_f8,pbVar14,&bStack_110);
  if ((bStack_110 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_100,
               CONCAT53(uStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,bStack_110))) &
               0xfffffffffffffffe);
  }
  bStack_110 = 0;
  uStack_10f = 0;
  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (puVar16,&bStack_110);
  if ((bStack_110 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_100,
               CONCAT53(uStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,bStack_110))) &
               0xfffffffffffffffe);
  }
  if (2 < (ulong)(((long)(auStack_f8._8_8_ - auStack_f8._0_8_) >> 3) * -0x5555555555555555)) {
    bStack_128 = 2;
    uStack_127 = 0x3b;
    uStack_126 = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (&bStack_110,(byte *)(auStack_f8._0_8_ + 0x30),&bStack_128);
    pbVar15 = pbStack_108;
    pbVar10 = (byte *)CONCAT53(uStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,bStack_110)));
    if (pbVar10 != pbStack_108) {
      pauVar1 = (undefined1 (*) [16])(puVar16 + 0xe);
      pauVar2 = (undefined1 (*) [16])(puVar16 + 0xb);
      pauVar3 = (undefined1 (*) [16])(puVar16 + 8);
      do {
        if ((*pbVar10 & 1) == 0) {
          if (*pbVar10 >> 1 != 0) goto code_r0x003caa37;
        }
        else if (*(long *)(pbVar10 + 8) != 0) {
code_r0x003caa37:
          auStack_148 = (undefined1  [16])0x0;
          lStack_138 = 0;
          bStack_160 = 2;
          uStack_15f = 0x3d;
          uStack_15e = 0;
          _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                    (auStack_148,pbVar10,&bStack_160);
          if ((bStack_160 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_150,
                       CONCAT53(uStack_15d,CONCAT12(uStack_15e,CONCAT11(uStack_15f,bStack_160))) &
                       0xfffffffffffffffe);
          }
          pbVar14 = (byte *)auStack_148._0_8_;
          if (auStack_148._8_8_ - auStack_148._0_8_ == 0x30) {
            bVar4 = *(byte *)auStack_148._0_8_;
            if ((bVar4 & 1) == 0) {
              uVar13 = (ulong)(bVar4 >> 1);
            }
            else {
              uVar13 = *(ulong *)(auStack_148._0_8_ + 8);
            }
            if (uVar13 - 8 < 10) {
              pauVar19 = (undefined1 (*) [16])(auStack_148._0_8_ + 0x18);
              switch(uVar13) {
              case 8:
                if ((bVar4 & 1) == 0) {
                  pbVar14 = (byte *)(auStack_148._0_8_ + 1);
                }
                else {
                  pbVar14 = *(byte **)(auStack_148._0_8_ + 0x10);
                }
                if (*(long *)pbVar14 == 0x7365727574616566) {
                  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (puVar16);
                }
                break;
              case 0xf:
                if ((bVar4 & 1) == 0) {
                  pbVar14 = (byte *)(auStack_148._0_8_ + 1);
                }
                else {
                  pbVar14 = *(byte **)(auStack_148._0_8_ + 0x10);
                }
                if (pauVar3 != pauVar19 &&
                    (*(long *)(pbVar14 + 7) == 0x656d616e2e746375 &&
                    *(long *)pbVar14 == 0x75646f72702e6f72)) {
                  bVar4 = (*pauVar19)[0];
                  if (((*pauVar3)[0] & 1) == 0) {
                    if ((bVar4 & 1) == 0) {
                      puVar16[10] = *(undefined8 *)(auStack_148._0_8_ + 0x28);
                      *pauVar3 = *pauVar19;
                    }
                    else {
                      uVar18 = *(undefined8 *)(auStack_148._0_8_ + 0x20);
                      uVar17 = *(undefined8 *)(auStack_148._0_8_ + 0x28);
                      pauVar19 = pauVar3;
code_r0x003cacfa:
                      func_0x0032e990(pauVar19,uVar17,uVar18);
                    }
                  }
                  else {
                    bVar22 = (bVar4 & 1) != 0;
                    pbVar14 = (byte *)(auStack_148._0_8_ + 0x19);
                    if (bVar22) {
                      pbVar14 = *(byte **)(auStack_148._0_8_ + 0x28);
                    }
                    uVar13 = (ulong)(bVar4 >> 1);
                    if (bVar22) {
                      uVar13 = *(ulong *)(auStack_148._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar3,pbVar14,uVar13);
                  }
                }
                break;
              case 0x10:
                if ((bVar4 & 1) == 0) {
                  pbVar14 = (byte *)(auStack_148._0_8_ + 1);
                }
                else {
                  pbVar14 = *(byte **)(auStack_148._0_8_ + 0x10);
                }
                auVar23[0] = -(*pbVar14 == 0x72);
                auVar23[1] = -(pbVar14[1] == 0x6f);
                auVar23[2] = -(pbVar14[2] == 0x2e);
                auVar23[3] = -(pbVar14[3] == 0x70);
                auVar23[4] = -(pbVar14[4] == 0x72);
                auVar23[5] = -(pbVar14[5] == 0x6f);
                auVar23[6] = -(pbVar14[6] == 100);
                auVar23[7] = -(pbVar14[7] == 0x75);
                auVar23[8] = -(pbVar14[8] == 99);
                auVar23[9] = -(pbVar14[9] == 0x74);
                auVar23[10] = -(pbVar14[10] == 0x2e);
                auVar23[0xb] = -(pbVar14[0xb] == 0x6d);
                auVar23[0xc] = -(pbVar14[0xc] == 0x6f);
                auVar23[0xd] = -(pbVar14[0xd] == 100);
                auVar23[0xe] = -(pbVar14[0xe] == 0x65);
                auVar23[0xf] = -(pbVar14[0xf] == 0x6c);
                if (pauVar2 != pauVar19 &&
                    (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar19)[0];
                  if (((*pauVar2)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar18 = *(undefined8 *)(auStack_148._0_8_ + 0x20);
                      uVar17 = *(undefined8 *)(auStack_148._0_8_ + 0x28);
                      pauVar19 = pauVar2;
                      goto code_r0x003cacfa;
                    }
                    puVar16[0xd] = *(undefined8 *)(auStack_148._0_8_ + 0x28);
                    *pauVar2 = *pauVar19;
                  }
                  else {
                    bVar22 = (bVar4 & 1) != 0;
                    pbVar14 = (byte *)(auStack_148._0_8_ + 0x19);
                    if (bVar22) {
                      pbVar14 = *(byte **)(auStack_148._0_8_ + 0x28);
                    }
                    uVar13 = (ulong)(bVar4 >> 1);
                    if (bVar22) {
                      uVar13 = *(ulong *)(auStack_148._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar2,pbVar14,uVar13);
                  }
                }
                break;
              case 0x11:
                if ((bVar4 & 1) == 0) {
                  pbVar14 = (byte *)(auStack_148._0_8_ + 1);
                }
                else {
                  pbVar14 = *(byte **)(auStack_148._0_8_ + 0x10);
                }
                auVar24[0] = -(*pbVar14 == 0x72);
                auVar24[1] = -(pbVar14[1] == 0x6f);
                auVar24[2] = -(pbVar14[2] == 0x2e);
                auVar24[3] = -(pbVar14[3] == 0x70);
                auVar24[4] = -(pbVar14[4] == 0x72);
                auVar24[5] = -(pbVar14[5] == 0x6f);
                auVar24[6] = -(pbVar14[6] == 100);
                auVar24[7] = -(pbVar14[7] == 0x75);
                auVar24[8] = -(pbVar14[8] == 99);
                auVar24[9] = -(pbVar14[9] == 0x74);
                auVar24[10] = -(pbVar14[10] == 0x2e);
                auVar24[0xb] = -(pbVar14[0xb] == 100);
                auVar24[0xc] = -(pbVar14[0xc] == 0x65);
                auVar24[0xd] = -(pbVar14[0xd] == 0x76);
                auVar24[0xe] = -(pbVar14[0xe] == 0x69);
                auVar24[0xf] = -(pbVar14[0xf] == 99);
                auVar25[0] = -(pbVar14[0x10] == 0x65);
                auVar25[1] = 0xff;
                auVar25[2] = 0xff;
                auVar25[3] = 0xff;
                auVar25[4] = 0xff;
                auVar25[5] = 0xff;
                auVar25[6] = 0xff;
                auVar25[7] = 0xff;
                auVar25[8] = 0xff;
                auVar25[9] = 0xff;
                auVar25[10] = 0xff;
                auVar25[0xb] = 0xff;
                auVar25[0xc] = 0xff;
                auVar25[0xd] = 0xff;
                auVar25[0xe] = 0xff;
                auVar25[0xf] = 0xff;
                auVar25 = auVar25 & auVar24;
                if (pauVar1 != pauVar19 &&
                    (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar19)[0];
                  if (((*pauVar1)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar18 = *(undefined8 *)(auStack_148._0_8_ + 0x20);
                      uVar17 = *(undefined8 *)(auStack_148._0_8_ + 0x28);
                      pauVar19 = pauVar1;
                      goto code_r0x003cacfa;
                    }
                    puVar16[0x10] = *(undefined8 *)(auStack_148._0_8_ + 0x28);
                    *pauVar1 = *pauVar19;
                  }
                  else {
                    bVar22 = (bVar4 & 1) != 0;
                    pbVar14 = (byte *)(auStack_148._0_8_ + 0x19);
                    if (bVar22) {
                      pbVar14 = *(byte **)(auStack_148._0_8_ + 0x28);
                    }
                    uVar13 = (ulong)(bVar4 >> 1);
                    if (bVar22) {
                      uVar13 = *(ulong *)(auStack_148._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar1,pbVar14,uVar13);
                  }
                }
              }
            }
            pbVar14 = (byte *)auStack_148._0_8_;
          }
          if (pbVar14 != (byte *)0x0) {
            pbVar6 = pbVar14;
            for (pbVar21 = (byte *)auStack_148._8_8_; pbVar14 != pbVar21; pbVar21 = pbVar21 + -0x18)
            {
              if ((pbVar21[-0x18] & 1) != 0) {
                _ZdaPvSt11align_val_t
                          (*(undefined8 *)(pbVar21 + -8),
                           *(ulong *)(pbVar21 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar6 = (byte *)auStack_148._0_8_;
            }
            auStack_148._8_8_ = pbVar14;
            _ZdaPvSt11align_val_t(pbVar6,lStack_138 - (long)pbVar6);
          }
        }
        pbVar10 = pbVar10 + 0x18;
      } while (pbVar10 != pbVar15);
      pbVar10 = (byte *)CONCAT53(uStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,bStack_110)));
    }
    if (pbVar10 != (byte *)0x0) {
      pbVar15 = pbStack_108;
      pbVar14 = pbVar10;
      if (pbVar10 != pbStack_108) {
        do {
          if ((pbVar15[-0x18] & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(pbVar15 + -8),
                       *(ulong *)(pbVar15 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar15 = pbVar15 + -0x18;
        } while (pbVar15 != pbVar10);
        pbVar14 = (byte *)CONCAT53(uStack_10d,CONCAT12(uStack_10e,CONCAT11(uStack_10f,bStack_110)));
      }
      pbStack_108 = pbVar10;
      _ZdaPvSt11align_val_t(pbVar14,lStack_100 - (long)pbVar14);
    }
    if ((bStack_128 & 1) != 0) {
      _ZdaPvSt11align_val_t
                (uStack_118,
                 CONCAT53(uStack_125,CONCAT12(uStack_126,CONCAT11(uStack_127,bStack_128))) &
                 0xfffffffffffffffe);
    }
  }
  bVar4 = *(byte *)auStack_f8._0_8_;
  if ((bVar4 & 1) == 0) {
    uVar13 = (ulong)(bVar4 >> 1);
    if (uVar13 != 6) goto code_r0x003cadf2;
code_r0x003cae19:
    if ((bVar4 & 1) == 0) {
      pbVar10 = (byte *)(auStack_f8._0_8_ + 1);
    }
    else {
      pbVar10 = *(byte **)(auStack_f8._0_8_ + 0x10);
    }
    if (*(short *)(pbVar10 + 4) == 0x6563 && *(int *)pbVar10 == 0x69766564) {
      uVar18 = 7;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar7 == '\0') {
          uVar18 = 7;
        }
        else {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar8 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_110,&UNK_00181a61,0x186,1,0,0xffffffff);
          uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
          func_0x0032eb30(uVar18,&UNK_00173ed4,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_110);
          *puVar12 = uVar8;
          uVar18 = 7;
        }
      }
      goto code_r0x003cafc3;
    }
    if ((bVar4 & 1) == 0) {
      pbVar10 = (byte *)(auStack_f8._0_8_ + 1);
    }
    else {
      pbVar10 = *(byte **)(auStack_f8._0_8_ + 0x10);
    }
    if (*(short *)(pbVar10 + 4) == 0x6575 && *(int *)pbVar10 == 0x63736572) {
      uVar18 = 0xb;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar7 == '\0') {
          uVar18 = 0xb;
        }
        else {
          puVar12 = (undefined4 *)func_0x0099bce0();
          uVar8 = *puVar12;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_110,&UNK_00181a61,399,1,0,0xffffffff);
          uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
          func_0x0032eb30(uVar18,&UNK_0015959b,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_110);
          *puVar12 = uVar8;
          uVar18 = 0xb;
        }
      }
      goto code_r0x003cafc3;
    }
  }
  else {
    uVar13 = *(ulong *)(auStack_f8._0_8_ + 8);
    if (uVar13 == 6) goto code_r0x003cae19;
code_r0x003cadf2:
    if (uVar13 == 8) {
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)(auStack_f8._0_8_ + 1);
      }
      else {
        pbVar10 = *(byte **)(auStack_f8._0_8_ + 0x10);
      }
      if (*(long *)pbVar10 == 0x797265766f636572) {
        uVar18 = 9;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar18 = 9;
          }
          else {
            puVar12 = (undefined4 *)func_0x0099bce0();
            uVar8 = *puVar12;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_110,&UNK_00181a61,0x189,1,0,0xffffffff);
            uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
            func_0x0032eb30(uVar18,&UNK_0017d582,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_110);
            *puVar12 = uVar8;
            uVar18 = 9;
          }
        }
        goto code_r0x003cafc3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)(auStack_f8._0_8_ + 1);
      }
      else {
        pbVar10 = *(byte **)(auStack_f8._0_8_ + 0x10);
      }
      if (*(long *)pbVar10 == 0x64616f6c65646973) {
        uVar18 = 10;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar18 = 10;
          }
          else {
            puVar12 = (undefined4 *)func_0x0099bce0();
            uVar8 = *puVar12;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_110,&UNK_00181a61,0x18c,1,0,0xffffffff);
            uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
            func_0x0032eb30(uVar18,&UNK_00162dab,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_110);
            *puVar12 = uVar8;
            uVar18 = 10;
          }
        }
        goto code_r0x003cafc3;
      }
    }
    else if (uVar13 == 10) {
      if ((bVar4 & 1) == 0) {
        pbVar10 = (byte *)(auStack_f8._0_8_ + 1);
      }
      else {
        pbVar10 = *(byte **)(auStack_f8._0_8_ + 0x10);
      }
      if (*(short *)(pbVar10 + 8) == 0x7265 && *(long *)pbVar10 == 0x64616f6c746f6f62) {
        uVar18 = 6;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar18 = 6;
          }
          else {
            puVar12 = (undefined4 *)func_0x0099bce0();
            uVar8 = *puVar12;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_110,&UNK_00181a61,0x183,1,0,0xffffffff);
            uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
            func_0x0032eb30(uVar18,&UNK_001679a3,0x29);
            _ZN7android4base10LogMessageD2Ev(&bStack_110);
            *puVar12 = uVar8;
            uVar18 = 6;
          }
        }
        goto code_r0x003cafc3;
      }
    }
  }
  uVar18 = 8;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') goto code_r0x003cb105;
    goto code_r0x003cb0f6;
  }
code_r0x003cafc3:
  while( true ) {
    _ZN10atransport18SetConnectionStateE15ConnectionState(puVar16,uVar18);
    uVar18 = auStack_f8._0_8_;
    if (auStack_f8._0_8_ != 0) {
      for (lVar20 = auStack_f8._8_8_; uVar18 != lVar20; lVar20 = lVar20 + -0x18) {
        if ((*(byte *)(lVar20 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar20 + -8),*(ulong *)(lVar20 + -0x18) & 0xfffffffffffffffe);
        }
      }
      auStack_f8._8_8_ = uVar18;
      _ZdaPvSt11align_val_t(auStack_f8._0_8_,lStack_e8 - auStack_f8._0_8_);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d8) break;
    func_0x0099bd00();
code_r0x003cb105:
    puVar12 = (undefined4 *)func_0x0099bce0();
    uVar8 = *puVar12;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_110,&UNK_00181a61,0x192,1,0,0xffffffff);
    uVar18 = _ZN7android4base10LogMessage6streamEv(&bStack_110);
    func_0x0032eb30(uVar18,&UNK_00170562,0x23);
    _ZN7android4base10LogMessageD2Ev(&bStack_110);
    *puVar12 = uVar8;
code_r0x003cb0f6:
    uVar18 = 8;
  }
  return;
}


