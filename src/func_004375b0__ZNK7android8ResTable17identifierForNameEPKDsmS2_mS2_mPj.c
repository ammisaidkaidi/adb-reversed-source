// Function: _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
// Address: 004375b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x004379db) */
/* WARNING: Type propagation algorithm not settling */

ushort *******
_ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
          (ushort *******param_1,ushort *******param_2,ulong param_3,ushort *******param_4,
          ushort *******param_5,ushort *******param_6,ushort *******param_7,ushort *******param_8)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *****pppppuVar5;
  ushort *******pppppppuVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ushort *******pppppppuVar10;
  ushort *******pppppppuVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  long lVar14;
  ushort ****ppppuVar15;
  long *plVar16;
  uint *puVar17;
  ushort *******pppppppuVar18;
  ulong uVar19;
  ulong extraout_RDX;
  ushort *******extraout_RDX_00;
  long extraout_RDX_01;
  ushort *******pppppppuVar20;
  byte bVar21;
  ushort *******pppppppuVar22;
  ushort *******pppppppuVar23;
  ushort ******unaff_R12;
  ushort ******ppppppuVar24;
  ushort *****unaff_R13;
  ushort *******pppppppuVar25;
  ushort ******ppppppuVar26;
  long in_FS_OFFSET;
  bool bVar27;
  undefined1 uStack_2a9;
  ushort ******ppppppuStack_250;
  long lStack_248;
  ushort *******pppppppuStack_240;
  ushort ******ppppppuStack_238;
  ushort *****pppppuStack_230;
  ushort *******pppppppuStack_228;
  ushort *******pppppppuStack_220;
  undefined *puStack_218;
  ushort *******pppppppuStack_210;
  long lStack_208;
  ushort *****pppppuStack_200;
  ushort ******ppppppuStack_1f8;
  ushort ******ppppppuStack_1f0;
  ushort *******pppppppuStack_1e8;
  ushort *******pppppppuStack_1e0;
  ulong uStack_1d8;
  ushort *******pppppppuStack_1d0;
  ushort *******pppppppuStack_1c8;
  ushort *******pppppppuStack_1c0;
  ulong uStack_1b8;
  ushort ******ppppppuStack_1b0;
  undefined8 uStack_1a8;
  ushort ******ppppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ushort ******ppppppuStack_120;
  ushort *******pppppppuStack_118;
  undefined8 uStack_110;
  ushort *******pppppppuStack_100;
  ushort *******pppppppuStack_f8;
  ushort ******ppppppuStack_f0;
  ushort *****pppppuStack_e8;
  ushort *******pppppppuStack_e0;
  ushort *******pppppppuStack_d8;
  undefined *apuStack_d0 [2];
  ushort *******pppppppuStack_c0;
  ushort *******pppppppuStack_b8;
  ushort *******pppppppuStack_b0;
  ushort *******pppppppuStack_a8;
  ushort *******pppppppuStack_a0;
  ushort ******ppppppuStack_98;
  ushort *******pppppppuStack_90;
  ushort ******ppppppuStack_88;
  ushort ******ppppppuStack_80;
  ushort *******pppppppuStack_78;
  ushort *******pppppppuStack_70;
  ushort *******pppppppuStack_68;
  ushort ******ppppppuStack_60;
  ushort ******ppppppuStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(ushort *)param_2;
  pppppppuVar23 = (ushort *******)(ulong)uVar3;
  pppppppuVar25 = param_8;
  pppppppuStack_f8 = param_2;
  pppppppuVar22 = param_2;
  if (uVar3 == 0x5e) {
    uVar19 = 2;
    if (2 < param_3) {
      uVar19 = param_3;
    }
    if (param_3 == 4) {
      pppppppuVar22 = (ushort *******)(uVar19 - 1);
      param_5 = (ushort *******)0x0;
      pppppppuVar23 = (ushort *******)&UNK_001fecd0;
      puVar17 = (uint *)&UNK_001fed10;
      do {
        param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fed22 + (long)param_5 * 2);
        if (*(ushort *)(&UNK_001fed22 + (long)param_5 * 2) !=
            *(ushort *)((long)param_2 + (long)((long)param_5 + 1) * 2)) {
          param_5 = (ushort *******)0x0;
          puVar17 = (uint *)&UNK_001fed30;
          goto code_r0x004379b0;
        }
        param_5 = (ushort *******)((long)param_5 + 1);
      } while (pppppppuVar22 != param_5);
    }
    else if (param_3 == 6) {
      pppppppuVar22 = (ushort *******)(uVar19 - 1);
      pppppppuVar23 = (ushort *******)0x0;
      param_5 = (ushort *******)&UNK_001fecd0;
      puVar17 = (uint *)&UNK_001fed50;
      do {
        param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fed62 + (long)pppppppuVar23 * 2);
        if (*(ushort *)(&UNK_001fed62 + (long)pppppppuVar23 * 2) !=
            *(ushort *)((long)param_2 + (long)((long)pppppppuVar23 + 1) * 2)) goto code_r0x00437b6c;
        pppppppuVar23 = (ushort *******)((long)pppppppuVar23 + 1);
      } while (pppppppuVar22 != pppppppuVar23);
    }
    else {
      if (param_3 != 5) goto code_r0x00437b6c;
      pppppppuVar22 = (ushort *******)(uVar19 - 1);
      pppppppuVar23 = (ushort *******)0x0;
      puVar17 = (uint *)&UNK_001fecd0;
      do {
        param_5 = (ushort *******)(ulong)*(ushort *)(&UNK_001fece2 + (long)pppppppuVar23 * 2);
        if (*(ushort *)(&UNK_001fece2 + (long)pppppppuVar23 * 2) !=
            *(ushort *)((long)param_2 + (long)((long)pppppppuVar23 + 1) * 2)) {
          pppppppuVar23 = (ushort *******)0x0;
          param_5 = (ushort *******)&UNK_001fecd0;
          puVar17 = (uint *)&UNK_001fecf0;
          goto code_r0x00437720;
        }
        pppppppuVar23 = (ushort *******)((long)pppppppuVar23 + 1);
      } while (pppppppuVar22 != pppppppuVar23);
    }
    goto code_r0x00437b59;
  }
  pppppppuVar11 = (ushort *******)0x0;
  if (*(int *)(param_1 + 10) == 0) {
    pppppppuVar25 = (ushort *******)((long)param_2 + param_3 * 2);
    if (param_3 == 0) {
      pppppppuVar22 = (ushort *******)0x0;
      pppppppuVar10 = (ushort *******)0x0;
    }
    else {
      pppppppuVar22 = (ushort *******)0x0;
      pppppppuVar11 = param_2;
      pppppppuVar18 = (ushort *******)0x0;
      do {
        pppppppuVar10 = pppppppuVar11;
        if ((*(ushort *)pppppppuVar11 != 0x2f) &&
           (pppppppuVar10 = pppppppuVar18, *(ushort *)pppppppuVar11 == 0x3a)) {
          pppppppuVar22 = pppppppuVar11;
        }
        pppppppuVar11 = (ushort *******)((long)pppppppuVar11 + 2);
        pppppppuVar18 = pppppppuVar10;
      } while (pppppppuVar11 < pppppppuVar25);
    }
    pppppppuVar11 = (ushort *******)0x0;
    if (uVar3 == 0x40) {
      pppppppuVar23 = (ushort *******)((long)param_2 + 4);
      bVar27 = *(ushort *)((long)param_2 + 2) == 0x2a;
      unaff_R12 = (ushort ******)CONCAT71((int7)((ulong)unaff_R12 >> 8),bVar27);
      pppppppuStack_f8 = (ushort *******)((long)param_2 + 2);
      if (bVar27) {
        pppppppuStack_f8 = pppppppuVar23;
      }
    }
    else {
      unaff_R12 = (ushort ******)0x0;
      pppppppuStack_f8 = param_2;
    }
    if (pppppppuStack_f8 < pppppppuVar25) {
      if (pppppppuVar22 == (ushort *******)0x0) {
        pppppppuVar18 = pppppppuStack_f8;
        pppppppuVar20 = param_7;
        if (param_6 == (ushort *******)0x0) goto code_r0x00437c1c;
      }
      else {
        pppppppuVar23 = (ushort *******)((long)pppppppuVar22 - (long)pppppppuStack_f8 >> 1);
        pppppppuVar18 = (ushort *******)((long)pppppppuVar22 + 2);
        param_6 = pppppppuStack_f8;
        pppppppuVar20 = pppppppuVar23;
        param_7 = (ushort *******)((long)pppppppuVar22 + 2);
      }
      pppppppuVar22 = param_7;
      pppppppuStack_70 = pppppppuVar20;
      pppppppuStack_f8 = pppppppuVar18;
      if (pppppppuVar10 == (ushort *******)0x0) {
        if (param_4 == (ushort *******)0x0) goto code_r0x00437c1c;
      }
      else {
        param_5 = (ushort *******)((long)pppppppuVar10 - (long)pppppppuStack_f8 >> 1);
        param_4 = pppppppuStack_f8;
        pppppppuStack_f8 = (ushort *******)((long)pppppppuVar10 + 2);
      }
      if (pppppppuStack_f8 < pppppppuVar25) {
        ppppppuStack_60 = (ushort ******)0x0;
        apuStack_d0[0] = &UNK_00437794;
        pppppppuStack_b0 = param_5;
        pppppppuStack_a8 = param_4;
        pppppppuStack_90 = param_6;
        _ZN7android8String16C2EPKc(&ppppppuStack_60,&UNK_0015b517);
        pppppppuStack_68 = (ushort *******)0x0;
        pppppppuVar22 = (ushort *******)&UNK_0017423f;
        apuStack_d0[0] = &UNK_004377ac;
        _ZN7android8String16C2EPKc(&pppppppuStack_68);
        ppppppuStack_88 = param_1[0x1a];
        if (ppppppuStack_88 != (ushort ******)0x0) {
          pppppppuVar25 = (ushort *******)((long)pppppppuVar25 - (long)pppppppuStack_f8 >> 1);
          ppppppuVar26 = (ushort ******)0x0;
          pppppppuStack_c0 = pppppppuStack_f8;
          pppppppuStack_b8 = pppppppuVar25;
          ppppppuStack_80 = unaff_R12;
          pppppppuStack_78 = param_1;
          do {
            unaff_R13 = pppppppuStack_78[0x19][(long)ppppppuVar26];
            ppppuVar15 = unaff_R13[1];
            apuStack_d0[0] = &UNK_00437817;
            ppppppuStack_98 = ppppppuVar26;
            uVar9 = _ZNK7android8String164sizeEv(unaff_R13 + 1);
            apuStack_d0[0] = &UNK_0043782d;
            pppppppuVar22 = pppppppuStack_70;
            iVar7 = strzcmp16(pppppppuStack_90,pppppppuStack_70,ppppuVar15,uVar9);
            if ((iVar7 == 0) &&
               (pppppppuStack_a0 = (ushort *******)unaff_R13[5],
               pppppppuStack_a0 != (ushort *******)0x0)) {
              pppppppuVar25 = (ushort *******)0x0;
              pppppppuVar23 = pppppppuStack_a8;
              param_1 = pppppppuStack_b0;
code_r0x00437860:
              do {
                ppppppuStack_58 = (ushort ******)0x0;
                lStack_50 = 0;
                uStack_48 = 0;
                apuStack_d0[0] = &UNK_0043788a;
                _ZNK7android13ResStringPool13indexOfStringEPKDsm
                          (&ppppppuStack_58,unaff_R13[4][(long)pppppppuVar25] + 3,pppppppuVar23,
                           param_1);
                if ((int)uStack_48 == 0) {
                  lStack_50 = lStack_50 + (long)unaff_R13[4][(long)pppppppuVar25][0x4f];
                  apuStack_d0[0] = &UNK_004378c5;
                  param_5 = pppppppuStack_b8;
                  param_6 = param_8;
                  pppppppuVar11 =
                       (ushort *******)
                       _ZNK7android8ResTable9findEntryEPKNS0_12PackageGroupElPKDsmPj
                                 (pppppppuStack_78,unaff_R13,lStack_50,pppppppuStack_c0);
                  if ((int)pppppppuVar11 != 0) {
                    bVar21 = (byte)ppppppuStack_80 ^ 1 | param_8 == (ushort *******)0x0;
                    pppppppuVar22 =
                         (ushort *******)CONCAT71((int7)((ulong)ppppppuStack_80 >> 8),bVar21);
                    if (bVar21 == 0) {
                      *(byte *)((long)param_8 + 3) = *(byte *)((long)param_8 + 3) | 0x40;
                    }
                    goto code_r0x00437938;
                  }
                }
                unaff_R12 = ppppppuStack_60;
                apuStack_d0[0] = &UNK_004378d6;
                pppppppuVar22 = (ushort *******)_ZNK7android8String164sizeEv(&ppppppuStack_60);
                apuStack_d0[0] = &UNK_004378e7;
                iVar7 = strzcmp16(unaff_R12,pppppppuVar22,pppppppuVar23,param_1);
                pppppppuVar23 = pppppppuStack_68;
                if ((iVar7 == 0) && (pppppppuStack_68 != (ushort *******)0x0)) {
                  apuStack_d0[0] = &UNK_00437905;
                  param_1 = (ushort *******)_ZNK7android8String164sizeEv(&pppppppuStack_68);
                  if (param_1 != (ushort *******)0x0) goto code_r0x00437860;
                }
                pppppppuVar25 = (ushort *******)((long)pppppppuVar25 + 1);
                pppppppuVar23 = pppppppuStack_a8;
                param_1 = pppppppuStack_b0;
              } while (pppppppuVar25 != pppppppuStack_a0);
            }
            ppppppuVar26 = (ushort ******)((long)ppppppuStack_98 + 1);
            param_1 = pppppppuStack_78;
          } while (ppppppuVar26 != ppppppuStack_88);
        }
        pppppppuVar11 = (ushort *******)0x0;
code_r0x00437938:
        apuStack_d0[0] = &UNK_00437941;
        _ZN7android8String16D2Ev(&pppppppuStack_68);
        pppppppuVar23 = &ppppppuStack_60;
        apuStack_d0[0] = &UNK_0043794a;
        _ZN7android8String16D2Ev();
        pppppppuStack_f8 = pppppppuVar11;
      }
    }
  }
  goto code_r0x00437c1c;
  while (param_5 = (ushort *******)((long)param_5 + 1), pppppppuVar22 != param_5) {
code_r0x004379b0:
    param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fed42 + (long)param_5 * 2);
    if (*(ushort *)(&UNK_001fed42 + (long)param_5 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)param_5 + 1) * 2)) {
      pppppppuVar22 = (ushort *******)(uVar19 - 1);
      param_5 = (ushort *******)0x0;
      pppppppuVar23 = (ushort *******)&UNK_001fecd0;
      puVar17 = (uint *)&UNK_001fed90;
      goto code_r0x00437aa0;
    }
  }
  goto code_r0x00437b59;
  while (param_5 = (ushort *******)((long)param_5 + 1), pppppppuVar22 != param_5) {
code_r0x00437aa0:
    param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001feda2 + (long)param_5 * 2);
    if (*(ushort *)(&UNK_001feda2 + (long)param_5 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)param_5 + 1) * 2)) {
      param_5 = (ushort *******)0x0;
      puVar17 = (uint *)&UNK_001fedb0;
      goto code_r0x00437ad8;
    }
  }
  goto code_r0x00437b59;
  while (param_5 = (ushort *******)((long)param_5 + 1), pppppppuVar22 != param_5) {
code_r0x00437ad8:
    param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fedc2 + (long)param_5 * 2);
    if (*(ushort *)(&UNK_001fedc2 + (long)param_5 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)param_5 + 1) * 2)) {
      param_5 = (ushort *******)0x0;
      puVar17 = (uint *)&UNK_001fedd0;
      goto code_r0x00437b09;
    }
  }
  goto code_r0x00437b59;
  while (param_5 = (ushort *******)((long)param_5 + 1), pppppppuVar22 != param_5) {
code_r0x00437b09:
    param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fede2 + (long)param_5 * 2);
    if (*(ushort *)(&UNK_001fede2 + (long)param_5 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)param_5 + 1) * 2)) goto code_r0x00437a74;
  }
  goto code_r0x00437b59;
  while (pppppppuVar23 = (ushort *******)((long)pppppppuVar23 + 1), pppppppuVar22 != pppppppuVar23)
  {
code_r0x00437720:
    param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fed02 + (long)pppppppuVar23 * 2);
    if (*(ushort *)(&UNK_001fed02 + (long)pppppppuVar23 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)pppppppuVar23 + 1) * 2)) {
      pppppppuVar22 = (ushort *******)(uVar19 - 1);
      pppppppuVar23 = (ushort *******)0x0;
      param_5 = (ushort *******)&UNK_001fecd0;
      puVar17 = (uint *)&UNK_001fed70;
      goto code_r0x00437a50;
    }
  }
  goto code_r0x00437b59;
code_r0x00437a74:
  pppppppuVar22 = (ushort *******)(uVar19 - 1);
  if (param_3 != 5) {
code_r0x00437b6c:
    pppppppuVar10 = (ushort *******)0x0;
    pppppppuVar11 = (ushort *******)0x0;
    if (((((7 < param_3) && (*(ushort *)((long)param_2 + 2) == 0x69)) &&
         (pppppppuVar11 = pppppppuVar10, *(ushort *)((long)param_2 + 4) == 0x6e)) &&
        ((*(ushort *)((long)param_2 + 6) == 100 && (*(ushort *)(param_2 + 1) == 0x65)))) &&
       ((*(ushort *)((long)param_2 + 10) == 0x78 && (*(ushort *)((long)param_2 + 0xc) == 0x5f)))) {
      param_1 = &ppppppuStack_58;
      apuStack_d0[0] = &UNK_00437bc5;
      _ZN7android7String8C2EPKDsm(param_1,(ushort *)((long)param_2 + 0xe),param_3 - 7);
      pppppppuVar22 = (ushort *******)0x0;
      apuStack_d0[0] = &UNK_00437bd5;
      pppppppuVar10 = (ushort *******)func_0x0099bea0(ppppppuStack_58,0,10);
      apuStack_d0[0] = &UNK_00437be0;
      pppppppuVar23 = param_1;
      _ZN7android7String8D2Ev();
      if ((uint)pppppppuVar10 < 0x10000) {
        if (param_8 != (ushort *******)0x0) {
          *(undefined4 *)param_8 = 0x40000000;
        }
        pppppppuVar11 = (ushort *******)(ulong)((uint)pppppppuVar10 | 0x2000000);
        pppppppuStack_f8 = pppppppuVar11;
      }
      else {
        pppppppuVar22 = (ushort *******)&UNK_0015b3df;
        pppppppuVar23 = (ushort *******)0x5;
        apuStack_d0[0] = &UNK_00437c1a;
        __android_log_print(5,&UNK_0015b3df,&UNK_00181ded,(ulong)pppppppuVar10 & 0xffffffff);
        pppppppuVar11 = (ushort *******)0x0;
        pppppppuStack_f8 = pppppppuVar10;
      }
    }
    goto code_r0x00437c1c;
  }
  pppppppuVar22 = (ushort *******)0x0;
  pppppppuVar23 = (ushort *******)&UNK_001fecd0;
  puVar17 = (uint *)&UNK_001fedf0;
  do {
    param_5 = (ushort *******)(ulong)*(ushort *)(&UNK_001fee02 + (long)pppppppuVar22 * 2);
    if (*(ushort *)(&UNK_001fee02 + (long)pppppppuVar22 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)pppppppuVar22 + 1) * 2)) goto code_r0x00437b6c;
    pppppppuVar22 = (ushort *******)((long)pppppppuVar22 + 1);
  } while ((ushort *******)(uVar19 - 1) != pppppppuVar22);
  goto code_r0x00437b59;
  while (pppppppuVar23 = (ushort *******)((long)pppppppuVar23 + 1), pppppppuVar22 != pppppppuVar23)
  {
code_r0x00437a50:
    param_6 = (ushort *******)(ulong)*(ushort *)(&UNK_001fed82 + (long)pppppppuVar23 * 2);
    if (*(ushort *)(&UNK_001fed82 + (long)pppppppuVar23 * 2) !=
        *(ushort *)((long)param_2 + (long)((long)pppppppuVar23 + 1) * 2)) goto code_r0x00437a74;
  }
code_r0x00437b59:
  if (param_8 != (ushort *******)0x0) {
    *(undefined4 *)param_8 = 0x40000000;
  }
  pppppppuVar11 = (ushort *******)(ulong)*puVar17;
code_r0x00437c1c:
  lVar14 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar14 == lStack_38) {
    return pppppppuVar11;
  }
  apuStack_d0[0] = &UNK_00437c42;
  func_0x0099bd00();
  pppppppuStack_100 = *(ushort ********)(in_FS_OFFSET + 0x28);
  if ((extraout_RDX < 0x100) && (pppppppuVar22[(extraout_RDX >> 4) + 8] != (ushort ******)0x0)) {
    puVar12 = (undefined1 *)
              (pppppppuVar22[(extraout_RDX >> 4) + 8] + (ulong)((uint)extraout_RDX & 0xf) * 5);
  }
  else {
    puVar12 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
  }
  pppppuStack_200 = *(ushort ******)((long)puVar12 + 0x10);
  pppppppuVar11 = pppppppuStack_f8;
  pppppppuStack_210 = param_5;
  lStack_208 = lVar14;
  ppppppuStack_f0 = unaff_R12;
  pppppuStack_e8 = unaff_R13;
  pppppppuStack_e0 = pppppppuVar25;
  pppppppuStack_d8 = param_1;
  apuStack_d0[0] = &stack0xfffffffffffffff8;
  if (pppppuStack_200 != (ushort *****)0x0) {
    pppppuVar5 = (ushort *****)0x0;
    ppppppuStack_1f0 = (ushort ******)puVar12;
    pppppppuStack_1e0 = param_6;
    uStack_1d8 = extraout_RDX;
    pppppppuStack_1d0 = pppppppuVar22;
    pppppppuStack_1c8 = pppppppuVar23;
    apuStack_d0[0] = &stack0xfffffffffffffff8;
    do {
      unaff_R13 = pppppuVar5;
      param_1 = (ushort *******)ppppppuStack_1f0[1][(long)unaff_R13];
      ppppppuStack_120 = (ushort ******)0x0;
      pppppppuStack_118 = (ushort *******)0x0;
      uStack_110 = 0;
      pppppppuVar22 = (ushort *******)(param_1[1] + 0x29);
      pppppppuVar23 = &ppppppuStack_120;
      puStack_218 = &UNK_00437d51;
      _ZNK7android13ResStringPool13indexOfStringEPKDsm
                (pppppppuVar23,pppppppuVar22,lStack_208,pppppppuStack_210);
      pppppppuVar10 = pppppppuStack_118;
      pppppppuVar11 = (ushort *******)&pppppppuStack_1c0;
      if (((int)uStack_110 == 0) &&
         (ppppppuStack_1f8 = param_1[8], ppppppuStack_1f8 != (ushort ******)0x0)) {
        unaff_R12 = (ushort ******)0x0;
        pppppppuStack_1e8 = param_1;
        do {
          ppppppuStack_1b0 = (ushort ******)0x0;
          uStack_1a8 = 0;
          pppppppuVar22 = (ushort *******)pppppppuStack_1e8[7][(long)unaff_R12];
          param_1 = &ppppppuStack_1b0;
          puStack_218 = &UNK_00437db8;
          pppppppuVar23 = param_1;
          _ZN7android11TypeVariantC2EPKNS_13ResTable_typeE();
          uStack_1b8 = 0;
          pppppppuStack_1c0 = param_1;
          if ((int)uStack_1a8 != 0) {
            do {
              do {
                puStack_218 = &UNK_00437de8;
                puVar13 = (ushort *)_ZNK7android11TypeVariant8iteratordeEv(&pppppppuStack_1c0);
                pppppppuVar25 = pppppppuStack_1e0;
                if (puVar13 != (ushort *)0x0) {
                  pppppppuVar23 = (ushort *******)(ulong)*(uint *)(puVar13 + 2);
                  if ((puVar13[1] & 8) != 0) {
                    pppppppuVar23 = (ushort *******)(ulong)*puVar13;
                  }
                  if (pppppppuVar10 == pppppppuVar23) {
                    pppppppuVar23 =
                         (ushort *******)(ulong)(uint)(*(int *)(pppppppuStack_1d0 + 2) << 0x18);
                    param_5 = (ushort *******)(uStack_1b8 & 0xffff);
                    uVar8 = (int)uStack_1d8 * 0x10000 + 0x10000U & 0xff0000 |
                            *(int *)(pppppppuStack_1d0 + 2) << 0x18 | (uint)uStack_1b8 & 0xffff;
                    pppppppuVar10 = (ushort *******)(ulong)uVar8;
                    pppppppuVar22 = pppppppuStack_1d0;
                    if (pppppppuStack_1e0 == (ushort *******)0x0) goto code_r0x00437ece;
                    pppppppuVar10 = (ushort *******)(ulong)uVar8;
                    uStack_130 = 0;
                    uStack_128 = 0;
                    uStack_140 = 0;
                    uStack_138 = 0;
                    uStack_150 = 0;
                    uStack_148 = 0;
                    uStack_160 = 0;
                    uStack_158 = 0;
                    uStack_170 = 0;
                    uStack_168 = 0;
                    uStack_180 = 0;
                    uStack_178 = 0;
                    uStack_190 = 0;
                    uStack_188 = 0;
                    ppppppuStack_1a0 = (ushort ******)0x0;
                    uStack_198 = 0;
                    param_6 = &ppppppuStack_1a0;
                    param_5 = (ushort *******)0x0;
                    puStack_218 = &UNK_00437eac;
                    pppppppuVar23 = pppppppuStack_1c8;
                    iVar7 = _ZNK7android8ResTable8getEntryEPKNS0_12PackageGroupEiiPKNS_15ResTable_configEPNS0_5EntryE
                                      ();
                    pppppppuVar11 = pppppppuVar10;
                    if (iVar7 == 0) {
                      *(undefined4 *)pppppppuVar25 = (undefined4)uStack_150;
                      goto code_r0x00437ece;
                    }
                    pppppppuVar22 = (ushort *******)&UNK_0015b3df;
                    pppppppuVar23 = (ushort *******)0x5;
                    puStack_218 = &UNK_00437ecc;
                    __android_log_print(5,&UNK_0015b3df,&UNK_00184cbf,pppppppuVar10);
                    goto code_r0x00437ecc;
                  }
                }
                puStack_218 = &UNK_00437e08;
                pppppppuVar23 = (ushort *******)&pppppppuStack_1c0;
                _ZN7android11TypeVariant8iteratorppEv();
              } while (pppppppuStack_1c0 != param_1);
            } while ((uint)uStack_1b8 != (int)uStack_1a8);
          }
          unaff_R12 = (ushort ******)((long)unaff_R12 + 1);
          pppppppuVar25 = pppppppuVar10;
          param_1 = pppppppuStack_1e8;
        } while (unaff_R12 != ppppppuStack_1f8);
      }
      unaff_R13 = (ushort *****)((long)unaff_R13 + 1);
      pppppuVar5 = unaff_R13;
    } while (unaff_R13 != pppppuStack_200);
  }
code_r0x00437ecc:
  pppppppuVar10 = (ushort *******)0x0;
code_r0x00437ece:
  pppppppuVar18 = *(ushort ********)(in_FS_OFFSET + 0x28);
  if (pppppppuVar18 == pppppppuStack_100) {
    return pppppppuVar10;
  }
  puStack_218 = &UNK_00437efe;
  func_0x0099bd00();
  lStack_248 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuVar10 = (ushort *******)((long)pppppppuVar23 + (long)pppppppuVar22 * 2);
  if (pppppppuVar22 == (ushort *******)0x0) {
    pppppppuVar22 = (ushort *******)0x0;
  }
  else {
    pppppppuVar22 = (ushort *******)0x0;
    pppppppuVar20 = pppppppuVar23;
    do {
      pppppppuVar6 = pppppppuVar20;
      if ((*(ushort *)pppppppuVar20 != 0x3a) &&
         (pppppppuVar6 = pppppppuVar22, *(ushort *)pppppppuVar20 == 0x2f)) goto code_r0x00437f76;
      pppppppuVar22 = pppppppuVar6;
      pppppppuVar20 = (ushort *******)((long)pppppppuVar20 + 2);
    } while (pppppppuVar20 < pppppppuVar10);
  }
  pppppppuVar20 = (ushort *******)0x0;
code_r0x00437f76:
  puVar13 = (ushort *)((long)pppppppuVar23 + (ulong)(*(ushort *)pppppppuVar23 == 0x40) * 2);
  if (ppppppuStack_1f8 == (ushort ******)0x0) {
    puVar13 = puVar13 + (*puVar13 == 0x2a);
  }
  else {
    *(undefined1 *)ppppppuStack_1f8 = 1;
    if (*puVar13 == 0x2a) {
      puVar13 = puVar13 + 1;
      *(undefined1 *)ppppppuStack_1f8 = 0;
    }
  }
  pppppppuStack_240 = pppppppuVar11;
  ppppppuStack_238 = unaff_R12;
  pppppuStack_230 = unaff_R13;
  pppppppuStack_228 = pppppppuVar25;
  pppppppuStack_220 = param_1;
  if (pppppppuVar22 == (ushort *******)0x0) {
    if (lStack_208 != 0) {
      pppppppuVar23 = extraout_RDX_00;
      puStack_218 = (undefined *)apuStack_d0;
      _ZN7android8String165setToERKS0_();
      goto code_r0x00437ffd;
    }
    ppppppuVar26 = (ushort ******)0x0;
    param_5 = pppppppuVar23;
    puStack_218 = (undefined *)apuStack_d0;
    if (pppppuStack_200 == (ushort *****)0x0) goto code_r0x00438102;
    ppppuVar15 = (ushort ****)&UNK_0015b51c;
    puStack_218 = (undefined *)apuStack_d0;
code_r0x004380ff:
    *pppppuStack_200 = ppppuVar15;
    param_5 = pppppppuVar23;
code_r0x00438102:
    pppppppuVar23 = (ushort *******)0x0;
  }
  else {
    pppppppuVar23 = &ppppppuStack_250;
    puStack_218 = (undefined *)apuStack_d0;
    _ZN7android8String16C2EPKDsm(pppppppuVar23,puVar13,(long)pppppppuVar22 - (long)puVar13 >> 1);
    _ZN7android8String16aSEOS0_(extraout_RDX_00,pppppppuVar23);
    _ZN7android8String16D2Ev();
    puVar13 = (ushort *)((long)pppppppuVar22 + 2);
code_r0x00437ffd:
    if (pppppppuVar20 == (ushort *******)0x0) {
      if (param_6 != (ushort *******)0x0) {
        _ZN7android8String165setToERKS0_(pppppppuVar18);
        goto code_r0x0043804f;
      }
      ppppppuVar26 = (ushort ******)0x0;
      param_5 = pppppppuVar23;
      if (pppppuStack_200 != (ushort *****)0x0) {
        ppppuVar15 = (ushort ****)&UNK_0016ef76;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    _ZN7android8String16C2EPKDsm(&ppppppuStack_250,puVar13,(long)pppppppuVar20 - (long)puVar13 >> 1)
    ;
    _ZN7android8String16aSEOS0_(pppppppuVar18,&ppppppuStack_250);
    _ZN7android8String16D2Ev(&ppppppuStack_250);
    puVar13 = (ushort *)((long)pppppppuVar20 + 2);
code_r0x0043804f:
    _ZN7android8String16C2EPKDsm(&ppppppuStack_250,puVar13,(long)pppppppuVar10 - (long)puVar13 >> 1)
    ;
    ppppppuVar26 = (ushort ******)&ppppppuStack_250;
    _ZN7android8String16aSEOS0_(param_5);
    _ZN7android8String16D2Ev(&ppppppuStack_250);
    pppppppuVar23 = extraout_RDX_00;
    lVar14 = _ZNK7android8String164sizeEv();
    if (lVar14 == 0) {
      param_5 = pppppppuVar23;
      if (pppppuStack_200 != (ushort *****)0x0) {
        ppppuVar15 = (ushort ****)&UNK_00163162;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    lVar14 = _ZNK7android8String164sizeEv();
    if (lVar14 == 0) {
      param_5 = pppppppuVar18;
      if (pppppuStack_200 != (ushort *****)0x0) {
        ppppuVar15 = (ushort ****)&UNK_0016b1bf;
        pppppppuVar23 = pppppppuVar18;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
    lVar14 = _ZNK7android8String164sizeEv();
    pppppppuVar23 = (ushort *******)0x1;
    if (lVar14 == 0) {
      if (pppppuStack_200 != (ushort *****)0x0) {
        ppppuVar15 = (ushort ****)&UNK_001881ef;
        pppppppuVar23 = param_5;
        goto code_r0x004380ff;
      }
      goto code_r0x00438102;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_248) {
    return pppppppuVar23;
  }
  func_0x0099bd00();
  if (ppppppuVar26 == (ushort ******)0x0) {
    return (ushort *******)0x0;
  }
  while( true ) {
    uVar3 = *(ushort *)param_5;
    uVar19 = (ulong)uVar3;
    if ((0x7f < uVar19) ||
       (plVar16 = (long *)func_0x0099be00(), (*(byte *)(*plVar16 + 1 + uVar19 * 2) & 0x20) == 0))
    break;
    param_5 = (ushort *******)((long)param_5 + 2);
    ppppppuVar26 = (ushort ******)((long)ppppppuVar26 + -1);
    if (ppppppuVar26 == (ushort ******)0x0) {
      return (ushort *******)0x0;
    }
  }
  ppppppuVar24 = (ushort ******)(ulong)(uVar19 == 0x2d);
  uVar4 = *(ushort *)((long)param_5 + (long)ppppppuVar24 * 2);
  if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
    return (ushort *******)0x0;
  }
  if (((ppppppuVar26 == (ushort ******)0x1) || (uVar4 != 0x30)) ||
     (*(ushort *)((long)param_5 + ((long)ppppppuVar24 + 1) * 2) != 0x78)) {
    if (ppppppuVar24 < ppppppuVar26) {
      lVar14 = 0;
      do {
        uVar4 = *(ushort *)((long)param_5 + (long)ppppppuVar24 * 2);
        if ((ushort)(uVar4 - 0x3a) < 0xfff6) {
          return (ushort *******)0x0;
        }
        lVar1 = (ulong)uVar4 + lVar14 * 10;
        if (uVar3 == 0x2d) {
          if (0x80000030 < lVar1) {
            return (ushort *******)0x0;
          }
        }
        else if (0x8000002f < lVar1) {
          return (ushort *******)0x0;
        }
        ppppppuVar24 = (ushort ******)((long)ppppppuVar24 + 1);
        lVar14 = (ulong)uVar4 + lVar14 * 10 + -0x30;
      } while (ppppppuVar24 < ppppppuVar26);
      if (uVar3 == 0x2d) {
        lVar14 = 0x30 - lVar1;
      }
      iVar7 = (int)lVar14;
      uStack_2a9 = 0x10;
      goto code_r0x00438315;
    }
    uStack_2a9 = 0x10;
    ppppppuVar24 = (ushort ******)0x1;
    uVar19 = 0;
  }
  else {
    if (uVar3 == 0x2d) {
      return (ushort *******)0x0;
    }
    ppppppuVar24 = (ushort ******)((ulong)ppppppuVar24 | 2);
    if (ppppppuVar26 == ppppppuVar24) {
      return (ushort *******)0x0;
    }
    bVar27 = false;
    uVar19 = 0;
    while ((!bVar27 && (ppppppuVar24 < ppppppuVar26))) {
      cVar2 = (char)*(ushort *)((long)param_5 + (long)ppppppuVar24 * 2);
      iVar7 = (int)cVar2;
      if ((byte)(cVar2 - 0x30U) < 10) {
        uVar8 = iVar7 - 0x30;
code_r0x004381e3:
        bVar27 = false;
      }
      else {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          uVar8 = iVar7 - 0x57;
          goto code_r0x004381e3;
        }
        bVar27 = (byte)(cVar2 + 0xb9U) < 0xfa;
        uVar8 = iVar7 - 0x37;
        if (bVar27) {
          uVar8 = 0;
        }
      }
      uVar19 = uVar19 * 0x10 + (ulong)uVar8;
      ppppppuVar24 = (ushort ******)((long)ppppppuVar24 + 1);
      if (uVar19 >> 0x20 != 0) {
        return (ushort *******)0x0;
      }
    }
    uStack_2a9 = 0x11;
    if (bVar27) {
      return (ushort *******)0x0;
    }
  }
  iVar7 = -(int)uVar19;
  if (uVar3 != 0x2d) {
    iVar7 = (int)uVar19;
  }
  if (ppppppuVar24 < ppppppuVar26) {
    do {
      uVar19 = (ulong)*(ushort *)((long)param_5 + (long)ppppppuVar24 * 2);
      if ((0x7f < uVar19) ||
         (plVar16 = (long *)func_0x0099be00(), (*(byte *)(*plVar16 + 1 + uVar19 * 2) & 0x20) == 0))
      goto code_r0x004382f5;
      ppppppuVar24 = (ushort ******)((long)ppppppuVar24 + 1);
    } while (ppppppuVar24 < ppppppuVar26);
  }
  else {
code_r0x004382f5:
    if (ppppppuVar26 != ppppppuVar24) {
      return (ushort *******)0x0;
    }
  }
code_r0x00438315:
  if (extraout_RDX_01 != 0) {
    *(undefined1 *)(extraout_RDX_01 + 3) = uStack_2a9;
    *(int *)(extraout_RDX_01 + 4) = iVar7;
    return (ushort *******)0x1;
  }
  return (ushort *******)0x1;
}


