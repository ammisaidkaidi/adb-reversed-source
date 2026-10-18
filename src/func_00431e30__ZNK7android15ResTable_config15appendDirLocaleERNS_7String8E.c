// Function: _ZNK7android15ResTable_config15appendDirLocaleERNS_7String8E
// Address: 00431e30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android15ResTable_config15appendDirLocaleERNS_7String8E(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  char extraout_DL;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar9 = param_2;
  pcVar11 = param_1;
  if (param_1[8] != '\0') {
    cVar1 = param_1[0x24];
    cVar2 = param_1[0x28];
    bVar3 = param_1[0x34];
    cVar4 = param_1[0x35];
    lVar6 = _ZNK7android7String86lengthEv(param_2);
    pcVar11 = param_2;
    if (((cVar1 != '\0' && (bVar3 & 1) == 0) || (cVar2 != '\0')) || (cVar4 != '\0')) {
      if (lVar6 != 0) {
        _ZN7android7String86appendEPKc(param_2,&UNK_001801f1);
      }
      _ZN7android7String86appendEPKc(param_2,&UNK_0016315b);
      uStack_3c = 0;
      bVar5 = param_1[8];
      if ((char)bVar5 < '\0') {
        uStack_3c._0_2_ =
             CONCAT11(((byte)param_1[9] >> 5 | (bVar5 & 3) << 3) + 0x61,(param_1[9] & 0x1fU) + 0x61)
        ;
        uStack_3c._0_3_ = CONCAT12((bVar5 >> 2 & 0x1f) + 0x61,(undefined2)uStack_3c);
        uStack_3c = (uint)(uint3)uStack_3c;
        uVar8 = 3;
      }
      else if (bVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uStack_3c = (uint)*(ushort *)(param_1 + 8);
        uVar8 = 2;
      }
      pcVar9 = (char *)&uStack_3c;
      _ZN7android7String86appendEPKcm(param_2,pcVar9,uVar8);
      if (cVar1 != '\0' && (bVar3 & 1) == 0) {
        pcVar9 = param_1 + 0x24;
        _ZN7android7String86appendEPKc(param_2,&UNK_0015cb17);
        pcVar11 = param_2;
        _ZN7android7String86appendEPKcm(param_2,pcVar9,4);
      }
      pcVar10 = param_1 + 0x28;
      if (param_1[10] != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_0015cb17);
        bVar3 = param_1[10];
        if ((char)bVar3 < '\0') {
          uStack_3c._0_2_ =
               CONCAT11(((byte)param_1[0xb] >> 5 | (bVar3 & 3) << 3) + 0x30,
                        (param_1[0xb] & 0x1fU) + 0x30);
          uStack_3c._0_3_ = CONCAT12((bVar3 >> 2 & 0x1f) + 0x30,(undefined2)uStack_3c);
          uStack_3c = (uint)(uint3)uStack_3c;
          uVar8 = 3;
        }
        else if (bVar3 == 0) {
          uStack_3c = 0;
          uVar8 = 0;
        }
        else {
          uStack_3c = (uint)*(ushort *)(param_1 + 10);
          uVar8 = 2;
        }
        pcVar9 = (char *)&uStack_3c;
        pcVar11 = param_2;
        _ZN7android7String86appendEPKcm(param_2,pcVar9,uVar8);
      }
      param_1 = param_1 + 0x35;
      if (*pcVar10 != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_0015cb17);
        uVar8 = func_0x0099c520(pcVar10,8);
        pcVar11 = param_2;
        _ZN7android7String86appendEPKcm(param_2,pcVar10,uVar8);
        pcVar9 = pcVar10;
      }
      if (*param_1 != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_00157b66);
        uVar8 = func_0x0099c520(param_1,8);
        goto code_r0x00432176;
      }
    }
    else {
      if (lVar6 != 0) {
        _ZN7android7String86appendEPKc(param_2,&UNK_001801f1);
      }
      uStack_3c = 0;
      bVar3 = param_1[8];
      if ((char)bVar3 < '\0') {
        uStack_3c._0_2_ =
             CONCAT11(((byte)param_1[9] >> 5 | (bVar3 & 3) << 3) + 0x61,(param_1[9] & 0x1fU) + 0x61)
        ;
        uStack_3c._0_3_ = CONCAT12((bVar3 >> 2 & 0x1f) + 0x61,(undefined2)uStack_3c);
        uStack_3c = (uint)(uint3)uStack_3c;
        uVar8 = 3;
      }
      else if (bVar3 == 0) {
        uVar8 = 0;
      }
      else {
        uStack_3c = (uint)*(ushort *)(param_1 + 8);
        uVar8 = 2;
      }
      pcVar9 = (char *)&uStack_3c;
      _ZN7android7String86appendEPKcm(param_2,pcVar9,uVar8);
      if (param_1[10] != '\0') {
        _ZN7android7String86appendEPKc(param_2,&UNK_0018486f);
        bVar3 = param_1[10];
        if ((char)bVar3 < '\0') {
          uStack_3c._0_2_ =
               CONCAT11(((byte)param_1[0xb] >> 5 | (bVar3 & 3) << 3) + 0x30,
                        (param_1[0xb] & 0x1fU) + 0x30);
          uStack_3c._0_3_ = CONCAT12((bVar3 >> 2 & 0x1f) + 0x30,(undefined2)uStack_3c);
          uStack_3c = (uint)(uint3)uStack_3c;
          uVar8 = 3;
        }
        else if (bVar3 == 0) {
          uStack_3c = 0;
          uVar8 = 0;
        }
        else {
          uStack_3c = (uint)*(ushort *)(param_1 + 10);
          uVar8 = 2;
        }
        param_1 = (char *)&uStack_3c;
code_r0x00432176:
        _ZN7android7String86appendEPKcm(param_2,param_1,uVar8);
        pcVar9 = param_1;
        pcVar11 = param_2;
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  func_0x0099bd00();
  pcVar9[0x10] = '\0';
  pcVar9[0x11] = '\0';
  pcVar9[0x12] = '\0';
  pcVar9[0x13] = '\0';
  pcVar9[0x14] = '\0';
  pcVar9[0x15] = '\0';
  pcVar9[0x16] = '\0';
  pcVar9[0x17] = '\0';
  pcVar9[0x18] = '\0';
  pcVar9[0x19] = '\0';
  pcVar9[0x1a] = '\0';
  pcVar9[0x1b] = '\0';
  pcVar9[0x1c] = '\0';
  pcVar9[0x1d] = '\0';
  pcVar9[0x1e] = '\0';
  pcVar9[0x1f] = '\0';
  pcVar9[0] = '\0';
  pcVar9[1] = '\0';
  pcVar9[2] = '\0';
  pcVar9[3] = '\0';
  pcVar9[4] = '\0';
  pcVar9[5] = '\0';
  pcVar9[6] = '\0';
  pcVar9[7] = '\0';
  pcVar9[8] = '\0';
  pcVar9[9] = '\0';
  pcVar9[10] = '\0';
  pcVar9[0xb] = '\0';
  pcVar9[0xc] = '\0';
  pcVar9[0xd] = '\0';
  pcVar9[0xe] = '\0';
  pcVar9[0xf] = '\0';
  pcVar9[0x20] = '\0';
  pcVar9[0x21] = '\0';
  pcVar9[0x22] = '\0';
  pcVar9[0x23] = '\0';
  pcVar9[0x24] = '\0';
  pcVar9[0x25] = '\0';
  pcVar9[0x26] = '\0';
  pcVar9[0x27] = '\0';
  bVar3 = pcVar11[8];
  bVar5 = pcVar11[10];
  if (bVar3 == 0 && bVar5 == 0) {
    return;
  }
  if (bVar3 == 0) {
    if ((pcVar11[0x24] != '\0') && (pcVar11[0x34] == '\0')) {
      lVar6 = 0;
      goto code_r0x004322d7;
    }
    if (bVar5 != 0) {
      lVar6 = 0;
      goto joined_r0x0043223b;
    }
    if (pcVar11[0x28] == '\0') {
      return;
    }
code_r0x0043234d:
    lVar6 = 0;
  }
  else {
    if (extraout_DL == '\x01' && bVar3 == 0x74) {
      if (pcVar11[9] == 'l') {
        builtin_strncpy(pcVar9,"fil",4);
        goto code_r0x004322bb;
      }
code_r0x0043220c:
      *(undefined2 *)pcVar9 = *(undefined2 *)(pcVar11 + 8);
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      lVar6 = 2;
      cVar1 = pcVar11[0x24];
    }
    else {
      if (-1 < (char)bVar3) goto code_r0x0043220c;
      bVar5 = pcVar11[9];
      *pcVar9 = (bVar5 & 0x1f) + 0x61;
      pcVar9[1] = (bVar5 >> 5 | (bVar3 & 3) << 3) + 0x61;
      pcVar9[2] = (bVar3 >> 2 & 0x1f) + 0x61;
      pcVar9[3] = '\0';
code_r0x004322bb:
      lVar6 = 3;
      cVar1 = pcVar11[0x24];
    }
    if ((cVar1 != '\0') && (pcVar11[0x34] == '\0')) {
      pcVar9[lVar6] = '-';
      lVar6 = lVar6 + 1;
code_r0x004322d7:
      *(undefined4 *)(pcVar9 + lVar6) = *(undefined4 *)(pcVar11 + 0x24);
      lVar6 = lVar6 + 4;
    }
    if (pcVar11[10] != '\0') {
      pcVar9[lVar6] = '-';
      lVar6 = lVar6 + 1;
      bVar5 = pcVar11[10];
joined_r0x0043223b:
      if ((char)bVar5 < '\0') {
        bVar3 = pcVar11[0xb];
        pcVar9[lVar6] = (bVar3 & 0x1f) + 0x30;
        pcVar9[lVar6 + 1] = (bVar3 >> 5 | (bVar5 & 3) << 3) + 0x30;
        pcVar9[lVar6 + 2] = (bVar5 >> 2 & 0x1f) + 0x30;
        pcVar9[lVar6 + 3] = '\0';
        lVar7 = 3;
      }
      else if (bVar5 == 0) {
        pcVar10 = pcVar9 + lVar6;
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        lVar7 = 0;
      }
      else {
        *(undefined2 *)(pcVar9 + lVar6) = *(undefined2 *)(pcVar11 + 10);
        (pcVar9 + lVar6 + 2)[0] = '\0';
        (pcVar9 + lVar6 + 2)[1] = '\0';
        lVar7 = 2;
      }
      lVar6 = lVar7 + lVar6;
    }
    if (pcVar11[0x28] == '\0') goto code_r0x00432371;
    if (lVar6 == 0) goto code_r0x0043234d;
    pcVar9[lVar6] = '-';
    lVar6 = lVar6 + 1;
  }
  *(undefined8 *)(pcVar9 + lVar6) = *(undefined8 *)(pcVar11 + 0x28);
  lVar7 = func_0x0099c520(pcVar9 + lVar6,8);
  lVar6 = lVar7 + lVar6;
code_r0x00432371:
  if ((pcVar11[0x35] != '\0') && (lVar6 != 0)) {
    (pcVar9 + lVar6 + 4)[0] = 'u';
    (pcVar9 + lVar6 + 4)[1] = '-';
    pcVar10 = pcVar9 + lVar6;
    pcVar10[0] = '-';
    pcVar10[1] = 'u';
    pcVar10[2] = '-';
    pcVar10[3] = 'n';
    *(undefined8 *)(pcVar9 + lVar6 + 6) = *(undefined8 *)(pcVar11 + 0x35);
  }
  return;
}


