// Function: _Z21create_device_tracker17TrackerOutputType
// Address: 003e5d80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _Z21create_device_tracker17TrackerOutputType(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)_Znwm(0xb8);
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 9) = 0xffffffff;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  puVar3[0x16] = 0;
  *(undefined8 *)((long)puVar3 + 0x99) = 0;
  *(undefined8 *)((long)puVar3 + 0xa1) = 0;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar4;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0017a1e0,0x2e1,1,0,0xffffffff);
      uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_0015790f,puVar3);
      func_0x0032e5a0(uVar5,&bStack_58);
      if ((bStack_58 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar4 = uVar1;
    }
  }
  puVar3[3] = &UNK_003e5f30;
  puVar3[4] = &UNK_003e5f40;
  puVar3[6] = &UNK_003e5fc0;
  *(undefined1 *)(puVar3 + 0x15) = 1;
  *(undefined4 *)((long)puVar3 + 0xac) = param_1;
  puVar3[0x16] = puRam0000000000a006e8;
  puRam0000000000a006e8 = puVar3;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar3;
  }
  func_0x0099bd00();
  func_0x003e5fc0();
  return (undefined8 *)0xffffffff;
}


