// Function: _Z11adb_commandRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// Address: 0032da20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _Z11adb_commandRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(byte *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  ulong extraout_RDX;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a4;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  uint *puStack_78;
  ulong uStack_70;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint *puStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (uint *)0x0;
  bVar12 = (*param_1 & 1) != 0;
  pbVar11 = param_1 + 1;
  if (bVar12) {
    pbVar11 = *(byte **)(param_1 + 0x10);
  }
  uVar8 = (ulong)(*param_1 >> 1);
  if (bVar12) {
    uVar8 = *(ulong *)(param_1 + 8);
  }
  puVar6 = &uStack_48;
  uVar2 = _Z11adb_connectPmNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEEPNS0_12basic_stringIcS3_NS0_9allocatorIcEEEEb
                    (0,pbVar11,uVar8,puVar6,0);
  puVar4 = (uint *)func_0x0099bce0();
  if ((int)uVar2 < 0) {
    puVar7 = puStack_38;
    if ((uStack_48 & 1) == 0) {
      puVar7 = (uint *)((long)&uStack_48 + 1);
    }
    pbVar11 = &UNK_001692c9;
    uVar10 = 0;
    puVar5 = _stderr;
    func_0x0099bd30(_stderr,&UNK_001692c9,puVar7);
    uVar8 = (ulong)*puVar4;
    if (uVar2 == 0xffffffff) goto code_r0x0032daa6;
  }
  else {
    pbVar11 = (byte *)&uStack_48;
    uVar3 = _Z10adb_statusN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
                      (uVar2);
    uVar10 = (ulong)uVar3;
    if ((char)uVar3 == '\0') {
      puVar7 = puStack_38;
      if ((uStack_48 & 1) == 0) {
        puVar7 = (uint *)((long)&uStack_48 + 1);
      }
      pbVar11 = &UNK_001692c9;
      func_0x0099bd30(_stderr,&UNK_001692c9,puVar7);
    }
    else {
      _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(uVar2);
    }
    uVar8 = (ulong)*puVar4;
  }
  puVar5 = (uint *)(ulong)uVar2;
  func_0x0099bd10();
code_r0x0032daa6:
  *puVar4 = (uint)uVar8;
  if ((uStack_48 & 1) != 0) {
    pbVar11 = (byte *)(uStack_48 & 0xfffffffffffffffe);
    puVar5 = puStack_38;
    _ZdaPvSt11align_val_t();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return uVar10;
  }
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = extraout_RDX;
  puStack_78 = puVar4;
  uStack_70 = uVar8;
  if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
    puVar6 = (undefined8 *)((ulong)puVar6 & 0xffffffff);
    cVar1 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar1 != '\0') {
      puStack_c0 = (undefined4 *)func_0x0099bce0();
      uStack_a4 = *puStack_c0;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_88,&UNK_00183124,0x18d,1,0,0xffffffff);
      uStack_b8 = _ZN7android4base10LogMessage6streamEv(auStack_88);
      if ((*puVar5 & 1) == 0) goto code_r0x0032dcb5;
      pbVar9 = *(byte **)(puVar5 + 4);
      goto code_r0x0032dcb9;
    }
  }
  do {
    bVar12 = ((byte)*puVar5 & 1) != 0;
    pbVar9 = (byte *)((long)puVar5 + 1);
    if (bVar12) {
      pbVar9 = *(byte **)(puVar5 + 4);
    }
    uVar8 = (ulong)(byte)((byte)*puVar5 >> 1);
    if (bVar12) {
      uVar8 = *(ulong *)(puVar5 + 2);
    }
    uVar2 = _Z11adb_connectPmNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEEPNS0_12basic_stringIcS3_NS0_9allocatorIcEEEEb
                      (0,pbVar9,uVar8,uVar10,(ulong)puVar6 & 0xff);
    puVar6 = (undefined8 *)(ulong)uVar2;
    puVar5 = (uint *)func_0x0099bce0();
    if ((int)uVar2 < 0) {
      pbVar11 = (byte *)(ulong)*puVar5;
      uVar10 = 0;
      if (uVar2 != 0xffffffff) goto code_r0x0032dc0e;
    }
    else {
      if ((*pbVar11 & 1) == 0) {
        pbVar11[0] = 0;
        pbVar11[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar11 + 0x10) = 0;
        pbVar11[8] = 0;
        pbVar11[9] = 0;
        pbVar11[10] = 0;
        pbVar11[0xb] = 0;
        pbVar11[0xc] = 0;
        pbVar11[0xd] = 0;
        pbVar11[0xe] = 0;
        pbVar11[0xf] = 0;
      }
      uVar3 = _Z18ReadProtocolStringN7android4base11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES9_
                        (uVar2,pbVar11,uVar10);
      uVar10 = (ulong)uVar3;
      if ((char)uVar3 != '\0') {
        _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(uVar2);
      }
      pbVar11 = (byte *)(ulong)*puVar5;
code_r0x0032dc0e:
      func_0x0099bd10(uVar2);
    }
    *puVar5 = (uint)pbVar11;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      return uVar10;
    }
    func_0x0099bd00();
code_r0x0032dcb5:
    pbVar9 = (byte *)((long)puVar5 + 1);
code_r0x0032dcb9:
    _ZN7android4base12StringPrintfEPKcz(&bStack_a0,&UNK_00172006,pbVar9);
    func_0x0032e5a0(uStack_b8,&bStack_a0);
    if ((bStack_a0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_88);
    *puStack_c0 = uStack_a4;
  } while( true );
}


