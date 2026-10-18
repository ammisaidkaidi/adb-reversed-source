// Function: _Z17command_to_stringj
// Address: 003c9c00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _Z17command_to_stringj(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0x4e45504f) {
    if ((int)param_2 < 0x45545257) {
      if (param_2 == 0x434e5953) {
        *(undefined1 *)param_1 = 0xc;
        *(undefined4 *)((long)param_1 + 1) = 0x59535f41;
        *(undefined2 *)((long)param_1 + 5) = 0x434e;
        *(undefined1 *)((long)param_1 + 7) = 0;
        goto code_r0x003c9df6;
      }
      if (param_2 == 0x45534c43) {
        *(undefined1 *)param_1 = 0xc;
        *(undefined4 *)((long)param_1 + 1) = 0x4c435f41;
        *(undefined2 *)((long)param_1 + 5) = 0x4553;
        *(undefined1 *)((long)param_1 + 7) = 0;
        goto code_r0x003c9df6;
      }
    }
    else {
      if (param_2 == 0x45545257) {
        *(undefined1 *)param_1 = 0xc;
        *(undefined4 *)((long)param_1 + 1) = 0x52575f41;
        *(undefined2 *)((long)param_1 + 5) = 0x4554;
        *(undefined1 *)((long)param_1 + 7) = 0;
        goto code_r0x003c9df6;
      }
      if (param_2 == 0x48545541) {
        *(undefined1 *)param_1 = 0xc;
        *(undefined4 *)((long)param_1 + 1) = 0x55415f41;
        *(undefined2 *)((long)param_1 + 5) = 0x4854;
        *(undefined1 *)((long)param_1 + 7) = 0;
        goto code_r0x003c9df6;
      }
    }
  }
  else if ((int)param_2 < 0x534c5453) {
    if (param_2 == 0x4e45504f) {
      *(undefined1 *)param_1 = 0xc;
      *(undefined4 *)((long)param_1 + 1) = 0x504f5f41;
      *(undefined2 *)((long)param_1 + 5) = 0x4e45;
      *(undefined1 *)((long)param_1 + 7) = 0;
      goto code_r0x003c9df6;
    }
    if (param_2 == 0x4e584e43) {
      *(undefined1 *)param_1 = 0xc;
      *(undefined4 *)((long)param_1 + 1) = 0x4e435f41;
      *(undefined2 *)((long)param_1 + 5) = 0x4e58;
      *(undefined1 *)((long)param_1 + 7) = 0;
      goto code_r0x003c9df6;
    }
  }
  else {
    if (param_2 == 0x534c5453) {
      *(undefined1 *)param_1 = 0xc;
      *(undefined4 *)((long)param_1 + 1) = 0x54535f41;
      *(undefined2 *)((long)param_1 + 5) = 0x534c;
      *(undefined1 *)((long)param_1 + 7) = 0;
      goto code_r0x003c9df6;
    }
    if (param_2 == 0x59414b4f) {
      *(undefined1 *)param_1 = 0xc;
      *(undefined4 *)((long)param_1 + 1) = 0x4b4f5f41;
      *(undefined2 *)((long)param_1 + 5) = 0x5941;
      *(undefined1 *)((long)param_1 + 7) = 0;
      goto code_r0x003c9df6;
    }
  }
  _ZNSt3__19to_stringEj(&bStack_50);
  puVar2 = (ulong *)_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                              (&bStack_50,0,&UNK_00187c96,9);
  uStack_28 = puVar2[2];
  uStack_38 = *puVar2;
  uStack_30 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  param_2 = 0x1692c7;
  puVar3 = (undefined8 *)
           _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(&uStack_38);
  param_1[2] = puVar3[2];
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if ((uStack_38 & 1) != 0) {
    param_2 = (uint)uStack_38 & 0xfffffffe;
    _ZdaPvSt11align_val_t(uStack_28);
  }
  if ((bStack_50 & 1) != 0) {
    param_2 = (uint)CONCAT71(uStack_4f,bStack_50) & 0xfffffffe;
    _ZdaPvSt11align_val_t(uStack_40);
  }
code_r0x003c9df6:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return param_1;
  }
  func_0x0099bd00();
                    /* WARNING: Could not recover jumptable at 0x003c9e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)
           (*(code *)(&UNK_001fddc4 + *(int *)(&UNK_001fddc4 + (ulong)(param_2 + 1) * 4)))();
  return puVar3;
}


