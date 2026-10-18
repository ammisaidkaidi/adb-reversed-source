// Function: _ZN17ProtoBinaryToTextIN3adb5proto12AppProcessesEE16OnStdoutReceivedEPKcm
// Address: 0033c380
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN17ProtoBinaryToTextIN3adb5proto12AppProcessesEE16OnStdoutReceivedEPKcm
          (undefined8 *param_1,undefined1 *param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = param_1 + 4;
  if (param_3 == 0) {
    puVar4 = (undefined1 *)param_1[5];
  }
  else {
    puVar4 = (undefined1 *)param_1[5];
    do {
      uStack_88 = puVar4;
      puStack_68 = &uStack_88;
      puStack_60 = param_2;
      plStack_58 = plVar1;
      if (puVar4 < (undefined1 *)param_1[6]) {
        *puVar4 = *param_2;
        puVar4 = puVar4 + 1;
      }
      else {
        _ZZNSt3__16vectorIcNS_9allocatorIcEEE12emplace_backIJRKcEEERcDpOT_ENKUlvE0_clEv(&puStack_68)
        ;
        puVar4 = uStack_88;
      }
      param_1[5] = puVar4;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (3 < (ulong)((long)puVar4 - (long)param_1[4])) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = (undefined1 *)(ulong)CONCAT41(*(undefined4 *)param_1[4],8);
    uVar5 = func_0x0099c050((long)&uStack_88 + 1,0,0x10);
    uVar8 = uVar5 + 4;
    if (uVar8 <= (ulong)(param_1[5] - param_1[4])) {
      uStack_48 = 0;
      uStack_40 = 0;
      plStack_58 = (long *)0x0;
      uStack_50 = 0;
      puStack_68 = (undefined8 *)0x0;
      puStack_60 = (undefined1 *)0x0;
      _ZN3adb5proto12AppProcessesC1EPN6google8protobuf5ArenaE(&puStack_68,0);
      if (0xfffffffffffffff6 < uVar5) goto code_r0x0033c66d;
      lVar9 = *plVar1;
      lVar3 = (long)&uStack_a8 + 1;
      if (uVar5 < 0x17) {
        uStack_a8 = CONCAT71(uStack_a8._1_7_,(char)uVar5 * '\x02');
        lVar6 = lVar3;
      }
      else {
        lVar10 = 0x1a;
        if ((uVar5 | 7) != 0x17) {
          lVar10 = (uVar5 | 7) + 1;
        }
        lVar6 = _Znwm(lVar10);
        uStack_a8 = lVar10 + 1;
        uStack_a0 = uVar5;
        lStack_98 = lVar6;
      }
      func_0x0099bd90(lVar6,lVar9 + 4,uVar5);
      *(undefined1 *)(lVar6 + uVar5) = 0;
      uVar5 = uStack_a8 >> 1 & 0x7f;
      lVar9 = lVar3;
      if ((uStack_a8 & 1) != 0) {
        uVar5 = uStack_a0;
        lVar9 = lStack_98;
      }
      _ZN6google8protobuf11MessageLite15ParseFromStringENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                (&puStack_68,lVar9,uVar5);
      if ((uStack_a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_98,uStack_a8 & 0xfffffffffffffffe);
      }
      uStack_a8 = 0;
      uStack_a0 = 0;
      lStack_98 = 0;
      _ZN6google8protobuf10TextFormat13PrintToStringERKNS0_7MessageEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
                (&puStack_68,&uStack_a8);
      lVar10 = param_1[5];
      lVar9 = param_1[4] + uVar8;
      func_0x0099bd90(param_1[4],lVar9,lVar10 - lVar9);
      param_1[5] = lVar10 - uVar8;
      bVar11 = (*(byte *)(param_1 + 7) & 1) != 0;
      lVar9 = (long)param_1 + 0x39;
      if (bVar11) {
        lVar9 = param_1[9];
      }
      uVar8 = (ulong)(*(byte *)(param_1 + 7) >> 1);
      if (bVar11) {
        uVar8 = param_1[8];
      }
      _ZN32StandardStreamsCallbackInterface6SendToEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEP8_IO_FILEPKcmb
                (param_1[1],_stdout,lVar9,uVar8,*(undefined1 *)(param_1 + 3));
      uVar8 = uStack_a8 >> 1 & 0x7f;
      if ((uStack_a8 & 1) != 0) {
        uVar8 = uStack_a0;
        lVar3 = lStack_98;
      }
      _ZN32StandardStreamsCallbackInterface6SendToEPNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEP8_IO_FILEPKcmb
                (param_1[1],_stdout,lVar3,uVar8,*(undefined1 *)(param_1 + 3));
      if (param_1[4] != param_1[5]) {
        (**(code **)*param_1)(param_1,&UNK_00162ac9,0);
      }
      if ((uStack_a8 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_98,uStack_a8 & 0xfffffffffffffffe);
      }
      _ZN3adb5proto12AppProcessesD2Ev(&puStack_68);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return CONCAT71((int7)((ulong)*(long *)(in_FS_OFFSET + 0x28) >> 8),1);
  }
  func_0x0099bd00();
code_r0x0033c66d:
  func_0x0032e8f0();
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}


