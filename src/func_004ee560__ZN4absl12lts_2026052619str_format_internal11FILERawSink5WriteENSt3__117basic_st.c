// Function: _ZN4absl12lts_2026052619str_format_internal11FILERawSink5WriteENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
// Address: 004ee560
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052619str_format_internal11FILERawSink5WriteENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEE
               (undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
joined_r0x004ee563:
  if ((param_3 == 0) || (*(int *)(param_1 + 1) != 0)) {
    return;
  }
  piVar3 = (int *)func_0x0099bce0();
  iVar1 = *piVar3;
  *piVar3 = 0;
  lVar4 = func_0x0099bd40(param_2,1,param_3,*param_1);
  if (lVar4 != 0) {
    param_1[2] = param_1[2] + lVar4;
    param_2 = param_2 + lVar4;
    param_3 = param_3 - lVar4;
    goto code_r0x004ee5d3;
  }
  iVar2 = *piVar3;
  if (iVar2 != 0) goto code_r0x004ee5e8;
  iVar2 = func_0x0099c7d0(*param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 1) = 9;
    goto code_r0x004ee5d3;
  }
  goto code_r0x004ee590;
code_r0x004ee5e8:
  if (iVar2 != 4) {
    *(int *)(param_1 + 1) = iVar2;
code_r0x004ee5d3:
    if (*piVar3 == 0) {
code_r0x004ee590:
      *piVar3 = iVar1;
    }
  }
  goto joined_r0x004ee563;
}


