// Function: _ZN29AdbServerStateStreamsCallback4DoneEi
// Address: 0033c750
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _ZN29AdbServerStateStreamsCallback4DoneEi(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  uVar4 = _stdout;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
    if (3 < uVar5) goto code_r0x0033c786;
code_r0x0033c7d6:
    if ((bVar1 & 1) == 0) {
      param_1 = param_1 + 0x21;
    }
    else {
      param_1 = *(long *)(param_1 + 0x30);
    }
    func_0x0099bd40(param_1,1,uVar5,_stdout);
    func_0x0099bd50(uVar4);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x28);
    if (uVar5 < 4) goto code_r0x0033c7d6;
code_r0x0033c786:
    uStack_c8 = 0;
    uStack_c0 = 0;
    lStack_b8 = 0;
    uVar5 = uVar5 - 4;
    if (0xfffffffffffffff6 < uVar5) goto code_r0x0033c9ba;
    lVar7 = *(long *)(param_1 + 0x30);
    lVar3 = (long)&uStack_c8 + 1;
    if (uVar5 < 0x17) {
      uStack_c8 = (ulong)(byte)((char)uVar5 * '\x02');
    }
    else {
      lVar6 = 0x1a;
      if ((uVar5 | 7) != 0x17) {
        lVar6 = (uVar5 | 7) + 1;
      }
      lVar3 = _Znwm(lVar6);
      uStack_c8 = lVar6 + 1;
      uStack_c0 = uVar5;
      lStack_b8 = lVar3;
    }
    if ((bVar1 & 1) == 0) {
      lVar7 = param_1 + 0x21;
    }
    func_0x0099bd90(lVar3,lVar7 + 4,uVar5);
    *(undefined1 *)(lVar3 + uVar5) = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_48 = 0;
    _ZN3adb5proto15AdbServerStatusC1EPN6google8protobuf5ArenaE(&uStack_a8,0);
    uVar5 = uStack_c8 >> 1 & 0x7f;
    lVar3 = (long)&uStack_c8 + 1;
    if ((uStack_c8 & 1) != 0) {
      uVar5 = uStack_c0;
      lVar3 = lStack_b8;
    }
    _ZN6google8protobuf11MessageLite15ParseFromStringENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (&uStack_a8,lVar3,uVar5);
    uStack_e8 = 0;
    uStack_e0 = 0;
    lStack_d8 = 0;
    _ZN6google8protobuf10TextFormat13PrintToStringERKNS0_7MessageEPNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
              (&uStack_a8,&uStack_e8);
    uVar4 = _stdout;
    uVar5 = uStack_e8 >> 1 & 0x7f;
    lVar3 = (long)&uStack_e8 + 1;
    if ((uStack_e8 & 1) != 0) {
      uVar5 = uStack_e0;
      lVar3 = lStack_d8;
    }
    func_0x0099bd40(lVar3,1,uVar5,_stdout);
    func_0x0099bd50(uVar4);
    if ((uStack_e8 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_d8,uStack_e8 & 0xfffffffffffffffe);
    }
    _ZN3adb5proto15AdbServerStatusD2Ev(&uStack_a8);
    if ((uStack_c8 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_b8,uStack_c8 & 0xfffffffffffffffe);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return 1;
  }
  func_0x0099bd00();
code_r0x0033c9ba:
  func_0x0032e8f0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}


