// Function: _Z9adb_queryRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_S8_b
// Address: 0032db50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z9adb_queryRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_S8_b
                (uint *param_1,byte *param_2,ulong param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_5c;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) &&
     (cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar1 != '\0')) {
    puStack_78 = (undefined4 *)func_0x0099bce0();
    uStack_5c = *puStack_78;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_00183124,0x18d,1,0,0xffffffff);
    uStack_70 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    if ((*param_1 & 1) == 0) goto code_r0x0032dcb5;
    pbVar4 = *(byte **)(param_1 + 4);
    goto code_r0x0032dcb9;
  }
  do {
    bVar5 = ((byte)*param_1 & 1) != 0;
    pbVar4 = (byte *)((long)param_1 + 1);
    if (bVar5) {
      pbVar4 = *(byte **)(param_1 + 4);
    }
    uVar3 = (ulong)(byte)((byte)*param_1 >> 1);
    if (bVar5) {
      uVar3 = *(ulong *)(param_1 + 2);
    }
    param_4 = _Z11adb_connectPmNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEEPNS0_12basic_stringIcS3_NS0_9allocatorIcEEEEb
                        (0,pbVar4,uVar3,param_3,param_4 & 0xff);
    param_1 = (uint *)func_0x0099bce0();
    if ((int)param_4 < 0) {
      param_2 = (byte *)(ulong)*param_1;
      param_3 = 0;
      if (param_4 != 0xffffffff) goto code_r0x0032dc0e;
    }
    else {
      if ((*param_2 & 1) == 0) {
        param_2[0] = 0;
        param_2[1] = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x10) = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      uVar2 = _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
                        (param_4,param_2,param_3);
      param_3 = (ulong)uVar2;
      if ((char)uVar2 != '\0') {
        _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(param_4);
      }
      param_2 = (byte *)(ulong)*param_1;
code_r0x0032dc0e:
      func_0x0099bd10(param_4);
    }
    *param_1 = (uint)param_2;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_3;
    }
    func_0x0099bd00();
code_r0x0032dcb5:
    pbVar4 = (byte *)((long)param_1 + 1);
code_r0x0032dcb9:
    _ZN7android4base12StringPrintfEPKcz(&bStack_58,&UNK_00172006,pbVar4);
    func_0x0032e5a0(uStack_70,&bStack_58);
    if ((bStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_40);
    *puStack_78 = uStack_5c;
  } while( true );
}


