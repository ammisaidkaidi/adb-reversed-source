// Function: _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003ebf00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN10atransport11SetFeaturesERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
               (long param_1,byte *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte bStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined5 uStack_45;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined8 uStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 & 1) == 0) {
    if (*param_2 >> 1 == 0) goto code_r0x003ebf66;
  }
  else if (*(long *)(param_2 + 8) == 0) {
code_r0x003ebf66:
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    goto code_r0x003ebf75;
  }
  bStack_48 = 2;
  uStack_47 = 0x2c;
  uStack_46 = 0;
  _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
            (&uStack_68,param_2,&bStack_48);
  if ((bStack_48 & 1) != 0) {
    _ZdaPvSt11align_val_t
              (uStack_38,
               CONCAT53(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,bStack_48))) &
               0xfffffffffffffffe);
  }
code_r0x003ebf75:
  plVar6 = (long *)(param_1 + 0xd0);
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0xd8);
    lVar5 = lVar1;
    if (lVar1 != lVar7) {
      do {
        if ((*(byte *)(lVar7 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar7 + -8),*(ulong *)(lVar7 + -0x18) & 0xfffffffffffffffe);
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != lVar1);
      lVar5 = *plVar6;
    }
    *(long *)(param_1 + 0xd8) = lVar1;
    _ZdaPvSt11align_val_t(lVar5,*(long *)(param_1 + 0xe0) - lVar5);
  }
  *(undefined4 *)(param_1 + 0xd0) = (undefined4)uStack_68;
  *(undefined4 *)(param_1 + 0xd4) = uStack_68._4_4_;
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0xdc) = uStack_60._4_4_;
  *(undefined8 *)(param_1 + 0xe0) = uStack_58;
  bStack_48 = 0x16;
  uStack_47 = 100;
  uStack_46 = 0x65;
  uStack_45 = 0x646579616c;
  uStack_40 = 0x6b63615f;
  uStack_3c = 0;
  pbVar4 = &bStack_48;
  uVar2 = _Z13CanUseFeatureRKNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEERKS6_
                    ();
  *(undefined1 *)(param_1 + 0x1c8) = uVar2;
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_30) {
    func_0x0099bd00();
    plVar3 = (long *)_Znwm(0x18);
    plVar3[2] = (long)pbVar4;
    plVar3[1] = (long)(plVar6 + 0x1f);
    lVar1 = plVar6[0x1f];
    *plVar3 = lVar1;
    *(long **)(lVar1 + 8) = plVar3;
    plVar6[0x1f] = (long)plVar3;
    plVar6[0x21] = plVar6[0x21] + 1;
    return;
  }
  return;
}


