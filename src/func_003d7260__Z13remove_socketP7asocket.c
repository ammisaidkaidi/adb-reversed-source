// Function: _Z13remove_socketP7asocket
// Address: 003d7260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z13remove_socketP7asocket(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  uVar1 = uRam0000000000a00690;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a00690);
  plVar3 = plRam0000000000a006a0;
  plVar2 = plRam0000000000a00698;
  plVar5 = (long *)plRam0000000000a00698[1];
  plVar4 = (long *)*plRam0000000000a00698;
  plVar6 = plVar4;
  for (; (plVar4 != plVar5 && (plVar6 = plVar4, *plVar4 != param_1)); plVar4 = plVar4 + 1) {
    plVar6 = plVar5;
  }
  if ((plVar6 != plVar5) && (plVar4 = plVar6 + 1, plVar4 != plVar5)) {
    do {
      if (*plVar4 != param_1) {
        *plVar6 = *plVar4;
        plVar6 = plVar6 + 1;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
    plVar5 = (long *)plVar2[1];
  }
  if (plVar6 != plVar5) {
    func_0x0099bd90(plVar6,plVar5,0);
    plVar2[1] = (long)plVar6;
  }
  plVar5 = (long *)plVar3[1];
  plVar4 = (long *)*plVar3;
  plVar6 = plVar4;
  for (; (plVar4 != plVar5 && (plVar6 = plVar4, *plVar4 != param_1)); plVar4 = plVar4 + 1) {
    plVar6 = plVar5;
  }
  if ((plVar6 != plVar5) && (plVar4 = plVar6 + 1, plVar4 != plVar5)) {
    do {
      if (*plVar4 != param_1) {
        *plVar6 = *plVar4;
        plVar6 = plVar6 + 1;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
    plVar5 = (long *)plVar3[1];
  }
  if (plVar6 != plVar5) {
    func_0x0099bd90(plVar6,plVar5,0);
    plVar3[1] = (long)plVar6;
  }
  pthread_mutex_unlock(uVar1);
  return;
}


