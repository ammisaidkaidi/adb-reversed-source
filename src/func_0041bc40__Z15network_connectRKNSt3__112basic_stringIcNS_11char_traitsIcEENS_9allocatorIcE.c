// Function: _Z15network_connectRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiiiPS5_
// Address: 0041bc40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * _Z15network_connectRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiiiPS5_
                 (byte *param_1,uint param_2,undefined8 param_3,undefined8 param_4,byte *param_5)

{
  char cVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ushort extraout_DX;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  int iStack_3c;
  long lStack_38;
  
  pbVar5 = (byte *)(ulong)param_2;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  iStack_3c = 0;
  pbVar8 = param_1 + 1;
  pbVar6 = pbVar8;
  if ((*param_1 & 1) != 0) {
    pbVar6 = *(byte **)(param_1 + 0x10);
  }
  pbVar2 = (byte *)socket_network_client_timeout();
  if ((int)pbVar2 == -1) {
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff);
    if (iStack_3c == 0) {
      if ((*param_1 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar3 = func_0x0099bd20(*puVar4);
      _ZN7android4base12StringPrintfEPKcz(&uStack_58,&UNK_001661cd,pbVar8,param_2,uVar3);
      if ((*param_5 & 1) != 0) {
        _ZdaPvSt11align_val_t(*(undefined8 *)(param_5 + 0x10));
      }
      *(undefined8 *)(param_5 + 0x10) = uStack_48;
      *(undefined4 *)param_5 = uStack_58;
      *(undefined4 *)(param_5 + 4) = uStack_54;
      *(undefined4 *)(param_5 + 8) = uStack_50;
      *(undefined4 *)(param_5 + 0xc) = uStack_4c;
      pbVar6 = (byte *)0x3;
      pbVar5 = (byte *)0x0;
      cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar1 == '\0') goto code_r0x0041bd91;
      uVar7 = *puVar4;
      uVar3 = 0x95;
    }
    else {
      if ((*param_1 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      uVar3 = func_0x0099c470();
      _ZN7android4base12StringPrintfEPKcz(&uStack_58,&UNK_00183729,pbVar8,uVar3);
      if ((*param_5 & 1) != 0) {
        _ZdaPvSt11align_val_t(*(undefined8 *)(param_5 + 0x10));
      }
      *(undefined8 *)(param_5 + 0x10) = uStack_48;
      *(undefined4 *)param_5 = uStack_58;
      *(undefined4 *)(param_5 + 4) = uStack_54;
      *(undefined4 *)(param_5 + 8) = uStack_50;
      *(undefined4 *)(param_5 + 0xc) = uStack_4c;
      pbVar6 = (byte *)0x3;
      pbVar5 = (byte *)0x0;
      cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
      if (cVar1 == '\0') goto code_r0x0041bd91;
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar7 = *puVar4;
      uVar3 = 0x91;
    }
    pbVar6 = (byte *)&uStack_58;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&uStack_58,&UNK_001868f4,uVar3,3,0,0xffffffff);
    uVar3 = _ZN7android4base10LogMessage6streamEv(pbVar6);
    func_0x0032e5a0(uVar3);
    _ZN7android4base10LogMessageD2Ev();
    *puVar4 = uVar7;
    pbVar5 = param_5;
  }
code_r0x0041bd91:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pbVar2;
  }
  func_0x0099bd00();
  pbVar5[0] = 0x1c;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  pbVar6[0] = 10;
  pbVar6[1] = 0;
  *(undefined8 *)(pbVar6 + 8) = _in6addr_loopback;
  *(undefined8 *)(pbVar6 + 0x10) = _fdopen;
  *(ushort *)(pbVar6 + 2) = extraout_DX >> 8 | extraout_DX << 8;
  return pbVar6;
}


