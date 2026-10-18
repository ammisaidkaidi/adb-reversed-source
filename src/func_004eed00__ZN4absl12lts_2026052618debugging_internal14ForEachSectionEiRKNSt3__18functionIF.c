// Function: _ZN4absl12lts_2026052618debugging_internal14ForEachSectionEiRKNSt3__18functionIFbNS2_17basic_string_viewIcNS2_11char_traitsIcEEEERK10Elf64_ShdrEEE
// Address: 004eed00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004eedb1: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004eee8d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004eedb6) */
/* WARNING: Removing unreachable block (ram,0x004eedc0) */
/* WARNING: Removing unreachable block (ram,0x004eedce) */
/* WARNING: Removing unreachable block (ram,0x004eef45) */
/* WARNING: Removing unreachable block (ram,0x004eee20) */
/* WARNING: Removing unreachable block (ram,0x004eee31) */
/* WARNING: Removing unreachable block (ram,0x004eee92) */
/* WARNING: Removing unreachable block (ram,0x004eef6c) */
/* WARNING: Removing unreachable block (ram,0x004eee9c) */
/* WARNING: Removing unreachable block (ram,0x004eeee9) */
/* WARNING: Removing unreachable block (ram,0x004eef12) */
/* WARNING: Removing unreachable block (ram,0x004eef6f) */
/* WARNING: Removing unreachable block (ram,0x004eef2a) */
/* WARNING: Removing unreachable block (ram,0x004eee50) */
/* WARNING: Removing unreachable block (ram,0x004eef43) */
/* WARNING: Removing unreachable block (ram,0x004eef48) */
/* WARNING: Removing unreachable block (ram,0x004eef74) */
/* WARNING: Removing unreachable block (ram,0x004eef79) */
/* WARNING: Removing unreachable block (ram,0x004eef57) */
/* WARNING: Removing unreachable block (ram,0x004ef043) */

ulong _ZN4absl12lts_2026052618debugging_internal14ForEachSectionEiRKNSt3__18functionIFbNS2_17basic_string_viewIcNS2_11char_traitsIcEEEERK10Elf64_ShdrEEE
                (undefined4 param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [12];
  undefined4 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  auStack_a8[10] = 0;
  auStack_a8[0xb] = 0;
  auStack_a8[8] = 0;
  auStack_a8[9] = 0;
  auStack_a8[6] = 0;
  auStack_a8[7] = 0;
  auStack_a8[4] = 0;
  auStack_a8[5] = 0;
  auStack_a8[2] = 0;
  auStack_a8[3] = 0;
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  uStack_48 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puVar4 = &uStack_e8;
  lVar5 = 0;
  uVar3 = 0;
  do {
    while (lVar5 < lStack_148 || lStack_140 <= lVar5) {
      lStack_148 = 0;
      lStack_140 = 0;
      lVar2 = func_0x0099c7e0(param_1,auStack_a8,100,lVar5);
      if (lVar2 < 0) {
        piVar1 = (int *)func_0x0099bce0();
        if (*piVar1 != 4) {
          _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                    (1,&UNK_0018840c,0x206,&UNK_00159b2d);
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVar2 == 0) {
          return uVar3;
        }
        lStack_140 = lVar2 + lVar5;
        lStack_148 = lVar5;
      }
    }
    uVar6 = lStack_140 - lVar5;
    if (0x40 - uVar3 <= (ulong)(lStack_140 - lVar5)) {
      uVar6 = 0x40 - uVar3;
    }
    func_0x0099bda0(puVar4,(lVar5 - lStack_148) + (long)auStack_a8,uVar6);
    puVar4 = (undefined8 *)((long)puVar4 + uVar6);
    uVar3 = uVar3 + uVar6;
    lVar5 = lVar5 + uVar6;
  } while (uVar3 < 0x40);
  return uVar3;
}


