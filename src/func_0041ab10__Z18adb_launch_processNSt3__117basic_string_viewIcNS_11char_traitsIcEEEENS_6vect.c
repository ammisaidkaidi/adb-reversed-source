// Function: _Z18adb_launch_processNSt3__117basic_string_viewIcNS_11char_traitsIcEEEENS_6vectorINS_12basic_stringIcS2_NS_9allocatorIcEEEENS6_IS8_EEEESt16initializer_listIiE
// Address: 0041ab10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _Z18adb_launch_processNSt3__117basic_string_viewIcNS_11char_traitsIcEEEENS_6vectorINS_12basic_stringIcS2_NS_9allocatorIcEEEENS6_IS8_EEEESt16initializer_listIiE
                (int *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,long param_5,
                long param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  byte ****ppppbVar12;
  byte ***pppbVar13;
  byte ****ppppbVar14;
  byte ****unaff_R13;
  byte ****ppppbVar15;
  long in_FS_OFFSET;
  undefined1 auStack_298 [8];
  long lStack_290;
  int *piStack_288;
  byte ***pppbStack_280;
  undefined1 *puStack_278;
  byte ***pppbStack_270;
  undefined *puStack_268;
  undefined1 auStack_25e [130];
  undefined1 auStack_1dc [130];
  undefined1 auStack_15a [130];
  long lStack_d8;
  byte ***pppbStack_d0;
  long lStack_c8;
  code *apcStack_c0 [2];
  byte **ppbStack_b0;
  byte **ppbStack_a8;
  long *plStack_a0;
  long *plStack_98;
  byte ***pppbStack_88;
  byte ***pppbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long **pplStack_50;
  byte ***pppbStack_48;
  byte ***pppbStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apcStack_c0[0] = (code *)&UNK_0041ab4a;
  ppppbVar12 = param_4;
  uStack_68 = param_2;
  uStack_60 = param_3;
  iVar4 = func_0x0099c240();
  if (iVar4 == 0) {
    pppbStack_88 = (byte ***)0x0;
    pppbStack_80 = (byte ***)0x0;
    uStack_78 = 0;
    ppppbVar14 = &pppbStack_88;
    apcStack_c0[0] = (code *)&UNK_0041abb1;
    func_0x0041aec0(ppppbVar14,((long)param_4[1] - (long)*param_4 >> 3) * -0x5555555555555555 + 1);
    apcStack_c0[0] = (code *)&UNK_0041abbd;
    _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJRNS_17basic_string_viewIcS3_EEEEERS6_DpOT_
              (ppppbVar14,&uStack_68);
    apcStack_c0[0] = (code *)&UNK_0041abde;
    _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPS6_EEEESE_EESD_NSB_IPKS6_EET_T0_l
              (ppppbVar14,pppbStack_80,*param_4,param_4[1],
               ((long)param_4[1] - (long)*param_4 >> 3) * -0x5555555555555555);
    ppbStack_a8 = (byte **)0x0;
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    ppppbVar15 = (byte ****)&ppbStack_a8;
    apcStack_c0[0] = (code *)&UNK_0041ac15;
    func_0x0041b040(ppppbVar15,
                    ((long)pppbStack_80 - (long)pppbStack_88 >> 3) * -0x5555555555555555 + 1);
    ppppbVar12 = (byte ****)pppbStack_88;
    unaff_R13 = (byte ****)pppbStack_80;
    param_4 = ppppbVar15;
    if (pppbStack_88 == pppbStack_80) goto code_r0x0041ac22;
  }
  else {
    *param_1 = iVar4;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
    apcStack_c0[0] = (code *)&UNK_0041ac5e;
    func_0x0099bd00();
  }
  ppppbVar15 = (byte ****)&ppbStack_b0;
  do {
    pplStack_50 = &plStack_58;
    ppbStack_b0 = (byte **)((long)ppppbVar12 + 1);
    if (((ulong)*ppppbVar12 & 1) != 0) {
      ppbStack_b0 = (byte **)ppppbVar12[2];
    }
    plStack_58 = plStack_a0;
    pppbStack_48 = (byte ***)ppppbVar15;
    pppbStack_40 = (byte ***)param_4;
    if (plStack_a0 < plStack_98) {
      *plStack_a0 = (long)ppbStack_b0;
      plStack_a0 = plStack_a0 + 1;
    }
    else {
      apcStack_c0[0] = (code *)&UNK_0041ac7e;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&pplStack_50);
      param_4 = (byte ****)&ppbStack_a8;
      plStack_a0 = plStack_58;
    }
    ppppbVar12 = ppppbVar12 + 3;
    ppppbVar14 = ppppbVar12;
  } while (ppppbVar12 != unaff_R13);
code_r0x0041ac22:
  pplStack_50 = (long **)0x0;
  apcStack_c0[0] = (code *)&UNK_0041ac3a;
  func_0x0041b100(&ppbStack_a8,&pplStack_50);
  ppppbVar12 = (byte ****)0x0;
  if (param_6 != 0) {
    ppppbVar12 = (byte ****)(param_6 << 2);
    ppppbVar14 = (byte ****)0x0;
    do {
      uVar6 = *(uint *)((long)ppppbVar14 + param_5);
      ppppbVar15 = (byte ****)(ulong)uVar6;
      apcStack_c0[0] = (code *)&UNK_0041ad10;
      uVar5 = func_0x0099bf10(ppppbVar15,1);
      if ((uVar5 & 0xfffffffe) != uVar5) {
        apcStack_c0[0] = (code *)&UNK_0041ad28;
        func_0x0099bf10(uVar6,2);
      }
      ppppbVar14 = (byte ****)((long)ppppbVar14 + 4);
    } while (ppppbVar12 != ppppbVar14);
  }
  if (((ulong)*pppbStack_88 & 1) == 0) {
    pppbVar13 = (byte ***)((long)pppbStack_88 + 1);
  }
  else {
    pppbVar13 = (byte ***)pppbStack_88[2];
  }
  apcStack_c0[0] = (code *)&UNK_0041ad39;
  uVar6 = func_0x0099c250(pppbVar13,ppbStack_a8);
  piVar11 = (int *)(ulong)uVar6;
  apcStack_c0[0] = _Z12GetOSVersionv;
  func_0x0099bd80();
  lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_268 = &UNK_0041ad74;
  pppbStack_d0 = (byte ***)ppppbVar12;
  lStack_c8 = param_5;
  apcStack_c0[0] = (code *)&stack0xfffffffffffffff8;
  func_0x0099bdb0(auStack_25e,0,0x186);
  puStack_268 = &UNK_0041ad7c;
  func_0x0099c460(auStack_25e);
  puStack_268 = &UNK_0041ad9e;
  _ZN7android4base12StringPrintfEPKcz(piVar11,&UNK_0018371e,auStack_25e,auStack_1dc,auStack_15a);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d8) {
    return piVar11;
  }
  puStack_268 = &UNK_0041adc1;
  func_0x0099bd00();
  lStack_290 = *(long *)(in_FS_OFFSET + 0x28);
  piStack_288 = piVar11;
  pppbStack_280 = (byte ***)ppppbVar14;
  puStack_278 = auStack_25e;
  pppbStack_270 = (byte ***)ppppbVar15;
  puStack_268 = (undefined *)apcStack_c0;
  uVar7 = func_0x0099c410();
  if (uVar7 == 0xffffffffffffffff) {
    uVar7 = 0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    uVar8 = 0;
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      uVar7 = 0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_298,&UNK_00175765,0x7d,4,0,uVar1);
      uVar10 = _ZN7android4base10LogMessage6streamEv(auStack_298);
      func_0x0032eb30(uVar10,&UNK_0017578b,0x12);
      _ZN7android4base10LogMessageD2Ev(auStack_298);
      *puVar9 = uVar1;
      uVar8 = 0;
    }
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xff;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_290) {
    return (int *)(uVar8 | uVar7);
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar11 = (int *)(*pcVar2)();
  return piVar11;
}


