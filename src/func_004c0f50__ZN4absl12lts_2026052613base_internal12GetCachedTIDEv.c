// Function: _ZN4absl12lts_2026052613base_internal12GetCachedTIDEv
// Address: 004c0f50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 _ZN4absl12lts_2026052613base_internal12GetCachedTIDEv(void)

{
  long lVar1;
  undefined4 uVar2;
  long *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -0xc4) != '\x01') {
    uVar2 = func_0x0099c620(0xba);
    *(undefined4 *)(lVar1 + -200) = uVar2;
    *(undefined1 *)(lVar1 + -0xc4) = 1;
  }
  return *(undefined4 *)(lVar1 + -200);
}


