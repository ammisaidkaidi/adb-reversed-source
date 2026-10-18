// Function: _ZN4absl12lts_2026052621StrContainsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc
// Address: 004ebad0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052621StrContainsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc
                (char *param_1,long param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 extraout_RDX;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  char acStack_23 [3];
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = _ZN4absl12lts_2026052614ascii_internal8kToLowerE;
  uVar4 = 0;
  if (_ZN4absl12lts_2026052614ascii_internal8kToUpperE[param_3] ==
      _ZN4absl12lts_2026052614ascii_internal8kToLowerE[param_3]) {
    puVar8 = (undefined1 *)(ulong)(uint)(int)(char)param_3;
    pcVar9 = param_1;
    lVar2 = func_0x0099c070(param_1,puVar8,param_2);
    puVar5 = (undefined1 *)
             CONCAT71((int7)((ulong)uVar4 >> 8),lVar2 - (long)param_1 != -1 && lVar2 != 0);
  }
  else {
    acStack_23[2] = 0;
    pcVar9 = acStack_23;
    acStack_23[0] = _ZN4absl12lts_2026052614ascii_internal8kToLowerE[param_3];
    acStack_23[1] = _ZN4absl12lts_2026052614ascii_internal8kToUpperE[param_3];
    puVar3 = (undefined1 *)func_0x0099bcf0(pcVar9);
    puVar5 = (undefined1 *)0x0;
    if ((param_2 != 0) && (puVar3 != (undefined1 *)0x0)) {
      pcVar10 = param_1 + param_2;
      pcVar6 = param_1;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          pcVar7 = pcVar6;
          if (*pcVar6 == acStack_23[(long)puVar8]) goto code_r0x004ebb79;
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar10;
      } while (pcVar6 != pcVar10);
code_r0x004ebb79:
      puVar5 = (undefined1 *)
               CONCAT71((int7)((ulong)((long)pcVar7 - (long)param_1) >> 8),
                        (long)pcVar7 - (long)param_1 != -1 && pcVar7 != pcVar10);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
    return (ulong)puVar5 & 0xffffffff;
  }
  func_0x0099bd00();
  if (puVar5 <= puVar8) {
    iVar1 = _ZN4absl12lts_2026052616strings_internal10memcasecmpEPKcS3_m
                      (pcVar9 + ((long)puVar8 - (long)puVar5),extraout_RDX,puVar5);
    return (ulong)(iVar1 == 0);
  }
  return 0;
}


