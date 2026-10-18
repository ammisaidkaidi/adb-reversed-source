// Function: _ZNK7android8ResTable7lockBagEjPPKNS0_9bag_entryE
// Address: 00436fe0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android8ResTable7lockBagEjPPKNS0_9bag_entryE
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x0099c500();
  lVar1 = _ZNK7android8ResTable12getBagLockedEjPPKNS0_9bag_entryEPj(param_1,param_2,param_3,0);
  if (lVar1 < 0) {
    func_0x0099c510(param_1);
  }
  return lVar1;
}


