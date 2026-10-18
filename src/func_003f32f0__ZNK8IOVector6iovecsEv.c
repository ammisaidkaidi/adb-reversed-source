// Function: _ZNK8IOVector6iovecsEv
// Address: 003f32f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNK8IOVector6iovecsEv(ulong *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined4 **ppuStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar8 = param_2[2];
  lVar10 = param_2[3];
  uVar7 = param_2[4] - lVar10 >> 5;
  uVar9 = uVar7 - uVar8;
  if (uVar9 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (uVar9 >> 0x3c != 0) goto code_r0x003f357a;
    puVar3 = (undefined4 *)_Znwm(uVar9 * 0x10);
    *param_1 = (ulong)puVar3;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)(puVar3 + uVar9 * 4);
  }
  if ((*param_2 != param_2[1]) && (uVar8 < uVar7)) {
    uVar7 = uVar8 << 5 | 0x10;
    do {
      lVar6 = *(long *)(lVar10 + -0x10 + uVar7);
      uVar9 = *(ulong *)(lVar10 + uVar7);
      if (uVar8 == param_2[2]) {
        uVar1 = param_2[1];
        if (uVar9 < uVar1) {
          do {
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&ppuStack_50,&UNK_00180212,0xed,6,0,0xffffffff);
            uVar4 = _ZN7android4base10LogMessage6streamEv(&ppuStack_50);
            uVar4 = func_0x0032eb30(uVar4,&UNK_00165d45,0xe);
            uVar4 = func_0x0032eb30(uVar4,&UNK_00161431,0xc);
            uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
            uVar4 = func_0x0032eb30(uVar4,&UNK_00181913,2);
            uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
            uVar4 = func_0x0032eb30(uVar4,&UNK_00181bcb,0xd);
            uVar4 = func_0x0032eb30(uVar4,&UNK_001866e1,0xf);
            uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,uVar9);
            uVar4 = func_0x0032eb30(uVar4,&UNK_0018352a,0x10);
            uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,uVar1);
            func_0x0032eb30(uVar4,&UNK_0017b788,2);
            _ZN7android4base10LogMessageD2Ev(&ppuStack_50);
          } while( true );
        }
        lVar6 = lVar6 + uVar1;
        uVar9 = uVar9 - uVar1;
      }
      uStack_68 = lVar6;
      uStack_60 = uVar9;
      puStack_58 = puVar3;
      ppuStack_50 = &puStack_58;
      puStack_48 = &uStack_68;
      puStack_40 = param_1;
      if (puVar3 < (undefined4 *)param_1[2]) {
        uStack_68._0_4_ = (undefined4)lVar6;
        uStack_68._4_4_ = (undefined4)((ulong)lVar6 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar9;
        uStack_60._4_4_ = (undefined4)(uVar9 >> 0x20);
        *puVar3 = (undefined4)uStack_68;
        puVar3[1] = uStack_68._4_4_;
        puVar3[2] = (undefined4)uStack_60;
        puVar3[3] = uStack_60._4_4_;
        puVar3 = puVar3 + 4;
      }
      else {
        _ZZNSt3__16vectorIN6google8protobuf10TextFormat18ParseLocationRangeENS_9allocatorIS4_EEE12emplace_backIJRKS4_EEERS4_DpOT_ENKUlvE0_clEv
                  (&ppuStack_50);
        puVar3 = puStack_58;
      }
      param_1[1] = (ulong)puVar3;
      uVar8 = uVar8 + 1;
      lVar10 = param_2[3];
      uVar7 = uVar7 + 0x20;
    } while (uVar8 < (ulong)(param_2[4] - lVar10 >> 5));
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x003f357a:
  func_0x00330ca0();
  pcVar2 = (code *)swi(3);
  puVar5 = (ulong *)(*pcVar2)();
  return puVar5;
}


