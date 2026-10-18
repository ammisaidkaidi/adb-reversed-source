// Function: _ZN14SyncConnection10FinishStatEP4stat
// Address: 00344090
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN14SyncConnection10FinishStatEP4stat(undefined4 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    cVar2 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(*param_1,&uStack_88,0x48);
    if ((cVar2 == '\0') &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar2 != '\0')) {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_90,&UNK_00189432,0x1dd,6,0,uVar3);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_90);
      func_0x0032eb30(uVar6,&UNK_001693e7,0x2c);
      _ZN7android4base10LogMessageD2Ev(auStack_90);
      *puVar4 = uVar3;
    }
    if ((((int)uStack_88 != 0x32415453) && ((int)uStack_88 != 0x3254534c)) &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar2 != '\0')) {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_90,&UNK_00189432,0x1e1,6,0,uVar3);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_90);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00189463,0x34);
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,uStack_88 & 0xffffffff);
      _ZN7android4base10LogMessageD2Ev(auStack_90);
      *puVar4 = uVar3;
    }
    if (uStack_88._4_4_ != 0) {
      uVar3 = _Z15errno_from_wirei();
      puVar4 = (undefined4 *)func_0x0099bce0();
      *puVar4 = uVar3;
      uVar6 = 0;
      goto code_r0x00344218;
    }
    *(int *)param_2 = (int)uStack_80;
    *(uint *)((long)param_2 + 4) = uStack_80._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_78;
    *(undefined4 *)((long)param_2 + 0xc) = uStack_78._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_70;
    param_2[2] = uStack_70 >> 0x20;
    *(undefined8 *)((long)param_2 + 0x1c) = uStack_68;
    param_2[6] = uStack_60;
    param_2[9] = uStack_58;
    param_2[0xb] = CONCAT44(uStack_4c,uStack_50);
    uVar5 = CONCAT44(uStack_44,uStack_48);
    param_2[0xd] = uVar5;
  }
  else {
    cVar2 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm(*param_1,&uStack_88,0x10);
    if ((cVar2 == '\0') &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar2 != '\0')) {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_90,&UNK_00189432,0x1f7,6,0,uVar3);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_90);
      func_0x0032eb30(uVar6,&UNK_001693e7,0x2c);
      _ZN7android4base10LogMessageD2Ev(auStack_90);
      *puVar4 = uVar3;
    }
    else {
    }
    if (((int)uStack_88 != 0x54415453) &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0), cVar2 != '\0')) {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar3 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_90,&UNK_00189432,0x1fb,6,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_90);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00189463,0x34);
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,uStack_88 & 0xffffffff);
      _ZN7android4base10LogMessageD2Ev(auStack_90);
      *puVar4 = uVar3;
    }
    uVar5 = (ulong)uStack_88._4_4_;
    if ((uStack_88._4_4_ == 0 && (int)uStack_80 == 0) && uStack_80._4_4_ == 0) {
      puVar4 = (undefined4 *)func_0x0099bce0();
      *puVar4 = 0x5c;
      uVar6 = 0;
      goto code_r0x00344218;
    }
    *(uint *)(param_2 + 3) = uStack_88._4_4_;
    param_2[6] = uStack_80 & 0xffffffff;
    param_2[0xd] = (ulong)uStack_80._4_4_;
    param_2[0xb] = (ulong)uStack_80._4_4_;
  }
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
code_r0x00344218:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar6;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}


