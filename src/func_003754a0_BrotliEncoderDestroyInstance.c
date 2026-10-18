// Function: BrotliEncoderDestroyInstance
// Address: 003754a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void BrotliEncoderDestroyInstance(long param_1)

{
  long lVar1;
  undefined8 extraout_RDX;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + 0x578;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x658));
  *(undefined8 *)(param_1 + 0x658) = 0;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x5c8));
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x5b0));
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  if (*(long *)(param_1 + 0x660) != 0) {
    func_0x003bd120(lVar1);
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    func_0x003bd120(lVar1);
    *(undefined8 *)(param_1 + 0x668) = 0;
  }
  if (*(long *)(param_1 + 0x670) != 0) {
    func_0x003bd120(lVar1);
    *(undefined8 *)(param_1 + 0x670) = 0;
  }
  if (*(long *)(param_1 + 0x678) != 0) {
    func_0x003bd120(lVar1);
    *(undefined8 *)(param_1 + 0x678) = 0;
  }
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x1ad0));
  *(undefined8 *)(param_1 + 0x1ad0) = 0;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x1ae0));
  *(undefined8 *)(param_1 + 0x1ae0) = 0;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x1ae8));
  *(undefined8 *)(param_1 + 0x1ae8) = 0;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x1af0));
  *(undefined8 *)(param_1 + 0x1af0) = 0;
  func_0x003bd120(lVar1,*(undefined8 *)(param_1 + 0x1af8));
  *(undefined8 *)(param_1 + 0x1af8) = 0;
  func_0x003bb690(lVar1,param_1 + 0x50);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003bd198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x580))
              (*(undefined8 *)(param_1 + 0x588),param_1,extraout_RDX,*(code **)(param_1 + 0x580));
    return;
  }
  return;
}


