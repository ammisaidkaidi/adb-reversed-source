// Function: _ZNK7android15ResTable_config14getBcp47LocaleEPcb
// Address: 004321a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android15ResTable_config14getBcp47LocaleEPcb(long param_1,char *param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  bVar2 = *(byte *)(param_1 + 8);
  bVar3 = *(byte *)(param_1 + 10);
  if (bVar2 == 0 && bVar3 == 0) {
    return;
  }
  if (bVar2 == 0) {
    if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x34) == '\0')) {
      lVar5 = 0;
      goto code_r0x004322d7;
    }
    if (bVar3 != 0) {
      lVar5 = 0;
      goto joined_r0x0043223b;
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      return;
    }
code_r0x0043234d:
    lVar5 = 0;
  }
  else {
    if (param_3 == '\x01' && bVar2 == 0x74) {
      if (*(char *)(param_1 + 9) == 'l') {
        builtin_strncpy(param_2,"fil",4);
        goto code_r0x004322bb;
      }
code_r0x0043220c:
      *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 8);
      param_2[2] = '\0';
      param_2[3] = '\0';
      lVar5 = 2;
      cVar4 = *(char *)(param_1 + 0x24);
    }
    else {
      if (-1 < (char)bVar2) goto code_r0x0043220c;
      bVar3 = *(byte *)(param_1 + 9);
      *param_2 = (bVar3 & 0x1f) + 0x61;
      param_2[1] = (bVar3 >> 5 | (bVar2 & 3) << 3) + 0x61;
      param_2[2] = (bVar2 >> 2 & 0x1f) + 0x61;
      param_2[3] = '\0';
code_r0x004322bb:
      lVar5 = 3;
      cVar4 = *(char *)(param_1 + 0x24);
    }
    if ((cVar4 != '\0') && (*(char *)(param_1 + 0x34) == '\0')) {
      param_2[lVar5] = '-';
      lVar5 = lVar5 + 1;
code_r0x004322d7:
      *(undefined4 *)(param_2 + lVar5) = *(undefined4 *)(param_1 + 0x24);
      lVar5 = lVar5 + 4;
    }
    if (*(char *)(param_1 + 10) != '\0') {
      param_2[lVar5] = '-';
      lVar5 = lVar5 + 1;
      bVar3 = *(byte *)(param_1 + 10);
joined_r0x0043223b:
      if ((char)bVar3 < '\0') {
        bVar2 = *(byte *)(param_1 + 0xb);
        param_2[lVar5] = (bVar2 & 0x1f) + 0x30;
        param_2[lVar5 + 1] = (bVar2 >> 5 | (bVar3 & 3) << 3) + 0x30;
        param_2[lVar5 + 2] = (bVar3 >> 2 & 0x1f) + 0x30;
        param_2[lVar5 + 3] = '\0';
        lVar6 = 3;
      }
      else if (bVar3 == 0) {
        pcVar1 = param_2 + lVar5;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        lVar6 = 0;
      }
      else {
        *(undefined2 *)(param_2 + lVar5) = *(undefined2 *)(param_1 + 10);
        (param_2 + lVar5 + 2)[0] = '\0';
        (param_2 + lVar5 + 2)[1] = '\0';
        lVar6 = 2;
      }
      lVar5 = lVar6 + lVar5;
    }
    if (*(char *)(param_1 + 0x28) == '\0') goto code_r0x00432371;
    if (lVar5 == 0) goto code_r0x0043234d;
    param_2[lVar5] = '-';
    lVar5 = lVar5 + 1;
  }
  *(undefined8 *)(param_2 + lVar5) = *(undefined8 *)(param_1 + 0x28);
  lVar6 = func_0x0099c520(param_2 + lVar5,8);
  lVar5 = lVar6 + lVar5;
code_r0x00432371:
  if ((*(char *)(param_1 + 0x35) != '\0') && (lVar5 != 0)) {
    (param_2 + lVar5 + 4)[0] = 'u';
    (param_2 + lVar5 + 4)[1] = '-';
    pcVar1 = param_2 + lVar5;
    pcVar1[0] = '-';
    pcVar1[1] = 'u';
    pcVar1[2] = '-';
    pcVar1[3] = 'n';
    *(undefined8 *)(param_2 + lVar5 + 6) = *(undefined8 *)(param_1 + 0x35);
  }
  return;
}


