// Function: _ZN10atransport10HandleReadENSt3__110unique_ptrI7apacketNS0_14default_deleteIS2_EEEE
// Address: 003eb070
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4
_ZN10atransport10HandleReadENSt3__110unique_ptrI7apacketNS0_14default_deleteIS2_EEEE
          (undefined **param_1,uint *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte *unaff_R12;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined4 *puStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = _Z12check_headerP7apacketP10atransport(*(undefined8 *)param_2,param_1);
  bVar8 = ((byte)adb_trace_mask & 8) != 0;
  if ((char)uVar3 == '\0') {
    ppuVar7 = param_1;
    if (((int)adb_trace_severity._12_4_ < 2 && bVar8) &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar2 != '\0')) {
      param_2 = (uint *)func_0x0099bce0();
      puStack_90 = (undefined4 *)(ulong)*param_2;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_0017a1e0,0x4b7,1,0,0xffffffff);
      unaff_R12 = (byte *)_ZN7android4base10LogMessage6streamEv(auStack_70);
      if (((ulong)param_1[5] & 1) == 0) goto code_r0x003eb20b;
      ppuVar7 = (undefined **)param_1[7];
      goto code_r0x003eb20f;
    }
  }
  else {
    if (((int)adb_trace_severity._12_4_ < 2 && bVar8) &&
       (cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar2 != '\0')) {
      puStack_90 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puStack_90;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_70,&UNK_0017a1e0,0x4bb,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_70);
      if (((ulong)param_1[5] & 1) == 0) {
        puVar6 = (undefined *)((long)param_1 + 0x29);
      }
      else {
        puVar6 = param_1[7];
      }
      unaff_R12 = &bStack_88;
      _Z11dump_packetPKcS0_PK7apacket(unaff_R12,puVar6,&UNK_00159674,*(undefined8 *)param_2);
      func_0x0032e5a0(uVar5,unaff_R12);
      if ((bStack_88 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_70);
      *puStack_90 = uVar1;
    }
    uStack_60 = *(undefined8 *)param_2;
    param_2[0] = 0;
    param_2[1] = 0;
    puStack_68 = &UNK_0099ee80;
    ppuVar7 = &puStack_68;
    ppuStack_58 = param_1;
    ppuStack_48 = ppuVar7;
    _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(ppuVar7);
    if (ppuStack_48 == ppuVar7) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (ppuStack_48 == (undefined **)0x0) goto code_r0x003eb180;
    }
    (**(code **)(*ppuStack_48 + lVar4))();
  }
code_r0x003eb180:
  while (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    param_1 = ppuVar7;
code_r0x003eb20b:
    ppuVar7 = (undefined **)((long)param_1 + 0x29);
code_r0x003eb20f:
    _ZN7android4base12StringPrintfEPKcz(&bStack_88,&UNK_0017d68e,ppuVar7);
    func_0x0032e5a0(unaff_R12,&bStack_88);
    if ((bStack_88 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_70);
    *param_2 = (uint)puStack_90;
  }
  return uVar3;
}


