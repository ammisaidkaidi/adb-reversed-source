// Function: XXH64_copyState
// Address: 004b8000
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void XXH64_copyState(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[10] = param_2[10];
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


