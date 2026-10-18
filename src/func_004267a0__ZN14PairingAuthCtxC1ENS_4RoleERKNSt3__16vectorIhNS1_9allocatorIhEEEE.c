// Function: _ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
// Address: 004267a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN14PairingAuthCtxC1ENS_4RoleERKNSt3__16vectorIhNS1_9allocatorIhEEEE
          (long *param_1,int param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_30;
  
  puStack_30 = *(undefined8 **)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int *)(param_1 + 3) = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*param_3 == param_3[1]) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_58,&UNK_0015fda6,0x5b,6,0,0xffffffff);
    uVar11 = _ZN7android4base10LogMessage6streamEv(&uStack_58);
    uVar11 = func_0x0032eb30(uVar11,&UNK_0015978f,0x1b);
    func_0x0032eb30(uVar11,&UNK_0015ae05,1);
    _ZN7android4base10LogMessageD2Ev(&uStack_58);
    param_2 = (int)param_1[3];
  }
  plVar1 = param_1 + 4;
  if (param_2 == 1) {
    puVar9 = &UNK_001fe9f0;
    puVar5 = &UNK_001fea00;
code_r0x0042682a:
    uVar11 = 0x10;
    iVar4 = param_2;
  }
  else {
    puVar5 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
    uVar11 = 0;
    iVar4 = 0;
    if (param_2 == 0) {
      puVar9 = &UNK_001fea00;
      puVar5 = &UNK_001fe9f0;
      goto code_r0x0042682a;
    }
  }
  lVar6 = SPAKE2_CTX_new(iVar4,puVar5,uVar11,puVar9,uVar11);
  lVar15 = *plVar1;
  *plVar1 = lVar6;
  if (lVar15 != 0) {
    SPAKE2_CTX_free();
    lVar6 = *plVar1;
  }
  if (lVar6 == 0) {
    puVar14 = (undefined8 *)0x4;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar7 = (undefined4 *)func_0x0099bce0();
      uVar16 = *puVar7;
      puVar14 = &uStack_58;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar14,&UNK_0015fda6,0x76,4,0,0xffffffff);
      uVar11 = _ZN7android4base10LogMessage6streamEv(puVar14);
      puVar5 = &UNK_0016470c;
      uVar12 = 0x22;
code_r0x00426954:
      func_0x0032eb30(uVar11,puVar5,uVar12);
      _ZN7android4base10LogMessageD2Ev(puVar14);
      *puVar7 = uVar16;
    }
  }
  else {
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    iVar4 = SPAKE2_generate_msg(lVar6,&uStack_58,&uStack_60,0x20,*param_3,param_3[1] - *param_3);
    uVar2 = uStack_60;
    if (uStack_60 == 0 || iVar4 != 1) {
      puVar14 = (undefined8 *)0x4;
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      if (cVar3 != '\0') {
        puVar7 = (undefined4 *)func_0x0099bce0();
        uVar16 = *puVar7;
        puVar14 = &uStack_68;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar14,&UNK_0015fda6,0x80,4,0,0xffffffff);
        uVar11 = _ZN7android4base10LogMessage6streamEv(puVar14);
        puVar5 = &UNK_001615ca;
        uVar12 = 0x29;
        goto code_r0x00426954;
      }
    }
    else {
      puVar14 = (undefined8 *)*param_1;
      uVar13 = param_1[2];
      if (uVar13 - (long)puVar14 < uStack_60) {
        if (puVar14 != (undefined8 *)0x0) {
          param_1[1] = (long)puVar14;
          _ZdaPvSt11align_val_t();
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar13 = 0;
        }
        if ((long)uVar2 < 0) goto code_r0x00426acc;
        uVar10 = uVar13 * 2;
        if (uVar13 * 2 <= uVar2) {
          uVar10 = uVar2;
        }
        uVar17 = 0x7fffffffffffffff;
        if (uVar13 < 0x3fffffffffffffff) {
          uVar17 = uVar10;
        }
        puVar8 = (undefined8 *)_Znwm(uVar17);
        *param_1 = (long)puVar8;
        param_1[2] = uVar17 + (long)puVar8;
        puVar14 = puVar8;
        func_0x0099bda0(puVar8,&uStack_58,uVar2);
        lVar15 = (long)puVar8 + uVar2;
      }
      else {
        uVar13 = param_1[1] - (long)puVar14;
        lVar15 = uStack_60 - uVar13;
        if (uStack_60 < uVar13 || lVar15 == 0) {
          puVar8 = puVar14;
          func_0x0099bd90(puVar14,&uStack_58,uStack_60);
          param_1[1] = uVar2 + (long)puVar14;
          puVar14 = puVar8;
          goto code_r0x00426a45;
        }
        func_0x0099bd90(puVar14,&uStack_58);
        puVar8 = (undefined8 *)param_1[1];
        puVar14 = puVar8;
        func_0x0099bd90(puVar8,(long)&uStack_58 + uVar13,lVar15);
        lVar15 = (long)puVar8 + lVar15;
      }
      param_1[1] = lVar15;
    }
  }
code_r0x00426a45:
  if (*(undefined8 **)(in_FS_OFFSET + 0x28) == puStack_30) {
    return *(undefined8 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
code_r0x00426acc:
  func_0x00330ca0();
  return puVar14;
}


