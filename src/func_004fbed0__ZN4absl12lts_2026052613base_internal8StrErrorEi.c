// Function: _ZN4absl12lts_2026052613base_internal8StrErrorEi
// Address: 004fbed0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZN4absl12lts_2026052613base_internal8StrErrorEi(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)func_0x0099bce0();
  uVar2 = *puVar5;
  if (cRam0000000000a030e0 == '\0') {
    iVar4 = __cxa_guard_acquire(0xa030e0);
    if (iVar4 != 0) {
      lRam0000000000a030d8 = func_0x004fbf90();
      __cxa_guard_release(0xa030e0);
    }
  }
  if (param_2 < 0x87) {
    puVar1 = (undefined8 *)(lRam0000000000a030d8 + (ulong)param_2 * 0x18);
    if ((*(byte *)(lRam0000000000a030d8 + (ulong)param_2 * 0x18) & 1) == 0) {
      param_1[2] = puVar1[2];
      uVar3 = puVar1[1];
      *param_1 = *puVar1;
      param_1[1] = uVar3;
    }
    else {
      func_0x00330340(param_1,puVar1[2],puVar1[1]);
    }
  }
  else {
    func_0x004fc050(param_1,param_2);
  }
  *puVar5 = uVar2;
  return param_1;
}


