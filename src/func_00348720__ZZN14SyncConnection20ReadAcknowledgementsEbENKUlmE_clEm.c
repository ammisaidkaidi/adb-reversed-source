// Function: _ZZN14SyncConnection20ReadAcknowledgementsEbENKUlmE_clEm
// Address: 00348720
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


char _ZZN14SyncConnection20ReadAcknowledgementsEbENKUlmE_clEm(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  byte bVar11;
  
  plVar10 = (long *)*param_1;
  if ((ulong)plVar10[2] < param_2) {
    puVar2 = (undefined4 *)param_1[3];
    bVar11 = *(byte *)param_1[1];
    do {
      if ((bVar11 & 1) == 0) {
        lVar3 = param_1[2];
        do {
          iVar5 = func_0x0099c120(lVar3,1,0);
          if (iVar5 != -1) {
            if (iVar5 == 0) {
              return '\x02';
            }
            break;
          }
          piVar7 = (int *)func_0x0099bce0();
        } while (*piVar7 == 4);
        plVar10 = (long *)*param_1;
      }
      lVar3 = plVar10[2];
      uVar1 = *puVar2;
      lVar4 = *plVar10;
      while (lVar8 = func_0x0099be20(uVar1,lVar3 + lVar4,param_2 - lVar3), lVar8 == -1) {
        piVar7 = (int *)func_0x0099bce0();
        if (*piVar7 != 4) goto code_r0x003487ff;
      }
      uVar6 = (uint)lVar8;
      if ((int)uVar6 < 1) {
        if ((int)uVar6 < 0) {
          piVar7 = (int *)func_0x0099bce0();
code_r0x003487ff:
          puVar9 = (undefined *)func_0x0099bd20(*piVar7);
        }
        else {
          puVar9 = &UNK_00169477;
        }
        _ZN14SyncConnection5ErrorEPKcz(puVar2,&UNK_00179f8d,puVar9);
        return '\x01';
      }
      _ZN5Block6resizeEm(*param_1,(ulong)(uVar6 & 0x7fffffff) + *(long *)(*param_1 + 0x10));
      plVar10 = (long *)*param_1;
      if (*(char *)param_1[1] == '\0') {
        return ((ulong)plVar10[2] < param_2) * '\x02';
      }
      bVar11 = 1;
    } while ((ulong)plVar10[2] < param_2);
  }
  return '\0';
}


