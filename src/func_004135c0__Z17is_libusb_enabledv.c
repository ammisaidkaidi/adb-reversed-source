// Function: _Z17is_libusb_enabledv
// Address: 004135c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _Z17is_libusb_enabledv(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)func_0x0099be70(&UNK_0015c7b0);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '1')) {
    return pcVar1[1] == '\0';
  }
  return false;
}


