// Function: _Z20update_mdns_trackersv
// Address: 003fea10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z20update_mdns_trackersv(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined4 *puStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined1 uStack_84;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *apuStack_48 [4];
  undefined **ppuStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_48[0] = &UNK_0099f0b0;
  ppuStack_28 = apuStack_48;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(apuStack_48);
  ppuVar9 = ppuStack_28;
  if (ppuStack_28 == apuStack_48) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (ppuStack_28 == (undefined **)0x0) goto code_r0x003fea61;
  }
  (**(code **)(*ppuStack_28 + lVar3))();
code_r0x003fea61:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_18) {
    return;
  }
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack_78 = apuStack_48;
  lVar3 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    lVar3 = _Z19fdevent_get_ambientv();
    lVar4 = _ZN7android4base11GetThreadIdEv();
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != lVar4) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&puStack_b0,&UNK_0016146a,0x76,6,0,0xffffffff);
        uVar5 = _ZN7android4base10LogMessage6streamEv(&puStack_b0);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00162e7f,0x29);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0015aef8,2);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00183451,0x1c);
        uVar5 = func_0x0032eb30(uVar5,&UNK_0017ed76,0x2c);
        uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,lVar3);
        uVar5 = func_0x0032eb30(uVar5,&UNK_00165f20,0x1f);
        uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,lVar4);
        func_0x0032eb30(uVar5,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&puStack_b0);
      } while( true );
    }
  }
  puVar1 = ppuVar9[2];
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  if ((*param_2 & 1) == 0) {
    uVar7 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  _ZN5Block6resizeEm(&puStack_b0,uVar7 + 4);
  uStack_84 = 0;
  uStack_88 = 0;
  if ((*param_2 & 1) == 0) {
    uVar6 = (uint)(*param_2 >> 1);
  }
  else {
    uVar6 = *(uint *)(param_2 + 8);
  }
  func_0x0099c030(&uStack_88,5,&UNK_00179ee3,uVar6);
  *puStack_b0 = uStack_88;
  bVar10 = (*param_2 & 1) != 0;
  pbVar8 = param_2 + 1;
  if (bVar10) {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  uVar7 = (ulong)(*param_2 >> 1);
  if (bVar10) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  func_0x0099bda0(puStack_b0 + 1,pbVar8,uVar7);
  uStack_b8 = uStack_98;
  puStack_d0 = puStack_b0;
  puStack_b0 = (undefined4 *)0x0;
  uStack_c8 = (undefined4)uStack_a8;
  uStack_c4 = uStack_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  (**(code **)(puVar1 + 0x18))(puVar1,&puStack_d0);
  puVar2 = puStack_d0;
  puStack_d0 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    _ZdaPvSt11align_val_t();
  }
  puVar2 = puStack_b0;
  puStack_b0 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_80) {
    func_0x0099bd00();
    free();
    return;
  }
  return;
}


