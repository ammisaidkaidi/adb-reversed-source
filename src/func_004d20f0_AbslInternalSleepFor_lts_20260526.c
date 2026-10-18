// Function: AbslInternalSleepFor_lts_20260526
// Address: 004d20f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void AbslInternalSleepFor_lts_20260526(long param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  long lStack_58;
  int iStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_58 = param_1;
  iStack_50 = param_2;
  do {
    lVar3 = lStack_58;
    if (lStack_58 == 0) {
      if (iStack_50 == 0) {
code_r0x004d219b:
        if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
          func_0x0099bd00();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        return;
      }
    }
    else if (lStack_58 < 1) goto code_r0x004d219b;
    iVar2 = iStack_50;
    if (lStack_58 == 0x7fffffffffffffff) {
      iVar2 = 0;
    }
    auVar6 = _ZN4absl12lts_2026052610ToTimespecENS0_8DurationE(lStack_58,iVar2);
    auStack_48 = auVar6;
    do {
      iVar4 = func_0x0099c640(auStack_48,auStack_48);
      if (iVar4 == 0) break;
      piVar5 = (int *)func_0x0099bce0();
    } while (*piVar5 == 4);
    _ZN4absl12lts_202605268DurationmIES1_(&lStack_58,lVar3,iVar2);
  } while( true );
}


