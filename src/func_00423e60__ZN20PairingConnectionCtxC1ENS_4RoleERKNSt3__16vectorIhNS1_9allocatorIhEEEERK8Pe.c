// Function: _ZN20PairingConnectionCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEERK8PeerInfoS7_S7_
// Address: 00423e60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN20PairingConnectionCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEERK8PeerInfoS7_S7_
               (undefined8 *param_1,undefined4 param_2,long *param_3,undefined8 param_4,
               long *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99f740;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar4 = *param_3;
  lVar5 = param_3[1];
  lVar11 = lVar5 - lVar4;
  if (lVar11 == 0) {
code_r0x00423ef7:
    puVar8 = param_1 + 5;
    func_0x0099bda0(puVar8,param_4,0x2000);
    param_1[0x405] = 0;
    param_1[0x406] = 0;
    param_1[0x407] = 0;
    lVar11 = *param_5;
    lVar7 = param_5[1];
    lVar12 = lVar7 - lVar11;
    if (lVar12 != 0) {
      if (lVar12 < 0) goto code_r0x0042409d;
      puVar8 = (undefined8 *)_Znwm(lVar12);
      param_1[0x405] = puVar8;
      param_1[0x406] = puVar8;
      lVar1 = (long)puVar8 + lVar12;
      param_1[0x407] = lVar1;
      func_0x0099bda0(puVar8,lVar11,lVar12);
      param_1[0x406] = lVar1;
    }
    param_1[0x408] = 0;
    param_1[0x409] = 0;
    param_1[0x40a] = 0;
    lVar12 = *param_6;
    lVar1 = param_6[1];
    lVar13 = lVar1 - lVar12;
    if (lVar13 != 0) {
      if (lVar13 < 0) goto code_r0x0042409d;
      puVar8 = (undefined8 *)_Znwm(lVar13);
      param_1[0x408] = puVar8;
      param_1[0x409] = puVar8;
      lVar2 = (long)puVar8 + lVar13;
      param_1[0x40a] = lVar2;
      func_0x0099bda0(puVar8,lVar12,lVar13);
      param_1[0x409] = lVar2;
    }
    param_1[0x80c] = 0;
    param_1[0x80d] = 0;
    param_1[0x80e] = 0;
    *(undefined4 *)(param_1 + 0x80f) = 0xffffffff;
    param_1[0x810] = 0;
    if ((lVar5 == lVar4 || lVar7 == lVar11) || lVar1 == lVar12) {
      puVar8 = &uStack_40;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar8,&UNK_00161570,0x9c,6,0,0xffffffff);
      uVar9 = _ZN7android4base10LogMessage6streamEv(puVar8);
      uVar9 = func_0x0032eb30(uVar9,&UNK_0017d7b0,0x44);
      func_0x0032eb30(uVar9,&UNK_0015ae05,1);
      _ZN7android4base10LogMessageD2Ev();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    puVar8 = param_1;
    if (-1 < lVar11) {
      lVar7 = _Znwm(lVar11);
      param_1[2] = lVar7;
      param_1[3] = lVar7;
      param_1[4] = lVar7 + lVar11;
      func_0x0099bda0(lVar7,lVar4,lVar11);
      param_1[3] = lVar7 + lVar11;
      goto code_r0x00423ef7;
    }
code_r0x0042409d:
    func_0x00330ca0();
  }
  func_0x0099bd00();
  *puVar8 = 0x99f740;
  puVar10 = (undefined4 *)func_0x0099bce0();
  uVar3 = *puVar10;
  if (*(int *)(puVar8 + 0x80f) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(puVar8 + 0x80f) = 0xffffffff;
  *puVar10 = uVar3;
  if (puVar8[0x810] != 0) {
    _ZNSt3__16thread4joinEv(puVar8 + 0x810);
  }
  _ZNSt3__16threadD2Ev(puVar8 + 0x810);
  uVar3 = *puVar10;
  if (*(int *)(puVar8 + 0x80f) != -1) {
    func_0x0099bd10();
  }
  *(undefined4 *)(puVar8 + 0x80f) = 0xffffffff;
  *puVar10 = uVar3;
  lVar4 = puVar8[0x80e];
  puVar8[0x80e] = 0;
  if (lVar4 != 0) {
    pairing_auth_destroy();
  }
  plVar6 = (long *)puVar8[0x80d];
  puVar8[0x80d] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  lVar4 = puVar8[0x408];
  if (lVar4 != 0) {
    puVar8[0x409] = lVar4;
    _ZdaPvSt11align_val_t(lVar4,puVar8[0x40a] - lVar4);
  }
  lVar4 = puVar8[0x405];
  if (lVar4 != 0) {
    puVar8[0x406] = lVar4;
    _ZdaPvSt11align_val_t(lVar4,puVar8[0x407] - lVar4);
  }
  lVar4 = puVar8[2];
  if (lVar4 != 0) {
    puVar8[3] = lVar4;
    free(lVar4,puVar8[4] - lVar4);
    return;
  }
  return;
}


