// Function: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE14__assign_valueB8nn220000IRSC_S8_TnNS_9enable_ifIXsr20__is_hash_value_typeIT0_EE5valueEiE4typeELi0EEEvSN_OT_
// Address: 00401e10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00401e68: Changing call to branch */

ulong * _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S7_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SC_SG_SE_EENS5_ISC_EEE14__assign_valueB8nn220000IRSC_S8_TnNS_9enable_ifIXsr20__is_hash_value_typeIT0_EE5valueEiE4typeELi0EEEvSN_OT_
                  (undefined8 param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *in_RAX;
  ulong uVar8;
  ulong *unaff_RBX;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  byte *pbVar10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulong *unaff_R14;
  ulong uVar11;
  undefined8 unaff_R15;
  bool bVar12;
  byte abStackY_51 [25];
  undefined *puStack_20;
  
  puVar9 = &stack0xfffffffffffffff8;
  if (param_2 != param_3) {
    bVar1 = (byte)*param_3;
    if ((*param_2 & 1) == 0) {
      if ((bVar1 & 1) != 0) {
        uVar8 = param_3[1];
        uVar5 = param_3[2];
        register0x00000020 = (BADSPACEBASE *)&puStack_20;
        puStack_20 = &UNK_00401e6d;
        unaff_R14 = param_2;
        goto code_r0x0032e990;
      }
      param_2[2] = param_3[2];
      uVar3 = *(undefined4 *)((long)param_3 + 4);
      uVar8 = param_3[1];
      uVar4 = *(undefined4 *)((long)param_3 + 0xc);
      *(int *)param_2 = (int)*param_3;
      *(undefined4 *)((long)param_2 + 4) = uVar3;
      *(int *)(param_2 + 1) = (int)uVar8;
      *(undefined4 *)((long)param_2 + 0xc) = uVar4;
    }
    else {
      bVar12 = (bVar1 & 1) != 0;
      pbVar10 = (byte *)((long)param_3 + 1);
      if (bVar12) {
        pbVar10 = (byte *)param_3[2];
      }
      uVar8 = (ulong)(bVar1 >> 1);
      if (bVar12) {
        uVar8 = param_3[1];
      }
      puStack_20 = &UNK_00401e5b;
      func_0x0032e920(param_2,pbVar10,uVar8);
    }
    puVar7 = param_2 + 3;
    bVar1 = (byte)param_3[3];
    if ((param_2[3] & 1) != 0) {
      bVar12 = (bVar1 & 1) != 0;
      pbVar10 = (byte *)((long)param_3 + 0x19);
      if (bVar12) {
        pbVar10 = (byte *)param_3[5];
      }
      uVar8 = (ulong)(bVar1 >> 1);
      if (bVar12) {
        uVar8 = param_3[4];
      }
      uVar5 = *puVar7 & 0xfffffffffffffffe;
      if (uVar8 < uVar5) {
        uVar5 = param_2[5];
        param_2[4] = uVar8;
        func_0x0099bd90(uVar5,pbVar10,uVar8);
        *(undefined1 *)(uVar5 + uVar8) = 0;
      }
      else {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (puVar7,uVar5 - 1,(uVar8 - uVar5) + 1,param_2[4],0,param_2[4],uVar8,pbVar10,bVar1)
        ;
      }
      return puVar7;
    }
    if ((bVar1 & 1) != 0) {
      uVar8 = param_3[4];
      uVar5 = param_3[5];
      param_3 = unaff_RBX;
      puVar9 = unaff_RBP;
      param_2 = puVar7;
code_r0x0032e990:
      *(undefined1 **)((long)register0x00000020 + -8) = puVar9;
      *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
      *(ulong **)((long)register0x00000020 + -0x18) = unaff_R14;
      *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
      *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
      *(ulong **)((long)register0x00000020 + -0x30) = param_3;
      if (uVar8 < 0x17) {
        *(char *)param_2 = (char)uVar8 * '\x02';
        *(undefined **)((long)register0x00000020 + -0x50) = &UNK_0032ea35;
        func_0x0099bd90((byte *)((long)param_2 + 1),uVar5,uVar8);
        *(byte *)((long)param_2 + uVar8 + 1) = 0;
      }
      else {
        if (0xfffffffffffffff6 < uVar8) {
          *(undefined **)((long)register0x00000020 + -0x50) = &UNK_0032ea52;
          func_0x0032e8f0();
          pcVar2 = (code *)swi(3);
          puVar7 = (ulong *)(*pcVar2)();
          return puVar7;
        }
        *(byte *)((long)register0x00000020 + -0x31) = (byte)*param_2;
        *(ulong *)((long)register0x00000020 + -0x40) = param_2[2];
        uVar6 = 0x2c;
        if (0x2c < uVar8) {
          uVar6 = uVar8;
        }
        uVar11 = (uVar6 | 7) + 1;
        *(undefined **)((long)register0x00000020 + -0x50) = &UNK_0032e9e5;
        uVar6 = _Znwm(uVar11);
        *(undefined **)((long)register0x00000020 + -0x50) = &UNK_0032e9f6;
        func_0x0099bda0(uVar6,uVar5,uVar8);
        *(undefined1 *)(uVar6 + uVar8) = 0;
        if ((*(byte *)((long)register0x00000020 + -0x31) & 1) != 0) {
          uVar5 = *param_2;
          *(undefined **)((long)register0x00000020 + -0x50) = &UNK_0032ea12;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)register0x00000020 + -0x40),uVar5 & 0xfffffffffffffffe);
        }
        *param_2 = uVar11 | 1;
        param_2[1] = uVar8;
        param_2[2] = uVar6;
      }
      return param_2;
    }
    in_RAX = (ulong *)param_3[5];
    param_2[5] = (ulong)in_RAX;
    uVar8 = param_3[4];
    *puVar7 = param_3[3];
    param_2[4] = uVar8;
  }
  return in_RAX;
}


