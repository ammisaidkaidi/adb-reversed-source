// Function: _Z17find_local_socketjj
// Address: 003d70b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _Z17find_local_socketjj(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  uVar1 = uRam0000000000a00690;
  _ZNSt3__115recursive_mutex4lockEv(uRam0000000000a00690);
  puVar2 = (undefined8 *)*puRam0000000000a00698;
  do {
    if (puVar2 == (undefined8 *)puRam0000000000a00698[1]) {
code_r0x003d7101:
      piVar3 = (int *)0x0;
code_r0x003d7104:
      _ZNSt3__115recursive_mutex6unlockEv(uVar1);
      return piVar3;
    }
    piVar3 = (int *)*puVar2;
    if (*piVar3 == param_1) {
      if ((param_2 == 0) ||
         ((*(int **)(piVar3 + 4) != (int *)0x0 && (**(int **)(piVar3 + 4) == param_2))))
      goto code_r0x003d7104;
      goto code_r0x003d7101;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


