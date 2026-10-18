// Function: _ZN11ServiceInfoC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_RKNS0_8optionalI11IPv4AddressEERKNS0_13unordered_setI11IPv6Address15IPv6AddressHashNS0_8equal_toISF_EENS4_ISF_EEEEtRKNS0_6vectorINSN_IhNS4_IhEEEENS4_ISP_EEEE
// Address: 00412060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN11ServiceInfoC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_S8_RKNS0_8optionalI11IPv4AddressEERKNS0_13unordered_setI11IPv6Address15IPv6AddressHashNS0_8equal_toISF_EENS4_ISF_EEEEtRKNS0_6vectorINSN_IhNS4_IhEEEENS4_ISP_EEEE
               (undefined4 *param_1,byte *param_2,byte *param_3,byte *param_4,undefined4 *param_5,
               long param_6,undefined2 param_7,undefined8 param_8)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
  }
  else {
    func_0x00330340(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  if ((*param_3 & 1) == 0) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 4);
    uVar4 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    param_1[6] = *(undefined4 *)param_3;
    param_1[7] = uVar3;
    param_1[8] = uVar4;
    param_1[9] = uVar5;
  }
  else {
    func_0x00330340(param_1 + 6,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  if ((*param_4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    uVar6 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 0xe) = uVar6;
  }
  else {
    func_0x00330340(param_1 + 0xc,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_5 + 1);
  param_1[0x12] = *param_5;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = *(undefined4 *)(param_6 + 0x20);
  if (*(long *)(param_6 + 0x18) != 0) {
    uVar1 = *(ulong *)(param_6 + 8);
    if (uVar1 >> 0x3d != 0) {
      func_0x0032fc40();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = _Znwm(uVar1 * 8);
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    *(ulong *)(param_1 + 0x16) = uVar1;
    if (uVar1 != 0) {
      func_0x0099bdb0(uVar6,0,uVar1 * 8);
    }
    func_0x00401920(param_1 + 0x14,*(undefined8 *)(param_6 + 0x10));
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_6 + 0x18);
  }
  *(undefined2 *)(param_1 + 0x1e) = param_7;
  _ZN11ServiceInfo8ParseTxtERKNSt3__16vectorINS1_IhNS0_9allocatorIhEEEENS2_IS4_EEEE
            (param_1 + 0x20,param_8);
  return;
}


