// Function: _Z23update_transport_statusv
// Address: 003cf400
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z23update_transport_statusv(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  long lStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined *apuStack_b0 [4];
  undefined **ppuStack_90;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *apuStack_58 [4];
  undefined **ppuStack_38;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_58[0] = &UNK_0099e9d8;
  puStack_60 = &UNK_003cf433;
  ppuStack_38 = apuStack_58;
  uVar2 = _Z18iterate_transportsNSt3__18functionIFbPK10atransportEEE(apuStack_58);
  if (ppuStack_38 == apuStack_58) {
    lVar5 = 0x20;
code_r0x003cf44f:
    puStack_60 = &UNK_003cf455;
    (**(code **)(*ppuStack_38 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_38 != (undefined **)0x0) goto code_r0x003cf44f;
  }
  uVar8 = uRam0000000000a00600;
  puStack_60 = &UNK_003cf464;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00600);
  bRam0000000000a00610 = (byte)uVar2;
  bVar6 = bRam0000000000a00610 & bRam0000000000a00611;
  puStack_60 = &UNK_003cf478;
  _ZNSt3__115recursive_mutex6unlockEv(uVar8);
  if (bVar6 == 1) {
    puStack_60 = &UNK_003cf489;
    _ZNSt3__118condition_variable10notify_allEv(uRam0000000000a00608);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return;
  }
  puStack_60 = &UNK_003cf4a6;
  func_0x0099bd00();
  uVar7 = uRam0000000000a00600;
  uStack_68 = uVar8;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = (ulong)CONCAT31((int3)((uint)uVar2 >> 8),bVar6);
  puStack_60 = &stack0xfffffffffffffff8;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00600);
  if (bRam0000000000a00611 == 1) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
      pthread_mutex_unlock(uVar7);
      return;
    }
    goto code_r0x003cf594;
  }
  bRam0000000000a00611 = 1;
  _ZNSt3__115recursive_mutex6unlockEv(uVar7);
  apuStack_b0[0] = &UNK_0099e9d8;
  ppuStack_90 = apuStack_b0;
  uVar3 = _Z18iterate_transportsNSt3__18functionIFbPK10atransportEEE(apuStack_b0);
  uVar7 = (ulong)uVar3;
  if (ppuStack_90 == apuStack_b0) {
    lVar5 = 0x20;
code_r0x003cf549:
    (**(code **)(*ppuStack_90 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (ppuStack_90 != (undefined **)0x0) goto code_r0x003cf549;
  }
  uVar8 = uRam0000000000a00600;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00600);
  bRam0000000000a00610 = (byte)uVar3;
  _ZNSt3__115recursive_mutex6unlockEv(uVar8);
  if ((byte)uVar3 != 0) {
    _ZNSt3__118condition_variable10notify_allEv(uRam0000000000a00608);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return;
  }
code_r0x003cf594:
  func_0x0099bd00();
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_e8 = uRam0000000000a00600;
  uStack_e0 = 1;
  uStack_d0 = uVar7;
  uStack_c8 = uVar8;
  _ZNSt3__15mutex4lockEv();
  uVar1 = uRam0000000000a00608;
  lStack_f0 = _ZNSt3__16chrono12steady_clock3nowEv();
  lStack_f0 = lStack_f0 + 3000000000;
  do {
    if ((bRam0000000000a00611 == 1) && (bRam0000000000a00610 != 0)) break;
    iVar4 = func_0x003d06b0(uVar1,&uStack_e8,&lStack_f0);
  } while (iVar4 != 1);
  if ((char)uStack_e0 == '\x01') {
    _ZNSt3__115recursive_mutex6unlockEv(uStack_e8);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_d8) {
    func_0x0099bd00();
    free();
    return;
  }
  return;
}


