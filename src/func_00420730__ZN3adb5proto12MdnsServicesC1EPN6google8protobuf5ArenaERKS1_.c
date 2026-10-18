// Function: _ZN3adb5proto12MdnsServicesC1EPN6google8protobuf5ArenaERKS1_
// Address: 00420730
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto12MdnsServicesC1EPN6google8protobuf5ArenaERKS1_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  
  param_1[1] = param_2;
  *param_1 = 0x99f630;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeFromConcreteMessageERKS2_PNS0_5ArenaEPFPvS6_PKvE
              (param_1 + 3,param_3 + 0x18,param_2,
               _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto13ServiceAdbTcpEEEPvPS1_PKv);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (*(int *)(param_3 + 0x38) != 0) {
    _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeFromConcreteMessageERKS2_PNS0_5ArenaEPFPvS6_PKvE
              (param_1 + 6,param_3 + 0x30,param_2,
               _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto13ServiceAdbTlsEEEPvPS1_PKv);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  if (*(int *)(param_3 + 0x50) == 0) {
    return;
  }
  puVar10 = param_1 + 9;
  puVar8 = (ulong *)(param_3 + 0x48);
  iVar1 = *(int *)(param_3 + 0x50);
  iVar7 = iVar1 + *(int *)(param_1 + 10);
  uVar4 = *puVar10;
  if ((uVar4 & 1) == 0) {
    iVar2 = 1;
    puVar3 = puVar10;
    if (1 < iVar7) {
code_r0x0055d3f0:
      puVar3 = (ulong *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                  (puVar10,iVar7 - iVar2,param_2);
      iVar1 = *(int *)(param_3 + 0x50);
      uVar4 = *puVar10;
      goto code_r0x0055d41b;
    }
  }
  else {
    iVar2 = *(int *)(uVar4 - 1);
    if (iVar2 < iVar7) goto code_r0x0055d3f0;
    puVar3 = (ulong *)(uVar4 + 7);
  }
  puVar3 = puVar3 + *(int *)(param_1 + 10);
code_r0x0055d41b:
  puVar9 = (ulong *)(*puVar8 + 7);
  if ((*puVar8 & 1) == 0) {
    puVar9 = puVar8;
  }
  if ((uVar4 & 1) == 0) {
    uVar5 = (uint)(uVar4 != 0);
  }
  else {
    uVar5 = *(uint *)(uVar4 + 3);
  }
  lVar11 = (long)iVar1;
  puVar6 = puVar9;
  if (*(int *)(param_1 + 10) < (int)uVar5) {
    iVar2 = _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeIntoClearedMessagesERKS2_
                      (puVar10,puVar8);
    puVar3 = puVar3 + iVar2;
    iVar1 = *(int *)(param_3 + 0x50);
    puVar6 = puVar9 + iVar2;
  }
  if (0 < iVar1) {
    for (; puVar6 < puVar9 + lVar11 + -1; puVar6 = puVar6 + 1) {
      uVar4 = _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto17ServiceAdbPairingEEEPvPS1_PKv
                        (param_2,*puVar6);
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    }
  }
  for (; puVar6 < puVar9 + lVar11; puVar6 = puVar6 + 1) {
    uVar4 = _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto17ServiceAdbPairingEEEPvPS1_PKv
                      (param_2,*puVar6);
    *puVar3 = uVar4;
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 10) = iVar7;
  uVar4 = *puVar10;
  if ((uVar4 & 1) == 0) {
    uVar5 = (uint)(uVar4 != 0);
  }
  else {
    uVar5 = *(uint *)(uVar4 + 3);
  }
  if ((int)uVar5 < iVar7) {
    *(int *)(uVar4 + 3) = iVar7;
  }
  return;
}


