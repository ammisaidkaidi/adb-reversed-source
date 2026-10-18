// Function: _ZN3adb5proto12AppProcessesC1EPN6google8protobuf5ArenaERKS1_
// Address: 0036c440
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN3adb5proto12AppProcessesC1EPN6google8protobuf5ArenaERKS1_
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  
  param_1[1] = param_2;
  *param_1 = 0x99e5d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    _ZN6google8protobuf8internal16InternalMetadata11DoMergeFromINS0_15UnknownFieldSetEEEvRKT_
              (param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) == 0) {
    return;
  }
  puVar7 = param_1 + 3;
  puVar9 = (ulong *)(param_3 + 0x18);
  iVar1 = *(int *)(param_3 + 0x20);
  iVar8 = iVar1 + *(int *)(param_1 + 4);
  uVar4 = *puVar7;
  if ((uVar4 & 1) == 0) {
    iVar2 = 1;
    puVar3 = puVar7;
    if (1 < iVar8) {
code_r0x0055d3f0:
      puVar3 = (ulong *)_ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEiPNS0_5ArenaE
                                  (puVar7,iVar8 - iVar2,param_2);
      iVar1 = *(int *)(param_3 + 0x20);
      uVar4 = *puVar7;
      goto code_r0x0055d41b;
    }
  }
  else {
    iVar2 = *(int *)(uVar4 - 1);
    if (iVar2 < iVar8) goto code_r0x0055d3f0;
    puVar3 = (ulong *)(uVar4 + 7);
  }
  puVar3 = puVar3 + *(int *)(param_1 + 4);
code_r0x0055d41b:
  puVar10 = (ulong *)(*puVar9 + 7);
  if ((*puVar9 & 1) == 0) {
    puVar10 = puVar9;
  }
  if ((uVar4 & 1) == 0) {
    uVar5 = (uint)(uVar4 != 0);
  }
  else {
    uVar5 = *(uint *)(uVar4 + 3);
  }
  lVar11 = (long)iVar1;
  puVar6 = puVar10;
  if (*(int *)(param_1 + 4) < (int)uVar5) {
    iVar2 = _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeIntoClearedMessagesERKS2_
                      (puVar7,puVar9);
    puVar3 = puVar3 + iVar2;
    iVar1 = *(int *)(param_3 + 0x20);
    puVar6 = puVar10 + iVar2;
  }
  if (0 < iVar1) {
    for (; puVar6 < puVar10 + lVar11 + -1; puVar6 = puVar6 + 1) {
      uVar4 = _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto12ProcessEntryEEEPvPS1_PKv
                        (param_2,*puVar6);
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
    }
  }
  for (; puVar6 < puVar10 + lVar11; puVar6 = puVar6 + 1) {
    uVar4 = _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto12ProcessEntryEEEPvPS1_PKv
                      (param_2,*puVar6);
    *puVar3 = uVar4;
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 4) = iVar8;
  uVar4 = *puVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = (uint)(uVar4 != 0);
  }
  else {
    uVar5 = *(uint *)(uVar4 + 3);
  }
  if ((int)uVar5 < iVar8) {
    *(int *)(uVar4 + 3) = iVar8;
  }
  return;
}


