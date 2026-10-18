// Function: _ZN7adbwifi7pairing13PairingClient6CreateERKNSt3__16vectorIhNS2_9allocatorIhEEEERK8PeerInfoS8_S8_
// Address: 004135f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7adbwifi7pairing13PairingClient6CreateERKNSt3__16vectorIhNS2_9allocatorIhEEEERK8PeerInfoS8_S8_
               (undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == param_2[1]) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_40,&UNK_0015b340,0xa5,6,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
    uVar6 = func_0x0032eb30(uVar6,&UNK_0015978f,0x1b);
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&uStack_40);
  }
  if (*param_4 == param_4[1]) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_40,&UNK_0015b340,0xa6,6,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
    uVar6 = func_0x0032eb30(uVar6,&UNK_0018688f,0x1b);
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&uStack_40);
  }
  if (*param_5 == param_5[1]) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_40,&UNK_0015b340,0xa7,6,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(&uStack_40);
    uVar6 = func_0x0032eb30(uVar6,&UNK_0016b06c,0x1f);
    func_0x0032eb30(uVar6,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&uStack_40);
  }
  puVar8 = (undefined8 *)0x2090;
  puVar4 = (undefined8 *)_Znwm();
  *puVar4 = &UNK_0099f3a8;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar7 = lVar3 - lVar2;
  if (lVar7 == 0) {
code_r0x004136cc:
    puVar8 = puVar4 + 5;
    func_0x0099bda0(puVar8,param_3,0x2000);
    puVar4[0x405] = 0;
    puVar4[0x406] = 0;
    puVar4[0x407] = 0;
    lVar7 = *param_4;
    lVar5 = param_4[1];
    lVar10 = lVar5 - lVar7;
    if (lVar10 != 0) {
      if (lVar10 < 0) goto code_r0x004139c9;
      puVar8 = (undefined8 *)_Znwm(lVar10);
      puVar4[0x405] = puVar8;
      lVar9 = (long)puVar8 + lVar10;
      puVar4[0x407] = lVar9;
      func_0x0099bda0(puVar8,lVar7,lVar10);
      puVar4[0x406] = lVar9;
    }
    puVar4[0x408] = 0;
    puVar4[0x409] = 0;
    puVar4[0x40a] = 0;
    lVar10 = *param_5;
    lVar9 = param_5[1] - lVar10;
    if (lVar9 == 0) {
      puVar4[0x40b] = 0;
      puVar4[0x40c] = 0;
      puVar4[0x40d] = 0;
      puVar4[0x40f] = 0;
      puVar4[0x411] = 0;
code_r0x004137ff:
      puVar8 = &uStack_40;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar8,&UNK_0015b340,0x5a,6,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(puVar8);
      uVar6 = func_0x0032eb30(uVar6,&UNK_0017d7b0,0x44);
      func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      _ZN7android4base10LogMessageD2Ev();
    }
    else {
      if (lVar9 < 0) goto code_r0x004139c9;
      puVar8 = (undefined8 *)_Znwm(lVar9);
      puVar4[0x408] = puVar8;
      lVar1 = (long)puVar8 + lVar9;
      puVar4[0x40a] = lVar1;
      func_0x0099bda0(puVar8,lVar10,lVar9);
      puVar4[0x409] = lVar1;
      puVar4[0x40b] = 0;
      puVar4[0x40c] = 0;
      puVar4[0x40d] = 0;
      puVar4[0x40f] = 0;
      puVar4[0x411] = 0;
      if ((lVar3 == lVar2) || (lVar5 == lVar7)) goto code_r0x004137ff;
    }
    *(undefined4 *)(puVar4 + 1) = 0;
    *param_1 = puVar4;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    if (-1 < lVar7) {
      lVar5 = _Znwm(lVar7);
      puVar4[2] = lVar5;
      puVar4[4] = lVar5 + lVar7;
      func_0x0099bda0(lVar5,lVar2,lVar7);
      puVar4[3] = lVar5 + lVar7;
      goto code_r0x004136cc;
    }
code_r0x004139c9:
    func_0x00330ca0();
  }
  func_0x0099bd00();
  *puVar8 = &UNK_0099f3a8;
  if (puVar8[0x40f] != 0) {
    puVar8[0x40f] = 0;
    pairing_connection_destroy();
    lVar2 = puVar8[0x40f];
    puVar8[0x40f] = 0;
    if (lVar2 != 0) {
      pairing_connection_destroy();
    }
  }
  if ((*(byte *)(puVar8 + 0x40b) & 1) != 0) {
    _ZdaPvSt11align_val_t(puVar8[0x40d],puVar8[0x40b] & 0xfffffffffffffffe);
  }
  lVar2 = puVar8[0x408];
  if (lVar2 != 0) {
    puVar8[0x409] = lVar2;
    _ZdaPvSt11align_val_t(lVar2,puVar8[0x40a] - lVar2);
  }
  lVar2 = puVar8[0x405];
  if (lVar2 != 0) {
    puVar8[0x406] = lVar2;
    _ZdaPvSt11align_val_t(lVar2,puVar8[0x407] - lVar2);
  }
  lVar2 = puVar8[2];
  if (lVar2 == 0) {
    return;
  }
  puVar8[3] = lVar2;
  free(lVar2,puVar8[4] - lVar2);
  return;
}


