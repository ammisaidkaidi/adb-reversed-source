// Function: _Z17connect_to_remoteP7asocketNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
// Address: 003d9710
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z17connect_to_remoteP7asocketNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                (undefined4 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  _ZN10atransport19UpdateReverseConfigENSt3__117basic_string_viewIcNS0_11char_traitsIcEEEE
            (*(undefined8 *)(param_1 + 0xe));
  if (((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) &&
     (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_0015b0ed,0x247,1,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_001643ac,*param_1,param_1[0x12]);
    func_0x0032e5a0(uVar6,&bStack_58);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puVar4 = uVar2;
  }
  puVar4 = (undefined4 *)_Z11get_apacketv();
  if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
     (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
    puVar7 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar7;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&bStack_58,&UNK_0015b0ed,0x24b,1,0,0xffffffff);
    uVar6 = _ZN7android4base10LogMessage6streamEv(&bStack_58);
    uVar6 = func_0x0032eb30(uVar6,&UNK_00187ce2,3);
    uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,*param_1);
    uVar6 = func_0x0032eb30(uVar6,&UNK_0017711f,10);
    uVar6 = func_0x0032eb30(uVar6,param_2,param_3);
    func_0x0032eb30(uVar6,&UNK_001692c7,1);
    _ZN7android4base10LogMessageD2Ev(&bStack_58);
    *puVar7 = uVar2;
  }
  *puVar4 = 0x4e45504f;
  puVar4[1] = *param_1;
  if (*(char *)(*(long *)(param_1 + 0xe) + 0x1c8) == '\x01') {
    puVar4[2] = 0x2000000;
    if (*(char *)(param_1 + 0x22) == '\0') {
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  _ZN5Block6resizeEm(puVar4 + 6,param_3 + 1);
  func_0x0099bda0(*(undefined8 *)(puVar4 + 6),param_2,param_3);
  *(undefined1 *)(*(long *)(puVar4 + 6) + param_3) = 0;
  puVar4[3] = puVar4[10];
  if (*(long *)(param_1 + 0xe) == 0) {
    uVar8 = 0x100000;
  }
  else {
    uVar5 = _ZNK10atransport15get_max_payloadEv();
    uVar8 = 0x100000;
    if (uVar5 < 0x100000) {
      uVar8 = uVar5;
    }
  }
  if (((*(long *)(param_1 + 4) != 0) && (*(long *)(*(long *)(param_1 + 4) + 0x38) != 0)) &&
     (uVar5 = _ZNK10atransport15get_max_payloadEv(), uVar5 < uVar8)) {
    uVar8 = uVar5;
  }
  uVar1 = puVar4[3];
  if (uVar8 < uVar1) {
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_58,&UNK_0015b0ed,0x25b,6,0,0xffffffff);
      uVar6 = _ZN7android4base10LogMessage6streamEv(&bStack_58);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00178931,0x12);
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00184995,2);
      uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
      uVar6 = func_0x0032eb30(uVar6,&UNK_001865a2,0x14);
      uVar6 = func_0x0032eb30(uVar6,&UNK_00187ce6,0x15);
      uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar6,(ulong)uVar1);
      uVar6 = func_0x0032eb30(uVar6,&UNK_0017d60d,0x17);
      uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,uVar8);
      func_0x0032eb30(uVar6,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(&bStack_58);
    } while( true );
  }
  _Z11send_packetP7apacketP10atransport(puVar4,*(undefined8 *)(param_1 + 0xe));
  if (*(ulong *)(in_FS_OFFSET + 0x28) != uStack_38) {
    func_0x0099bd00();
    if (*(long *)(puVar4 + 0xe) == 0) {
      uVar8 = 0x100000;
    }
    else {
      uVar5 = _ZNK10atransport15get_max_payloadEv();
      uVar8 = 0x100000;
      if (uVar5 < 0x100000) {
        uVar8 = uVar5;
      }
    }
    uVar5 = uVar8;
    if (((*(long *)(puVar4 + 4) != 0) && (*(long *)(*(long *)(puVar4 + 4) + 0x38) != 0)) &&
       (uVar5 = _ZNK10atransport15get_max_payloadEv(), uVar8 <= uVar5)) {
      uVar5 = uVar8;
    }
    return uVar5;
  }
  return *(ulong *)(in_FS_OFFSET + 0x28);
}


