// Function: _Z14is_usb_enabledv
// Address: 003cd140
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _Z14is_usb_enabledv(void)

{
  char *pcVar1;
  bool bVar2;
  
  pcVar1 = (char *)func_0x0099be70(&UNK_001770d0);
  bVar2 = true;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '0')) {
    bVar2 = pcVar1[1] != '\0';
  }
  return bVar2;
}


