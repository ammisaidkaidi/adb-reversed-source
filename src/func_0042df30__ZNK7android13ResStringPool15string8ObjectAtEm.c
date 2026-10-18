// Function: _ZNK7android13ResStringPool15string8ObjectAtEm
// Address: 0042df30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK7android13ResStringPool15string8ObjectAtEm
                 (long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *extraout_RDX;
  long *plVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  plVar7 = &lStack_48;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x18))();
  if ((int)uStack_30 == 0) {
    plVar7 = alStack_70 + 1;
    _ZN7android7String8C2EPKcm(plVar7,uStack_40,uStack_38);
code_r0x0042dfeb:
    plVar6 = plVar7;
    _ZN7android7String8C2ERKS0_(param_1);
    *(undefined4 *)(param_1 + 1) = 0;
    _ZN7android7String8D2Ev();
code_r0x0042e005:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
      return param_1;
    }
    func_0x0099bd00();
  }
  else if ((int)uStack_30 == 1) {
    if (uStack_40._4_4_ != 1) {
      uStack_58 = 0;
      uStack_50 = 0;
      alStack_70[1] = 0;
      uStack_60 = 0;
      plVar7 = alStack_70 + 1;
      (**(code **)(*param_2 + 0x10))(plVar7,param_2,param_3);
      if ((int)uStack_50 == 0) {
        plVar7 = alStack_70;
        _ZN7android7String8C2EPKDsm(plVar7,uStack_60,uStack_58);
      }
      else {
        plVar6 = param_2;
        if ((int)uStack_50 != 1) goto code_r0x0042e03a;
        if (uStack_60._4_4_ == 1) {
          uVar4 = (undefined4)uStack_60;
          goto code_r0x0042e02a;
        }
        plVar7 = alStack_70;
        _ZN7android7String8C2Ev(plVar7);
      }
      goto code_r0x0042dfeb;
    }
    uVar4 = (undefined4)uStack_40;
code_r0x0042e02a:
    *(undefined4 *)param_1 = uVar4;
    *(undefined4 *)(param_1 + 1) = 1;
    goto code_r0x0042e005;
  }
code_r0x0042e03a:
  func_0x0043f2f0();
  if (((int)plVar6[1] == 0) && (uVar1 = *extraout_RDX, uVar1 < *(uint *)(plVar6[3] + 0xc))) {
    if (plVar6[0xf] == 0) {
      plVar7[1] = 0x1ffffffff;
      goto code_r0x0042e0cd;
    }
    uVar2 = *(uint *)(plVar6[0xf] + (ulong)uVar1 * 4);
    uVar5 = uVar2 >> 2;
    if (uVar5 < *(uint *)(plVar6 + 0x1a)) {
      plVar7[1] = (ulong)(uVar5 << 2) + plVar6[0x17];
      lVar3 = plVar6[0x19];
      plVar7[2] = plVar6[0x18];
      plVar7[3] = lVar3;
      *(undefined4 *)(plVar7 + 4) = 0;
      return plVar7;
    }
    __android_log_print(5,&UNK_0015b3df,&UNK_0018818f,(ulong)uVar1,uVar2 & 0xfffffffc,
                        *(uint *)(plVar6 + 0x1a) << 2,plVar7,param_1,&stack0xfffffffffffffff8);
  }
  *(undefined4 *)((long)plVar7 + 0xc) = 0;
code_r0x0042e0cd:
  *(undefined4 *)(plVar7 + 4) = 1;
  return plVar7;
}


