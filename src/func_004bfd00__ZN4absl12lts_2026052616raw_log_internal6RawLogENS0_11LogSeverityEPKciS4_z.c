// Function: _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
// Address: 004bfd00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  undefined4 uVar1;
  bool bVar2;
  char in_AL;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 auStack_ce8 [32];
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined4 uStack_cb8;
  undefined8 uStack_ca8;
  undefined8 uStack_c98;
  undefined8 uStack_c88;
  undefined8 uStack_c78;
  undefined8 uStack_c68;
  undefined8 uStack_c58;
  undefined8 uStack_c48;
  undefined1 *puStack_c30;
  undefined4 uStack_c28;
  uint uStack_c24;
  undefined1 *puStack_c20;
  undefined8 uStack_c18;
  undefined1 *puStack_c10;
  undefined1 *puStack_c08;
  undefined1 auStack_bf8 [3000];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  if (in_AL != '\0') {
    uStack_cb8 = param_1;
    uStack_ca8 = param_2;
    uStack_c98 = param_3;
    uStack_c88 = param_4;
    uStack_c78 = param_5;
    uStack_c68 = param_6;
    uStack_c58 = param_7;
    uStack_c48 = param_8;
  }
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_c08 = auStack_ce8;
  uStack_c18 = 0x3000000020;
  puStack_c10 = &stack0x00000008;
  uStack_cc8 = param_13;
  uStack_cc0 = param_14;
  func_0x0099bdb0(auStack_bf8,0,3000);
  uStack_c24 = 3000;
  puStack_c20 = auStack_bf8;
  cVar3 = (*pcRam00000000009fb7d0)(param_9,param_10,param_11,&puStack_c20,&uStack_c24);
  puStack_c30 = puStack_c20;
  if (cVar3 == '\0') goto code_r0x004bfef4;
  if ((long)(int)uStack_c24 < 0) {
code_r0x004bfe8e:
    func_0x004bfff0(&puStack_c20,&uStack_c24,&UNK_0016c5ec,&UNK_001ff330);
  }
  else {
    iVar4 = func_0x0099c630(puStack_c20,(long)(int)uStack_c24,1,0xffffffffffffffff,param_12,
                            &uStack_c18);
    bVar2 = (int)uStack_c24 < iVar4;
    iVar6 = uStack_c24 - 0x1a;
    if (uStack_c24 < 0x1a) {
      iVar6 = 0;
    }
    if (!bVar2 && iVar4 >= 0) {
      iVar6 = iVar4;
    }
    uStack_c24 = uStack_c24 - iVar6;
    puStack_c20 = puStack_c20 + iVar6;
    if (bVar2 || iVar4 < 0) goto code_r0x004bfe8e;
    func_0x004bfff0(&puStack_c20,&uStack_c24,&UNK_0017a0d6);
  }
  lVar7 = (long)puStack_c20 - (long)auStack_bf8;
  if (lVar7 != 0) {
    puVar5 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar5;
    uStack_c28 = param_11;
    func_0x0099c620(1,2,auStack_bf8,lVar7);
    *puVar5 = uVar1;
    param_11 = uStack_c28;
  }
code_r0x004bfef4:
  if (param_9 == 3) {
    (*pcRam00000000009fb7e0)(param_10,param_11,auStack_bf8,puStack_c30,auStack_40);
    func_0x0099c600();
  }
  else if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  return 1;
}


