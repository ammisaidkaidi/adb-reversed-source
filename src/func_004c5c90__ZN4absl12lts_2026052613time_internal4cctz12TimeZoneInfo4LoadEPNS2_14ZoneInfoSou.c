// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadEPNS2_14ZoneInfoSourceE
// Address: 004c5c90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c5ebd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c5ec2) */
/* WARNING: Removing unreachable block (ram,0x004c5eca) */

undefined8
_ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4LoadEPNS2_14ZoneInfoSourceE
          (ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  ulong **ppuVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  byte *pbVar20;
  long lVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  long lStack_c8;
  ulong uStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  byte bStack_4f;
  byte bStack_4e;
  byte bStack_4d;
  char cStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  char cStack_48;
  byte bStack_47;
  byte bStack_46;
  byte bStack_45;
  undefined8 uStack_44;
  long lStack_38;
  
  ppuVar16 = &puStack_f8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  cStack_48 = '\0';
  bStack_47 = 0;
  bStack_46 = 0;
  bStack_45 = 0;
  uStack_44 = 0;
  uStack_58 = 0;
  cStack_50 = '\0';
  bStack_4f = 0;
  bStack_4e = 0;
  bStack_4d = 0;
  cStack_4c = '\0';
  bStack_4b = 0;
  bStack_4a = 0;
  bStack_49 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puVar17 = &uStack_68;
  puStack_100 = &UNK_004c5cd8;
  puVar18 = param_2;
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,puVar17,0x2c);
  if (((lVar6 == 0x2c) && ((int)uStack_68 == 0x66695a54)) && (-1 < (long)cStack_48)) {
    uVar7 = (ulong)bStack_45 |
            (ulong)bStack_46 << 8 | (ulong)bStack_47 << 0x10 | (long)cStack_48 << 0x18;
    uStack_b8 = uVar7;
    if ((long)(char)uStack_44 < 0) goto code_r0x004c5ce7;
    puVar19 = (ulong *)(uStack_44 >> 0x18 & 0xff |
                       (uStack_44 >> 0x10 & 0xff) << 8 |
                       (uStack_44 >> 8 & 0xff) << 0x10 | (long)(char)uStack_44 << 0x18);
    puStack_b0 = puVar19;
    if ((long)uStack_44._4_1_ < 0) goto code_r0x004c5ce7;
    puVar17 = (ulong *)((uStack_44 >> 0x30 & 0xff) << 8 |
                       (uStack_44 >> 0x28 & 0xff) << 0x10 | (long)uStack_44._4_1_ << 0x18);
    uStack_a8 = uStack_44 >> 0x38 | (ulong)puVar17;
    if ((long)cStack_4c < 0) goto code_r0x004c5ce7;
    puVar18 = (ulong *)((ulong)bStack_4a << 8 | (ulong)bStack_4b << 0x10 | (long)cStack_4c << 0x18);
    uStack_a0 = (ulong)bStack_49 | (ulong)puVar18;
    puVar17 = (ulong *)(long)cStack_50;
    if ((long)puVar17 < 0) goto code_r0x004c5ce7;
    puVar17 = (ulong *)((ulong)bStack_4d |
                       (ulong)bStack_4e << 8 | (ulong)bStack_4f << 0x10 | (long)puVar17 << 0x18);
    puVar18 = (ulong *)(long)uStack_58._4_1_;
    puStack_98 = puVar17;
    if ((long)puVar18 < 0) goto code_r0x004c5ce7;
    puVar18 = (ulong *)(uStack_58 >> 0x38 |
                       (uStack_58 >> 0x30 & 0xff) << 8 |
                       (uStack_58 >> 0x28 & 0xff) << 0x10 | (long)puVar18 << 0x18);
    puStack_90 = puVar18;
    if (uStack_68._4_1_ != '\0') {
      puVar17 = (ulong *)((byte *)((long)puVar17 + (long)puVar18) +
                         uVar7 * 5 + (long)puVar19 * 6 + uStack_a8 + uStack_a0 * 8);
      puStack_100 = &UNK_004c5e75;
      puVar18 = param_2;
      iVar4 = (**(code **)(*param_2 + 0x18))();
      if (iVar4 == 0) {
        puVar17 = &uStack_68;
        puStack_100 = &UNK_004c5e8f;
        lVar6 = (**(code **)(*param_2 + 0x10))(param_2,puVar17,0x2c);
        puVar18 = param_2;
        if (lVar6 == 0x2c) {
          uVar9 = 0;
          if (((int)uStack_68 == 0x66695a54) && (uStack_68._4_1_ != '\0')) {
            puVar18 = &uStack_b8;
            puVar17 = &uStack_68;
            ppuVar16 = (ulong **)&puStack_100;
            goto code_r0x004c65c0;
          }
          goto code_r0x004c5ce9;
        }
      }
      goto code_r0x004c5ce7;
    }
    uVar9 = 0;
    if ((puVar19 != (ulong *)0x0) && (uVar9 = 0, uStack_a0 == 0)) {
      if (((puVar17 != (ulong *)0x0) && (puVar17 != puVar19)) ||
         ((uStack_e0 = uStack_e0 & 0xffffffffffffff00, puVar18 != (ulong *)0x0 &&
          (puVar18 != puVar19)))) goto code_r0x004c5ce7;
      lStack_f0 = 4;
      pbVar20 = (byte *)((long)puVar18 + uStack_a8 + uVar7 * 5) +
                (long)((long)puVar17 + (long)puVar19 * 6);
      puStack_d8 = (ulong *)0x0;
      puStack_d0 = (ulong *)0x0;
      lStack_c8 = 0;
      puStack_100 = &UNK_004c5f82;
      uStack_e8 = uStack_a8;
      func_0x004c9bd0(&puStack_d8,pbVar20);
      puStack_100 = &UNK_004c5f95;
      puVar17 = puStack_d8;
      pbVar8 = (byte *)(**(code **)(*param_2 + 0x10))(param_2,puStack_d8,pbVar20);
      puVar18 = puStack_d8;
      if (pbVar8 == pbVar20) {
        puStack_100 = &UNK_004c5fb5;
        func_0x004c9530(param_1 + 1,uVar7 + 2);
        puStack_f8 = param_1 + 1;
        puStack_100 = &UNK_004c5fcc;
        func_0x004c9c30(param_1 + 1,uVar7);
        if (uVar7 == 0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar18;
          if ((char)uStack_e0 == '\0') {
            uVar14 = (ulong)((uint)*(byte *)((long)puVar18 + 2) << 8 |
                            (uint)*(byte *)((long)puVar18 + 1) << 0x10 | (uint)bVar11 << 0x18) |
                     (ulong)*(byte *)((long)puVar18 + 3);
            uVar12 = uVar14 | 0xffffffff00000000;
            if (-1 < (char)bVar11) {
              uVar12 = uVar14;
            }
          }
          else {
            uVar12 = (ulong)*(byte *)((long)puVar18 + 7) |
                     ((ulong)(ushort)(*(ushort *)((long)puVar18 + 5) << 8 |
                                     *(ushort *)((long)puVar18 + 5) >> 8) |
                     CONCAT44((uint)*(byte *)((long)puVar18 + 2) |
                              (uint)*(byte *)((long)puVar18 + 1) << 8 | (uint)bVar11 << 0x10,
                              (uint)*(byte *)((long)puVar18 + 4) << 0x10 |
                              (uint)*(byte *)((long)puVar18 + 3) << 0x18)) << 8;
          }
          puVar1 = param_1 + 1;
          *(ulong *)*puVar1 = uVar12;
          puVar18 = (ulong *)((long)puVar18 + lStack_f0);
          if (uVar7 != 1) {
            lVar6 = uVar7 - 1;
            lVar13 = 0x30;
            do {
              bVar11 = (byte)*puVar18;
              if ((char)uStack_e0 == '\0') {
                uVar14 = (ulong)((uint)*(byte *)((long)puVar18 + 2) << 8 |
                                (uint)*(byte *)((long)puVar18 + 1) << 0x10 | (uint)bVar11 << 0x18) |
                         (ulong)*(byte *)((long)puVar18 + 3);
                uVar12 = uVar14 | 0xffffffff00000000;
                if (-1 < (char)bVar11) {
                  uVar12 = uVar14;
                }
              }
              else {
                uVar12 = (ulong)*(byte *)((long)puVar18 + 7) |
                         ((ulong)(ushort)(*(ushort *)((long)puVar18 + 5) << 8 |
                                         *(ushort *)((long)puVar18 + 5) >> 8) |
                         CONCAT44((uint)*(byte *)((long)puVar18 + 2) |
                                  (uint)*(byte *)((long)puVar18 + 1) << 8 | (uint)bVar11 << 0x10,
                                  (uint)*(byte *)((long)puVar18 + 4) << 0x10 |
                                  (uint)*(byte *)((long)puVar18 + 3) << 0x18)) << 8;
              }
              *(ulong *)(*puVar1 + lVar13) = uVar12;
              puVar17 = (ulong *)*puVar1;
              if (*(long *)((long)puVar17 + lVar13) <= *(long *)((long)puVar17 + lVar13 + -0x30))
              goto code_r0x004c6514;
              puVar18 = (ulong *)((long)puVar18 + lStack_f0);
              lVar13 = lVar13 + 0x30;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          uVar12 = *puVar1;
          lVar6 = 8;
          bVar11 = 0;
          uVar14 = uVar7;
          do {
            *(byte *)(uVar12 + lVar6) = (byte)*puVar18;
            uVar12 = *puVar1;
            puVar17 = (ulong *)(ulong)*(byte *)(uVar12 + lVar6);
            if (puVar19 <= puVar17) goto code_r0x004c6514;
            puVar18 = (ulong *)((long)puVar18 + 1);
            bVar11 = bVar11 | *(byte *)(uVar12 + lVar6) == 0;
            lVar6 = lVar6 + 0x30;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puStack_100 = &UNK_004c619e;
        uStack_e0 = uVar7;
        func_0x004c9530(param_1 + 4,(byte *)((long)puVar19 + 2));
        puStack_100 = &UNK_004c61aa;
        func_0x004c9760(param_1 + 4,puVar19);
        uVar12 = uStack_e8;
        puVar1 = param_1 + 4;
        uVar7 = param_1[4];
        lVar6 = 0;
        puVar17 = puVar19;
        do {
          uVar5 = *(uint *)((long)puVar18 + lVar6);
          *(uint *)(uVar7 + lVar6 * 8) =
               uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          if (*(int *)(*puVar1 + lVar6 * 8) - 0x15180U < 0xfffd5d01) goto code_r0x004c6514;
          *(bool *)(*puVar1 + 0x28 + lVar6 * 8) = *(byte *)((long)puVar18 + lVar6 + 4) != 0;
          *(byte *)(*puVar1 + 0x29 + lVar6 * 8) = *(byte *)((long)puVar18 + lVar6 + 5);
          uVar7 = *puVar1;
          if (uStack_e8 <= *(byte *)(uVar7 + 0x29 + lVar6 * 8)) goto code_r0x004c6514;
          lVar6 = lVar6 + 6;
          puVar17 = (ulong *)((long)puVar17 + -1);
        } while (puVar17 != (ulong *)0x0);
        *(byte *)(param_1 + 7) = 0;
        if (!(bool)(~bVar11 & 1 | uStack_e0 == 0)) {
          if ((*(char *)(uVar7 + 0x28) == '\x01') &&
             (bVar11 = *(byte *)(param_1[1] + 8), bVar11 != 0)) {
            pcVar15 = (char *)((uint)bVar11 * 0x30 + uVar7 + 0x28);
            do {
              if (*pcVar15 != '\x01') goto code_r0x004c6267;
              bVar11 = bVar11 - 1;
              pcVar15 = pcVar15 + -0x30;
            } while (bVar11 != 0);
          }
          bVar11 = 0;
code_r0x004c6267:
          do {
            if (puVar19 == (ulong *)(ulong)bVar11) break;
            if (*(char *)(uVar7 + 0x28 + (long)(ulong)bVar11 * 0x30) != '\x01') {
              *(byte *)(param_1 + 7) = bVar11;
              break;
            }
            bVar11 = bVar11 + 1;
          } while( true );
        }
        puStack_100 = &UNK_004c629d;
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                  (param_1 + 8,uStack_e8 + 10);
        puStack_100 = &UNK_004c62ab;
        func_0x0032ea90(param_1 + 8,(byte *)((long)puVar18 + lVar6),uVar12);
        if ((param_1[0xe] & 1) == 0) {
          *(undefined2 *)(param_1 + 0xe) = 0;
        }
        else {
          *(undefined1 *)param_1[0x10] = 0;
          param_1[0xf] = 0;
        }
        if (uStack_68._4_1_ != '\0') {
          uStack_88 = uStack_88 & 0xffffff00;
          puVar17 = (ulong *)&uStack_88;
          puStack_100 = &UNK_004c62eb;
          lVar6 = (**(code **)(*param_2 + 0x10))(param_2,puVar17,1);
          if (lVar6 == 1) {
            uVar9 = 0;
            if ((char)uStack_88 != '\n') goto code_r0x004c6516;
            uStack_88 = uStack_88 & 0xffffff00;
            puStack_100 = &UNK_004c6321;
            puVar17 = (ulong *)&uStack_88;
            lVar6 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_88,1);
            uVar5 = 0xffffffff;
            if (lVar6 == 1) {
              uVar5 = uStack_88 & 0xff;
            }
            while (uVar5 != 0xffffffff) {
              if (uVar5 == 10) goto code_r0x004c6382;
              puStack_100 = &UNK_004c6359;
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_1 + 0xe,(int)(char)uVar5);
              uStack_88 = uStack_88 & 0xffffff00;
              puStack_100 = &UNK_004c636e;
              puVar17 = (ulong *)&uStack_88;
              lVar6 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_88,1);
              if (lVar6 != 1) break;
              uVar5 = uStack_88 & 0xff;
            }
          }
          goto code_r0x004c6514;
        }
code_r0x004c6382:
        if (((byte)param_1[0xb] & 1) == 0) {
          uVar7 = (ulong)(byte)((byte)param_1[0xb] >> 1);
        }
        else {
          uVar7 = param_1[0xc];
        }
        if (uVar7 == 0) {
          puStack_100 = &UNK_004c63ab;
          (**(code **)(*param_2 + 0x20))(&uStack_88,param_2);
          puStack_100 = &UNK_004c63b6;
          func_0x00353730(param_1 + 0xb,&uStack_88);
          if ((uStack_88 & 1) != 0) {
            puStack_100 = &UNK_004c63cd;
            _ZdaPvSt11align_val_t(uStack_78,CONCAT44(uStack_84,uStack_88) & 0xfffffffffffffffe);
          }
        }
        puVar17 = (ulong *)param_1[1];
        if ((puVar17 == (ulong *)param_1[2]) || (-1 < (long)*puVar17)) {
          puStack_100 = &UNK_004c63e6;
          puVar10 = (undefined8 *)
                    _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
                              (param_1 + 1);
          *puVar10 = 0xf800000000000000;
          *(byte *)(puVar10 + 1) = (byte)param_1[7];
        }
        puStack_100 = &UNK_004c6402;
        cVar3 = _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17ExtendTransitionsEv
                          (param_1);
        if (cVar3 == '\0') goto code_r0x004c6514;
        puVar17 = (ulong *)param_1[2];
        if ((long)puVar17[-6] < 0) {
          uVar7 = puVar17[-5];
          puStack_100 = &UNK_004c6423;
          puVar10 = (undefined8 *)
                    _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
                              (param_1 + 1);
          *puVar10 = 0x7fffffff;
          *(byte *)(puVar10 + 1) = (byte)uVar7;
          puVar17 = (ulong *)param_1[2];
        }
        puVar18 = (ulong *)param_1[1];
        if (puVar17 != puVar18) {
          lVar13 = (ulong)((uint)(byte)param_1[7] * 0x30) + param_1[4];
          lVar21 = 0;
          lVar6 = 0;
          do {
            puStack_100 = &UNK_004c649a;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_88,param_1,*(undefined8 *)((long)puVar18 + lVar21),lVar13);
            puStack_100 = &UNK_004c64ac;
            auVar22 = _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEEl
                                (CONCAT44(uStack_84,uStack_88),CONCAT44(uStack_7c,uStack_80),1);
            *(long *)((long)puVar18 + lVar21 + 0x20) = auVar22._0_8_;
            *(long *)((long)puVar18 + lVar21 + 0x28) = auVar22._8_8_;
            lVar13 = (ulong)((uint)*(byte *)((long)puVar18 + lVar21 + 8) * 0x30) + param_1[4];
            puStack_100 = &UNK_004c64db;
            puVar17 = param_1;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_88,param_1,*(undefined8 *)((long)puVar18 + lVar21),lVar13);
            puVar2 = (uint *)((long)puVar18 + lVar21 + 0x10);
            *puVar2 = uStack_88;
            puVar2[1] = uStack_84;
            puVar2[2] = uStack_80;
            puVar2[3] = uStack_7c;
            if (lVar6 != 0) {
              puVar17 = (ulong *)(param_1[1] + lVar21 + -0x30);
              puStack_100 = &UNK_004c650c;
              cVar3 = _ZNK4absl12lts_2026052613time_internal4cctz10Transition11ByCivilTimeclERKS3_S6_
                                (&uStack_88,puVar17,(byte *)((long)puVar18 + lVar21));
              if (cVar3 == '\0') goto code_r0x004c6514;
            }
            lVar6 = lVar6 + 1;
            puVar18 = (ulong *)param_1[1];
            lVar21 = lVar21 + 0x30;
          } while (lVar6 != ((long)(param_1[2] - (long)puVar18) >> 4) * -0x5555555555555555);
        }
        uVar7 = param_1[4];
        uVar12 = param_1[5];
        if (uVar7 != uVar12) {
          do {
            puStack_100 = &UNK_004c657c;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_88,param_1,0x7fffffffffffffff,uVar7);
            *(uint *)(uVar7 + 8) = uStack_88;
            *(uint *)(uVar7 + 0xc) = uStack_84;
            *(uint *)(uVar7 + 0x10) = uStack_80;
            *(uint *)(uVar7 + 0x14) = uStack_7c;
            puStack_100 = &UNK_004c6596;
            puVar17 = param_1;
            _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo9LocalTimeElRKNS2_14TransitionTypeE
                      (&uStack_88,param_1,0x8000000000000000,uVar7);
            *(uint *)(uVar7 + 0x18) = uStack_88;
            *(uint *)(uVar7 + 0x1c) = uStack_84;
            *(uint *)(uVar7 + 0x20) = uStack_80;
            *(uint *)(uVar7 + 0x24) = uStack_7c;
            uVar7 = uVar7 + 0x30;
          } while (uVar7 != uVar12);
        }
        puStack_100 = &UNK_004c65b4;
        func_0x004c9b10(puStack_f8);
        uVar9 = 1;
      }
      else {
code_r0x004c6514:
        uVar9 = 0;
      }
code_r0x004c6516:
      puVar18 = puStack_d8;
      if (puStack_d8 != (ulong *)0x0) {
        puStack_d0 = puStack_d8;
        puVar17 = (ulong *)(lStack_c8 - (long)puStack_d8);
        puStack_100 = &UNK_004c653e;
        _ZdaPvSt11align_val_t();
      }
    }
  }
  else {
code_r0x004c5ce7:
    uVar9 = 0;
  }
code_r0x004c5ce9:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar9;
  }
  puStack_100 = &UNK_004c65c0;
  func_0x0099bd00();
code_r0x004c65c0:
  *(undefined1 **)((long)ppuVar16 + -8) = &stack0xfffffffffffffff8;
  if (-1 < (long)(char)(byte)puVar17[4]) {
    *puVar18 = (ulong)*(byte *)((long)puVar17 + 0x23) |
               (ulong)*(byte *)((long)puVar17 + 0x22) << 8 |
               (ulong)*(byte *)((long)puVar17 + 0x21) << 0x10 | (long)(char)(byte)puVar17[4] << 0x18
    ;
    if (-1 < (long)(char)*(byte *)((long)puVar17 + 0x24)) {
      puVar18[1] = (ulong)*(byte *)((long)puVar17 + 0x27) |
                   (ulong)*(byte *)((long)puVar17 + 0x26) << 8 |
                   (ulong)*(byte *)((long)puVar17 + 0x25) << 0x10 |
                   (long)(char)*(byte *)((long)puVar17 + 0x24) << 0x18;
      if (-1 < (long)(char)(byte)puVar17[5]) {
        puVar18[2] = (ulong)*(byte *)((long)puVar17 + 0x2b) |
                     (ulong)*(byte *)((long)puVar17 + 0x2a) << 8 |
                     (ulong)*(byte *)((long)puVar17 + 0x29) << 0x10 |
                     (long)(char)(byte)puVar17[5] << 0x18;
        if (-1 < (long)(char)*(byte *)((long)puVar17 + 0x1c)) {
          puVar18[3] = (ulong)*(byte *)((long)puVar17 + 0x1f) |
                       (ulong)*(byte *)((long)puVar17 + 0x1e) << 8 |
                       (ulong)*(byte *)((long)puVar17 + 0x1d) << 0x10 |
                       (long)(char)*(byte *)((long)puVar17 + 0x1c) << 0x18;
          if (-1 < (long)(char)(byte)puVar17[3]) {
            puVar18[4] = (ulong)*(byte *)((long)puVar17 + 0x1b) |
                         (ulong)*(byte *)((long)puVar17 + 0x1a) << 8 |
                         (ulong)*(byte *)((long)puVar17 + 0x19) << 0x10 |
                         (long)(char)(byte)puVar17[3] << 0x18;
            if (-1 < (long)(char)*(byte *)((long)puVar17 + 0x14)) {
              puVar18[5] = (ulong)*(byte *)((long)puVar17 + 0x17) |
                           (ulong)*(byte *)((long)puVar17 + 0x16) << 8 |
                           (ulong)*(byte *)((long)puVar17 + 0x15) << 0x10 |
                           (long)(char)*(byte *)((long)puVar17 + 0x14) << 0x18;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


