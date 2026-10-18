// Function: _ZN20PairingConnectionCtx11StartWorkerEv
// Address: 004255e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN20PairingConnectionCtx11StartWorkerEv
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = _ZN20PairingConnectionCtx18SetupTlsConnectionEv();
  if (cVar3 != '\0') {
    do {
      switch(*(undefined4 *)(param_1 + 8)) {
      case 0:
      case 3:
        goto code_r0x0042564b;
      case 1:
        cVar3 = _ZN20PairingConnectionCtx14DoExchangeMsgsEv(param_1);
        if (cVar3 == '\0') goto code_r0x004256ef;
        LOCK();
        *(undefined4 *)(param_1 + 8) = 2;
        UNLOCK();
        break;
      case 2:
        cVar3 = _ZN20PairingConnectionCtx18DoExchangePeerInfoEv(param_1);
        if (cVar3 == '\0') goto code_r0x004256ef;
        puVar7 = (undefined8 *)(param_1 + 0x2058);
        uVar2 = *(uint *)(param_1 + 0x4078);
        uVar5 = *(undefined8 *)(param_1 + 0x4060);
        goto code_r0x004256fe;
      }
    } while( true );
  }
code_r0x004256ef:
  uVar2 = *(uint *)(param_1 + 0x4078);
  uVar5 = *(undefined8 *)(param_1 + 0x4060);
  puVar7 = (undefined8 *)0x0;
code_r0x004256fe:
  puVar6 = (undefined *)(ulong)uVar2;
  (**(code **)(param_1 + 0x4058))(puVar7,puVar6,uVar5);
  LOCK();
  *(undefined4 *)(param_1 + 8) = 3;
  UNLOCK();
code_r0x0042570c:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_28) {
    func_0x0099bd00();
    func_0x00425760(0,puVar7,puVar6,extraout_RDX,param_4,param_5,param_6,uStack_30,
                    &stack0xfffffffffffffff8);
    return;
  }
  return;
code_r0x0042564b:
  puVar7 = (undefined8 *)0x6;
  puVar6 = (undefined *)0x0;
  cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(6,0);
  if (cVar3 != '\0') {
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar1 = *puVar4;
    puVar7 = &uStack_30;
    param_4 = 6;
    param_5 = 0;
    param_6 = 0xffffffff;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar7,&UNK_00161570,0x1b0,6,0);
    uVar5 = _ZN7android4base10LogMessage6streamEv(puVar7);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017f076,0xb);
    puVar6 = &UNK_0017580d;
    func_0x0032eb30(uVar5,&UNK_0017580d,0x13);
    _ZN7android4base10LogMessageD2Ev(puVar7);
    *puVar4 = uVar1;
  }
  goto code_r0x0042570c;
}


