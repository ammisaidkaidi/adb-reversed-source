// Function: _ZN4mdns10is_enabledEv
// Address: 0040eae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4mdns10is_enabledEv(void)

{
  char *pcVar1;
  bool bVar2;
  
  pcVar1 = (char *)func_0x0099be70(&UNK_0017076e);
  bVar2 = true;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '0')) {
    bVar2 = pcVar1[1] != '\0';
  }
  return bVar2;
}


