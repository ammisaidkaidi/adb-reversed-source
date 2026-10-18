// Function: _ZN21fdevent_context_epoll9InterruptEv
// Address: 0041a090
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN21fdevent_context_epoll9InterruptEv(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_30 = 1;
  while( true ) {
    uVar1 = *(undefined4 *)(param_1 + 0xb4);
    while (lVar4 = func_0x0099be60(uVar1,&uStack_30,8), lVar4 == -1) {
      piVar5 = (int *)func_0x0099bce0();
      if (*piVar5 != 4) goto code_r0x0041a106;
    }
    if ((int)lVar4 != -1) break;
    piVar5 = (int *)func_0x0099bce0();
    if (*piVar5 != 4) {
code_r0x0041a106:
      cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
      if (cVar3 != '\0') {
        puVar6 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar6;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_38,&UNK_00187fcd,0xcc,6,0,uVar1);
        uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
        func_0x0032eb30(uVar7,&UNK_0017a343,0x2c);
        _ZN7android4base10LogMessageD2Ev(auStack_38);
        *puVar6 = uVar1;
      }
code_r0x0041a116:
      if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
        func_0x0099bd00();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
  }
  if ((int)lVar4 == 8) goto code_r0x0041a116;
  goto code_r0x0041a106;
}


