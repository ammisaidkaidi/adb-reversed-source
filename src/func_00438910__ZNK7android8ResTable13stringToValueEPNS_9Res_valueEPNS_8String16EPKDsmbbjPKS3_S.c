// Function: _ZNK7android8ResTable13stringToValueEPNS_9Res_valueEPNS_8String16EPKDsmbbjPKS3_S8_PNS0_8AccessorEPvjb
// Address: 00438910
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

ulong _ZNK7android8ResTable13stringToValueEPNS_9Res_valueEPNS_8String16EPKDsmbbjPKS3_S8_PNS0_8AccessorEPvjb
                (uint *param_1,uint *param_2,long param_3,uint *param_4,uint *param_5,char param_6,
                byte param_7,uint param_8,undefined8 param_9,undefined8 param_10,uint *param_11,
                undefined8 param_12,uint param_13,char param_14)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  long lVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined *puVar28;
  uint *puVar29;
  bool bVar30;
  uint *puVar31;
  long lVar32;
  uint *puVar33;
  byte bVar34;
  bool bVar35;
  ulong uVar36;
  undefined7 uVar37;
  uint *puVar38;
  ushort *puVar39;
  long in_FS_OFFSET;
  bool bVar40;
  bool bVar41;
  uint *puStack_c8;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_5c;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined *puStack_40;
  long lStack_38;
  
  uVar9 = param_13;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_11 == (uint *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*(long *)param_11 + 0x60))();
  }
  puStack_40 = (undefined *)0x0;
  *(ushort *)param_2 = 8;
  *(undefined1 *)((long)param_2 + 2) = 0;
  puVar31 = param_4;
  puVar22 = param_5;
  if (param_6 == '\0') {
    if (param_5 == (uint *)0x0) {
      puStack_c8 = (uint *)0x0;
      puVar22 = puStack_c8;
    }
    else {
      puVar38 = param_5;
      do {
        uVar7 = *puVar31;
        if ((0x7f < (ulong)(ushort)uVar7) ||
           (plVar11 = (long *)func_0x0099be00(),
           (*(byte *)(*plVar11 + 1 + (ulong)(ushort)uVar7 * 2) & 0x20) == 0)) {
          puVar39 = (ushort *)((long)param_4 + (long)param_5 * 2);
          puStack_c8 = (uint *)0x0;
          goto code_r0x00438a20;
        }
        puVar31 = (uint *)((long)puVar31 + 2);
        puVar38 = (uint *)((long)puVar38 + -1);
      } while (puVar38 != (uint *)0x0);
      puStack_c8 = (uint *)0x0;
      puVar31 = (uint *)((long)param_4 + (long)param_5 * 2);
      puVar22 = puStack_c8;
    }
  }
code_r0x00438a7b:
  puStack_c8 = puVar22;
  uStack_44 = 0x80000000;
  uStack_48 = 0x7fffffff;
  if ((param_8 == 0) || (0xffff < param_8 && (param_8 & 0xff0000) == 0)) {
    bVar35 = false;
    bVar30 = false;
  }
  else {
    puStack_a8 = (uint *)0x0;
    if (*(char *)((long)param_1 + (ulong)(param_8 >> 0x18) + 0xe8) == '\0') {
code_r0x00438b7d:
      if (param_11 == (uint *)0x0) {
        bVar35 = false;
        uVar7 = 0;
      }
      else {
        cVar5 = (**(code **)(*(long *)param_11 + 0x30))(param_11,param_8,&param_13);
        uVar7 = 0;
        uVar9 = 0;
        if (cVar5 == '\0') goto code_r0x00438bef;
        if (((param_13 == 4) || (param_13 == 0x20000)) || (param_13 == 0x10000)) {
          (**(code **)(*(long *)param_11 + 0x38))(param_11,param_8,&uStack_44);
          (**(code **)(*(long *)param_11 + 0x40))(param_11,param_8,&uStack_48);
        }
        bVar35 = true;
        if (bVar3 != 0) {
          uVar7 = (**(code **)(*(long *)param_11 + 0x58))(param_11,param_8);
        }
      }
    }
    else {
      func_0x0099c500(param_1);
      uVar9 = 0;
      lVar23 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                         (param_1,param_8,&puStack_a8,0);
      if (lVar23 < 0) {
        func_0x0099c510();
        goto code_r0x00438b7d;
      }
      if (lVar23 != 0) {
        lVar23 = lVar23 + 1;
        puVar22 = puStack_a8 + 4;
        uVar9 = 0;
        do {
          switch(puVar22[-2]) {
          case 0x1000000:
            param_13 = *puVar22;
            break;
          case 0x1000001:
            uStack_44 = *puVar22;
            break;
          case 0x1000002:
            uStack_48 = *puVar22;
            break;
          case 0x1000003:
            uVar9 = *puVar22;
          }
          lVar23 = lVar23 + -1;
          puVar22 = puVar22 + 6;
        } while (1 < lVar23);
      }
      func_0x0099c510();
code_r0x00438bef:
      uVar7 = uVar9;
      bVar35 = false;
    }
    bVar30 = uVar7 == 1;
    uVar9 = param_13;
  }
  uVar6 = (ushort)*puVar31;
  uVar37 = (undefined7)((ulong)param_1 >> 8);
  puVar22 = param_11;
  if (uVar6 == 0x40) {
    *(undefined1 *)((long)param_2 + 3) = 1;
    cVar5 = param_14;
    if (puStack_c8 != (uint *)0x6) {
      if (puStack_c8 != (uint *)0x5) {
        if (puStack_c8 < (uint *)0x3) goto code_r0x00438d95;
        uVar6 = *(ushort *)((long)puVar31 + 2);
code_r0x00438d65:
        iVar10 = -2;
        lVar23 = 4;
        if (uVar6 == 0x2b) {
          uVar24 = 1;
        }
        else {
          if (uVar6 != 0x2a) goto code_r0x00438d95;
          uVar24 = 0;
          cVar5 = '\0';
        }
        goto code_r0x00438dc1;
      }
      uVar6 = *(ushort *)((long)puVar31 + 2);
      if (uVar6 != 0x6e) goto code_r0x00438d65;
      if ((((ushort)puVar31[1] != 0x75) || (*(ushort *)((long)puVar31 + 6) != 0x6c)) ||
         (puVar38 = puStack_c8, (ushort)puVar31[2] != 0x6c)) goto code_r0x00438d95;
code_r0x00438c74:
      param_2[1] = 0;
      uVar36 = CONCAT71(uVar37,1);
      goto code_r0x0043a0f4;
    }
    uVar6 = *(ushort *)((long)puVar31 + 2);
    if (uVar6 != 0x65) goto code_r0x00438d65;
    if ((((ushort)puVar31[1] == 0x6d) && (*(ushort *)((long)puVar31 + 6) == 0x70)) &&
       (((ushort)puVar31[2] == 0x74 && (*(ushort *)((long)puVar31 + 10) == 0x79)))) {
      *(undefined1 *)((long)param_2 + 3) = 0;
      param_2[1] = 1;
      uVar36 = CONCAT71(uVar37,1);
      puVar38 = puStack_c8;
      goto code_r0x0043a0f4;
    }
code_r0x00438d95:
    iVar10 = -1;
    lVar23 = 2;
    uVar24 = 0;
code_r0x00438dc1:
    puStack_a8 = (uint *)0x0;
    _ZN7android8String16C2Ev(&puStack_a8);
    puStack_50 = (uint *)0x0;
    _ZN7android8String16C2Ev(&puStack_50);
    uStack_58 = 0;
    puVar22 = (uint *)&uStack_58;
    _ZN7android8String16C2Ev(puVar22);
    cVar4 = _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
                      ((long)puVar31 + lVar23,(long)((int)puStack_c8 + iVar10),&puStack_a8,
                       &puStack_50,puVar22,param_9,param_10,&puStack_40,0);
    uVar17 = uStack_58;
    if (cVar4 == '\0') {
      uVar37 = (undefined7)((ulong)&puStack_a8 >> 8);
      if (param_11 == (uint *)0x0) {
code_r0x00438f5f:
        bVar34 = 1;
        bVar3 = 0;
      }
      else {
        lVar23 = *(long *)param_11;
        puVar28 = puStack_40;
code_r0x00438f4c:
        bVar34 = 1;
        bVar3 = 0;
        (**(code **)(lVar23 + 0x68))(param_11,param_12,puVar28);
      }
    }
    else {
      uStack_5c = 0;
      uVar14 = _ZNK7android8String164sizeEv(&uStack_58);
      puVar22 = puStack_50;
      puVar12 = (uint *)_ZNK7android8String164sizeEv(&puStack_50);
      puVar38 = puStack_a8;
      uVar15 = _ZNK7android8String164sizeEv(&puStack_a8);
      uVar9 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                        (param_1,uVar17,uVar14,puVar22,puVar12,puVar38,uVar15,&uStack_5c);
      if (uVar9 == 0) {
        bVar3 = 1;
        if ((param_11 == (uint *)0x0) ||
           (uVar9 = (**(code **)(*(long *)param_11 + 0x20))
                              (param_11,&puStack_a8,&puStack_50,&uStack_58,uVar24), uVar9 == 0)) {
code_r0x0043911a:
          bVar34 = 0;
          uVar37 = 0;
          goto code_r0x0043911d;
        }
        if (uVar9 < 0x1000000) {
          param_2[1] = uVar9;
          *(undefined1 *)((long)param_2 + 3) = 7;
        }
        else {
          if ((uVar9 >> 0x18 != 0x7f) && (uVar9 >> 0x18 != 1)) goto code_r0x0043911a;
          param_2[1] = uVar9;
        }
      }
      else {
        if (cVar5 == '\0') {
code_r0x00438f66:
          if (param_11 != (uint *)0x0) goto code_r0x00438f6b;
        }
        else {
          if (param_11 == (uint *)0x0) {
code_r0x00438f1d:
            if ((uStack_5c & 0x40000000) == 0) {
              uVar37 = (undefined7)((ulong)puVar12 >> 8);
              if (param_11 == (uint *)0x0) goto code_r0x00438f5f;
              lVar23 = *(long *)param_11;
              puVar28 = &UNK_0015fe9b;
              goto code_r0x00438f4c;
            }
            goto code_r0x00438f66;
          }
          puVar13 = (undefined8 *)(**(code **)(*(long *)param_11 + 0x10))(param_11);
          puVar22 = (uint *)*puVar13;
          if (puVar22 != puStack_a8) {
            uVar17 = _ZNK7android8String164sizeEv(puVar13);
            puVar12 = puStack_a8;
            uVar14 = _ZNK7android8String164sizeEv(&puStack_a8);
            iVar10 = strzcmp16(puVar22,uVar17,puVar12,uVar14);
            if (iVar10 != 0) goto code_r0x00438f1d;
          }
code_r0x00438f6b:
          iVar10 = (**(code **)(*(long *)param_11 + 0x28))(param_11,(uVar9 >> 0x18) - 1);
          uVar9 = (uVar9 & 0xffffff) + iVar10 * 0x1000000 + 0x1000000;
        }
        if ((uVar9 >> 0x18 != 1) && (uVar9 >> 0x18 != 0x7f)) {
          *(undefined1 *)((long)param_2 + 3) = 7;
        }
        param_2[1] = uVar9;
      }
      uVar37 = (undefined7)((ulong)puVar12 >> 8);
      bVar34 = 1;
      bVar3 = 1;
    }
code_r0x0043911d:
    _ZN7android8String16D2Ev(&uStack_58);
    _ZN7android8String16D2Ev(&puStack_50);
    _ZN7android8String16D2Ev(&puStack_a8);
    puVar38 = param_11;
    if (param_11 == (uint *)0x0 || bVar34 != 0) {
      uVar36 = CONCAT71(uVar37,bVar34 & bVar3);
      goto code_r0x0043a0f4;
    }
    lVar23 = *(long *)param_11;
    uVar36 = 0;
    puVar28 = &UNK_0016b1e7;
  }
  else {
    uVar9 = (uVar9 & 2) >> 1;
    puVar38 = (uint *)(ulong)uVar9;
    if ((param_11 != (uint *)0x0) && ((bVar3 & bVar30) != 0)) {
      (**(code **)(*(long *)param_11 + 0x68))(param_11,param_12,&UNK_00184ce4);
      uVar6 = (ushort)*puVar31;
    }
    bVar30 = (bool)(param_7 & (byte)uVar9);
    if (uVar6 == 0x23) {
      switch(puStack_c8) {
      case (uint *)0x4:
        *(undefined1 *)((long)param_2 + 3) = 0x1f;
        cVar5 = *(char *)((long)puVar31 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 * 0x100000 + -0x3000000;
          iVar18 = iVar10 + -0x30;
          bVar41 = false;
        }
        else {
          bVar41 = (byte)(cVar5 + 0x99U) < 0xfa;
          if (bVar41) {
            bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
            if (bVar40) {
              iVar25 = 0;
              if ((byte)(cVar5 + 0x9fU) < 6) {
                iVar18 = iVar10 + -0x57;
              }
              else {
                iVar25 = 0;
                iVar18 = 0;
                bVar41 = true;
                if ((byte)(cVar5 + 0xbfU) < 6) goto code_r0x0043957b;
              }
            }
            else {
              iVar25 = iVar10 * 0x100000 + -0x3700000;
code_r0x0043957b:
              iVar18 = iVar10 + -0x37;
              bVar41 = bVar40;
            }
          }
          else {
            iVar25 = iVar10 * 0x100000 + -0x5700000;
            iVar18 = iVar10 + -0x57;
          }
        }
        iVar25 = iVar18 * 0x10000 + iVar25;
        cVar5 = (char)puVar31[1];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x30000;
          iVar10 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x57000;
          iVar10 = iVar10 + -0x57;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x37000;
          iVar10 = iVar10 + -0x37;
        }
        else {
          iVar10 = 0;
          bVar41 = true;
        }
        iVar25 = iVar10 * 0x100 + iVar25;
        cVar5 = *(char *)((long)puVar31 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          if (bVar41) break;
          uVar7 = iVar10 * 0x10 + iVar25 + 0xfffd00;
          uVar9 = iVar10 + 0xffffd0;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          if (bVar41) break;
          uVar7 = iVar10 * 0x10 + iVar25 + 0xfffa90;
          uVar9 = iVar10 + 0xffffa9;
        }
        else {
          if (5 < (byte)(cVar5 + 0xbfU)) goto code_r0x004397f1;
          if (bVar41) break;
          uVar7 = iVar10 * 0x10 + iVar25 + 0xfffc90;
          uVar9 = iVar10 + 0xffffc9;
        }
        uVar9 = uVar9 | uVar7;
joined_r0x0043931f:
        uVar9 = uVar9 | 0xff000000;
joined_r0x004392e5:
        if ((param_13 & 0x10) != 0) {
          param_2[1] = uVar9;
          uVar36 = CONCAT71(uVar37,1);
          goto code_r0x0043a0f4;
        }
        bVar41 = bVar30;
        if (param_11 == (uint *)0x0 || bVar30 != false) goto code_r0x00439808;
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_0016318d;
        goto code_r0x00439a12;
      case (uint *)0x5:
        *(undefined1 *)((long)param_2 + 3) = 0x1e;
        cVar5 = *(char *)((long)puVar31 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 << 0x1c;
          iVar18 = iVar10 + -0x30;
          bVar41 = false;
        }
        else {
          bVar41 = (byte)(cVar5 + 0x99U) < 0xfa;
          if (bVar41) {
            bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
            if (bVar40) {
              iVar25 = 0;
              if ((byte)(cVar5 + 0x9fU) < 6) {
                iVar18 = iVar10 + -0x57;
              }
              else {
                iVar25 = 0;
                iVar18 = 0;
                bVar41 = true;
                if ((byte)(cVar5 + 0xbfU) < 6) goto code_r0x00439693;
              }
            }
            else {
              iVar25 = iVar10 * 0x10000000 + -0x70000000;
code_r0x00439693:
              iVar18 = iVar10 + -0x37;
              bVar41 = bVar40;
            }
          }
          else {
            iVar25 = iVar10 * 0x10000000 + -0x70000000;
            iVar18 = iVar10 + -0x57;
          }
        }
        iVar25 = iVar18 * 0x1000000 + iVar25;
        cVar5 = (char)puVar31[1];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar25 + iVar10 * 0x100000 + -0x3000000;
          iVar10 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x100000 + -0x5700000;
          iVar10 = iVar10 + -0x57;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x100000 + -0x3700000;
          iVar10 = iVar10 + -0x37;
        }
        else {
          iVar10 = 0;
          bVar41 = true;
        }
        iVar25 = iVar10 * 0x10000 + iVar25;
        cVar5 = *(char *)((long)puVar31 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x30000;
          iVar10 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x57000;
          iVar10 = iVar10 + -0x57;
        }
        else if ((byte)(cVar5 + 0xbfU) < 6) {
          iVar25 = iVar25 + iVar10 * 0x1000 + -0x37000;
          iVar10 = iVar10 + -0x37;
        }
        else {
          iVar10 = 0;
          bVar41 = true;
        }
        uVar7 = iVar10 * 0x100 + iVar25;
        cVar5 = (char)puVar31[2];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          if (!bVar41) {
            uVar9 = iVar10 * 0x11 - 0x330;
code_r0x004397cb:
            uVar9 = uVar9 | uVar7;
            goto joined_r0x004392e5;
          }
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          if (!bVar41) {
            uVar8 = iVar10 * 0x10 - 0x570;
            uVar9 = iVar10 - 0x57;
code_r0x004397c9:
            uVar9 = uVar9 | uVar8;
            goto code_r0x004397cb;
          }
        }
        else {
          if (5 < (byte)(cVar5 + 0xbfU)) goto code_r0x004397f1;
          if (!bVar41) {
            uVar8 = iVar10 * 0x10 - 0x370;
            uVar9 = iVar10 - 0x37;
            goto code_r0x004397c9;
          }
        }
        break;
      default:
code_r0x004397f1:
        break;
      case (uint *)0x7:
        *(undefined1 *)((long)param_2 + 3) = 0x1d;
        cVar5 = *(char *)((long)puVar31 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          bVar41 = false;
          iVar18 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          bVar41 = false;
          iVar18 = iVar10 + -0x57;
        }
        else {
          bVar41 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar41) {
            iVar18 = iVar10 + -0x37;
          }
        }
        cVar5 = (char)puVar31[1];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar25 = 0;
          if (!bVar40) {
            iVar25 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = *(char *)((long)puVar31 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar19 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar19 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar19 = 0;
          if (!bVar40) {
            iVar19 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = (char)puVar31[2];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar26 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar26 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar26 = 0;
          if (!bVar40) {
            iVar26 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = *(char *)((long)puVar31 + 10);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar20 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar20 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar20 = 0;
          if (!bVar40) {
            iVar20 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        uVar9 = iVar20 * 0x10 +
                iVar26 * 0x100 + iVar19 * 0x1000 + iVar25 * 0x10000 + iVar18 * 0x100000;
        cVar5 = (char)puVar31[3];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          if (!bVar41) {
            uVar9 = iVar10 + 0xffffd0U | uVar9 | 0xff000000;
            goto joined_r0x004392e5;
          }
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          if (!bVar41) {
            uVar9 = iVar10 + uVar9 + 0xffffa9 | 0xff000000;
            goto joined_r0x004392e5;
          }
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar40) {
            iVar18 = iVar10 + 0xffffc9;
          }
          if (!(bool)(bVar40 | bVar41)) {
            uVar9 = iVar18 + uVar9;
            goto joined_r0x0043931f;
          }
        }
        break;
      case (uint *)0x9:
        *(undefined1 *)((long)param_2 + 3) = 0x1c;
        cVar5 = *(char *)((long)puVar31 + 2);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          bVar41 = false;
          iVar18 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          bVar41 = false;
          iVar18 = iVar10 + -0x57;
        }
        else {
          bVar41 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar18 = 0;
          if (!bVar41) {
            iVar18 = iVar10 + -0x37;
          }
        }
        cVar5 = (char)puVar31[1];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar25 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar25 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar25 = 0;
          if (!bVar40) {
            iVar25 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = *(char *)((long)puVar31 + 6);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar19 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar19 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar19 = 0;
          if (!bVar40) {
            iVar19 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = (char)puVar31[2];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar26 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar26 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar26 = 0;
          if (!bVar40) {
            iVar26 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = *(char *)((long)puVar31 + 10);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar20 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar20 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar20 = 0;
          if (!bVar40) {
            iVar20 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = (char)puVar31[3];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar27 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar27 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar27 = 0;
          if (!bVar40) {
            iVar27 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        cVar5 = *(char *)((long)puVar31 + 0xe);
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          iVar21 = iVar10 + -0x30;
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          iVar21 = iVar10 + -0x57;
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          iVar21 = 0;
          if (!bVar40) {
            iVar21 = iVar10 + -0x37;
          }
          bVar41 = (bool)(bVar40 | bVar41);
        }
        uVar9 = iVar21 << 4 |
                iVar27 * 0x100 +
                iVar20 * 0x1000 +
                iVar26 * 0x10000 + iVar19 * 0x100000 + iVar25 * 0x1000000 + iVar18 * 0x10000000;
        cVar5 = (char)puVar31[4];
        iVar10 = (int)cVar5;
        if ((byte)(cVar5 - 0x30U) < 10) {
          if (!bVar41) {
            uVar7 = iVar10 - 0x30;
            goto code_r0x004397cb;
          }
        }
        else if ((byte)(cVar5 + 0x9fU) < 6) {
          if (!bVar41) {
            uVar7 = iVar10 - 0x57;
            goto code_r0x004397cb;
          }
        }
        else {
          bVar40 = (byte)(cVar5 + 0xb9U) < 0xfa;
          uVar7 = 0;
          if (!bVar40) {
            uVar7 = iVar10 - 0x37;
          }
          if (!(bool)(bVar40 | bVar41)) {
            uVar9 = uVar9 | uVar7;
            goto joined_r0x004392e5;
          }
        }
      }
      bVar41 = (param_13 & 0x10) == 0;
      if (param_11 != (uint *)0x0 && !bVar41) {
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_00164825;
        goto code_r0x00439a12;
      }
code_r0x00439808:
      if (bVar41 != false) {
        uVar6 = (ushort)*puVar31;
        goto code_r0x0043981a;
      }
code_r0x0043a0f1:
      uVar36 = 0;
      goto code_r0x0043a0f4;
    }
code_r0x0043981a:
    if (uVar6 == 0x3f) {
      *(undefined1 *)((long)param_2 + 3) = 2;
      if (cRam0000000000a008e0 == '\0') goto code_r0x0043a127;
      goto code_r0x0043983b;
    }
    cVar5 = _ZN7android14U16StringToIntEPKDsmPNS_9Res_valueE(puVar31,puStack_c8,param_2);
    if (cVar5 == '\0') {
code_r0x004399a0:
      cVar5 = _ZN7android8ResTable13stringToFloatEPKDsmPNS_9Res_valueE(puVar31,puStack_c8,param_2);
      puVar38 = (uint *)(ulong)param_8;
      if (cVar5 == '\0') {
code_r0x00439b97:
        if (puStack_c8 == (uint *)0x5) {
          if (((((ushort)((ushort)*puVar31 | 0x20) == 0x66) &&
               ((*(ushort *)((long)puVar31 + 2) | 0x20) == 0x61)) &&
              ((ushort)((ushort)puVar31[1] | 0x20) == 0x6c)) &&
             (((*(ushort *)((long)puVar31 + 6) | 0x20) == 0x73 &&
              ((ushort)((ushort)puVar31[2] | 0x20) == 0x65)))) {
            if ((param_13 & 8) != 0) {
              *(undefined1 *)((long)param_2 + 3) = 0x12;
              goto code_r0x00438c74;
            }
            goto joined_r0x00439c90;
          }
        }
        else if (((puStack_c8 == (uint *)0x4) && ((ushort)((ushort)*puVar31 | 0x20) == 0x74)) &&
                (((*(ushort *)((long)puVar31 + 2) | 0x20) == 0x72 &&
                 (((ushort)((ushort)puVar31[1] | 0x20) == 0x75 &&
                  ((*(ushort *)((long)puVar31 + 6) | 0x20) == 0x65)))))) {
          if ((param_13 & 8) != 0) {
            *(undefined1 *)((long)param_2 + 3) = 0x12;
            param_2[1] = 0xffffffff;
            uVar36 = CONCAT71(uVar37,1);
            goto code_r0x0043a0f4;
          }
joined_r0x00439c90:
          if (bVar30 == false) {
            if (param_11 == (uint *)0x0) goto code_r0x0043a0f1;
            lVar23 = *(long *)param_11;
            puVar28 = &UNK_001773fd;
            goto code_r0x00439a12;
          }
        }
        puVar12 = param_1;
        if ((param_13 & 0x10000) == 0) {
code_r0x00439e1f:
          puVar38 = (uint *)(ulong)param_8;
          if ((param_13 & 0x20000) == 0) {
code_r0x00439fea:
            puVar38 = (uint *)(ulong)param_8;
            if ((param_13 & 2) == 0) {
              if (param_11 == (uint *)0x0) goto code_r0x0043a0f1;
              lVar23 = *(long *)param_11;
              puVar28 = &UNK_001726a5;
              goto code_r0x00439a12;
            }
            *(undefined1 *)((long)param_2 + 3) = 3;
            if (param_3 != 0) {
              uVar9 = _ZN7android8ResTable13collectStringEPNS_8String16EPKDsmbPPKcb
                                (param_3,puVar31,puStack_c8,param_6,&puStack_40,0);
              uVar36 = (ulong)uVar9;
              if (param_11 == (uint *)0x0) goto code_r0x0043a0f4;
              lVar23 = *(long *)param_11;
              puVar28 = puStack_40;
              goto code_r0x00439a18;
            }
          }
          else {
            puStack_50 = (uint *)0x0;
            if ((*(char *)((long)param_1 + (ulong)(param_8 >> 0x18) + 0xe8) == '\0') ||
               (lVar23 = _ZNK7android8ResTable7lockBagEjPPKNS0_9bag_entryE
                                   (param_1,puVar38,&puStack_50), lVar23 < 0)) {
code_r0x00439fbf:
              puVar38 = (uint *)(ulong)param_8;
              if ((!bVar35) ||
                 (cVar5 = (**(code **)(*(long *)param_11 + 0x50))
                                    (param_11,puVar38,puVar31,puStack_c8,param_2),
                 puVar12 = puStack_c8, cVar5 == '\0')) goto code_r0x00439fea;
            }
            else {
              uStack_78 = 0;
              uStack_70 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              puStack_a8 = (uint *)0x0;
              uStack_a0 = 0;
              *(undefined1 *)((long)param_2 + 3) = 0x11;
              param_2[1] = 0;
              if (puStack_c8 != (uint *)0x0) {
                puVar1 = (uint *)((long)puVar31 + (long)puStack_c8 * 2);
                puVar33 = puVar31;
                do {
                  puVar38 = (uint *)0x2;
                  puVar29 = puVar33;
                  do {
                    puVar2 = puVar29;
                    puVar12 = puVar38;
                    puVar29 = (uint *)((long)puVar2 + 2);
                    if (puVar1 <= puVar29) break;
                    puVar38 = (uint *)((long)puVar12 + 2);
                  } while (*(ushort *)puVar29 != 0x7c);
                  if (lVar23 == 0) {
code_r0x00439f9a:
                    func_0x0099c510(param_1);
                    goto code_r0x00439fbf;
                  }
                  puVar12 = (uint *)((long)puVar12 >> 1);
                  puVar38 = puStack_50 + 4;
                  lVar32 = lVar23;
                  while (((uVar9 = puVar38[-2], 0xffff < uVar9 && (uVar9 & 0xff0000) == 0 ||
                          (cVar5 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                             (param_1,uVar9,0,&puStack_a8), cVar5 == '\0')) ||
                         (iVar10 = strzcmp16(puVar33,puVar12,uStack_80,uStack_70), iVar10 != 0))) {
                    puVar38 = puVar38 + 6;
                    lVar32 = lVar32 + -1;
                    if (lVar32 == 0) goto code_r0x00439f9a;
                  }
                  param_2[1] = param_2[1] | *puVar38;
                  puVar33 = puVar2 + 1;
                  if (puVar1 <= puVar29) {
                    puVar33 = puVar29;
                  }
                } while (puVar33 < puVar1);
              }
              func_0x0099c510(param_1);
              puVar12 = param_1;
            }
          }
        }
        else {
          puStack_50 = (uint *)0x0;
          if (*(char *)((long)param_1 + (ulong)(param_8 >> 0x18) + 0xe8) != '\0') {
            func_0x0099c500(param_1);
            lVar23 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj
                               (param_1,param_8,&puStack_50,0);
            if (lVar23 < 0) {
              func_0x0099c510(param_1);
            }
            else {
              uStack_78 = 0;
              uStack_70 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              puStack_a8 = (uint *)0x0;
              uStack_a0 = 0;
              if (lVar23 != 0) {
                do {
                  puVar38 = puStack_50;
                  uVar9 = puStack_50[2];
                  if (((uVar9 < 0x10000 || (uVar9 & 0xff0000) != 0) &&
                      (cVar5 = _ZNK7android8ResTable15getResourceNameEjbPNS0_13resource_nameE
                                         (param_1,uVar9,0,&puStack_a8), cVar5 != '\0')) &&
                     (iVar10 = strzcmp16(puVar31,puStack_c8,uStack_80,uStack_70),
                     puVar38 = puStack_50, iVar10 == 0)) {
                    *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)((long)puStack_50 + 0xf);
                    param_2[1] = puStack_50[4];
                    func_0x0099c510(param_1);
                    uVar36 = CONCAT71((int7)((ulong)&puStack_a8 >> 8),1);
                    puVar38 = param_2;
                    goto code_r0x0043a0f4;
                  }
                  puStack_50 = puVar38 + 6;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              func_0x0099c510(param_1);
            }
          }
          puVar38 = (uint *)(ulong)param_8;
          if ((!bVar35) ||
             (cVar5 = (**(code **)(*(long *)param_11 + 0x48))
                                (param_11,puVar38,puVar31,puStack_c8,param_2), cVar5 == '\0'))
          goto code_r0x00439e1f;
        }
        uVar36 = CONCAT71((int7)((ulong)puVar12 >> 8),1);
        goto code_r0x0043a0f4;
      }
      uVar36 = CONCAT71(uVar37,1);
      if (*(char *)((long)param_2 + 3) == '\x06') {
        if ((char)param_13 < '\0') goto code_r0x0043a0f4;
        if (bVar30 != false) goto code_r0x00439b97;
        if (param_11 == (uint *)0x0) goto code_r0x0043a0f1;
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_0015e412;
      }
      else if (*(char *)((long)param_2 + 3) == '\x05') {
        if ((param_13 & 0x40) != 0) goto code_r0x0043a0f4;
        if (bVar30 != false) goto code_r0x00439b97;
        if (param_11 == (uint *)0x0) goto code_r0x0043a0f1;
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_00180663;
      }
      else {
        if ((param_13 & 0x20) != 0) goto code_r0x0043a0f4;
        if (bVar30 != false) goto code_r0x00439b97;
        if (param_11 == (uint *)0x0) goto code_r0x0043a0f1;
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_0017bd71;
      }
    }
    else {
      puVar38 = puVar31;
      if ((param_13 & 4) == 0) {
        if ((char)((param_13 & 0x20) >> 5) != '\0' || bVar30 != false) goto code_r0x004399a0;
        if (param_11 == (uint *)0x0) goto code_r0x0043a0f1;
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_0017594b;
      }
      else {
        bVar35 = (int)param_2[1] <= (int)uStack_48 && (int)uStack_44 <= (int)param_2[1];
        uVar36 = CONCAT71(uVar37,bVar35);
        if (param_11 == (uint *)0x0 || bVar35) goto code_r0x0043a0f4;
        lVar23 = *(long *)param_11;
        puVar28 = &UNK_0017424d;
      }
    }
code_r0x00439a12:
    uVar36 = 0;
  }
code_r0x00439a18:
  (**(code **)(lVar23 + 0x68))(param_11,param_12,puVar28);
code_r0x0043a0f4:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return uVar36 & 0xffffffff;
    }
    func_0x0099bd00();
    puStack_c8 = puVar38;
code_r0x0043a127:
    iVar10 = __cxa_guard_acquire(0xa008e0);
    if (iVar10 != 0) {
      _ZN7android8String16C2EPKc(0xa008d8,&UNK_0015b517);
      func_0x0099c580(_ZN7android8String16D2Ev,0xa008d8,&DAT_009c55b8);
      __cxa_guard_release(0xa008e0);
    }
code_r0x0043983b:
    puStack_a8 = (uint *)0x0;
    _ZN7android8String16C2Ev(&puStack_a8);
    puStack_50 = (uint *)0x0;
    _ZN7android8String16C2Ev(&puStack_50);
    uStack_58 = 0;
    _ZN7android8String16C2Ev(&uStack_58);
    cVar5 = _ZN7android8ResTable17expandResourceRefEPKDsmPNS_8String16ES4_S4_PKS3_S6_PPKcPb
                      ((ushort *)((long)puVar31 + 2),(long)puStack_c8 + -1,&puStack_a8,&puStack_50,
                       &uStack_58,0xa008d8,param_10,&puStack_40,0);
    uVar17 = uStack_58;
    if (cVar5 == '\0') {
      if (puVar22 == (uint *)0x0) goto code_r0x00439b0d;
      lVar23 = *(long *)puVar22;
      puVar28 = puStack_40;
      puVar12 = puVar22;
code_r0x00439a3c:
      uVar36 = 0;
      (**(code **)(lVar23 + 0x68))(puVar22,param_12,puVar28);
    }
    else {
      uStack_5c = 0;
      uVar14 = _ZNK7android8String164sizeEv(&uStack_58);
      puVar12 = puStack_50;
      uVar15 = _ZNK7android8String164sizeEv(&puStack_50);
      puStack_c8 = puStack_a8;
      uVar16 = _ZNK7android8String164sizeEv(&puStack_a8);
      uVar17 = _ZNK7android8ResTable17identifierForNameEPKDsmS2_mS2_mPj
                         (param_1,uVar17,uVar14,puVar12,uVar15,puStack_c8,uVar16,&uStack_5c);
      uVar9 = (uint)uVar17;
      uVar37 = (undefined7)((ulong)uVar15 >> 8);
      puVar22 = puVar12;
      if (uVar9 == 0) {
        if (param_11 != (uint *)0x0) {
          uVar9 = (**(code **)(*(long *)param_11 + 0x18))
                            (param_11,&puStack_a8,&puStack_50,&uStack_58);
          if (uVar9 == 0) {
code_r0x0043a06a:
            lVar23 = *(long *)param_11;
            puVar28 = &UNK_0016b1e7;
            puVar22 = param_11;
            goto code_r0x00439a3c;
          }
          if (uVar9 < 0x1000000) {
            param_2[1] = uVar9;
            *(undefined1 *)((long)param_2 + 3) = 8;
            uVar36 = CONCAT71(uVar37,1);
          }
          else {
            if ((uVar9 >> 0x18 != 0x7f) && (uVar9 >> 0x18 != 1)) goto code_r0x0043a06a;
            param_2[1] = uVar9;
            uVar36 = CONCAT71(uVar37,1);
          }
          goto code_r0x00439b10;
        }
      }
      else {
        if ((param_14 == '\0') || ((uStack_5c & 0x40000000) != 0)) {
          if (param_11 != (uint *)0x0) {
            iVar10 = (**(code **)(*(long *)param_11 + 0x28))
                               (param_11,((uint)((ulong)uVar17 >> 0x18) & 0xff) - 1);
            uVar9 = (uVar9 & 0xffffff) + iVar10 * 0x1000000 + 0x1000000;
          }
          if ((uVar9 >> 0x18 != 1) && (uVar9 >> 0x18 != 0x7f)) {
            *(undefined1 *)((long)param_2 + 3) = 8;
          }
          param_2[1] = uVar9;
          uVar36 = CONCAT71(uVar37,1);
          goto code_r0x00439b10;
        }
        if (param_11 != (uint *)0x0) {
          lVar23 = *(long *)param_11;
          puVar28 = &UNK_00189946;
          puVar22 = param_11;
          goto code_r0x00439a3c;
        }
      }
code_r0x00439b0d:
      uVar36 = 0;
      puVar12 = puVar22;
    }
code_r0x00439b10:
    _ZN7android8String16D2Ev(&uStack_58);
    _ZN7android8String16D2Ev(&puStack_50);
    _ZN7android8String16D2Ev(&puStack_a8);
    puVar38 = puStack_c8;
    puVar22 = puVar12;
  } while( true );
code_r0x00438a20:
  uVar6 = puVar39[-1];
  puVar22 = puVar38;
  if (0x7f < (ulong)uVar6) goto code_r0x00438a7b;
  plVar11 = (long *)func_0x0099be00();
  if ((*(byte *)(*plVar11 + 1 + (ulong)uVar6 * 2) & 0x20) == 0) {
    if (uVar6 == 0x5c) {
      puVar22 = (uint *)((long)puVar38 + (ulong)(*puVar39 != 0));
    }
    goto code_r0x00438a7b;
  }
  puVar39 = puVar39 + -1;
  puVar38 = (uint *)((long)puVar38 + -1);
  puVar22 = puStack_c8;
  if (puVar38 == (uint *)0x0) goto code_r0x00438a7b;
  goto code_r0x00438a20;
}


