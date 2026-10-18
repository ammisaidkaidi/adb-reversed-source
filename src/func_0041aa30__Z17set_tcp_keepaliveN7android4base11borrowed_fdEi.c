// Function: _Z17set_tcp_keepaliveN7android4base11borrowed_fdEi
// Address: 0041aa30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


int * _Z17set_tcp_keepaliveN7android4base11borrowed_fdEi(int *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  byte ****ppppbVar11;
  undefined8 extraout_RDX;
  byte ****ppppbVar12;
  undefined8 uVar13;
  byte ***pppbVar14;
  long lVar15;
  long in_R9;
  byte ****ppppbVar16;
  byte ****unaff_R13;
  byte ****ppppbVar17;
  long in_FS_OFFSET;
  undefined1 auStack_2c0 [8];
  long lStack_2b8;
  int *piStack_2b0;
  byte ***pppbStack_2a8;
  undefined1 *puStack_2a0;
  byte ***pppbStack_298;
  undefined *puStack_290;
  undefined1 auStack_286 [130];
  undefined1 auStack_204 [130];
  undefined1 auStack_182 [130];
  long lStack_100;
  byte ***pppbStack_f8;
  long lStack_f0;
  code *apcStack_e8 [2];
  byte **ppbStack_d8;
  byte **ppbStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  byte ***pppbStack_b0;
  byte ***pppbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long **pplStack_78;
  byte ***pppbStack_70;
  byte ***pppbStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined *puStack_30;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  byte ***pppbStack_18;
  
  pppbStack_18 = *(byte ****)(in_FS_OFFSET + 0x28);
  uStack_20 = (uint)(0 < param_2);
  uVar13 = 1;
  lVar15 = 4;
  puStack_30 = &UNK_0041aa6e;
  piVar10 = param_1;
  iStack_1c = param_2;
  iVar4 = func_0x0099bf50(param_1,1,9,&uStack_20);
  if (iVar4 == 0) {
    if (uStack_20 != 0) {
      piVar10 = (int *)((ulong)param_1 & 0xffffffff);
      uVar13 = 6;
      lVar15 = 4;
      puStack_30 = &UNK_0041aaab;
      iVar4 = func_0x0099bf50(piVar10,6,4,&iStack_1c);
      if (iVar4 == 0) {
        piVar10 = (int *)((ulong)param_1 & 0xffffffff);
        uVar13 = 6;
        lVar15 = 4;
        puStack_30 = &UNK_0041aaca;
        iVar4 = func_0x0099bf50(piVar10,6,5,&iStack_1c);
        if (iVar4 == 0) {
          uStack_24 = 10;
          piVar10 = (int *)((ulong)param_1 & 0xffffffff);
          uVar13 = 6;
          lVar15 = 4;
          puStack_30 = &UNK_0041aaf0;
          iVar4 = func_0x0099bf50(piVar10,6,6,&uStack_24);
          piVar7 = (int *)(ulong)(iVar4 == 0);
          goto code_r0x0041aa74;
        }
      }
      goto code_r0x0041aa72;
    }
    piVar7 = (int *)0x1;
  }
  else {
code_r0x0041aa72:
    piVar7 = (int *)0x0;
  }
code_r0x0041aa74:
  ppppbVar12 = *(byte *****)(in_FS_OFFSET + 0x28);
  if (ppppbVar12 == (byte ****)pppbStack_18) {
    return piVar7;
  }
  puStack_30 = &UNK_0041ab06;
  func_0x0099bd00();
  lStack_60 = *(long *)(in_FS_OFFSET + 0x28);
  apcStack_e8[0] = (code *)&UNK_0041ab4a;
  ppppbVar11 = ppppbVar12;
  uStack_90 = uVar13;
  uStack_88 = extraout_RDX;
  uStack_58 = (ulong)param_1 & 0xffffffff;
  puStack_30 = &stack0xfffffffffffffff8;
  iVar4 = func_0x0099c240();
  if (iVar4 == 0) {
    pppbStack_b0 = (byte ***)0x0;
    pppbStack_a8 = (byte ***)0x0;
    uStack_a0 = 0;
    ppppbVar16 = &pppbStack_b0;
    apcStack_e8[0] = (code *)&UNK_0041abb1;
    func_0x0041aec0(ppppbVar16,
                    ((long)ppppbVar12[1] - (long)*ppppbVar12 >> 3) * -0x5555555555555555 + 1);
    apcStack_e8[0] = (code *)&UNK_0041abbd;
    _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE12emplace_backIJRNS_17basic_string_viewIcS3_EEEEERS6_DpOT_
              (ppppbVar16,&uStack_90);
    apcStack_e8[0] = (code *)&UNK_0041abde;
    _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPS6_EEEESE_EESD_NSB_IPKS6_EET_T0_l
              (ppppbVar16,pppbStack_a8,*ppppbVar12,ppppbVar12[1],
               ((long)ppppbVar12[1] - (long)*ppppbVar12 >> 3) * -0x5555555555555555);
    ppbStack_d0 = (byte **)0x0;
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    ppppbVar17 = (byte ****)&ppbStack_d0;
    apcStack_e8[0] = (code *)&UNK_0041ac15;
    func_0x0041b040(ppppbVar17,
                    ((long)pppbStack_a8 - (long)pppbStack_b0 >> 3) * -0x5555555555555555 + 1);
    ppppbVar11 = (byte ****)pppbStack_b0;
    unaff_R13 = (byte ****)pppbStack_a8;
    ppppbVar12 = ppppbVar17;
    if (pppbStack_b0 == pppbStack_a8) goto code_r0x0041ac22;
  }
  else {
    *piVar10 = iVar4;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_60) {
      return piVar10;
    }
    apcStack_e8[0] = (code *)&UNK_0041ac5e;
    func_0x0099bd00();
  }
  ppppbVar17 = (byte ****)&ppbStack_d8;
  do {
    pplStack_78 = &plStack_80;
    ppbStack_d8 = (byte **)((long)ppppbVar11 + 1);
    if (((ulong)*ppppbVar11 & 1) != 0) {
      ppbStack_d8 = (byte **)ppppbVar11[2];
    }
    plStack_80 = plStack_c8;
    pppbStack_70 = (byte ***)ppppbVar17;
    pppbStack_68 = (byte ***)ppppbVar12;
    if (plStack_c8 < plStack_c0) {
      *plStack_c8 = (long)ppbStack_d8;
      plStack_c8 = plStack_c8 + 1;
    }
    else {
      apcStack_e8[0] = (code *)&UNK_0041ac7e;
      _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
                (&pplStack_78);
      ppppbVar12 = (byte ****)&ppbStack_d0;
      plStack_c8 = plStack_80;
    }
    ppppbVar11 = ppppbVar11 + 3;
    ppppbVar16 = ppppbVar11;
  } while (ppppbVar11 != unaff_R13);
code_r0x0041ac22:
  pplStack_78 = (long **)0x0;
  apcStack_e8[0] = (code *)&UNK_0041ac3a;
  func_0x0041b100(&ppbStack_d0,&pplStack_78);
  ppppbVar12 = (byte ****)0x0;
  if (in_R9 != 0) {
    ppppbVar12 = (byte ****)(in_R9 << 2);
    ppppbVar16 = (byte ****)0x0;
    do {
      uVar6 = *(uint *)((long)ppppbVar16 + lVar15);
      ppppbVar17 = (byte ****)(ulong)uVar6;
      apcStack_e8[0] = (code *)&UNK_0041ad10;
      uVar5 = func_0x0099bf10(ppppbVar17,1);
      if ((uVar5 & 0xfffffffe) != uVar5) {
        apcStack_e8[0] = (code *)&UNK_0041ad28;
        func_0x0099bf10(uVar6,2);
      }
      ppppbVar16 = (byte ****)((long)ppppbVar16 + 4);
    } while (ppppbVar12 != ppppbVar16);
  }
  if (((ulong)*pppbStack_b0 & 1) == 0) {
    pppbVar14 = (byte ***)((long)pppbStack_b0 + 1);
  }
  else {
    pppbVar14 = (byte ***)pppbStack_b0[2];
  }
  apcStack_e8[0] = (code *)&UNK_0041ad39;
  uVar6 = func_0x0099c250(pppbVar14,ppbStack_d0);
  piVar10 = (int *)(ulong)uVar6;
  apcStack_e8[0] = _Z12GetOSVersionv;
  func_0x0099bd80();
  lStack_100 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_290 = &UNK_0041ad74;
  pppbStack_f8 = (byte ***)ppppbVar12;
  lStack_f0 = lVar15;
  apcStack_e8[0] = (code *)&puStack_30;
  func_0x0099bdb0(auStack_286,0,0x186);
  puStack_290 = &UNK_0041ad7c;
  func_0x0099c460(auStack_286);
  puStack_290 = &UNK_0041ad9e;
  _ZN7android4base12StringPrintfEPKcz(piVar10,&UNK_0018371e,auStack_286,auStack_204,auStack_182);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_100) {
    return piVar10;
  }
  puStack_290 = &UNK_0041adc1;
  func_0x0099bd00();
  lStack_2b8 = *(long *)(in_FS_OFFSET + 0x28);
  piStack_2b0 = piVar10;
  pppbStack_2a8 = (byte ***)ppppbVar16;
  puStack_2a0 = auStack_286;
  pppbStack_298 = (byte ***)ppppbVar17;
  puStack_290 = (undefined *)apcStack_e8;
  uVar8 = func_0x0099c410();
  if (uVar8 == 0xffffffffffffffff) {
    piVar10 = (int *)0x0;
    cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar9;
      piVar10 = (int *)0x0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_2c0,&UNK_00175765,0x7d,4,0,uVar1);
      uVar13 = _ZN7android4base10LogMessage6streamEv(auStack_2c0);
      func_0x0032eb30(uVar13,&UNK_0017578b,0x12);
      _ZN7android4base10LogMessageD2Ev(auStack_2c0);
      *puVar9 = uVar1;
    }
  }
  else {
    piVar10 = (int *)(uVar8 & 0xff);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_2b8) {
    return piVar10;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  piVar10 = (int *)(*pcVar2)();
  return piVar10;
}


