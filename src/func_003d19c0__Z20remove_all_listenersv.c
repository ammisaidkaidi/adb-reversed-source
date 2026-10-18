// Function: _Z20remove_all_listenersv
// Address: 003d19c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z20remove_all_listenersv(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  
  uVar3 = uRam0000000000a00618;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00618);
  plVar4 = plRam0000000000a00620;
  plVar6 = (long *)plRam0000000000a00620[1];
  if ((long *)plRam0000000000a00620[1] != plRam0000000000a00620) {
    do {
      lVar1 = plVar6[2];
      if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
        pcVar5 = (char *)(lVar1 + 0x29);
      }
      else {
        pcVar5 = *(char **)(lVar1 + 0x38);
      }
      plVar2 = (long *)plVar6[1];
      if (*pcVar5 != '*') {
        *(long **)(*plVar6 + 8) = plVar2;
        *plVar2 = *plVar6;
        plVar4[2] = plVar4[2] + -1;
        lVar1 = plVar6[2];
        plVar6[2] = 0;
        if (lVar1 != 0) {
          _ZN9alistenerD1Ev(lVar1);
          _ZdaPvSt11align_val_t(lVar1,0x58);
        }
        _ZdaPvSt11align_val_t(plVar6,0x18);
        plVar4 = plRam0000000000a00620;
      }
      plVar6 = plVar2;
    } while (plVar2 != plVar4);
  }
  pthread_mutex_unlock(uVar3);
  return;
}


