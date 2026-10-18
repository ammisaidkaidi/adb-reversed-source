// Function: _ZN21enable_weak_from_thisI10atransportED2Ev
// Address: 003f0a40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN21enable_weak_from_thisI10atransportED2Ev(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 != (undefined8 *)param_1[1]) {
    lVar3 = _Z19fdevent_get_ambientv();
    if (*(char *)(lVar3 + 0x10) == '\x01') {
      lVar3 = _Z19fdevent_get_ambientv();
      lVar4 = _ZN7android4base11GetThreadIdEv();
      lVar3 = *(long *)(lVar3 + 8);
      if (lVar3 != lVar4) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_00180212,0x16f,6,0,0xffffffff);
          uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          uVar5 = func_0x0032eb30(uVar5,&UNK_00165d45,0xe);
          uVar5 = func_0x0032eb30(uVar5,&UNK_00162e7f,0x29);
          uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
          uVar5 = func_0x0032eb30(uVar5,&UNK_0015aef8,2);
          uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
          uVar5 = func_0x0032eb30(uVar5,&UNK_00183451,0x1c);
          uVar5 = func_0x0032eb30(uVar5,&UNK_0017ed76,0x2c);
          uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,lVar3);
          uVar5 = func_0x0032eb30(uVar5,&UNK_00165f20,0x1f);
          uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,lVar4);
          func_0x0032eb30(uVar5,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(auStack_40);
        } while( true );
      }
    }
    puVar6 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    if (puVar6 != puVar1) {
      do {
        *(undefined8 *)*puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
      puVar6 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar6;
  }
  if (puVar6 == (undefined8 *)0x0) {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    param_1[1] = puVar6;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      free(puVar6,param_1[2] - (long)puVar6);
      return;
    }
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


