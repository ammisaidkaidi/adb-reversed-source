// Function: _ZN13ShellProtocol4ReadEv
// Address: 0036b7b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN13ShellProtocol4ReadEv(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 0xf);
  if (uVar2 == 0) {
    cVar1 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
                      (*(undefined4 *)(param_1 + 8),param_1 + 0xc,5);
    if (cVar1 != '\0') {
      uVar2 = (ulong)*(uint *)(param_1 + 0xd);
      *(ulong *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 0xf) = uVar2;
      *(undefined8 *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 7) = 0;
      goto code_r0x0036b7f0;
    }
code_r0x0036b835:
    uVar3 = 0;
  }
  else {
code_r0x0036b7f0:
    uVar4 = *(long *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 0x17) - (param_1 + 0x11);
    if (uVar2 <= uVar4) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      cVar1 = _Z13ReadFdExactlyN7android4base11borrowed_fdEPvm
                        (*(undefined4 *)(param_1 + 8),param_1 + 0x11,uVar4);
      if (cVar1 == '\0') goto code_r0x0036b835;
      uVar2 = *(ulong *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 0xf);
    }
    *(ulong *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 0xf) = uVar2 - uVar4;
    *(ulong *)(Elf64_Ehdr_00100000.e_ident_pad + param_1 + 7) = uVar4;
    uVar3 = CONCAT71((int7)(uVar2 - uVar4 >> 8),1);
  }
  return uVar3;
}


