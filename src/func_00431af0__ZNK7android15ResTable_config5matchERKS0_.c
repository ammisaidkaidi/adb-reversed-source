// Function: _ZNK7android15ResTable_config5matchERKS0_
// Address: 00431af0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZNK7android15ResTable_config5matchERKS0_(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  char extraout_DL;
  undefined8 uVar10;
  int *unaff_RBX;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  byte bVar16;
  char *unaff_R12;
  long in_FS_OFFSET;
  undefined4 uStack_74;
  ulong uStack_70;
  int *piStack_68;
  char *pcStack_60;
  int iStack_34;
  long lStack_30;
  byte bVar15;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(param_1 + 4);
  if ((uVar3 != 0) &&
     ((((short)uVar3 != 0 && (*(short *)(param_2 + 4) != (short)uVar3)) ||
      ((0xffff < uVar3 && (*(short *)(param_2 + 6) != (short)(uVar3 >> 0x10)))))))
  goto code_r0x00431c0e;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) goto code_r0x00431c01;
  cVar5 = param_2[8];
  cVar9 = (char)(uVar3 >> 8);
  if ((cVar5 == (char)uVar3) && (param_2[9] == cVar9)) {
code_r0x00431b55:
    iStack_34 = 0;
    if (param_2[0x24] == '\0') {
      cVar5 = (char)(uVar3 >> 0x10);
joined_r0x00431bce:
      if ((cVar5 == '\0') || ((cVar5 == param_2[10] && (param_1[0xb] == param_2[0xb]))))
      goto code_r0x00431c01;
    }
    else {
      unaff_RBX = (int *)(param_1 + 0x24);
      if ((param_1[0x24] == '\0') && (param_1[0x34] == '\0')) {
        unaff_RBX = &iStack_34;
        _ZN7android23localeDataComputeScriptEPcPKcS2_(unaff_RBX,param_1 + 8,param_1 + 10);
        unaff_R12 = param_2;
        if ((char)iStack_34 == '\0') {
          cVar5 = param_1[10];
          goto joined_r0x00431bce;
        }
      }
      if (*unaff_RBX == *(int *)(param_2 + 0x24)) {
code_r0x00431c01:
        if ((param_1[0x13] == '\0') || (param_1[0x13] == param_2[0x13])) {
          uVar3 = *(uint *)(param_1 + 0x1c);
          if (uVar3 == 0) {
code_r0x00431cb5:
            uVar3 = *(uint *)(param_1 + 0x30);
            if (uVar3 == 0) {
code_r0x00431cfe:
              uVar3 = *(uint *)(param_1 + 0x20);
              if (((uVar3 == 0) ||
                  ((((ushort)uVar3 == 0 || ((ushort)uVar3 <= *(ushort *)(param_2 + 0x20))) &&
                   ((uVar3 < 0x10000 || ((ushort)(uVar3 >> 0x10) <= *(ushort *)(param_2 + 0x22))))))
                  ) && ((iVar4 = *(int *)(param_1 + 0xc), iVar4 == 0 ||
                        ((((char)iVar4 == '\0' || (param_2[0xc] == (char)iVar4)) &&
                         ((cVar5 = (char)((uint)iVar4 >> 8), cVar5 == '\0' ||
                          (param_2[0xd] == cVar5)))))))) {
                uVar3 = *(uint *)(param_1 + 0x10);
                if ((uVar3 & 0xffffff) != 0) {
                  bVar15 = (byte)(uVar3 >> 0x10);
                  bVar14 = bVar15 & 3;
                  if (((((((uVar3 >> 0x10 & 3) != 0) &&
                         (bVar16 = param_2[0x12] & 3, bVar14 != bVar16)) &&
                        (bVar16 != 3 || bVar14 != 1)) ||
                       (((uVar3 & 0xc0000) != 0 && ((bVar15 & 0xc) != (param_2[0x12] & 0xcU))))) ||
                      (((char)uVar3 != '\0' && (param_2[0x10] != (char)uVar3)))) ||
                     ((cVar5 = (char)(uVar3 >> 8), cVar5 != '\0' && (param_2[0x11] != cVar5))))
                  goto code_r0x00431c0e;
                }
                uVar3 = *(uint *)(param_1 + 0x14);
                if ((uVar3 == 0) ||
                   ((((ushort)uVar3 == 0 || ((ushort)uVar3 <= *(ushort *)(param_2 + 0x14))) &&
                    ((uVar3 < 0x10000 || ((ushort)(uVar3 >> 0x10) <= *(ushort *)(param_2 + 0x16)))))
                   )) {
                  uVar2 = *(ushort *)(param_1 + 0x18);
                  if ((uVar2 == 0 || uVar2 <= *(ushort *)(param_2 + 0x18)) &&
                     ((*(ushort *)(param_1 + 0x1a) == 0 ||
                      ((uVar2 != 0 &&
                       ((uVar2 != *(ushort *)(param_2 + 0x18) ||
                        (*(ushort *)(param_1 + 0x1a) <= *(ushort *)(param_2 + 0x1a))))))))) {
                    uVar7 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
                    goto code_r0x00431c10;
                  }
                }
              }
            }
            else if (((uVar3 & 3) == 0) || (((byte)uVar3 & 3) == (param_2[0x30] & 3U))) {
              bVar14 = (byte)(uVar3 >> 8);
              if ((((uVar3 >> 8 & 0xc) == 0) || ((bVar14 & 0xc) == (param_2[0x31] & 0xcU))) &&
                 (((uVar3 & 0x300) == 0 || ((bVar14 & 3) == (param_2[0x31] & 3U)))))
              goto code_r0x00431cfe;
            }
          }
          else {
            bVar14 = (byte)uVar3;
            if (((((uVar3 & 0xc0) == 0) || ((bVar14 & 0xc0) == (param_2[0x1c] & 0xc0U))) &&
                (((uVar3 & 0xf) == 0 || ((bVar14 & 0xf) <= (param_2[0x1c] & 0xfU))))) &&
               (((uVar3 & 0x30) == 0 || ((bVar14 & 0x30) == (param_2[0x1c] & 0x30U))))) {
              bVar14 = (byte)(uVar3 >> 8);
              if ((((uVar3 >> 8 & 0xf) == 0) || ((bVar14 & 0xf) == (param_2[0x1d] & 0xfU))) &&
                 ((((uVar3 & 0x3000) == 0 || ((bVar14 & 0x30) == (param_2[0x1d] & 0x30U))) &&
                  ((uVar3 < 0x10000 || ((ushort)(uVar3 >> 0x10) <= *(ushort *)(param_2 + 0x1e)))))))
              goto code_r0x00431cb5;
            }
          }
        }
      }
    }
code_r0x00431c0e:
    uVar7 = 0;
  }
  else if ((char)uVar3 == -0x53) {
    uVar7 = 0;
    if (((cVar5 == 't') && (cVar9 == '\x05')) && (param_2[9] == 'l')) goto code_r0x00431b55;
  }
  else {
    if ((uVar3 & 0xff) != 0x74) goto code_r0x00431c0e;
    uVar7 = 0;
    if (((cVar5 == -0x53) && (cVar9 == 'l')) && (param_2[9] == '\x05')) goto code_r0x00431b55;
  }
code_r0x00431c10:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar7;
  }
  func_0x0099bd00();
  uStack_70 = *(ulong *)(in_FS_OFFSET + 0x28);
  pcVar11 = param_2;
  pcVar13 = param_1;
  piStack_68 = unaff_RBX;
  pcStack_60 = unaff_R12;
  if (param_1[8] != '\0') {
    cVar5 = param_1[0x24];
    cVar9 = param_1[0x28];
    bVar14 = param_1[0x34];
    cVar1 = param_1[0x35];
    lVar6 = _ZNK7android7String86lengthEv(param_2);
    pcVar13 = param_2;
    if (((cVar5 != '\0' && (bVar14 & 1) == 0) || (cVar9 != '\0')) || (cVar1 != '\0')) {
      if (lVar6 != 0) {
        _ZN7android7String86appendEPKc(param_2,&UNK_001801f1);
      }
      _ZN7android7String86appendEPKc(param_2,&UNK_0016315b);
      uStack_74 = 0;
      bVar15 = param_1[8];
      if ((char)bVar15 < '\0') {
        uStack_74._0_2_ =
             CONCAT11(((byte)param_1[9] >> 5 | (bVar15 & 3) << 3) + 0x61,(param_1[9] & 0x1fU) + 0x61
                     );
        uStack_74._0_3_ = CONCAT12((bVar15 >> 2 & 0x1f) + 0x61,(undefined2)uStack_74);
        uStack_74 = (uint)(uint3)uStack_74;
        uVar10 = 3;
      }
      else if (bVar15 == 0) {
        uVar10 = 0;
      }
      else {
        uStack_74 = (uint)*(ushort *)(param_1 + 8);
        uVar10 = 2;
      }
      pcVar11 = (char *)&uStack_74;
      _ZN7android7String86appendEPKcm(param_2,pcVar11,uVar10);
      if (cVar5 != '\0' && (bVar14 & 1) == 0) {
        pcVar11 = param_1 + 0x24;
        _ZN7android7String86appendEPKc(param_2,&UNK_0015cb17);
        pcVar13 = param_2;
        _ZN7android7String86appendEPKcm(param_2,pcVar11,4);
      }
      pcVar12 = param_1 + 0x28;
      if (param_1[10] != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_0015cb17);
        bVar14 = param_1[10];
        if ((char)bVar14 < '\0') {
          uStack_74._0_2_ =
               CONCAT11(((byte)param_1[0xb] >> 5 | (bVar14 & 3) << 3) + 0x30,
                        (param_1[0xb] & 0x1fU) + 0x30);
          uStack_74._0_3_ = CONCAT12((bVar14 >> 2 & 0x1f) + 0x30,(undefined2)uStack_74);
          uStack_74 = (uint)(uint3)uStack_74;
          uVar10 = 3;
        }
        else if (bVar14 == 0) {
          uStack_74 = 0;
          uVar10 = 0;
        }
        else {
          uStack_74 = (uint)*(ushort *)(param_1 + 10);
          uVar10 = 2;
        }
        pcVar11 = (char *)&uStack_74;
        pcVar13 = param_2;
        _ZN7android7String86appendEPKcm(param_2,pcVar11,uVar10);
      }
      param_1 = param_1 + 0x35;
      if (*pcVar12 != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_0015cb17);
        uVar10 = func_0x0099c520(pcVar12,8);
        pcVar13 = param_2;
        _ZN7android7String86appendEPKcm(param_2,pcVar12,uVar10);
        pcVar11 = pcVar12;
      }
      if (*param_1 != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_00157b66);
        uVar10 = func_0x0099c520(param_1,8);
        goto code_r0x00432176;
      }
    }
    else {
      if (lVar6 != 0) {
        _ZN7android7String86appendEPKc(param_2,&UNK_001801f1);
      }
      uStack_74 = 0;
      bVar14 = param_1[8];
      if ((char)bVar14 < '\0') {
        uStack_74._0_2_ =
             CONCAT11(((byte)param_1[9] >> 5 | (bVar14 & 3) << 3) + 0x61,(param_1[9] & 0x1fU) + 0x61
                     );
        uStack_74._0_3_ = CONCAT12((bVar14 >> 2 & 0x1f) + 0x61,(undefined2)uStack_74);
        uStack_74 = (uint)(uint3)uStack_74;
        uVar10 = 3;
      }
      else if (bVar14 == 0) {
        uVar10 = 0;
      }
      else {
        uStack_74 = (uint)*(ushort *)(param_1 + 8);
        uVar10 = 2;
      }
      pcVar11 = (char *)&uStack_74;
      _ZN7android7String86appendEPKcm(param_2,pcVar11,uVar10);
      if (param_1[10] != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_0018486f);
        bVar14 = param_1[10];
        if ((char)bVar14 < '\0') {
          uStack_74._0_2_ =
               CONCAT11(((byte)param_1[0xb] >> 5 | (bVar14 & 3) << 3) + 0x30,
                        (param_1[0xb] & 0x1fU) + 0x30);
          uStack_74._0_3_ = CONCAT12((bVar14 >> 2 & 0x1f) + 0x30,(undefined2)uStack_74);
          uStack_74 = (uint)(uint3)uStack_74;
          uVar10 = 3;
        }
        else if (bVar14 == 0) {
          uStack_74 = 0;
          uVar10 = 0;
        }
        else {
          uStack_74 = (uint)*(ushort *)(param_1 + 10);
          uVar10 = 2;
        }
        param_1 = (char *)&uStack_74;
code_r0x00432176:
        _ZN7android7String86appendEPKcm(param_2,param_1,uVar10);
        pcVar11 = param_1;
        pcVar13 = param_2;
      }
    }
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_70) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  pcVar11[0x10] = '\0';
  pcVar11[0x11] = '\0';
  pcVar11[0x12] = '\0';
  pcVar11[0x13] = '\0';
  pcVar11[0x14] = '\0';
  pcVar11[0x15] = '\0';
  pcVar11[0x16] = '\0';
  pcVar11[0x17] = '\0';
  pcVar11[0x18] = '\0';
  pcVar11[0x19] = '\0';
  pcVar11[0x1a] = '\0';
  pcVar11[0x1b] = '\0';
  pcVar11[0x1c] = '\0';
  pcVar11[0x1d] = '\0';
  pcVar11[0x1e] = '\0';
  pcVar11[0x1f] = '\0';
  pcVar11[0] = '\0';
  pcVar11[1] = '\0';
  pcVar11[2] = '\0';
  pcVar11[3] = '\0';
  pcVar11[4] = '\0';
  pcVar11[5] = '\0';
  pcVar11[6] = '\0';
  pcVar11[7] = '\0';
  pcVar11[8] = '\0';
  pcVar11[9] = '\0';
  pcVar11[10] = '\0';
  pcVar11[0xb] = '\0';
  pcVar11[0xc] = '\0';
  pcVar11[0xd] = '\0';
  pcVar11[0xe] = '\0';
  pcVar11[0xf] = '\0';
  pcVar11[0x20] = '\0';
  pcVar11[0x21] = '\0';
  pcVar11[0x22] = '\0';
  pcVar11[0x23] = '\0';
  pcVar11[0x24] = '\0';
  pcVar11[0x25] = '\0';
  pcVar11[0x26] = '\0';
  pcVar11[0x27] = '\0';
  bVar14 = pcVar13[8];
  bVar15 = pcVar13[10];
  if (bVar14 == 0 && bVar15 == 0) {
    return (ulong)bVar14;
  }
  if (bVar14 == 0) {
    if ((pcVar13[0x24] != '\0') && (pcVar13[0x34] == '\0')) {
      lVar6 = 0;
      goto code_r0x004322d7;
    }
    if (bVar15 != 0) {
      lVar6 = 0;
      goto joined_r0x0043223b;
    }
    if (pcVar13[0x28] == '\0') {
      return 0;
    }
code_r0x0043234d:
    lVar6 = 0;
  }
  else {
    if (extraout_DL == '\x01' && bVar14 == 0x74) {
      if (pcVar13[9] == 'l') {
        builtin_strncpy(pcVar11,"fil",4);
        goto code_r0x004322bb;
      }
code_r0x0043220c:
      *(undefined2 *)pcVar11 = *(undefined2 *)(pcVar13 + 8);
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      uVar7 = 2;
      cVar5 = pcVar13[0x24];
    }
    else {
      if (-1 < (char)bVar14) goto code_r0x0043220c;
      bVar15 = pcVar13[9];
      *pcVar11 = (bVar15 & 0x1f) + 0x61;
      pcVar11[1] = (bVar15 >> 5 | (bVar14 & 3) << 3) + 0x61;
      pcVar11[2] = (bVar14 >> 2 & 0x1f) + 0x61;
      pcVar11[3] = '\0';
code_r0x004322bb:
      uVar7 = 3;
      cVar5 = pcVar13[0x24];
    }
    if ((cVar5 != '\0') && (pcVar13[0x34] == '\0')) {
      pcVar11[uVar7] = '-';
      lVar6 = uVar7 + 1;
code_r0x004322d7:
      *(undefined4 *)(pcVar11 + lVar6) = *(undefined4 *)(pcVar13 + 0x24);
      uVar7 = lVar6 + 4;
    }
    if (pcVar13[10] != '\0') {
      pcVar11[uVar7] = '-';
      lVar6 = uVar7 + 1;
      bVar15 = pcVar13[10];
joined_r0x0043223b:
      if ((char)bVar15 < '\0') {
        bVar14 = pcVar13[0xb];
        pcVar11[lVar6] = (bVar14 & 0x1f) + 0x30;
        pcVar11[lVar6 + 1] = (bVar14 >> 5 | (bVar15 & 3) << 3) + 0x30;
        pcVar11[lVar6 + 2] = (bVar15 >> 2 & 0x1f) + 0x30;
        pcVar11[lVar6 + 3] = '\0';
        lVar8 = 3;
      }
      else if (bVar15 == 0) {
        pcVar12 = pcVar11 + lVar6;
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        lVar8 = 0;
      }
      else {
        *(undefined2 *)(pcVar11 + lVar6) = *(undefined2 *)(pcVar13 + 10);
        (pcVar11 + lVar6 + 2)[0] = '\0';
        (pcVar11 + lVar6 + 2)[1] = '\0';
        lVar8 = 2;
      }
      uVar7 = lVar8 + lVar6;
    }
    if (pcVar13[0x28] == '\0') goto code_r0x00432371;
    if (uVar7 == 0) goto code_r0x0043234d;
    pcVar11[uVar7] = '-';
    lVar6 = uVar7 + 1;
  }
  *(undefined8 *)(pcVar11 + lVar6) = *(undefined8 *)(pcVar13 + 0x28);
  lVar8 = func_0x0099c520(pcVar11 + lVar6,8);
  uVar7 = lVar8 + lVar6;
code_r0x00432371:
  if ((pcVar13[0x35] != '\0') && (uVar7 != 0)) {
    (pcVar11 + uVar7 + 4)[0] = 'u';
    (pcVar11 + uVar7 + 4)[1] = '-';
    pcVar12 = pcVar11 + uVar7;
    pcVar12[0] = '-';
    pcVar12[1] = 'u';
    pcVar12[2] = '-';
    pcVar12[3] = 'n';
    *(undefined8 *)(pcVar11 + uVar7 + 6) = *(undefined8 *)(pcVar13 + 0x35);
  }
  return uVar7;
}


