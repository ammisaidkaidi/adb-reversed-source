// Function: _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
// Address: 00501950
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal8TcParser10AddMessageEPKNS1_16TcParseTableBaseERNS1_20RepeatedPtrFieldBaseEPNS0_5ArenaE
                (long param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  uVar4 = *param_2;
  if (uVar4 == 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    uVar4 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                      (puVar2 + 5,*puVar2,*puVar2,param_3);
    *param_2 = uVar4;
  }
  else if ((uVar4 & 1) == 0) {
    if ((int)param_2[1] == 0) {
      *(undefined4 *)(param_2 + 1) = 1;
    }
    else {
      puVar3 = (ulong *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                  (param_2,1,param_3);
      uVar4 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                        (puVar2 + 5,*puVar2,*puVar2,param_3);
      *puVar3 = uVar4;
      *(undefined4 *)(*param_2 + 3) = 2;
      *(undefined4 *)(param_2 + 1) = 2;
      param_2 = puVar3;
    }
  }
  else {
    iVar1 = (int)param_2[1];
    if (iVar1 == *(int *)(uVar4 - 1)) {
      _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                (param_2,1,param_3);
      iVar6 = *(int *)(*param_2 + 3);
      lVar7 = *param_2 - 1;
    }
    else {
      lVar7 = uVar4 - 1;
      iVar6 = *(int *)(uVar4 + 3);
      if (iVar1 < iVar6) {
        *(int *)(param_2 + 1) = iVar1 + 1;
        param_2 = (ulong *)(lVar7 + (long)iVar1 * 8 + 8);
        goto code_r0x00501a66;
      }
    }
    *(int *)(lVar7 + 4) = iVar6 + 1;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    param_2 = (ulong *)(lVar7 + (long)iVar1 * 8 + 8);
    uVar5 = _ZNK6google8protobuf8internal14MessageCreator3NewINS0_11MessageLiteEEEPT_PKS5_S8_PNS0_5ArenaE
                      (puVar2 + 5,*puVar2,*puVar2,param_3);
    *(undefined8 *)(lVar7 + 8 + (long)iVar1 * 8) = uVar5;
  }
code_r0x00501a66:
  return *param_2;
}


