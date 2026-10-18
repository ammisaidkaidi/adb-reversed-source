// Function: _Z9ParseUintIjEbPT_NSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPS6_
// Address: 003d0300
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z9ParseUintIjEbPT_NSt3__117basic_string_viewIcNS2_11char_traitsIcEEEEPS6_
                (int *param_1,char *param_2,long param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = param_2 + param_3;
  pcVar10 = param_2;
  pcVar11 = pcVar1;
  if (param_3 == 0) {
code_r0x003d0346:
    if ((pcVar10 == pcVar1) || (pcVar11 = pcVar10, 9 < (byte)(*pcVar10 - 0x30U)))
    goto code_r0x003d048a;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    lVar6 = 10;
    while (cVar2 = *pcVar10, 0xf5 < (byte)(cVar2 - 0x3aU)) {
      pcVar10 = pcVar10 + 1;
      *(uint *)((long)&uStack_40 + lVar6 * 4 + 4) = (uint)(byte)(cVar2 - 0x30);
      lVar6 = lVar6 + -1;
      if ((lVar6 == 0) || (pcVar10 == pcVar1)) break;
    }
    lVar8 = lVar6 << 0x20;
    uVar7 = lVar8 >> 0x1e;
    uVar9 = *(uint *)((long)&uStack_38 + uVar7);
    if (((((int)lVar6 < 8) &&
         ((((uVar9 = uVar9 + *(int *)((long)&uStack_38 + uVar7 + 4) * 10, uVar7 < 0x1c &&
            (uVar9 = uVar9 + *(int *)((long)&uStack_30 + uVar7) * 100, uVar7 < 0x18)) &&
           (uVar9 = uVar9 + *(int *)((long)&uStack_30 + uVar7 + 4) * 1000, uVar7 < 0x14)) &&
          ((uVar9 = uVar9 + *(int *)((long)&uStack_28 + uVar7) * 10000, uVar7 < 0x10 &&
           (uVar9 = uVar9 + *(int *)((long)&uStack_28 + uVar7 + 4) * 100000, uVar7 < 0xc)))))) &&
        (uVar9 = uVar9 + *(int *)((long)&uStack_20 + uVar7) * 1000000, uVar7 < 8)) &&
       (uVar9 = uVar9 + *(int *)((long)&uStack_20 + uVar7 + 4) * 10000000, lVar8 == 0)) {
      uVar9 = (int)uStack_18 * 100000000 + uVar9;
    }
    lVar6 = (uStack_18 >> 0x20) * (ulong)*(uint *)(&UNK_0018ee30 + (0x900000000 - lVar8 >> 0x1e));
    uVar4 = (uint)lVar6;
    pcVar11 = pcVar10 + -(ulong)((int)((ulong)lVar6 >> 0x20) != 0);
    if (pcVar11 != pcVar1) {
      pcVar10 = (char *)0x0;
      if (((byte)(*pcVar11 - 0x30U) < 10) || (CARRY4(uVar9,uVar4))) goto code_r0x003d04c2;
code_r0x003d04a8:
      iVar5 = uVar4 + uVar9;
      goto joined_r0x003d04ad;
    }
    pcVar10 = (char *)(ulong)(uVar9 + uVar4);
    if (!CARRY4(uVar9,uVar4)) goto code_r0x003d04a8;
  }
  else {
    do {
      if (*pcVar10 != '0') goto code_r0x003d0346;
      param_3 = param_3 + -1;
      pcVar10 = pcVar10 + 1;
    } while (param_3 != 0);
code_r0x003d048a:
    iVar5 = 0;
    pcVar10 = pcVar11;
    if (pcVar11 != param_2) {
joined_r0x003d04ad:
      if ((param_4 != (undefined8 *)0x0) || (pcVar11 == pcVar1)) {
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = pcVar11;
          param_4[1] = (long)pcVar1 - (long)pcVar11;
        }
        *param_1 = iVar5;
        pcVar10 = (char *)CONCAT71((int7)((ulong)pcVar10 >> 8),1);
        goto code_r0x003d04c2;
      }
    }
  }
  pcVar10 = (char *)0x0;
code_r0x003d04c2:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return (ulong)pcVar10 & 0xffffffff;
  }
  uStack_40 = &UNK_003d04de;
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}


