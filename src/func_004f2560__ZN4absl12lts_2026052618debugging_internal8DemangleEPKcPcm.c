// Function: _ZN4absl12lts_2026052618debugging_internal8DemangleEPKcPcm
// Address: 004f2560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004f2620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fa0fb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004faa5b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fa982: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fa4e7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004faca2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004fa4ec) */
/* WARNING: Removing unreachable block (ram,0x004fa4f4) */
/* WARNING: Removing unreachable block (ram,0x004fa506) */
/* WARNING: Removing unreachable block (ram,0x004fa987) */
/* WARNING: Removing unreachable block (ram,0x004fa98f) */
/* WARNING: Removing unreachable block (ram,0x004faa60) */
/* WARNING: Removing unreachable block (ram,0x004faa68) */
/* WARNING: Removing unreachable block (ram,0x004faa7b) */
/* WARNING: Removing unreachable block (ram,0x004fa100) */
/* WARNING: Removing unreachable block (ram,0x004fa108) */
/* WARNING: Removing unreachable block (ram,0x004faca7) */
/* WARNING: Type propagation algorithm not settling */

byte *******
_ZN4absl12lts_2026052618debugging_internal8DemangleEPKcPcm
          (byte *******param_1,byte *******param_2,byte *******param_3)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  byte ******ppppppbVar11;
  undefined1 uVar12;
  byte *******pppppppbVar13;
  byte *pbVar14;
  ulong uVar15;
  int iVar16;
  byte *******unaff_RBX;
  byte *******pppppppbVar17;
  undefined1 *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined1 *puVar21;
  byte bVar22;
  uint uVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  uint uVar26;
  byte *******pppppppbVar27;
  int iVar28;
  ulong uVar29;
  int iVar30;
  ulong uVar31;
  char cVar32;
  byte *******unaff_R12;
  byte *******pppppppbVar33;
  uint uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  undefined *puStack_200;
  undefined1 auStack_1f8 [12];
  uint uStack_1ec;
  byte ******appppppbStack_1e8 [32];
  undefined4 uStack_e8;
  byte abStack_e4 [64];
  uint auStack_a4 [5];
  undefined *puStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [4];
  int iStack_6c;
  long lStack_68;
  undefined8 uStack_60;
  byte *******pppppppbStack_50;
  byte *******pppppppbStack_48;
  byte *******pppppppbStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pppppppbVar24 = (byte *******)&stack0xfffffffffffffff8;
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)param_1 == 0x5f) && (*(byte *)((long)param_1 + 1) == 0x52)) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lVar8) {
      puVar18 = &stack0xfffffffffffffff8;
      puVar21 = &stack0xfffffffffffffff8;
      ppuVar19 = (undefined **)auStack_1f8;
      uStack_38 = *(long *)(in_FS_OFFSET + 0x28);
      pppppppbVar6 = appppppbStack_1e8;
      pppppppbVar24 = (byte *******)0x0;
      puStack_200 = &UNK_004f9b01;
      func_0x0099bdb0(pppppppbVar6,0,400);
      pppppppbStack_50 = param_1;
      pppppppbStack_48 = param_2;
      pppppppbStack_40 = (byte *******)((long)param_2 + (long)param_3);
      if (param_3 != (byte *******)0x0) {
        *(byte *)param_2 = 0;
      }
      pppppppbVar27 = (byte *******)((long)param_2 + (long)param_3);
      if (*(byte *)param_1 == 0x5f) {
        pppppppbVar27 = (byte *******)0x0;
        uVar15 = 0;
        pppppppbVar17 = param_2;
        pppppppbVar33 = param_3;
        if (*(byte *)((long)param_1 + 1) == 0x52) {
          uStack_e8 = 1;
          appppppbStack_1e8[0]._0_1_ = 0;
          uVar26 = 2;
          pppppppbVar33 = (byte *******)&UNK_00204b50;
          pppppppbVar17 = appppppbStack_1e8;
          while( true ) {
            param_1 = pppppppbStack_50;
            unaff_R12 = (byte *******)&UNK_00204bb0;
            uVar31 = (long)(int)uVar26 + 1;
            uVar5 = (uint)uVar31;
            pppppppbVar7 = (byte *******)(uVar31 & 0xffffffff);
            uVar23 = *(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) - 0x42;
            pppppppbVar13 = (byte *******)(ulong)uVar23;
            uVar15 = 0;
            pppppppbVar24 = pppppppbVar13;
            if (0x17 < uVar23) break;
            pppppppbVar24 =
                 (byte *******)(&UNK_00204b50 + *(int *)(&UNK_00204b50 + (long)pppppppbVar13 * 4));
            param_2 = pppppppbVar17;
            param_3 = pppppppbVar33;
            switch(pppppppbVar13) {
            case (byte *******)0x0:
              puStack_200 = &UNK_004f9b8d;
              pppppppbVar6 = pppppppbVar17;
              cVar3 = func_0x004fb540();
              if (cVar3 != '\0') {
                if (uStack_60._4_4_ != 0) {
code_r0x004f9b9f:
                  lVar8 = (long)(int)uStack_60;
                  uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_,(int)uStack_60 + -1);
                  pppppppbVar7 = (byte *******)(ulong)auStack_a4[lVar8];
code_r0x004fa110:
                  unaff_R12 = (byte *******)&UNK_00204bb0;
                  uVar15 = 0;
                  if ((0x1fffe < (int)pppppppbVar27) || (uVar5 = uStack_e8, (int)uStack_e8 < 1))
                  goto code_r0x004fad35;
code_r0x004fa130:
                  pppppppbVar25 = pppppppbStack_48;
                  pppppppbVar13 = pppppppbStack_50;
                  uVar26 = (uint)pppppppbVar7;
                  uVar34 = (int)pppppppbVar27 + 1;
                  pppppppbVar27 = (byte *******)(ulong)uVar34;
                  uStack_e8 = uVar5 - 1;
                  uVar15 = (ulong)uStack_e8;
                  uVar23 = uStack_60._4_4_;
                  uVar2 = uStack_60;
                  switch(*(undefined1 *)((long)appppppbStack_1e8 + uVar15)) {
                  case 0:
                    pppppppbVar6 = (byte *******)(long)(int)uVar26;
                    if (0x19 < (byte)((*(byte *)((long)pppppppbStack_50 + (long)pppppppbVar6) & 0xdf
                                      ) + 0xbf)) goto code_r0x004fad16;
                    uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
                    param_2 = pppppppbVar17;
                    pppppppbVar24 = pppppppbVar7;
                    param_3 = pppppppbVar33;
                    if (uStack_e8 == 0x100) goto code_r0x004fad33;
                    uStack_e8 = uVar5;
                    *(undefined1 *)((long)appppppbStack_1e8 + uVar15) = 1;
                    goto code_r0x004fa8c4;
                  case 1:
code_r0x004fad16:
                    pppppppbVar6 = (byte *******)(long)(int)uVar26;
                    pppppppbVar24 = (byte *******)(ulong)(uVar26 + 1);
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if (0x2e < *(byte *)((long)pppppppbStack_50 + (long)pppppppbVar6))
                    goto code_r0x004fad33;
                    uVar15 = 0x401000000001 >>
                             (*(byte *)((long)pppppppbStack_50 + (long)pppppppbVar6) & 0x3f);
                    goto code_r0x004fad35;
                  case 2:
                    if ((int)uStack_60._4_4_ < 1) {
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 3)
                      goto code_r0x004fad33;
                      *(byte *)((long)pppppppbStack_48 + 2) = 0;
                      *(undefined2 *)pppppppbStack_48 = 0x3a3a;
                      pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 2);
                    }
                    lVar8 = (long)(int)auStack_a4[0];
                    auStack_a4[0] = auStack_a4[0] - 1;
                    pppppppbVar24 = (byte *******)(ulong)(uint)(int)(char)abStack_e4[lVar8 + -1];
                    pppppppbVar6 = appppppbStack_1e8;
                    puStack_200 = &UNK_004fa494;
                    cVar3 = func_0x004fad60();
                    uVar15 = 0;
                    if ((cVar3 != '\0') && (uVar34 != 0x1ffff)) goto code_r0x004fa79d;
                    goto code_r0x004fad35;
                  case 3:
                    if ((int)uStack_60._4_4_ < 1) {
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 3)
                      goto code_r0x004fad33;
                      *(byte *)((long)pppppppbStack_48 + 2) = 0;
                      *(undefined2 *)pppppppbStack_48 = 0x3a3a;
                      pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 2);
                    }
                    pppppppbVar6 = appppppbStack_1e8;
                    cVar3 = '\0';
                    ppuVar19 = &puStack_200;
                    puStack_200 = &UNK_004fa4ec;
                    goto code_r0x004fad60;
                  case 4:
                    goto code_r0x004faa91;
                  case 5:
                  case 8:
                  case 0xb:
                    if (0 < (int)uStack_60._4_4_) break;
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if (1 < (ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48)) {
                      *(undefined2 *)pppppppbStack_48 = 0x3e;
                      goto code_r0x004fa6ff;
                    }
                    goto code_r0x004fad33;
                  case 6:
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if (uStack_e8 == 0x100) goto code_r0x004fad33;
                    uStack_e8 = uVar5;
                    *(undefined1 *)((long)appppppbStack_1e8 + uVar15) = 7;
                    goto code_r0x004f9ce6;
                  case 7:
                    pppppppbVar24 = (byte *******)&UNK_00189ac9;
                    pppppppbVar6 = appppppbStack_1e8;
                    puStack_200 = &UNK_004faac2;
                    cVar3 = func_0x004faea0();
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if ((cVar3 == '\0') || (lVar8 = (long)(int)uStack_e8, lVar8 == 0x100))
                    goto code_r0x004fad33;
                    uStack_e8 = uStack_e8 + 1;
                    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 8;
                    goto code_r0x004fa8c4;
                  case 9:
                  case 0x14:
                    goto code_r0x004fa5c4;
                  case 10:
                    pppppppbVar24 = (byte *******)&UNK_00189ac9;
                    pppppppbVar6 = appppppbStack_1e8;
                    puStack_200 = &UNK_004fab66;
                    cVar3 = func_0x004faea0();
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if ((cVar3 == '\0') || (lVar8 = (long)(int)uStack_e8, lVar8 == 0x100))
                    goto code_r0x004fad33;
                    uStack_e8 = uStack_e8 + 1;
                    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0xb;
                    goto code_r0x004fa8c4;
                  case 0xc:
                    if ((int)uStack_60._4_4_ < 1) {
                      pppppppbVar24 =
                           (byte *******)((long)pppppppbStack_40 - (long)pppppppbStack_48);
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if (pppppppbVar24 < (byte *******)0x3) goto code_r0x004fad33;
                      *(byte *)((long)pppppppbStack_48 + 2) = 0;
                      *(undefined2 *)pppppppbStack_48 = 0x203b;
                      pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 2);
                    }
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if (uStack_e8 != 0x100) {
                      uStack_e8 = uVar5;
                      *(undefined1 *)((long)appppppbStack_1e8 + uVar15) = 0xd;
                      goto code_r0x004fa66d;
                    }
                    goto code_r0x004fad33;
                  case 0xd:
                  case 0xe:
                    if ((int)uStack_60._4_4_ < 1) {
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if (1 < (ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48)) {
                        *(undefined2 *)pppppppbStack_48 = 0x5d;
                        goto code_r0x004fa6ff;
                      }
                      goto code_r0x004fad33;
                    }
                    break;
                  case 0xf:
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) != 0x45) {
                      pppppppbVar24 = (byte *******)&UNK_0015f9ff;
                      pppppppbVar6 = appppppbStack_1e8;
                      puStack_200 = &UNK_004fabee;
                      cVar3 = func_0x004faea0();
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if ((cVar3 == '\0') || (lVar8 = (long)(int)uStack_e8, lVar8 == 0x100))
                      goto code_r0x004fad33;
                      uStack_e8 = uStack_e8 + 1;
                      *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x10;
                      goto code_r0x004f9ce6;
                    }
                    pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
                    if ((int)uStack_60._4_4_ < 1) {
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 3)
                      goto code_r0x004fad33;
                      *(byte *)((long)pppppppbStack_48 + 2) = 0;
                      *(undefined2 *)pppppppbStack_48 = 0x292c;
                      pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 2);
                    }
                    break;
                  case 0x10:
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x45)
                    goto joined_r0x004fa29f;
                    pppppppbVar24 = (byte *******)&UNK_0015f9ff;
                    pppppppbVar6 = appppppbStack_1e8;
                    puStack_200 = &UNK_004fabaa;
                    cVar3 = func_0x004faea0();
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if ((cVar3 == '\0') || (lVar8 = (long)(int)uStack_e8, lVar8 == 0x100))
                    goto code_r0x004fad33;
                    uStack_e8 = uStack_e8 + 1;
                    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x11;
                    goto code_r0x004f9ce6;
                  case 0x11:
                    pppppppbVar6 = (byte *******)(long)(int)uVar26;
                    pppppppbVar24 = pppppppbStack_50;
                    if (*(byte *)((long)pppppppbStack_50 + (long)pppppppbVar6) != 0x45) {
                      if ((int)uStack_60._4_4_ < 1) {
                        param_2 = pppppppbVar17;
                        param_3 = pppppppbVar33;
                        if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 7)
                        goto code_r0x004fad33;
                        pbVar14 = (byte *)((long)pppppppbStack_48 + 3);
                        pbVar14[0] = 0x2e;
                        pbVar14[1] = 0x2e;
                        pbVar14[2] = 0x29;
                        pbVar14[3] = 0;
                        *(undefined4 *)pppppppbStack_48 = 0x2e2e202c;
                        pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 6);
                      }
                      uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
                      if (*(byte *)((long)pppppppbStack_50 + (long)pppppppbVar6) != 0x45)
                      goto code_r0x004faa2d;
                      goto code_r0x004fa5bf;
                    }
joined_r0x004fa29f:
                    pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
                    if ((int)uStack_60._4_4_ < 1) {
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2)
                      goto code_r0x004fad33;
                      *(undefined2 *)pppppppbStack_48 = 0x29;
code_r0x004fa6ff:
                      pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
                      uVar2 = uStack_60;
                    }
                    break;
                  case 0x12:
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x45) {
code_r0x004fa5bf:
                      pppppppbVar6 = (byte *******)(long)(int)uVar26;
                      pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
                      pppppppbVar24 = pppppppbStack_50;
                      goto code_r0x004fa5c4;
                    }
code_r0x004faa2d:
                    param_2 = pppppppbVar17;
                    pppppppbVar24 = pppppppbStack_50;
                    pppppppbVar6 = (byte *******)(long)(int)uVar26;
                    param_3 = pppppppbVar33;
                    if (uStack_e8 == 0x100) goto code_r0x004fad33;
                    uStack_e8 = uVar5;
                    *(undefined1 *)((long)appppppbStack_1e8 + uVar15) = 0x12;
                    goto code_r0x004f9ce6;
                  case 0x13:
                    goto code_r0x004facaf;
                  case 0x15:
                  case 0x16:
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x45)
                    goto code_r0x004fa97a;
                    pppppppbVar24 = (byte *******)&UNK_0015e5e4;
                    pppppppbVar6 = appppppbStack_1e8;
                    puStack_200 = &UNK_004fa917;
                    cVar3 = func_0x004faea0();
                    uVar15 = 0;
                    if ((cVar3 == '\0') || (uVar12 = 0x16, uVar15 = 0, uStack_e8 == 0x100))
                    goto code_r0x004fad35;
code_r0x004fac33:
                    unaff_R12 = (byte *******)&UNK_00204bb0;
                    lVar8 = (long)(int)uStack_e8;
                    uStack_e8 = uStack_e8 + 1;
                    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = uVar12;
                    lVar8 = (long)(int)uStack_e8;
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if (lVar8 == 0x100) goto code_r0x004fad33;
                    uStack_e8 = uStack_e8 + 1;
                    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x17;
                    goto code_r0x004fa8c4;
                  case 0x17:
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x70) {
                      if ((int)uStack_60._4_4_ < 1) {
                        param_2 = pppppppbVar17;
                        pppppppbVar24 = (byte *******)(ulong)uStack_60._4_4_;
                        pppppppbVar6 = pppppppbStack_48;
                        param_3 = pppppppbVar33;
                        if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 3)
                        goto code_r0x004fad33;
                        *(byte *)((long)pppppppbStack_48 + 2) = 0;
                        *(undefined2 *)pppppppbStack_48 = 0x3e3c;
                        pppppppbVar6 = (byte *******)((long)pppppppbStack_48 + 2);
                        pppppppbStack_48 = pppppppbVar6;
                      }
                      pppppppbVar24 = (byte *******)(ulong)(uStack_60._4_4_ + 1);
                      uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
                      bVar4 = *(byte *)((long)pppppppbStack_50 + (long)(int)uVar26);
                      goto joined_r0x004fa2b8;
                    }
                    break;
                  case 0x18:
                    bVar4 = *(byte *)((long)pppppppbStack_50 + (long)(int)uVar26);
joined_r0x004fa2b8:
                    if (bVar4 == 0x70) {
                      cVar3 = '\0';
                      uVar15 = 0;
                      ppuVar19 = &puStack_200;
                      puStack_200 = &UNK_004faa60;
                      puVar18 = &stack0xfffffffffffffff8;
                      pppppppbVar6 = appppppbStack_1e8;
                      goto code_r0x004fafb0;
                    }
code_r0x004fa5c4:
                    uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + -1,(int)uStack_60);
                    uVar2 = uStack_60;
                    break;
                  case 0x19:
                    iVar16 = uStack_60._4_4_ - 1;
                    uStack_60 = (byte *******)CONCAT44(iVar16,(int)uStack_60);
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x6e) {
                      uVar26 = uVar26 + 1;
                      if ((int)uVar23 < 2) {
                        param_2 = pppppppbVar17;
                        pppppppbVar24 = pppppppbStack_50;
                        param_3 = pppppppbVar33;
                        if (1 < (long)pppppppbStack_40 - (long)pppppppbStack_48) {
                          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
                          *(byte *)pppppppbVar25 = 0x2d;
                          *(byte *)pppppppbStack_48 = 0;
                          goto code_r0x004fa1f4;
                        }
                        goto code_r0x004fad33;
                      }
                    }
                    else {
code_r0x004fa1f4:
                      if (iVar16 < 1) {
                        param_2 = pppppppbVar17;
                        pppppppbVar24 = pppppppbStack_50;
                        param_3 = pppppppbVar33;
                        if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 3)
                        goto code_r0x004fad33;
                        *(byte *)((long)pppppppbStack_48 + 2) = 0;
                        *(undefined2 *)pppppppbStack_48 = 0x7830;
                        pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 2);
                      }
                    }
                    pppppppbVar7 = pppppppbStack_48;
                    uVar15 = (ulong)(int)uVar26;
                    bVar4 = *(byte *)((long)pppppppbStack_50 + uVar15);
                    pppppppbVar24 = (byte *******)(ulong)bVar4;
                    uVar2 = uStack_60;
                    if (bVar4 == 0x30) {
                      if (iVar16 < 1) {
                        param_2 = pppppppbVar17;
                        param_3 = pppppppbVar33;
                        if ((long)pppppppbStack_40 - (long)pppppppbStack_48 < 2)
                        goto code_r0x004fad33;
                        pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
                        *(byte *)pppppppbVar7 = 0x30;
                        *(byte *)pppppppbStack_48 = 0;
                      }
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if (*(byte *)((long)pppppppbStack_50 + (long)(int)(uVar26 + 1)) != 0x5f)
                      goto code_r0x004fad33;
                      pppppppbVar7 = (byte *******)(ulong)(uVar26 + 2);
                    }
                    else {
                      bVar35 = 5 < (byte)(bVar4 - 0x61);
                      pppppppbVar6 = (byte *******)(ulong)CONCAT31((int3)(bVar4 - 0x61 >> 8),bVar35)
                      ;
                      uVar31 = uVar15;
                      if ((byte)(bVar4 - 0x30) < 10 || !bVar35) {
                        do {
                          pppppppbVar7 = pppppppbStack_48;
                          uVar26 = (int)uVar15 + 1;
                          if (iVar16 < 1) {
                            param_2 = pppppppbVar17;
                            param_3 = pppppppbVar33;
                            if ((long)pppppppbStack_40 - (long)pppppppbStack_48 < 2)
                            goto code_r0x004fad33;
                            pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
                            *(byte *)pppppppbVar7 = *(byte *)((long)pppppppbStack_50 + uVar31);
                            *(byte *)pppppppbStack_48 = 0;
                          }
                          uVar15 = (ulong)uVar26;
                          bVar4 = *(byte *)((long)pppppppbStack_50 + (long)(int)uVar26);
                          pppppppbVar24 = (byte *******)(ulong)bVar4;
                          bVar35 = (byte)(bVar4 - 0x30) < 10;
                          pppppppbVar6 = (byte *******)
                                         (ulong)CONCAT31((int3)(bVar4 - 0x30 >> 8),bVar35);
                          uVar31 = (long)(int)uVar26;
                        } while ((byte)(bVar4 + 0x9f) < 6 || bVar35);
                      }
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if ((char)pppppppbVar24 != '_') goto code_r0x004fad33;
                      pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
                    }
                    break;
                  case 0x1a:
                    if ((int)uStack_60._4_4_ < 1) {
                      pppppppbVar6 = (byte *******)((long)pppppppbStack_40 - (long)pppppppbStack_48)
                      ;
                      param_2 = pppppppbVar17;
                      pppppppbVar24 = pppppppbStack_48;
                      param_3 = pppppppbVar33;
                      if (pppppppbVar6 < (byte *******)0x5) goto code_r0x004fad33;
                      *(byte *)((long)pppppppbStack_48 + 4) = 0;
                      *(undefined4 *)pppppppbStack_48 = 0x3e3c3a3a;
                      pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 4);
                    }
                    uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
                    goto code_r0x004fa2f6;
                  case 0x1b:
code_r0x004fa2f6:
                    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x45) {
                      pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
                      pppppppbVar24 = pppppppbStack_50;
                      goto code_r0x004fa5c4;
                    }
                    param_2 = pppppppbVar17;
                    pppppppbVar24 = pppppppbStack_50;
                    param_3 = pppppppbVar33;
                    if (uStack_e8 == 0x100) goto code_r0x004fad33;
                    uStack_e8 = uVar5;
                    *(undefined1 *)((long)appppppbStack_1e8 + uVar15) = 0x1b;
                    lVar8 = (long)(int)uVar26;
                    if (*(byte *)((long)pppppppbStack_50 + lVar8) != 0x4b) {
                      if (*(byte *)((long)pppppppbStack_50 + lVar8) != 0x4c) goto code_r0x004f9ce6;
                      bVar4 = *(byte *)((long)pppppppbStack_50 + lVar8 + 1);
                      if (bVar4 == 0x5f) {
                        uVar26 = uVar26 + 2;
                        pppppppbVar24 = (byte *******)0x5f;
                      }
                      else {
                        pppppppbVar6 = (byte *******)(ulong)(bVar4 - 0x30);
                        if ((9 < (byte)(bVar4 - 0x30)) &&
                           (bVar4 = (bVar4 & 0xdf) + 0xbf,
                           pppppppbVar24 = (byte *******)(ulong)bVar4, 0x19 < bVar4))
                        goto code_r0x004fad33;
                        pbVar14 = (byte *)((long)pppppppbStack_50 + lVar8 + 2);
                        uVar26 = uVar26 + 2;
                        do {
                          do {
                            bVar4 = *pbVar14;
                            pbVar14 = pbVar14 + 1;
                            uVar26 = uVar26 + 1;
                          } while ((byte)(bVar4 - 0x30) < 10);
                          bVar22 = (bVar4 & 0xdf) + 0xbf;
                          pppppppbVar24 = (byte *******)(ulong)bVar22;
                        } while (bVar22 < 0x1a);
                        if (bVar4 != 0x5f) goto code_r0x004fad33;
                      }
                      pppppppbVar7 = (byte *******)(ulong)uVar26;
                      uVar2 = uStack_60;
                      break;
                    }
                    uVar26 = uVar26 + 1;
                    pppppppbVar7 = (byte *******)(ulong)uVar26;
                    pppppppbVar24 = pppppppbVar13;
code_r0x004fa66d:
                    uVar15 = (ulong)uVar26;
                    bVar4 = *(byte *)((long)pppppppbStack_50 + (long)(int)uVar26);
                    uVar2 = uStack_60;
                    while (uStack_60 = (byte *******)uVar2, bVar4 == 0x42) {
                      uVar26 = (int)uVar15 + 1;
                      pppppppbVar7 = (byte *******)(ulong)uVar26;
                      pppppppbVar6 = appppppbStack_1e8;
                      puStack_200 = &UNK_004fa68a;
                      cVar3 = func_0x004fb540();
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if (cVar3 == '\0') goto code_r0x004fad33;
                      if (uStack_60._4_4_ != 0) goto code_r0x004fa70b;
                      lVar8 = (long)(int)uStack_e8;
                      if (lVar8 == 0x100) goto code_r0x004fad33;
                      uStack_e8 = uStack_e8 + 1;
                      *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x1e;
                      uVar15 = (ulong)(int)uVar26;
                      uVar2 = uStack_60;
                      bVar4 = *(byte *)((long)pppppppbStack_50 + uVar15);
                    }
                    uStack_60._4_4_ = (uint)((ulong)uVar2 >> 0x20);
                    if (bVar4 == 0x70) {
                      pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
                      if (0 < (int)uStack_60._4_4_) break;
                      param_2 = pppppppbVar17;
                      param_3 = pppppppbVar33;
                      if (1 < (ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48)) {
                        *(undefined2 *)pppppppbStack_48 = 0x5f;
                        goto code_r0x004fa6ff;
                      }
                      goto code_r0x004fad33;
                    }
                    uStack_60._0_4_ = (int)uVar2;
                    uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
                    lVar8 = (long)(int)uStack_e8;
                    param_2 = pppppppbVar17;
                    param_3 = pppppppbVar33;
                    if (lVar8 == 0x100) goto code_r0x004fad33;
                    uStack_e8 = uStack_e8 + 1;
                    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x19;
                    goto code_r0x004f9ce6;
                  case 0x1c:
                  case 0x1d:
                    goto code_r0x004f9b9f;
                  case 0x1e:
code_r0x004fa70b:
                    lVar8 = (long)(int)uStack_60;
                    uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_,(int)uStack_60 + -1);
                    pppppppbVar7 = (byte *******)(ulong)auStack_a4[lVar8];
                    uVar2 = uStack_60;
                  }
                  uStack_60 = (byte *******)uVar2;
                  param_2 = pppppppbVar17;
                  param_3 = pppppppbVar33;
                  if (uVar34 == 0x1ffff) goto code_r0x004fad33;
code_r0x004fa79d:
                  param_2 = pppppppbVar17;
                  param_3 = pppppppbVar33;
                  uVar5 = uStack_e8;
                  if ((int)uStack_e8 < 1) goto code_r0x004fad33;
                  goto code_r0x004fa130;
                }
                lVar8 = (long)(int)uStack_e8;
                if (lVar8 != 0x100) {
                  uStack_e8 = uStack_e8 + 1;
                  *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x1c;
                  uVar26 = uVar5;
                  break;
                }
              }
              goto code_r0x004fad33;
            case (byte *******)0x1:
              cVar3 = '\0';
              ppuVar19 = &puStack_200;
              puStack_200 = &UNK_004fa100;
              pppppppbVar6 = pppppppbVar17;
              goto code_r0x004fad60;
            default:
              goto code_r0x004fad35;
            case (byte *******)0x7:
              lVar8 = (long)(int)uStack_e8;
              if (lVar8 == 0x100) goto code_r0x004fad33;
              uStack_e8 = uStack_e8 + 1;
              *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x1a;
              uVar26 = uVar5;
              break;
            case (byte *******)0xb:
              if ((int)uStack_60._4_4_ < 1) {
                if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2)
                goto code_r0x004fad33;
                *(undefined2 *)pppppppbStack_48 = 0x3c;
                pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
              }
              uVar12 = 4;
              if (uStack_e8 != 0x100) goto code_r0x004f9c2d;
              goto code_r0x004fad33;
            case (byte *******)0xc:
              if ((byte)(*(byte *)((long)pppppppbStack_50 + uVar31) + 0xbf) < 0x1a) {
                lVar8 = (long)(int)auStack_a4[0];
                if (lVar8 == 0x40) goto code_r0x004fad33;
                auStack_a4[0] = auStack_a4[0] + 1;
                abStack_e4[lVar8] = *(byte *)((long)pppppppbStack_50 + uVar31);
                lVar8 = (long)(int)uStack_e8;
                if (lVar8 == 0x100) goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 2;
                uVar26 = uVar26 + 2;
              }
              else {
                if ((0x19 < (byte)(*(byte *)((long)pppppppbStack_50 + uVar31) + 0x9f)) ||
                   (lVar8 = (long)(int)uStack_e8, lVar8 == 0x100)) goto code_r0x004fad33;
                uStack_e8 = uStack_e8 + 1;
                *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 3;
                uVar26 = uVar26 + 2;
              }
              break;
            case (byte *******)0x16:
              if ((int)uStack_60._4_4_ < 1) {
                if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2)
                goto code_r0x004fad33;
                *(undefined2 *)pppppppbStack_48 = 0x3c;
                pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
              }
              uVar12 = 6;
              if (uStack_e8 == 0x100) goto code_r0x004fad33;
code_r0x004f9c2d:
              lVar8 = (long)(int)uStack_e8;
              uStack_e8 = uStack_e8 + 1;
              *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = uVar12;
              uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
              lVar8 = (long)(int)uVar5;
              if (*(byte *)((long)pppppppbStack_50 + lVar8) == 0x73) {
                bVar4 = *(byte *)((long)pppppppbStack_50 + lVar8 + 1);
                if (bVar4 == 0x5f) {
                  uVar5 = uVar5 + 2;
                  pppppppbVar24 = (byte *******)0x5f;
                }
                else {
                  pppppppbVar6 = (byte *******)(ulong)(bVar4 - 0x30);
                  if ((9 < (byte)(bVar4 - 0x30)) &&
                     (bVar4 = (bVar4 & 0xdf) + 0xbf, pppppppbVar24 = (byte *******)(ulong)bVar4,
                     0x19 < bVar4)) goto code_r0x004fad33;
                  pbVar14 = (byte *)((long)pppppppbStack_50 + lVar8 + 2);
                  uVar5 = uVar5 + 2;
                  do {
                    do {
                      bVar4 = *pbVar14;
                      pbVar14 = pbVar14 + 1;
                      uVar5 = uVar5 + 1;
                    } while ((byte)(bVar4 - 0x30) < 10);
                    bVar22 = (bVar4 & 0xdf) + 0xbf;
                    pppppppbVar24 = (byte *******)(ulong)bVar22;
                  } while (bVar22 < 0x1a);
                  if (bVar4 != 0x5f) goto code_r0x004fad33;
                }
              }
              lVar8 = (long)(int)uStack_e8;
              if (lVar8 == 0x100) goto code_r0x004fad33;
              uStack_e8 = uStack_e8 + 1;
              *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 9;
              uVar26 = uVar5;
              break;
            case (byte *******)0x17:
              if ((int)uStack_60._4_4_ < 1) {
                if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2)
                goto code_r0x004fad33;
                *(undefined2 *)pppppppbStack_48 = 0x3c;
                pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
              }
              lVar8 = (long)(int)uStack_e8;
              if (lVar8 != 0x100) {
                uStack_e8 = uStack_e8 + 1;
                *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 10;
                goto code_r0x004f9ce6;
              }
              goto code_r0x004fad33;
            }
code_r0x004fa8c4:
          }
        }
      }
      else {
code_r0x004fad33:
        uVar15 = 0;
        pppppppbVar17 = param_2;
        pppppppbVar33 = param_3;
      }
code_r0x004fad35:
      cVar3 = (char)pppppppbVar24;
      if (*(long *)(in_FS_OFFSET + 0x28) == uStack_38) {
        return (byte *******)(uVar15 & 0xffffffffffffff01);
      }
      puStack_200 = &UNK_004fad5d;
      func_0x0099bd00();
code_r0x004fad60:
      ppppppbVar11 = pppppppbVar6[0x33];
      iVar16 = *(int *)(pppppppbVar6 + 0x32);
      lVar8 = (long)iVar16;
      uVar15 = 0;
      if (*(char *)((long)ppppppbVar11 + lVar8) == 's') {
        *(int *)(pppppppbVar6 + 0x32) = iVar16 + 1;
        bVar4 = *(byte *)((long)ppppppbVar11 + lVar8 + 1);
        if (bVar4 == 0x5f) {
          *(int *)(pppppppbVar6 + 0x32) = iVar16 + 2;
          uVar15 = 1;
          puVar18 = &stack0xfffffffffffffff8;
        }
        else {
          if ((9 < (byte)(bVar4 - 0x30)) && (0x19 < (byte)((bVar4 & 0xdf) + 0xbf))) {
            return (byte *******)0x0;
          }
          *(undefined1 **)((long)ppuVar19 + -8) = &stack0xfffffffffffffff8;
          pbVar14 = (byte *)((long)ppppppbVar11 + lVar8 + 2);
          iVar16 = iVar16 + 2;
          bVar35 = false;
          iVar28 = 0;
          do {
            *(int *)(pppppppbVar6 + 0x32) = iVar16;
            if (iVar28 < 0x2108421) {
              bVar4 = pbVar14[-1];
              if ((byte)(bVar4 - 0x30) < 10) {
                iVar30 = bVar4 - 0x30;
              }
              else if ((byte)(bVar4 + 0x9f) < 0x1a) {
                iVar30 = bVar4 - 0x57;
              }
              else {
                iVar30 = (char)bVar4 + -0x1d;
              }
              iVar28 = iVar28 * 0x3e + iVar30;
            }
            else {
              bVar35 = true;
            }
            bVar4 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            iVar16 = iVar16 + 1;
          } while (((byte)(bVar4 - 0x30) < 10) || ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a));
          puVar18 = *(undefined1 **)((long)ppuVar19 + -8);
          if (bVar4 != 0x5f) {
            return (byte *******)0x0;
          }
          *(int *)(pppppppbVar6 + 0x32) = iVar16;
          uVar15 = 0xffffffff;
          if (!bVar35) {
            uVar15 = 0xffffffff;
            if (-2 < iVar28) {
              uVar15 = (ulong)(iVar28 + 2);
            }
          }
        }
      }
code_r0x004fafb0:
      puVar21 = (undefined1 *)((long)ppuVar19 + -8);
      *(undefined1 **)((long)ppuVar19 + -8) = puVar18;
      *(byte ********)((long)ppuVar19 + -0x10) = pppppppbVar27;
      *(byte ********)((long)ppuVar19 + -0x18) = pppppppbVar33;
      *(byte ********)((long)ppuVar19 + -0x20) = param_1;
      *(byte ********)((long)ppuVar19 + -0x28) = unaff_R12;
      *(byte ********)((long)ppuVar19 + -0x30) = pppppppbVar17;
      ppuVar20 = (undefined **)((long)ppuVar19 + -0x88);
      *(undefined8 *)((long)ppuVar19 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      ppppppbVar11 = pppppppbVar6[0x33];
      uVar29 = (ulong)*(uint *)(pppppppbVar6 + 0x32);
      uVar31 = (ulong)(int)*(uint *)(pppppppbVar6 + 0x32);
      cVar1 = *(char *)((long)ppppppbVar11 + uVar31);
      cVar32 = cVar1;
      if (cVar1 == 'u') {
        uVar29 = uVar31 + 1;
        *(int *)(pppppppbVar6 + 0x32) = (int)uVar29;
        lVar8 = uVar31 + 1;
        uVar31 = uVar29;
        cVar32 = *(char *)((long)ppppppbVar11 + lVar8);
      }
      pppppppbVar24 = (byte *******)0x0;
      if (9 < (byte)(cVar32 - 0x30U)) goto code_r0x004fb470;
      iVar28 = (int)uVar29 + 1;
      *(int *)(pppppppbVar6 + 0x32) = iVar28;
      iVar16 = *(char *)((long)ppppppbVar11 + uVar31) + -0x30;
      pppppppbVar27 = pppppppbVar6;
      if (iVar16 == 0) {
        iVar16 = 0;
      }
      else if ((byte)(*(char *)((long)ppppppbVar11 + (long)iVar28) - 0x30U) < 10) {
        pcVar10 = (char *)((long)ppppppbVar11 + (long)iVar28);
        do {
          pcVar9 = pcVar10 + 1;
          if (0xccccccb < iVar16) goto code_r0x004fb46e;
          iVar28 = iVar28 + 1;
          *(int *)(pppppppbVar6 + 0x32) = iVar28;
          iVar16 = (int)*pcVar10 + iVar16 * 10 + -0x30;
          pcVar10 = pcVar9;
        } while ((byte)(*pcVar9 - 0x30U) < 10);
      }
      if (*(char *)((long)ppppppbVar11 + (long)iVar28) == '_') {
        iVar28 = iVar28 + 1;
        *(int *)(pppppppbVar6 + 0x32) = iVar28;
      }
      if (cVar1 == 'u') {
        *(long *)((long)ppuVar19 + -0x68) = (long)ppppppbVar11 + (long)iVar28;
        *(long *)((long)ppuVar19 + -0x60) = (long)ppppppbVar11 + (long)iVar28 + (long)iVar16;
        ppppppbVar11 = pppppppbVar6[0x35];
        *(byte *******)((long)ppuVar19 + -0x58) = pppppppbVar6[0x34];
        *(byte *******)((long)ppuVar19 + -0x50) = ppppppbVar11;
        *(undefined4 *)((long)ppuVar19 + -0x78) = *(undefined4 *)((long)ppuVar19 + -0x58);
        *(undefined4 *)((long)ppuVar19 + -0x74) = *(undefined4 *)((long)ppuVar19 + -0x54);
        *(undefined4 *)((long)ppuVar19 + -0x70) = *(undefined4 *)((long)ppuVar19 + -0x50);
        *(undefined4 *)((long)ppuVar19 + -0x6c) = *(undefined4 *)((long)ppuVar19 + -0x4c);
        *(undefined4 *)((long)ppuVar19 + -0x88) = *(undefined4 *)((long)ppuVar19 + -0x68);
        *(undefined4 *)((long)ppuVar19 + -0x84) = *(undefined4 *)((long)ppuVar19 + -100);
        *(undefined4 *)((long)ppuVar19 + -0x80) = *(undefined4 *)((long)ppuVar19 + -0x60);
        *(undefined4 *)((long)ppuVar19 + -0x7c) = *(undefined4 *)((long)ppuVar19 + -0x5c);
        *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb0e2;
        ppppppbVar11 = (byte ******)
                       _ZN4absl12lts_2026052618debugging_internal18DecodeRustPunycodeENS1_25DecodeRustPunycodeOptionsE
                                 ();
        pppppppbVar6[0x34] = ppppppbVar11;
        if (ppppppbVar11 != (byte ******)0x0) {
          *(int *)(pppppppbVar6 + 0x32) = *(int *)(pppppppbVar6 + 0x32) + iVar16;
          goto code_r0x004fb102;
        }
        goto code_r0x004fb46e;
      }
code_r0x004fb102:
      if (cVar3 != '\0') {
        iVar28 = *(int *)((long)pppppppbVar6 + 0x18c);
        if (cVar3 == 'S') {
          if (iVar28 < 1) {
            ppppppbVar11 = pppppppbVar6[0x34];
            pppppppbVar27 = pppppppbVar6;
            if ((ulong)((long)pppppppbVar6[0x35] - (long)ppppppbVar11) < 6) goto code_r0x004fb46e;
            *(undefined2 *)((long)ppppppbVar11 + 4) = 0x6d;
            *(undefined4 *)ppppppbVar11 = 0x6968737b;
            pppppppbVar6[0x34] = (byte ******)((long)pppppppbVar6[0x34] + 5);
          }
code_r0x004fb196:
          if ((0 < iVar16) && (*(int *)((long)pppppppbVar6 + 0x18c) < 1)) {
            pppppppbVar27 = pppppppbVar6;
            if ((ulong)((long)pppppppbVar6[0x35] - (long)pppppppbVar6[0x34]) < 2)
            goto code_r0x004fb46e;
            *(undefined2 *)pppppppbVar6[0x34] = 0x3a;
            pppppppbVar6[0x34] = (byte ******)((long)pppppppbVar6[0x34] + 1);
          }
          goto code_r0x004fb1ca;
        }
        if (cVar3 == 'C') {
          if (iVar28 < 1) {
            ppppppbVar11 = pppppppbVar6[0x34];
            pppppppbVar27 = pppppppbVar6;
            if ((ulong)((long)pppppppbVar6[0x35] - (long)ppppppbVar11) < 9) goto code_r0x004fb46e;
            *ppppppbVar11 = (byte *****)0x657275736f6c637b;
            *(undefined1 *)(ppppppbVar11 + 1) = 0;
            pppppppbVar6[0x34] = pppppppbVar6[0x34] + 1;
          }
          goto code_r0x004fb196;
        }
        if (0 < iVar28) goto code_r0x004fb196;
        ppppppbVar11 = pppppppbVar6[0x34];
        pppppppbVar27 = pppppppbVar6;
        if (1 < (long)pppppppbVar6[0x35] - (long)ppppppbVar11) {
          pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
          *(undefined1 *)ppppppbVar11 = 0x7b;
          *(undefined1 *)pppppppbVar6[0x34] = 0;
          if (*(int *)((long)pppppppbVar6 + 0x18c) < 1) {
            ppppppbVar11 = pppppppbVar6[0x34];
            if ((long)pppppppbVar6[0x35] - (long)ppppppbVar11 < 2) goto code_r0x004fb46e;
            pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
            *(char *)ppppppbVar11 = cVar3;
            *(undefined1 *)pppppppbVar6[0x34] = 0;
          }
          goto code_r0x004fb196;
        }
        goto code_r0x004fb46e;
      }
code_r0x004fb1ca:
      if ((cVar1 != 'u') && (0 < iVar16)) {
        do {
          while( true ) {
            iVar28 = *(int *)(pppppppbVar6 + 0x32);
            *(int *)(pppppppbVar6 + 0x32) = iVar28 + 1;
            bVar4 = *(byte *)((long)pppppppbVar6[0x33] + (long)iVar28);
            if ((0x19 < (byte)((bVar4 & 0xdf) + 0xbf)) &&
               (((-1 < (char)bVar4 && (bVar4 != 0x5f)) &&
                (pppppppbVar27 = pppppppbVar6, (byte)(bVar4 - 0x3a) < 0xf6))))
            goto code_r0x004fb46e;
            if (*(int *)((long)pppppppbVar6 + 0x18c) < 1) break;
            iVar16 = iVar16 + -1;
            if (iVar16 == 0) goto code_r0x004fb266;
          }
          ppppppbVar11 = pppppppbVar6[0x34];
          pppppppbVar27 = pppppppbVar6;
          if ((long)pppppppbVar6[0x35] - (long)ppppppbVar11 < 2) goto code_r0x004fb46e;
          pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
          *(byte *)ppppppbVar11 = bVar4;
          *(undefined1 *)pppppppbVar6[0x34] = 0;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
code_r0x004fb266:
      pppppppbVar24 = (byte *******)0x1;
      if (cVar3 == '\0') goto code_r0x004fb470;
      iVar16 = (int)uVar15;
      if (*(int *)((long)pppppppbVar6 + 0x18c) < 1) {
        ppppppbVar11 = pppppppbVar6[0x34];
        pppppppbVar27 = pppppppbVar6;
        if ((long)pppppppbVar6[0x35] - (long)ppppppbVar11 < 2) goto code_r0x004fb46e;
        pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
        *(undefined1 *)ppppppbVar11 = 0x23;
        *(undefined1 *)pppppppbVar6[0x34] = 0;
        if (iVar16 < 0) goto code_r0x004fb367;
code_r0x004fb286:
        if (iVar16 == 0) {
          if (0 < *(int *)((long)pppppppbVar6 + 0x18c)) goto code_r0x004fb470;
          ppppppbVar11 = pppppppbVar6[0x34];
          pppppppbVar27 = pppppppbVar6;
          if ((long)pppppppbVar6[0x35] - (long)ppppppbVar11 < 2) goto code_r0x004fb46e;
          pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
          *(undefined1 *)ppppppbVar11 = 0x30;
          goto code_r0x004fb444;
        }
        *(undefined4 *)((long)ppuVar19 + -0x40) = 0;
        *(undefined8 *)((long)ppuVar19 + -0x48) = 0;
        puVar18 = (undefined1 *)((long)ppuVar19 + -0x3d);
        do {
          uVar26 = (uint)uVar15;
          puVar18[-1] = (char)uVar15 + (char)(uVar15 / 10) * -10 | 0x30;
          puVar18 = puVar18 + -1;
          uVar15 = uVar15 / 10;
        } while (9 < uVar26);
        if (0 < *(int *)((long)pppppppbVar6 + 0x18c)) goto code_r0x004fb44e;
        *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb2f2;
        lVar8 = func_0x0099bcf0(puVar18);
        pppppppbVar27 = (byte *******)pppppppbVar6[0x34];
        if (lVar8 + 1U <= (ulong)((long)pppppppbVar6[0x35] - (long)pppppppbVar27)) {
          *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb31b;
          func_0x0099bda0(pppppppbVar27,puVar18);
          pppppppbVar6[0x34] = (byte ******)((long)pppppppbVar6[0x34] + lVar8);
          goto code_r0x004fb44e;
        }
code_r0x004fb46e:
        pppppppbVar24 = (byte *******)0x0;
        pppppppbVar6 = pppppppbVar27;
      }
      else {
        if (-1 < iVar16) goto code_r0x004fb286;
code_r0x004fb367:
        if (0 < *(int *)((long)pppppppbVar6 + 0x18c)) goto code_r0x004fb470;
        ppppppbVar11 = pppppppbVar6[0x34];
        pppppppbVar27 = pppppppbVar6;
        if ((long)pppppppbVar6[0x35] - (long)ppppppbVar11 < 2) goto code_r0x004fb46e;
        pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
        *(undefined1 *)ppppppbVar11 = 0x3f;
code_r0x004fb444:
        *(undefined1 *)pppppppbVar6[0x34] = 0;
code_r0x004fb44e:
        pppppppbVar24 = (byte *******)0x1;
        if (*(int *)((long)pppppppbVar6 + 0x18c) < 1) {
          ppppppbVar11 = pppppppbVar6[0x34];
          pppppppbVar27 = pppppppbVar6;
          if ((long)pppppppbVar6[0x35] - (long)ppppppbVar11 < 2) goto code_r0x004fb46e;
          pppppppbVar6[0x34] = (byte ******)((long)ppppppbVar11 + 1);
          *(undefined1 *)ppppppbVar11 = 0x7d;
          *(undefined1 *)pppppppbVar6[0x34] = 0;
        }
      }
code_r0x004fb470:
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar19 + -0x38)) {
        return pppppppbVar24;
      }
      *(undefined **)((long)ppuVar19 + -0x90) = &UNK_004fb4ad;
      func_0x0099bd00();
      pppppppbVar17 = pppppppbVar6;
code_r0x004fb4b0:
      ppppppbVar11 = pppppppbVar17[0x33];
      iVar16 = *(int *)(pppppppbVar17 + 0x32);
      lVar8 = (long)iVar16;
      if (*(char *)((long)ppppppbVar11 + lVar8) == 'L') {
        *(int *)(pppppppbVar17 + 0x32) = iVar16 + 1;
        bVar4 = *(byte *)((long)ppppppbVar11 + lVar8 + 1);
        if (bVar4 == 0x5f) {
          iVar16 = iVar16 + 2;
code_r0x004fb4dc:
          *(int *)(pppppppbVar17 + 0x32) = iVar16;
          return (byte *******)0x1;
        }
        if (((byte)(bVar4 - 0x30) < 10) || ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a)) {
          *(undefined1 **)((long)ppuVar20 + -8) = puVar21;
          pbVar14 = (byte *)((long)ppppppbVar11 + lVar8 + 2);
          iVar16 = iVar16 + 2;
          do {
            do {
              *(int *)(pppppppbVar17 + 0x32) = iVar16;
              bVar4 = *pbVar14;
              pbVar14 = pbVar14 + 1;
              iVar16 = iVar16 + 1;
            } while ((byte)(bVar4 - 0x30) < 10);
          } while ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a);
          if (bVar4 == 0x5f) goto code_r0x004fb4dc;
        }
      }
      return (byte *******)0x0;
    }
  }
  else {
    uStack_38 = CONCAT44(uStack_38._4_4_,(int)param_3);
    uStack_30 = CONCAT44(uStack_30._4_4_,3);
    pppppppbStack_48 = param_1;
    pppppppbStack_40 = param_2;
    if ((*(byte *)param_1 == 0x5f) && (*(byte *)((long)param_1 + 1) == 0x5a)) {
      uStack_30 = 0x200000003;
      uStack_38._4_4_ = 2;
      param_1 = (byte *******)&pppppppbStack_48;
      pppppppbStack_50 = (byte *******)&UNK_004f25e2;
      uStack_38._0_4_ = (int)param_3;
      cVar3 = func_0x004f27b0();
      uStack_38 = CONCAT44(uStack_38._4_4_ + -1,(undefined4)uStack_38);
      if (cVar3 != '\0') {
        bVar4 = *(byte *)((long)pppppppbStack_48 + (long)uStack_30._4_4_);
        unaff_RBX = pppppppbStack_48;
        if (((bVar4 != 0) && (bVar4 != 0x2e)) && (bVar4 == 0x40)) {
          pppppppbVar33 = (byte *******)((long)pppppppbStack_48 + (long)uStack_30._4_4_);
          pppppppbStack_50 = (byte *******)&UNK_004f2615;
          pppppppbVar7 = (byte *******)func_0x0099bcf0((byte *)((long)pppppppbVar33 + 1));
          pppppppbVar6 = (byte *******)((long)pppppppbVar7 + 1);
          pppppppbVar27 = (byte *******)&pppppppbStack_48;
          pppppppbVar17 = (byte *******)&pppppppbStack_50;
          pppppppbStack_50 = (byte *******)&UNK_004f2625;
          goto code_r0x004f4290;
        }
      }
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lVar8) {
      return (byte *******)0x0;
    }
  }
  pppppppbStack_50 = (byte *******)&UNK_004f2654;
  func_0x0099bd00();
  pppppppbVar24 = (byte *******)&pppppppbStack_50;
  pppppppbVar17 = (byte *******)auStack_70;
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = (byte ******)0x0;
  param_1[1] = (byte ******)0x0;
  param_1[2] = (byte ******)0x0;
  iStack_6c = 0;
  puStack_78 = &UNK_004f26a3;
  uStack_60 = unaff_RBX;
  pppppppbStack_50 = (byte *******)&stack0xfffffffffffffff8;
  pppppppbVar6 = (byte *******)__cxa_demangle(param_2,0,0,&iStack_6c);
  if (pppppppbVar6 == (byte *******)0x0 || iStack_6c != 0) {
    puStack_78 = &UNK_004f26d7;
    pppppppbVar33 = param_2;
    pppppppbVar27 = param_1;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  }
  else {
    puStack_78 = &UNK_004f26c5;
    pppppppbVar33 = pppppppbVar6;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
    puStack_78 = &UNK_004f26cd;
    pppppppbVar27 = pppppppbVar6;
    func_0x0099c1f0();
    param_2 = pppppppbVar6;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return param_1;
  }
  puStack_78 = &UNK_004f26f7;
  pppppppbVar7 = (byte *******)func_0x0099bd00();
  if (-1 < *(int *)(pppppppbVar27 + 5)) {
    return pppppppbVar7;
  }
  if (*(byte *)pppppppbVar33 == 0) {
    pppppppbVar6 = (byte *******)0x0;
  }
  else {
    puStack_90 = &UNK_004f2725;
    pppppppbStack_88 = param_1;
    pppppppbStack_80 = param_2;
    puStack_78 = (undefined *)&pppppppbStack_50;
    pppppppbVar7 = (byte *******)func_0x0099bcf0((byte *)((long)pppppppbVar33 + 1));
    pppppppbVar6 = (byte *******)((long)pppppppbVar7 + 1);
    pppppppbVar17 = (byte *******)auStack_70;
    pppppppbVar24 = (byte *******)puStack_78;
  }
code_r0x004f4290:
  if ((pppppppbVar6 != (byte *******)0x0) && (*(int *)(pppppppbVar27 + 5) < 0)) {
    *(byte ********)((long)pppppppbVar17 + -8) = pppppppbVar24;
    if (*(byte *)pppppppbVar33 == 0x3c) {
      iVar16 = *(int *)(pppppppbVar27 + 4);
      lVar8 = (long)iVar16;
      if (((0 < lVar8) && (uVar26 = *(uint *)(pppppppbVar27 + 2), iVar16 < (int)uVar26)) &&
         (*(char *)((long)pppppppbVar27[1] + lVar8 + -1) == '<')) {
        if (iVar16 + 1U < uVar26) {
          *(uint *)(pppppppbVar27 + 4) = iVar16 + 1U;
          *(undefined1 *)((long)pppppppbVar27[1] + lVar8) = 0x20;
          if (*(int *)(pppppppbVar27 + 4) < *(int *)(pppppppbVar27 + 2)) {
            *(undefined1 *)((long)pppppppbVar27[1] + (long)*(int *)(pppppppbVar27 + 4)) = 0;
          }
        }
        else {
          *(uint *)(pppppppbVar27 + 4) = uVar26 + 1;
        }
      }
    }
    if ((*(int *)(pppppppbVar27 + 4) < *(int *)(pppppppbVar27 + 2)) &&
       ((*(byte *)pppppppbVar33 == 0x5f || ((byte)((*(byte *)pppppppbVar33 & 0xdf) + 0xbf) < 0x1a)))
       ) {
      *(int *)((long)pppppppbVar27 + 0x24) = *(int *)(pppppppbVar27 + 4);
      *(short *)(pppppppbVar27 + 5) = (short)pppppppbVar6;
    }
    pppppppbVar24 = (byte *******)0x0;
    do {
      iVar16 = *(int *)(pppppppbVar27 + 4);
      iVar28 = iVar16 + 1;
      if (*(int *)(pppppppbVar27 + 2) <= iVar28) {
        *(int *)(pppppppbVar27 + 4) = *(int *)(pppppppbVar27 + 2) + 1;
        return pppppppbVar24;
      }
      bVar4 = *(byte *)((long)pppppppbVar33 + (long)pppppppbVar24);
      *(int *)(pppppppbVar27 + 4) = iVar28;
      *(byte *)((long)pppppppbVar27[1] + (long)iVar16) = bVar4;
      pppppppbVar24 = (byte *******)((long)pppppppbVar24 + 1);
    } while (pppppppbVar6 != pppppppbVar24);
    pppppppbVar7 = (byte *******)(long)*(int *)(pppppppbVar27 + 4);
    if (*(int *)(pppppppbVar27 + 4) < *(int *)(pppppppbVar27 + 2)) {
      *(undefined1 *)((long)pppppppbVar7 + (long)pppppppbVar27[1]) = 0;
    }
  }
  return pppppppbVar7;
code_r0x004faa91:
  param_2 = pppppppbVar17;
  param_3 = pppppppbVar33;
  if (uStack_e8 == 0x100) goto code_r0x004fad33;
  uStack_e8 = uVar5;
  *(undefined1 *)((long)appppppbStack_1e8 + uVar15) = 5;
code_r0x004f9ce6:
  unaff_R12 = (byte *******)&UNK_00204bb0;
  iVar16 = (int)pppppppbVar7;
  lVar8 = (long)iVar16;
  pppppppbVar25 = (byte *******)(ulong)*(byte *)((long)pppppppbStack_50 + lVar8);
  uVar26 = *(byte *)((long)pppppppbStack_50 + lVar8) - 0x61;
  pppppppbVar6 = (byte *******)(ulong)uVar26;
  uStack_1ec = (uint)pppppppbVar27;
  pppppppbVar13 = pppppppbStack_50;
  if (0x19 < (byte)uVar26) {
    do {
      uVar26 = (uint)pppppppbVar7;
      pppppppbVar24 = (byte *******)&UNK_00204c2c;
      uVar5 = uStack_e8;
      switch((int)pppppppbVar25) {
      case 0x41:
        if ((int)uStack_60._4_4_ < 1) {
          param_2 = pppppppbVar17;
          param_3 = pppppppbVar33;
          if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2) goto code_r0x004fad33;
          *(undefined2 *)pppppppbStack_48 = 0x5b;
          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
        }
        uVar12 = 0xc;
        goto joined_r0x004f9f2d;
      case 0x42:
        puStack_200 = &UNK_004f9e11;
        pppppppbVar6 = pppppppbVar17;
        cVar3 = func_0x004fb540();
        param_2 = pppppppbVar17;
        param_3 = pppppppbVar33;
        if (cVar3 != '\0') {
          if (uStack_60._4_4_ == 0) {
            uVar12 = 0x1d;
            uVar5 = uStack_e8;
            goto joined_r0x004f9f2d;
          }
          goto code_r0x004f9b9f;
        }
        goto code_r0x004fad33;
      default:
        goto code_r0x004fa8c4;
      case 0x44:
        uVar26 = uVar26 + 1;
        pppppppbVar24 = (byte *******)&UNK_00189ace;
        puStack_200 = &UNK_004fa950;
        pppppppbVar6 = pppppppbVar17;
        cVar3 = func_0x004faea0();
        param_2 = pppppppbVar17;
        param_3 = pppppppbVar33;
        if (cVar3 == '\0') goto code_r0x004fad33;
        puStack_200 = &UNK_004fa960;
        pppppppbVar6 = pppppppbVar17;
        cVar3 = func_0x004faf10();
        if (cVar3 == '\0') goto code_r0x004fad33;
        if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar26) == 0x45) goto code_r0x004fa97a;
        uVar12 = 0x15;
        if (uStack_e8 != 0x100) goto code_r0x004fac33;
        goto code_r0x004fad33;
      case 0x46:
        goto code_r0x004fa994;
      case 0x4f:
        pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
        if ((int)uStack_60._4_4_ < 1) {
          pppppppbVar24 = (byte *******)((long)pppppppbStack_40 - (long)pppppppbStack_48);
          param_2 = pppppppbVar17;
          param_3 = pppppppbVar33;
          if (pppppppbVar24 < (byte *******)0x6) goto code_r0x004fad33;
          ((byte *)((long)pppppppbStack_48 + 4))[0] = 0x20;
          ((byte *)((long)pppppppbStack_48 + 4))[1] = 0;
          *(undefined4 *)pppppppbStack_48 = 0x74756d2a;
          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 5);
        }
        break;
      case 0x50:
        pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
        if ((int)uStack_60._4_4_ < 1) {
          pppppppbVar24 = (byte *******)((long)pppppppbStack_40 - (long)pppppppbStack_48);
          param_2 = pppppppbVar17;
          param_3 = pppppppbVar33;
          if (pppppppbVar24 < (byte *******)0x8) goto code_r0x004fad33;
          *pppppppbStack_48 = (byte ******)0x2074736e6f632a;
          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 7);
        }
        break;
      case 0x51:
        lVar8 = (long)(int)uVar26;
        pppppppbVar24 = (byte *******)(lVar8 + 1);
        if ((int)uStack_60._4_4_ < 1) {
          param_2 = pppppppbVar17;
          pppppppbVar6 = pppppppbStack_48;
          param_3 = pppppppbVar33;
          if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 6) goto code_r0x004fad33;
          ((byte *)((long)pppppppbStack_48 + 4))[0] = 0x20;
          ((byte *)((long)pppppppbStack_48 + 4))[1] = 0;
          *(undefined4 *)pppppppbStack_48 = 0x74756d26;
          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 5);
          bVar4 = *(byte *)((long)pppppppbVar13 + (long)pppppppbVar24);
        }
        else {
          bVar4 = *(byte *)((long)pppppppbVar13 + (long)pppppppbVar24);
        }
        if (bVar4 == 0x4c) {
          pppppppbVar24 = (byte *******)(lVar8 + 2);
          bVar4 = *(byte *)((long)pppppppbVar13 + lVar8 + 2);
          if (bVar4 != 0x5f) {
            if (((byte)(bVar4 - 0x30) < 10) ||
               (param_2 = pppppppbVar17, pppppppbVar6 = (byte *******)(ulong)(bVar4 - 0x30),
               param_3 = pppppppbVar33, (byte)((bVar4 & 0xdf) + 0xbf) < 0x1a)) {
              pbVar14 = (byte *)((long)pppppppbVar13 + (long)pppppppbVar24) + 1;
              pppppppbVar7 = (byte *******)(ulong)(uVar26 + 3);
              do {
                do {
                  bVar4 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                  pppppppbVar7 = (byte *******)(ulong)((int)pppppppbVar7 + 1);
                } while ((byte)(bVar4 - 0x30) < 10);
                bVar22 = (bVar4 & 0xdf) + 0xbf;
              } while (bVar22 < 0x1a);
              goto code_r0x004fa0e4;
            }
            goto code_r0x004fad33;
          }
code_r0x004fa089:
          pppppppbVar7 = (byte *******)(ulong)(uVar26 + 3);
        }
        else {
code_r0x004fa08e:
          pppppppbVar7 = (byte *******)((ulong)pppppppbVar24 & 0xffffffff);
        }
        break;
      case 0x52:
        lVar8 = (long)(int)uVar26;
        pppppppbVar24 = (byte *******)(lVar8 + 1);
        if ((int)uStack_60._4_4_ < 1) {
          param_2 = pppppppbVar17;
          pppppppbVar6 = pppppppbStack_48;
          param_3 = pppppppbVar33;
          if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2) goto code_r0x004fad33;
          *(undefined2 *)pppppppbStack_48 = 0x26;
          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
          bVar4 = *(byte *)((long)pppppppbVar13 + (long)pppppppbVar24);
        }
        else {
          bVar4 = *(byte *)((long)pppppppbVar13 + (long)pppppppbVar24);
        }
        if (bVar4 != 0x4c) goto code_r0x004fa08e;
        pppppppbVar24 = (byte *******)(lVar8 + 2);
        bVar4 = *(byte *)((long)pppppppbVar13 + lVar8 + 2);
        if (bVar4 == 0x5f) goto code_r0x004fa089;
        if ((9 < (byte)(bVar4 - 0x30)) &&
           (param_2 = pppppppbVar17, pppppppbVar6 = (byte *******)(ulong)(bVar4 - 0x30),
           param_3 = pppppppbVar33, 0x19 < (byte)((bVar4 & 0xdf) + 0xbf))) goto code_r0x004fad33;
        pbVar14 = (byte *)((long)pppppppbVar13 + (long)pppppppbVar24) + 1;
        pppppppbVar7 = (byte *******)(ulong)(uVar26 + 3);
        do {
          do {
            bVar4 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            pppppppbVar7 = (byte *******)(ulong)((int)pppppppbVar7 + 1);
          } while ((byte)(bVar4 - 0x30) < 10);
          bVar22 = (bVar4 & 0xdf) + 0xbf;
        } while (bVar22 < 0x1a);
code_r0x004fa0e4:
        pppppppbVar24 = (byte *******)(ulong)bVar4;
        param_2 = pppppppbVar17;
        pppppppbVar6 = (byte *******)(ulong)bVar22;
        param_3 = pppppppbVar33;
        if (bVar4 != 0x5f) goto code_r0x004fad33;
        break;
      case 0x53:
        if ((int)uStack_60._4_4_ < 1) {
          param_2 = pppppppbVar17;
          param_3 = pppppppbVar33;
          if ((ulong)((long)pppppppbStack_40 - (long)pppppppbStack_48) < 2) goto code_r0x004fad33;
          *(undefined2 *)pppppppbStack_48 = 0x5b;
          pppppppbStack_48 = (byte *******)((long)pppppppbStack_48 + 1);
        }
        uVar12 = 0xe;
joined_r0x004f9f2d:
        pppppppbVar7 = (byte *******)(ulong)(uVar26 + 1);
        param_2 = pppppppbVar17;
        param_3 = pppppppbVar33;
        uStack_e8 = uVar5;
        if (uVar5 == 0x100) goto code_r0x004fad33;
code_r0x004f9db7:
        uStack_e8 = uVar5 + 1;
        *(undefined1 *)((long)appppppbStack_1e8 + (long)(int)uVar5) = uVar12;
        pppppppbVar13 = pppppppbStack_50;
        break;
      case 0x54:
        pppppppbVar7 = (byte *******)((long)(int)uVar26 + 1U & 0xffffffff);
        if ((int)uStack_60._4_4_ < 1) {
          pppppppbVar6 = (byte *******)((long)pppppppbStack_40 - (long)pppppppbStack_48);
          param_2 = pppppppbVar17;
          pppppppbVar24 = pppppppbStack_48;
          param_3 = pppppppbVar33;
          if (pppppppbVar6 < (byte *******)0x2) goto code_r0x004fad33;
          *(undefined2 *)pppppppbStack_48 = 0x28;
          pppppppbVar24 = (byte *******)((long)pppppppbStack_48 + 1);
          pppppppbStack_48 = pppppppbVar24;
        }
        if (*(byte *)((long)pppppppbVar13 + (long)(int)uVar26 + 1U) != 0x45) {
          uVar12 = 0xf;
          param_2 = pppppppbVar17;
          param_3 = pppppppbVar33;
          if (uStack_e8 != 0x100) goto code_r0x004f9db7;
          goto code_r0x004fad33;
        }
        pppppppbVar7 = (byte *******)(ulong)(uVar26 + 2);
        pppppppbVar24 = (byte *******)&UNK_001692c7;
        puStack_200 = &UNK_004faa20;
        pppppppbVar6 = pppppppbVar17;
        cVar3 = func_0x004faea0();
        param_2 = pppppppbVar17;
        param_3 = pppppppbVar33;
        if (cVar3 == '\0') goto code_r0x004fad33;
        goto code_r0x004fa110;
      }
      iVar16 = (int)pppppppbVar7;
      lVar8 = (long)iVar16;
      pppppppbVar25 = (byte *******)(ulong)*(byte *)((long)pppppppbVar13 + lVar8);
      uVar26 = *(byte *)((long)pppppppbVar13 + lVar8) - 0x61;
      pppppppbVar6 = (byte *******)(ulong)uVar26;
      if ((byte)uVar26 < 0x1a) break;
    } while( true );
  }
  pppppppbVar7 = (byte *******)(ulong)(iVar16 + 1);
  bVar4 = *(byte *)((long)pppppppbVar13 + lVar8) + 0x9f;
  param_2 = pppppppbVar17;
  pppppppbVar24 = pppppppbVar25;
  param_3 = pppppppbVar33;
  if ((0x19 < bVar4) || ((0x3bcfbbfU >> (bVar4 & 0x1f) & 1) == 0)) goto code_r0x004fad33;
  if ((int)uStack_60._4_4_ < 1) {
    param_3 = *(byte ********)(&UNK_009a0a60 + (ulong)bVar4 * 8);
    puStack_200 = &UNK_004f9d4f;
    pppppppbVar6 = param_3;
    param_1 = (byte *******)func_0x0099bcf0();
    pppppppbVar27 = pppppppbStack_48;
    param_2 = (byte *******)&UNK_00204b50;
    pppppppbVar24 = pppppppbVar25;
    unaff_R12 = pppppppbVar17;
    if ((byte *)((long)pppppppbStack_40 - (long)pppppppbStack_48) < (byte *)((long)param_1 + 1))
    goto code_r0x004fad33;
    puStack_200 = &UNK_004f9d75;
    pppppppbVar6 = pppppppbStack_48;
    func_0x0099bda0();
    param_1 = (byte *******)((long)param_1 + (long)pppppppbVar27);
    pppppppbStack_48 = param_1;
    pppppppbVar27 = (byte *******)(ulong)uStack_1ec;
    pppppppbVar24 = param_3;
  }
  goto code_r0x004fa110;
code_r0x004fa994:
  uVar5 = uVar26 + 1;
  pppppppbVar24 = (byte *******)&UNK_0015e5de;
  puStack_200 = &UNK_004fa9a8;
  pppppppbVar6 = pppppppbVar17;
  cVar3 = func_0x004faea0();
  param_2 = pppppppbVar17;
  param_3 = pppppppbVar33;
  if (cVar3 == '\0') goto code_r0x004fad33;
  uStack_60 = (byte *******)CONCAT44(uStack_60._4_4_ + 1,(int)uStack_60);
  puStack_200 = &UNK_004fa9bb;
  pppppppbVar6 = pppppppbVar17;
  cVar3 = func_0x004faf10();
  if (cVar3 == '\0') goto code_r0x004fad33;
  pppppppbVar24 = (byte *******)(long)(int)uVar5;
  bVar4 = *(byte *)((long)pppppppbStack_50 + (long)pppppppbVar24);
  if (bVar4 == 0x55) {
    uVar5 = uVar26 + 2;
    bVar4 = ((byte *)((long)pppppppbStack_50 + 1))[(long)pppppppbVar24];
  }
  pppppppbVar7 = (byte *******)(ulong)uVar5;
  if (bVar4 == 0x4b) {
    pppppppbVar24 = (byte *******)((long)(int)uVar5 + 1);
    if (*(byte *)((long)pppppppbStack_50 + (long)(int)uVar5 + 1) != 0x43) {
      cVar3 = '\0';
      uVar15 = 0;
      ppuVar19 = &puStack_200;
      puStack_200 = &UNK_004faca7;
      puVar18 = &stack0xfffffffffffffff8;
      pppppppbVar6 = pppppppbVar17;
      goto code_r0x004fafb0;
    }
    pppppppbVar7 = (byte *******)(ulong)(uVar5 + 2);
  }
code_r0x004facaf:
  unaff_R12 = (byte *******)&UNK_00204bb0;
  if (*(byte *)((long)pppppppbStack_50 + (long)(int)pppppppbVar7) == 0x45) {
    pppppppbVar7 = (byte *******)(ulong)((int)pppppppbVar7 + 1);
    lVar8 = (long)(int)uStack_e8;
    param_2 = pppppppbVar17;
    param_3 = pppppppbVar33;
    if (lVar8 == 0x100) goto code_r0x004fad33;
    uStack_e8 = uStack_e8 + 1;
    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x14;
  }
  else {
    lVar8 = (long)(int)uStack_e8;
    param_2 = pppppppbVar17;
    param_3 = pppppppbVar33;
    if (lVar8 == 0x100) goto code_r0x004fad33;
    uStack_e8 = uStack_e8 + 1;
    *(undefined1 *)((long)appppppbStack_1e8 + lVar8) = 0x13;
  }
  goto code_r0x004f9ce6;
code_r0x004fa97a:
  ppuVar20 = &puStack_200;
  puStack_200 = &UNK_004fa987;
  goto code_r0x004fb4b0;
}


