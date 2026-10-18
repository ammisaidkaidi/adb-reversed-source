// Function: _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz14TransitionTypeENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
// Address: 004c92c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz14TransitionTypeENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
          (long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar7 = param_2;
    if (param_2 == puVar4) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[1] = 0x7b2;
      *(undefined2 *)(puVar4 + 2) = 0x101;
      puVar4[3] = 0x7b2;
      *(undefined2 *)(puVar4 + 4) = 0x101;
      param_1[1] = (long)(puVar4 + 6);
    }
    else {
      puVar3 = puVar4;
      if (puVar4 + -6 < puVar4) {
        puVar3 = puVar4 + 6;
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + -2);
        *(undefined4 *)((long)puVar4 + 0x24) = *(undefined4 *)((long)puVar4 + -0xc);
        *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar4 + -1);
        *(undefined4 *)((long)puVar4 + 0x2c) = *(undefined4 *)((long)puVar4 + -4);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar4 + -4);
        *(undefined4 *)((long)puVar4 + 0x14) = *(undefined4 *)((long)puVar4 + -0x1c);
        *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar4 + -3);
        *(undefined4 *)((long)puVar4 + 0x1c) = *(undefined4 *)((long)puVar4 + -0x14);
        *(undefined4 *)puVar4 = *(undefined4 *)(puVar4 + -6);
        *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)((long)puVar4 + -0x2c);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + -5);
        *(undefined4 *)((long)puVar4 + 0xc) = *(undefined4 *)((long)puVar4 + -0x24);
      }
      param_1[1] = (long)puVar3;
      if (puVar4 != param_2 + 6) {
        lVar6 = (long)puVar4 - (long)(param_2 + 6);
        func_0x0099bd90((long)puVar4 - lVar6,param_2,lVar6 + -6);
      }
      *param_2 = 0;
      param_2[1] = 0x7b2;
      *(undefined2 *)(param_2 + 2) = 0x101;
      *(undefined4 *)((long)param_2 + 0x12) = 0;
      *(undefined2 *)((long)param_2 + 0x16) = 0;
      param_2[3] = 0x7b2;
      *(undefined2 *)(param_2 + 4) = 0x101;
      *(undefined8 *)((long)param_2 + 0x22) = 0;
    }
code_r0x004c94f9:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return puVar7;
    }
    func_0x0099bd00();
  }
  else {
    lVar6 = *param_1;
    uVar8 = ((long)puVar4 - lVar6 >> 4) * -0x5555555555555555 + 1;
    if (uVar8 < 0x555555555555556) {
      lVar5 = param_1[2] - lVar6 >> 4;
      uVar2 = lVar5 * 0x5555555555555556;
      if (uVar8 < uVar2) {
        uVar8 = uVar2;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar8 = 0x555555555555555;
      }
      plStack_40 = param_1 + 2;
      lStack_60 = 0;
      if (uVar8 != 0) {
        if (0x555555555555555 < uVar8) goto code_r0x004c9524;
        lStack_60 = _Znwm(uVar8 * 0x30);
      }
      puStack_58 = (undefined8 *)((long)param_2 + (lStack_60 - lVar6));
      uStack_48 = uVar8 * 0x30 + lStack_60;
      uStack_50 = puStack_58;
      _ZNSt3__114__split_bufferIN4absl12lts_2026052613time_internal4cctz14TransitionTypeERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJEEEvDpOT_
                (&lStack_60);
      puVar7 = puStack_58;
      func_0x0099bda0(uStack_50,param_2,param_1[1] - (long)param_2);
      uStack_50 = (undefined8 *)((long)uStack_50 + (param_1[1] - (long)param_2));
      param_1[1] = (long)param_2;
      lVar6 = (long)param_2 - *param_1;
      lVar5 = (long)puStack_58 - lVar6;
      func_0x0099bda0(lVar5,*param_1,lVar6);
      lStack_60 = *param_1;
      lVar6 = param_1[2];
      *param_1 = lVar5;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_50._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_48._4_4_;
      puStack_58 = (undefined8 *)lStack_60;
      uStack_50 = (undefined8 *)lStack_60;
      uStack_48 = lVar6;
      if (lStack_60 != 0) {
        _ZdaPvSt11align_val_t(lStack_60,lVar6 - lStack_60);
      }
      goto code_r0x004c94f9;
    }
  }
  func_0x00330ca0();
code_r0x004c9524:
  func_0x0032fc40();
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}


