// Function: _ZN7android10ResXMLTreeD2Ev
// Address: 0042fd30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN7android10ResXMLTreeD2Ev(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
  _ZN7android13ResStringPool6uninitEv(param_1 + 0x10);
  if ((char)param_1[10] == '\x01') {
    _ZN7android4base10MappedFileD2Ev(param_1 + 7);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    _ZdaPvSt11align_val_t();
  }
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = -(uint)(*(int *)(*param_1 + 0x60) != 0);
  _ZN7android13ResStringPoolD1Ev(param_1 + 0x10);
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    _ZdaPvSt11align_val_t();
  }
  if ((char)param_1[10] == '\x01') {
    _ZN7android4base10MappedFileD2Ev(param_1 + 7);
  }
  plVar3 = (long *)param_1[6];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (plVar3[2] != 0) {
        LOCK();
        plVar1 = plVar3 + 2;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x008ab49f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x20))();
      return;
    }
  }
  return;
}


