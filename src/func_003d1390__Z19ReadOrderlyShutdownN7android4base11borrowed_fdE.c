// Function: _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE
// Address: 003d1390
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z19ReadOrderlyShutdownN7android4base11borrowed_fdE(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  byte bStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  do {
    lVar5 = func_0x0099be20(param_1,&uStack_48,0x10);
    if (lVar5 != -1) {
      iVar4 = (int)lVar5;
      if (iVar4 == 0) {
        uVar7 = 1;
        goto code_r0x003d1557;
      }
      if (iVar4 == -1) {
        piVar6 = (int *)func_0x0099bce0();
        if (*piVar6 != 0xb) goto code_r0x003d1555;
        goto code_r0x003d140d;
      }
      if (((((byte)adb_trace_mask & 0x10) != 0) && ((int)adb_trace_severity._16_4_ < 2)) &&
         (cVar3 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar3 != '\0')) {
        puVar8 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar8;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_50,&UNK_001770ec,0xb5,1,0,0xffffffff);
        uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_50);
        uVar7 = func_0x0032eb30(uVar7,&UNK_0016eb90,0x14);
        uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7,param_1);
        uVar7 = func_0x0032eb30(uVar7,&UNK_0016eba5,0x14);
        _Z8dump_hexPKvm(&bStack_68,&uStack_48,(long)iVar4);
        func_0x0032e5a0(uVar7,&bStack_68);
        if ((bStack_68 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_58,CONCAT71(uStack_67,bStack_68) & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(auStack_50);
        *puVar8 = uVar1;
      }
      func_0x0099c060(param_1,2);
      puVar8 = (undefined4 *)func_0x0099bce0();
      *puVar8 = 0x16;
      goto code_r0x003d1555;
    }
    piVar6 = (int *)func_0x0099bce0();
  } while (*piVar6 == 4);
  if (*piVar6 == 0xb) {
code_r0x003d140d:
    do {
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&bStack_68,&UNK_001770ec,0xa6,6,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&bStack_68);
      uVar7 = func_0x0032eb30(uVar7,&UNK_00165d45,0xe);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0018654b,0x16);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0016e934,2);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0015ae05,1);
      uVar7 = func_0x0032eb30(uVar7,&UNK_00173f69,2);
      uVar7 = func_0x0032eb30(uVar7,&UNK_001595f9,0x19);
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7,0xb);
      uVar7 = func_0x0032eb30(uVar7,&UNK_0018038a,5);
      uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7,0xb);
      func_0x0032eb30(uVar7,&UNK_0017b788,2);
      _ZN7android4base10LogMessageD2Ev(&bStack_68);
    } while( true );
  }
code_r0x003d1555:
  uVar7 = 0;
code_r0x003d1557:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  return uVar7;
}


