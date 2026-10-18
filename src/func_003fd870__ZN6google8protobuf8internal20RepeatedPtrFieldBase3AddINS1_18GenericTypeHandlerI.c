// Function: _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerIN3adb5proto8HostInfoEEEEEPNT_4TypeEPNS0_5ArenaE
// Address: 003fd870
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS1_18GenericTypeHandlerIN3adb5proto8HostInfoEEEEEPNT_4TypeEPNS0_5ArenaE
                (ulong *param_1,undefined8 param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    uVar3 = _ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto8HostInfoEEEPvPS1_(param_2);
    *param_1 = uVar3;
  }
  else if ((uVar3 & 1) == 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    else {
      puVar2 = (ulong *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                  (param_1,1,param_2);
      uVar3 = _ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto8HostInfoEEEPvPS1_(param_2);
      *puVar2 = uVar3;
      *(undefined4 *)(*param_1 + 3) = 2;
      *(undefined4 *)(param_1 + 1) = 2;
      param_1 = puVar2;
    }
  }
  else {
    iVar1 = (int)param_1[1];
    if (iVar1 == *(int *)(uVar3 - 1)) {
      _ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                (param_1,1,param_2);
      iVar5 = *(int *)(*param_1 + 3);
      lVar6 = *param_1 - 1;
    }
    else {
      lVar6 = uVar3 - 1;
      iVar5 = *(int *)(uVar3 + 3);
      if (iVar1 < iVar5) {
        *(int *)(param_1 + 1) = iVar1 + 1;
        param_1 = (ulong *)(lVar6 + (long)iVar1 * 8 + 8);
        goto code_r0x003fd953;
      }
    }
    *(int *)(lVar6 + 4) = iVar5 + 1;
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    param_1 = (ulong *)(lVar6 + (long)iVar1 * 8 + 8);
    uVar4 = _ZN6google8protobuf5Arena16DefaultConstructIN3adb5proto8HostInfoEEEPvPS1_(param_2);
    *(undefined8 *)(lVar6 + 8 + (long)iVar1 * 8) = uVar4;
  }
code_r0x003fd953:
  return *param_1;
}


