// Function: _ZN11incremental17IncrementalServer14RunPrefetchingEv
// Address: 003650d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN11incremental17IncrementalServer14RunPrefetchingEv(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    iVar6 = 0x80;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) / 0xaa) * 8);
      uVar5 = *(ulong *)(param_1 + 0x58) % 0xaa;
      plVar1 = (long *)(lVar2 + uVar5 * 0x18);
      lVar2 = *(long *)(lVar2 + uVar5 * 0x18);
      if (*(long *)(lVar2 + 0x58) == *(long *)(lVar2 + 0x60)) {
code_r0x003651b0:
        iVar4 = (int)plVar1[1];
        do {
          if (*(int *)((long)plVar1 + 0xc) <= iVar4) break;
          iVar4 = _ZN11incremental17IncrementalServer13SendDataBlockEsib
                            (param_1,(int)*(short *)(lVar2 + 0x40),iVar4,0);
          if (iVar4 == 0) {
            iVar6 = iVar6 + -1;
          }
          else if (iVar4 == 2) {
            func_0x0099bd30(_stderr,&UNK_001576d4,(int)plVar1[1]);
          }
          iVar4 = (int)plVar1[1] + 1;
          *(int *)(plVar1 + 1) = iVar4;
        } while (0 < iVar6);
      }
      else {
        iVar4 = (int)plVar1[2];
        do {
          if ((int)((ulong)(*(long *)(lVar2 + 0x60) - *(long *)(lVar2 + 0x58)) >> 2) <= iVar4)
          goto code_r0x003651b0;
          iVar4 = _ZN11incremental17IncrementalServer13SendDataBlockEsib
                            (param_1,(int)*(short *)(lVar2 + 0x40),
                             *(undefined4 *)(*(long *)(lVar2 + 0x58) + (long)iVar4 * 4),0);
          if (iVar4 == 0) {
            iVar6 = iVar6 + -1;
          }
          else if (iVar4 == 2) {
            func_0x0099bd30(_stderr,&UNK_001576b2,(int)plVar1[2]);
          }
          iVar4 = (int)plVar1[2] + 1;
          *(int *)(plVar1 + 2) = iVar4;
        } while (0 < iVar6);
        iVar4 = (int)plVar1[1];
      }
      lVar2 = *(long *)(*plVar1 + 0x58);
      lVar3 = *(long *)(*plVar1 + 0x60);
      if ((lVar2 == lVar3) || (iVar4 < *(int *)((long)plVar1 + 0xc))) {
        if ((lVar2 == lVar3) && (*(int *)((long)plVar1 + 0xc) <= iVar4)) goto code_r0x00365249;
      }
      else if ((int)((ulong)(lVar3 - lVar2) >> 2) <= (int)plVar1[2]) {
code_r0x00365249:
        uVar5 = *(long *)(param_1 + 0x58) + 1;
        *(ulong *)(param_1 + 0x58) = uVar5;
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
        if (0x153 < uVar5) {
          _ZdaPvSt11align_val_t(**(undefined8 **)(param_1 + 0x40),0xff0);
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 8;
          *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -0xaa;
        }
      }
    } while ((0 < iVar6) && (*(long *)(param_1 + 0x60) != 0));
  }
  return;
}


