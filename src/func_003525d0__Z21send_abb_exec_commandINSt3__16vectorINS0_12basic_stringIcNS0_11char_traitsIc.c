// Function: _Z21send_abb_exec_commandINSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEEN7android4base14unique_fd_implINSB_13DefaultCloserEEERKT_PS7_
// Address: 003525d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * _Z21send_abb_exec_commandINSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEEN7android4base14unique_fd_implINSB_13DefaultCloserEEERKT_PS7_
                (int *param_1,undefined8 param_2,byte *param_3)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  _ZN7android4base4JoinIRKNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_OT_T0_
            (&bStack_60,param_2,0);
  puVar4 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (&bStack_60,0,&UNK_001678d1,9);
  uStack_38 = puVar4[2];
  uStack_48 = *puVar4;
  uStack_40 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  if ((bStack_60 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_50,CONCAT71(uStack_5f,bStack_60) & 0xfffffffffffffffe);
  }
  uVar7 = uStack_48 >> 1 & 0x7f;
  uVar2 = (long)&uStack_48 + 1;
  if ((uStack_48 & 1) != 0) {
    uVar7 = uStack_40;
    uVar2 = uStack_38;
  }
  iVar3 = _Z11adb_connectNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
                    (uVar2,uVar7,param_3);
  puVar5 = (undefined4 *)func_0x0099bce0();
  if (iVar3 < 0) {
    if ((*param_3 & 1) == 0) {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = *(byte **)(param_3 + 0x10);
    }
    func_0x0099bd30(_stderr,&UNK_001642de,param_3);
    *param_1 = -1;
    uVar8 = *puVar5;
    if (iVar3 != -1) {
      func_0x0099bd10(iVar3);
    }
  }
  else {
    uVar8 = *puVar5;
    *param_1 = iVar3;
  }
  *puVar5 = uVar8;
  if ((uStack_48 & 1) != 0) {
    _ZdaPvSt11align_val_t(uStack_38,uStack_48 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  piVar6 = (int *)(*pcVar1)();
  return piVar6;
}


