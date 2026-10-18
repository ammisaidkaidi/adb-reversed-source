// Function: _ZN4absl12lts_2026052620DefaultStackUnwinderEPPvPiiiPKvS3_
// Address: 004d4b20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052620DefaultStackUnwinderEPPvPiiiPKvS3_
               (undefined8 param_1,long param_2,undefined4 param_3,int param_4,long param_5,
               undefined8 param_6)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = (code *)&UNK_004d4ce0;
  if (param_5 == 0) {
    pcVar1 = (code *)&UNK_004d4b80;
  }
  pcVar2 = (code *)&UNK_004d50f0;
  if (param_5 == 0) {
    pcVar2 = (code *)&UNK_004d4f10;
  }
  if (param_2 == 0) {
    pcVar2 = pcVar1;
  }
  (*pcVar2)(param_1,0,param_2,param_3,param_4 + 1,param_5,param_6);
  return;
}


