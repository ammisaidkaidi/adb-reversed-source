// Function: _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
// Address: 004c97b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz10TransitionENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
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
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar7 = param_2;
    if (param_2 == puVar4) {
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0x7b2;
      *(undefined2 *)(puVar4 + 3) = 0x101;
      puVar4[4] = 0x7b2;
      *(undefined2 *)(puVar4 + 5) = 0x101;
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
      func_0x0099bd90(param_2 + 6,param_2);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0x7b2;
      *(undefined2 *)(param_2 + 3) = 0x101;
      *(undefined4 *)((long)param_2 + 0x1a) = 0;
      *(undefined2 *)((long)param_2 + 0x1e) = 0;
      param_2[4] = 0x7b2;
      *(undefined2 *)(param_2 + 5) = 0x101;
      *(undefined4 *)((long)param_2 + 0x2a) = 0;
      *(undefined2 *)((long)param_2 + 0x2e) = 0;
    }
code_r0x004c99d3:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
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
      plStack_38 = param_1 + 2;
      lStack_58 = 0;
      if (uVar8 != 0) {
        if (0x555555555555555 < uVar8) goto code_r0x004c99fc;
        lStack_58 = _Znwm(uVar8 * 0x30);
      }
      puStack_50 = (undefined8 *)((long)param_2 + (lStack_58 - lVar6));
      uStack_40 = uVar8 * 0x30 + lStack_58;
      uStack_48 = puStack_50;
      _ZNSt3__114__split_bufferIN4absl12lts_2026052613time_internal4cctz10TransitionERNS_9allocatorIS5_EENS_29__split_buffer_pointer_layoutEE12emplace_backIJEEEvDpOT_
                (&lStack_58);
      puVar7 = puStack_50;
      func_0x0099bda0(uStack_48,param_2,param_1[1] - (long)param_2);
      uStack_48 = (undefined8 *)((long)uStack_48 + (param_1[1] - (long)param_2));
      param_1[1] = (long)param_2;
      lVar6 = (long)param_2 - *param_1;
      lVar5 = (long)puStack_50 - lVar6;
      func_0x0099bda0(lVar5,*param_1,lVar6);
      lStack_58 = *param_1;
      lVar6 = param_1[2];
      *param_1 = lVar5;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_48;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_48._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_40._4_4_;
      puStack_50 = (undefined8 *)lStack_58;
      uStack_48 = (undefined8 *)lStack_58;
      uStack_40 = lVar6;
      if (lStack_58 != 0) {
        _ZdaPvSt11align_val_t(lStack_58,lVar6 - lStack_58);
      }
      goto code_r0x004c99d3;
    }
  }
  func_0x00330ca0();
code_r0x004c99fc:
  func_0x0032fc40();
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}


