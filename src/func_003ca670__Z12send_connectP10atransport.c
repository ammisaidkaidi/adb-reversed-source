// Function: _Z12send_connectP10atransport
// Address: 003ca670
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z12send_connectP10atransport(ulong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 (*pauVar18) [16];
  ulong unaff_R13;
  long lVar19;
  byte *pbVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte bStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined5 uStack_125;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  byte bStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined5 uStack_ed;
  undefined8 uStack_e0;
  byte bStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined5 uStack_d5;
  byte *pbStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a0;
  ulong uStack_98;
  byte *pbStack_90;
  ulong uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  code *pcStack_70;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  ulong uStack_50;
  byte *pbStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    pcStack_70 = (code *)&UNK_003ca7bb;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') {
      pcStack_70 = (code *)&UNK_003ca7c8;
      puVar11 = (undefined4 *)func_0x0099bce0();
      uVar8 = *puVar11;
      pcStack_70 = (code *)&UNK_003ca7f4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&uStack_58,&UNK_00181a61,0x148,1,0,0xffffffff);
      pcStack_70 = (code *)&UNK_003ca7fc;
      uVar17 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
      pcStack_70 = (code *)&UNK_003ca810;
      func_0x0032eb30(uVar17,&UNK_00164389,0x14);
      pcStack_70 = (code *)&UNK_003ca818;
      _ZN7android4base10LogMessageD2Ev(&uStack_58);
      *puVar11 = uVar8;
    }
  }
  pcStack_70 = (code *)&UNK_003ca6b7;
  pbVar9 = (byte *)_Znwm(0x38);
  pbVar9[0xc] = 0;
  pbVar9[0xd] = 0;
  pbVar9[0xe] = 0;
  pbVar9[0xf] = 0;
  pbVar9[0x10] = 0;
  pbVar9[0x11] = 0;
  pbVar9[0x12] = 0;
  pbVar9[0x13] = 0;
  pbVar9[0x14] = 0;
  pbVar9[0x15] = 0;
  pbVar9[0x16] = 0;
  pbVar9[0x17] = 0;
  pbVar9[0] = 0x43;
  pbVar9[1] = 0x4e;
  pbVar9[2] = 0x58;
  pbVar9[3] = 0x4e;
  pbVar9[4] = 1;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 1;
  pcStack_70 = (code *)&UNK_003ca6de;
  uVar8 = _ZNK10atransport15get_max_payloadEv(param_1);
  *(undefined4 *)(pbVar9 + 8) = uVar8;
  uStack_58 = 0;
  uStack_50 = 0;
  pbStack_48 = (byte *)0x0;
  pcStack_70 = (code *)&UNK_003ca6fa;
  _Z21get_connection_stringv(&uStack_58);
  if (((uStack_58 & 1) != 0) && (0x1000 < uStack_50)) {
    pcStack_70 = (code *)&UNK_003ca716;
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
    if (cVar7 != '\0') {
      pcStack_70 = (code *)&UNK_003ca825;
      puVar10 = (uint *)func_0x0099bce0();
      uVar5 = *puVar10;
      unaff_R13 = (ulong)uVar5;
      pcStack_70 = (code *)&UNK_003ca851;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_60,&UNK_00181a61,0x155,6,0,0xffffffff);
      pcStack_70 = (code *)&UNK_003ca859;
      uVar17 = _ZN7android4base10LogMessage6streamEv(auStack_60);
      pcStack_70 = (code *)&UNK_003ca86d;
      uVar17 = func_0x0032eb30(uVar17,&UNK_0018acbf,0x28);
      uVar12 = uStack_50;
      if ((uStack_58 & 1) == 0) {
        uVar12 = uStack_58 >> 1 & 0x7f;
      }
      pcStack_70 = (code *)&UNK_003ca887;
      uVar17 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar17,uVar12);
      pcStack_70 = (code *)&UNK_003ca89b;
      func_0x0032eb30(uVar17,&UNK_001692c7,1);
      pcStack_70 = (code *)&UNK_003ca8a3;
      _ZN7android4base10LogMessageD2Ev(auStack_60);
      *puVar10 = uVar5;
    }
  }
  pbVar14 = (byte *)((long)&uStack_58 + 1);
  uVar12 = uStack_58 >> 1 & 0x7f;
  if ((uStack_58 & 1) != 0) {
    pbVar14 = pbStack_48;
    uVar12 = uStack_50;
  }
  pbVar9[0x28] = 0;
  pbVar9[0x29] = 0;
  pbVar9[0x2a] = 0;
  pbVar9[0x2b] = 0;
  pbVar9[0x2c] = 0;
  pbVar9[0x2d] = 0;
  pbVar9[0x2e] = 0;
  pbVar9[0x2f] = 0;
  pbVar9[0x30] = 0;
  pbVar9[0x31] = 0;
  pbVar9[0x32] = 0;
  pbVar9[0x33] = 0;
  pbVar9[0x34] = 0;
  pbVar9[0x35] = 0;
  pbVar9[0x36] = 0;
  pbVar9[0x37] = 0;
  pbVar9[0x18] = 0;
  pbVar9[0x19] = 0;
  pbVar9[0x1a] = 0;
  pbVar9[0x1b] = 0;
  pbVar9[0x1c] = 0;
  pbVar9[0x1d] = 0;
  pbVar9[0x1e] = 0;
  pbVar9[0x1f] = 0;
  pbVar9[0x20] = 0;
  pbVar9[0x21] = 0;
  pbVar9[0x22] = 0;
  pbVar9[0x23] = 0;
  pbVar9[0x24] = 0;
  pbVar9[0x25] = 0;
  pbVar9[0x26] = 0;
  pbVar9[0x27] = 0;
  pcStack_70 = (code *)&UNK_003ca754;
  _ZN5Block8allocateEm(pbVar9 + 0x18,uVar12);
  pcStack_70 = (code *)&UNK_003ca763;
  func_0x0099bd90(*(undefined8 *)(pbVar9 + 0x18),pbVar14,uVar12);
  *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(pbVar9 + 0x28);
  pcStack_70 = (code *)&UNK_003ca776;
  uVar15 = param_1;
  pbVar13 = pbVar9;
  _Z11send_packetP7apacketP10atransport();
  if ((uStack_58 & 1) != 0) {
    uVar15 = uStack_58 & 0xfffffffffffffffe;
    pcStack_70 = (code *)&UNK_003ca78d;
    pbVar13 = pbStack_48;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  pcStack_70 = 
  _Z12parse_bannerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP10atransport;
  func_0x0099bd00();
  lStack_a0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_98 = param_1;
  pbStack_90 = pbVar14;
  uStack_88 = unaff_R13;
  pbStack_80 = pbVar9;
  uStack_78 = uVar12;
  pcStack_70 = (code *)&stack0xfffffffffffffff8;
  if (((((byte)adb_trace_mask & 1) != 0) &&
      (pcStack_70 = (code *)&stack0xfffffffffffffff8, (int)adb_trace_severity._0_4_ < 2)) &&
     (pcStack_70 = (code *)&stack0xfffffffffffffff8,
     cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar7 != '\0')) {
    puVar11 = (undefined4 *)func_0x0099bce0();
    uVar8 = *puVar11;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_d8,&UNK_00181a61,0x160,1,0,0xffffffff);
    uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
    if ((*pbVar13 & 1) == 0) {
      pbVar9 = pbVar13 + 1;
    }
    else {
      pbVar9 = *(byte **)(pbVar13 + 0x10);
    }
    _ZN7android4base12StringPrintfEPKcz(auStack_c0,&UNK_0015c79c,pbVar9);
    func_0x0032e5a0(uVar17,auStack_c0);
    if ((auStack_c0[0] & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_b0,auStack_c0._0_8_ & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(&bStack_d8);
    *puVar11 = uVar8;
  }
  auStack_c0 = (undefined1  [16])0x0;
  lStack_b0 = 0;
  bStack_d8 = 2;
  uStack_d7 = 0x3a;
  uStack_d6 = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (auStack_c0,pbVar13,&bStack_d8);
  if ((bStack_d8 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_c8,
               CONCAT53(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8))) &
               0xfffffffffffffffe);
  }
  bStack_d8 = 0;
  uStack_d7 = 0;
  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar15,&bStack_d8);
  if ((bStack_d8 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (lStack_c8,
               CONCAT53(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8))) &
               0xfffffffffffffffe);
  }
  if (2 < (ulong)(((long)(auStack_c0._8_8_ - auStack_c0._0_8_) >> 3) * -0x5555555555555555)) {
    bStack_f0 = 2;
    uStack_ef = 0x3b;
    uStack_ee = 0;
    _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
              (&bStack_d8,(byte *)(auStack_c0._0_8_ + 0x30),&bStack_f0);
    pbVar14 = pbStack_d0;
    pbVar9 = (byte *)CONCAT53(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8)));
    if (pbVar9 != pbStack_d0) {
      pauVar1 = (undefined1 (*) [16])(uVar15 + 0x70);
      pauVar2 = (undefined1 (*) [16])(uVar15 + 0x58);
      pauVar3 = (undefined1 (*) [16])(uVar15 + 0x40);
      do {
        if ((*pbVar9 & 1) == 0) {
          if (*pbVar9 >> 1 != 0) goto code_r0x003caa37;
        }
        else if (*(long *)(pbVar9 + 8) != 0) {
code_r0x003caa37:
          auStack_110 = (undefined1  [16])0x0;
          lStack_100 = 0;
          bStack_128 = 2;
          uStack_127 = 0x3d;
          uStack_126 = 0;
          _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                    (auStack_110,pbVar9,&bStack_128);
          if ((bStack_128 & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (uStack_118,
                       CONCAT53(uStack_125,CONCAT12(uStack_126,CONCAT11(uStack_127,bStack_128))) &
                       0xfffffffffffffffe);
          }
          pbVar13 = (byte *)auStack_110._0_8_;
          if (auStack_110._8_8_ - auStack_110._0_8_ == 0x30) {
            bVar4 = *(byte *)auStack_110._0_8_;
            if ((bVar4 & 1) == 0) {
              uVar12 = (ulong)(bVar4 >> 1);
            }
            else {
              uVar12 = *(ulong *)(auStack_110._0_8_ + 8);
            }
            if (uVar12 - 8 < 10) {
              pauVar18 = (undefined1 (*) [16])(auStack_110._0_8_ + 0x18);
              switch(uVar12) {
              case 8:
                if ((bVar4 & 1) == 0) {
                  pbVar13 = (byte *)(auStack_110._0_8_ + 1);
                }
                else {
                  pbVar13 = *(byte **)(auStack_110._0_8_ + 0x10);
                }
                if (*(long *)pbVar13 == 0x7365727574616566) {
                  _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                            (uVar15);
                }
                break;
              case 0xf:
                if ((bVar4 & 1) == 0) {
                  pbVar13 = (byte *)(auStack_110._0_8_ + 1);
                }
                else {
                  pbVar13 = *(byte **)(auStack_110._0_8_ + 0x10);
                }
                if (pauVar3 != pauVar18 &&
                    (*(long *)(pbVar13 + 7) == 0x656d616e2e746375 &&
                    *(long *)pbVar13 == 0x75646f72702e6f72)) {
                  bVar4 = (*pauVar18)[0];
                  if (((*pauVar3)[0] & 1) == 0) {
                    if ((bVar4 & 1) == 0) {
                      *(undefined8 *)(uVar15 + 0x50) = *(undefined8 *)(auStack_110._0_8_ + 0x28);
                      *pauVar3 = *pauVar18;
                    }
                    else {
                      uVar17 = *(undefined8 *)(auStack_110._0_8_ + 0x20);
                      uVar16 = *(undefined8 *)(auStack_110._0_8_ + 0x28);
                      pauVar18 = pauVar3;
code_r0x003cacfa:
                      func_0x0032e990(pauVar18,uVar16,uVar17);
                    }
                  }
                  else {
                    bVar21 = (bVar4 & 1) != 0;
                    pbVar13 = (byte *)(auStack_110._0_8_ + 0x19);
                    if (bVar21) {
                      pbVar13 = *(byte **)(auStack_110._0_8_ + 0x28);
                    }
                    uVar12 = (ulong)(bVar4 >> 1);
                    if (bVar21) {
                      uVar12 = *(ulong *)(auStack_110._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar3,pbVar13,uVar12);
                  }
                }
                break;
              case 0x10:
                if ((bVar4 & 1) == 0) {
                  pbVar13 = (byte *)(auStack_110._0_8_ + 1);
                }
                else {
                  pbVar13 = *(byte **)(auStack_110._0_8_ + 0x10);
                }
                auVar22[0] = -(*pbVar13 == 0x72);
                auVar22[1] = -(pbVar13[1] == 0x6f);
                auVar22[2] = -(pbVar13[2] == 0x2e);
                auVar22[3] = -(pbVar13[3] == 0x70);
                auVar22[4] = -(pbVar13[4] == 0x72);
                auVar22[5] = -(pbVar13[5] == 0x6f);
                auVar22[6] = -(pbVar13[6] == 100);
                auVar22[7] = -(pbVar13[7] == 0x75);
                auVar22[8] = -(pbVar13[8] == 99);
                auVar22[9] = -(pbVar13[9] == 0x74);
                auVar22[10] = -(pbVar13[10] == 0x2e);
                auVar22[0xb] = -(pbVar13[0xb] == 0x6d);
                auVar22[0xc] = -(pbVar13[0xc] == 0x6f);
                auVar22[0xd] = -(pbVar13[0xd] == 100);
                auVar22[0xe] = -(pbVar13[0xe] == 0x65);
                auVar22[0xf] = -(pbVar13[0xf] == 0x6c);
                if (pauVar2 != pauVar18 &&
                    (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
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
                            (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar18)[0];
                  if (((*pauVar2)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar17 = *(undefined8 *)(auStack_110._0_8_ + 0x20);
                      uVar16 = *(undefined8 *)(auStack_110._0_8_ + 0x28);
                      pauVar18 = pauVar2;
                      goto code_r0x003cacfa;
                    }
                    *(undefined8 *)(uVar15 + 0x68) = *(undefined8 *)(auStack_110._0_8_ + 0x28);
                    *pauVar2 = *pauVar18;
                  }
                  else {
                    bVar21 = (bVar4 & 1) != 0;
                    pbVar13 = (byte *)(auStack_110._0_8_ + 0x19);
                    if (bVar21) {
                      pbVar13 = *(byte **)(auStack_110._0_8_ + 0x28);
                    }
                    uVar12 = (ulong)(bVar4 >> 1);
                    if (bVar21) {
                      uVar12 = *(ulong *)(auStack_110._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar2,pbVar13,uVar12);
                  }
                }
                break;
              case 0x11:
                if ((bVar4 & 1) == 0) {
                  pbVar13 = (byte *)(auStack_110._0_8_ + 1);
                }
                else {
                  pbVar13 = *(byte **)(auStack_110._0_8_ + 0x10);
                }
                auVar23[0] = -(*pbVar13 == 0x72);
                auVar23[1] = -(pbVar13[1] == 0x6f);
                auVar23[2] = -(pbVar13[2] == 0x2e);
                auVar23[3] = -(pbVar13[3] == 0x70);
                auVar23[4] = -(pbVar13[4] == 0x72);
                auVar23[5] = -(pbVar13[5] == 0x6f);
                auVar23[6] = -(pbVar13[6] == 100);
                auVar23[7] = -(pbVar13[7] == 0x75);
                auVar23[8] = -(pbVar13[8] == 99);
                auVar23[9] = -(pbVar13[9] == 0x74);
                auVar23[10] = -(pbVar13[10] == 0x2e);
                auVar23[0xb] = -(pbVar13[0xb] == 100);
                auVar23[0xc] = -(pbVar13[0xc] == 0x65);
                auVar23[0xd] = -(pbVar13[0xd] == 0x76);
                auVar23[0xe] = -(pbVar13[0xe] == 0x69);
                auVar23[0xf] = -(pbVar13[0xf] == 99);
                auVar24[0] = -(pbVar13[0x10] == 0x65);
                auVar24[1] = 0xff;
                auVar24[2] = 0xff;
                auVar24[3] = 0xff;
                auVar24[4] = 0xff;
                auVar24[5] = 0xff;
                auVar24[6] = 0xff;
                auVar24[7] = 0xff;
                auVar24[8] = 0xff;
                auVar24[9] = 0xff;
                auVar24[10] = 0xff;
                auVar24[0xb] = 0xff;
                auVar24[0xc] = 0xff;
                auVar24[0xd] = 0xff;
                auVar24[0xe] = 0xff;
                auVar24[0xf] = 0xff;
                auVar24 = auVar24 & auVar23;
                if (pauVar1 != pauVar18 &&
                    (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
                  bVar4 = (*pauVar18)[0];
                  if (((*pauVar1)[0] & 1) == 0) {
                    if ((bVar4 & 1) != 0) {
                      uVar17 = *(undefined8 *)(auStack_110._0_8_ + 0x20);
                      uVar16 = *(undefined8 *)(auStack_110._0_8_ + 0x28);
                      pauVar18 = pauVar1;
                      goto code_r0x003cacfa;
                    }
                    *(undefined8 *)(uVar15 + 0x80) = *(undefined8 *)(auStack_110._0_8_ + 0x28);
                    *pauVar1 = *pauVar18;
                  }
                  else {
                    bVar21 = (bVar4 & 1) != 0;
                    pbVar13 = (byte *)(auStack_110._0_8_ + 0x19);
                    if (bVar21) {
                      pbVar13 = *(byte **)(auStack_110._0_8_ + 0x28);
                    }
                    uVar12 = (ulong)(bVar4 >> 1);
                    if (bVar21) {
                      uVar12 = *(ulong *)(auStack_110._0_8_ + 0x20);
                    }
                    func_0x0032e920(pauVar1,pbVar13,uVar12);
                  }
                }
              }
            }
            pbVar13 = (byte *)auStack_110._0_8_;
          }
          if (pbVar13 != (byte *)0x0) {
            pbVar6 = pbVar13;
            for (pbVar20 = (byte *)auStack_110._8_8_; pbVar13 != pbVar20; pbVar20 = pbVar20 + -0x18)
            {
              if ((pbVar20[-0x18] & 1) != 0) {
                _ZdaPvSt11align_val_t
                          (*(undefined8 *)(pbVar20 + -8),
                           *(ulong *)(pbVar20 + -0x18) & 0xfffffffffffffffe);
              }
              pbVar6 = (byte *)auStack_110._0_8_;
            }
            auStack_110._8_8_ = pbVar13;
            _ZdaPvSt11align_val_t(pbVar6,lStack_100 - (long)pbVar6);
          }
        }
        pbVar9 = pbVar9 + 0x18;
      } while (pbVar9 != pbVar14);
      pbVar9 = (byte *)CONCAT53(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8)));
    }
    if (pbVar9 != (byte *)0x0) {
      pbVar14 = pbStack_d0;
      pbVar13 = pbVar9;
      if (pbVar9 != pbStack_d0) {
        do {
          if ((pbVar14[-0x18] & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(pbVar14 + -8),
                       *(ulong *)(pbVar14 + -0x18) & 0xfffffffffffffffe);
          }
          pbVar14 = pbVar14 + -0x18;
        } while (pbVar14 != pbVar9);
        pbVar13 = (byte *)CONCAT53(uStack_d5,CONCAT12(uStack_d6,CONCAT11(uStack_d7,bStack_d8)));
      }
      pbStack_d0 = pbVar9;
      _ZdaPvSt11align_val_t(pbVar13,lStack_c8 - (long)pbVar13);
    }
    if ((bStack_f0 & 1) != 0) {
      _ZdaPvSt11align_val_t
                (uStack_e0,
                 CONCAT53(uStack_ed,CONCAT12(uStack_ee,CONCAT11(uStack_ef,bStack_f0))) &
                 0xfffffffffffffffe);
    }
  }
  bVar4 = *(byte *)auStack_c0._0_8_;
  if ((bVar4 & 1) == 0) {
    uVar12 = (ulong)(bVar4 >> 1);
    if (uVar12 != 6) goto code_r0x003cadf2;
code_r0x003cae19:
    if ((bVar4 & 1) == 0) {
      pbVar9 = (byte *)(auStack_c0._0_8_ + 1);
    }
    else {
      pbVar9 = *(byte **)(auStack_c0._0_8_ + 0x10);
    }
    if (*(short *)(pbVar9 + 4) == 0x6563 && *(int *)pbVar9 == 0x69766564) {
      uVar17 = 7;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar7 == '\0') {
          uVar17 = 7;
        }
        else {
          puVar11 = (undefined4 *)func_0x0099bce0();
          uVar8 = *puVar11;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_d8,&UNK_00181a61,0x186,1,0,0xffffffff);
          uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
          func_0x0032eb30(uVar17,&UNK_00173ed4,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_d8);
          *puVar11 = uVar8;
          uVar17 = 7;
        }
      }
      goto code_r0x003cafc3;
    }
    if ((bVar4 & 1) == 0) {
      pbVar9 = (byte *)(auStack_c0._0_8_ + 1);
    }
    else {
      pbVar9 = *(byte **)(auStack_c0._0_8_ + 0x10);
    }
    if (*(short *)(pbVar9 + 4) == 0x6575 && *(int *)pbVar9 == 0x63736572) {
      uVar17 = 0xb;
      if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
        cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar7 == '\0') {
          uVar17 = 0xb;
        }
        else {
          puVar11 = (undefined4 *)func_0x0099bce0();
          uVar8 = *puVar11;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&bStack_d8,&UNK_00181a61,399,1,0,0xffffffff);
          uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
          func_0x0032eb30(uVar17,&UNK_0015959b,0x25);
          _ZN7android4base10LogMessageD2Ev(&bStack_d8);
          *puVar11 = uVar8;
          uVar17 = 0xb;
        }
      }
      goto code_r0x003cafc3;
    }
  }
  else {
    uVar12 = *(ulong *)(auStack_c0._0_8_ + 8);
    if (uVar12 == 6) goto code_r0x003cae19;
code_r0x003cadf2:
    if (uVar12 == 8) {
      if ((bVar4 & 1) == 0) {
        pbVar9 = (byte *)(auStack_c0._0_8_ + 1);
      }
      else {
        pbVar9 = *(byte **)(auStack_c0._0_8_ + 0x10);
      }
      if (*(long *)pbVar9 == 0x797265766f636572) {
        uVar17 = 9;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar17 = 9;
          }
          else {
            puVar11 = (undefined4 *)func_0x0099bce0();
            uVar8 = *puVar11;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_d8,&UNK_00181a61,0x189,1,0,0xffffffff);
            uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
            func_0x0032eb30(uVar17,&UNK_0017d582,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_d8);
            *puVar11 = uVar8;
            uVar17 = 9;
          }
        }
        goto code_r0x003cafc3;
      }
      if ((bVar4 & 1) == 0) {
        pbVar9 = (byte *)(auStack_c0._0_8_ + 1);
      }
      else {
        pbVar9 = *(byte **)(auStack_c0._0_8_ + 0x10);
      }
      if (*(long *)pbVar9 == 0x64616f6c65646973) {
        uVar17 = 10;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar17 = 10;
          }
          else {
            puVar11 = (undefined4 *)func_0x0099bce0();
            uVar8 = *puVar11;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_d8,&UNK_00181a61,0x18c,1,0,0xffffffff);
            uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
            func_0x0032eb30(uVar17,&UNK_00162dab,0x27);
            _ZN7android4base10LogMessageD2Ev(&bStack_d8);
            *puVar11 = uVar8;
            uVar17 = 10;
          }
        }
        goto code_r0x003cafc3;
      }
    }
    else if (uVar12 == 10) {
      if ((bVar4 & 1) == 0) {
        pbVar9 = (byte *)(auStack_c0._0_8_ + 1);
      }
      else {
        pbVar9 = *(byte **)(auStack_c0._0_8_ + 0x10);
      }
      if (*(short *)(pbVar9 + 8) == 0x7265 && *(long *)pbVar9 == 0x64616f6c746f6f62) {
        uVar17 = 6;
        if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
          cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
          if (cVar7 == '\0') {
            uVar17 = 6;
          }
          else {
            puVar11 = (undefined4 *)func_0x0099bce0();
            uVar8 = *puVar11;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&bStack_d8,&UNK_00181a61,0x183,1,0,0xffffffff);
            uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
            func_0x0032eb30(uVar17,&UNK_001679a3,0x29);
            _ZN7android4base10LogMessageD2Ev(&bStack_d8);
            *puVar11 = uVar8;
            uVar17 = 6;
          }
        }
        goto code_r0x003cafc3;
      }
    }
  }
  uVar17 = 8;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    cVar7 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar7 != '\0') goto code_r0x003cb105;
    goto code_r0x003cb0f6;
  }
code_r0x003cafc3:
  while( true ) {
    _ZN10atransport18SetConnectionStateE15ConnectionState(uVar15,uVar17);
    uVar17 = auStack_c0._0_8_;
    if (auStack_c0._0_8_ != 0) {
      for (lVar19 = auStack_c0._8_8_; uVar17 != lVar19; lVar19 = lVar19 + -0x18) {
        if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar19 + -8),*(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
        }
      }
      auStack_c0._8_8_ = uVar17;
      _ZdaPvSt11align_val_t(auStack_c0._0_8_,lStack_b0 - auStack_c0._0_8_);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_a0) break;
    func_0x0099bd00();
code_r0x003cb105:
    puVar11 = (undefined4 *)func_0x0099bce0();
    uVar8 = *puVar11;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_d8,&UNK_00181a61,0x192,1,0,0xffffffff);
    uVar17 = _ZN7android4base10LogMessage6streamEv(&bStack_d8);
    func_0x0032eb30(uVar17,&UNK_00170562,0x23);
    _ZN7android4base10LogMessageD2Ev(&bStack_d8);
    *puVar11 = uVar8;
code_r0x003cb0f6:
    uVar17 = 8;
  }
  return;
}


