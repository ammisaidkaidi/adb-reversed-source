// Function: _Z15remove_listenerPKcP10atransport
// Address: 003d18a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z15remove_listenerPKcP10atransport(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  uVar6 = uRam0000000000a00618;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00618);
  plVar5 = plRam0000000000a00620;
  plVar11 = (long *)plRam0000000000a00620[1];
  uVar10 = 0xfffffffc;
  if (plVar11 != plRam0000000000a00620) {
    uVar4 = func_0x0099bcf0(param_1);
    do {
      lVar9 = plVar11[2];
      bVar1 = *(byte *)(lVar9 + 0x10);
      if ((bVar1 & 1) == 0) {
        uVar7 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x18);
      }
      if (uVar4 == uVar7) {
        if (uVar4 == 0xffffffffffffffff) {
          func_0x0032fc60();
          uVar6 = uRam0000000000a00618;
          _ZNSt3__15mutex4lockEv(uRam0000000000a00618);
          plVar5 = plRam0000000000a00620;
          plVar11 = (long *)plRam0000000000a00620[1];
          if ((long *)plRam0000000000a00620[1] != plRam0000000000a00620) {
            do {
              lVar9 = plVar11[2];
              if ((*(byte *)(lVar9 + 0x28) & 1) == 0) {
                pcVar8 = (char *)(lVar9 + 0x29);
              }
              else {
                pcVar8 = *(char **)(lVar9 + 0x38);
              }
              plVar2 = (long *)plVar11[1];
              if (*pcVar8 != '*') {
                *(long **)(*plVar11 + 8) = plVar2;
                *plVar2 = *plVar11;
                plVar5[2] = plVar5[2] + -1;
                lVar9 = plVar11[2];
                plVar11[2] = 0;
                if (lVar9 != 0) {
                  _ZN9alistenerD1Ev(lVar9);
                  _ZdaPvSt11align_val_t(lVar9,0x58);
                }
                _ZdaPvSt11align_val_t(plVar11,0x18);
                plVar5 = plRam0000000000a00620;
              }
              plVar11 = plVar2;
            } while (plVar2 != plVar5);
          }
          uVar6 = pthread_mutex_unlock(uVar6);
          return uVar6;
        }
        if ((bVar1 & 1) == 0) {
          lVar9 = lVar9 + 0x11;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x20);
        }
        iVar3 = func_0x0099bf90(lVar9,param_1,uVar4);
        if (iVar3 == 0) {
          plVar2 = (long *)plVar11[1];
          *(long **)(*plVar11 + 8) = plVar2;
          *plVar2 = *plVar11;
          plVar5 = plVar5 + 2;
          *plVar5 = *plVar5 + -1;
          lVar9 = plVar11[2];
          plVar11[2] = 0;
          if (lVar9 != 0) {
            _ZN9alistenerD1Ev(lVar9);
            _ZdaPvSt11align_val_t(lVar9,0x58);
          }
          _ZdaPvSt11align_val_t(plVar11,0x18);
          uVar10 = 0;
          goto code_r0x003d199f;
        }
      }
      plVar11 = (long *)plVar11[1];
    } while (plVar11 != plVar5);
    uVar10 = 0xfffffffc;
  }
code_r0x003d199f:
  _ZNSt3__115recursive_mutex6unlockEv(uVar6);
  return uVar10;
}


