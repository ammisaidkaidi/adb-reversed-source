// Function: _Z22read_and_dump_protocolN7android4base11borrowed_fdEP32StandardStreamsCallbackInterface
// Address: 00330cb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1
_Z22read_and_dump_protocolN7android4base11borrowed_fdEP32StandardStreamsCallbackInterface
          (undefined4 param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  plVar2 = (long *)_Znwm(0x100028);
  _ZN13ShellProtocolC2EN7android4base11borrowed_fdE(plVar2,param_1);
  cVar1 = _ZN13ShellProtocol4ReadEv(plVar2);
  uVar4 = 0xff;
  if (cVar1 != '\0') {
    puVar3 = (undefined1 *)((long)plVar2 + 0x11);
    do {
      cVar1 = *(char *)((long)plVar2 + 0xc);
      if (cVar1 == '\x03') {
        uVar4 = *puVar3;
      }
      else {
        if (cVar1 == '\x02') {
          cVar1 = (**(code **)(*param_2 + 8))(param_2,puVar3,plVar2[0x20002]);
        }
        else {
          if (cVar1 != '\x01') goto code_r0x00330d05;
          cVar1 = (**(code **)*param_2)(param_2,puVar3,plVar2[0x20002]);
        }
        if (cVar1 == '\0') {
          uVar4 = 0x8d;
          break;
        }
      }
code_r0x00330d05:
      cVar1 = _ZN13ShellProtocol4ReadEv(plVar2);
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  return uVar4;
}


