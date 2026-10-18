// Function: _ZN16LibUsbConnection4InitEv
// Address: 004089f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN16LibUsbConnection4InitEv(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  byte *unaff_R12;
  ulong unaff_R13;
  uint *unaff_R14;
  undefined8 *puVar11;
  undefined8 unaff_R15;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  byte bStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = attached_devices;
  puStack_60 = &UNK_00408a20;
  uVar4 = _ZN15AttachedDevices19ShouldStartDetachedERK10Connection(attached_devices,param_1);
  LOCK();
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  UNLOCK();
  if ((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) {
    puVar8 = (undefined1 *)0x1;
    puStack_60 = &UNK_00408a6a;
    cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar5 != '\0') {
      puStack_60 = &UNK_00408a73;
      unaff_R14 = (uint *)func_0x0099bce0();
      uVar1 = *unaff_R14;
      unaff_R13 = (ulong)uVar1;
      puStack_60 = &UNK_00408a9f;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&lStack_40,&UNK_0016b012,0x23,1,0,0xffffffff);
      puStack_60 = &UNK_00408aa7;
      uVar7 = _ZN7android4base10LogMessage6streamEv(&lStack_40);
      puStack_60 = &UNK_00408abb;
      unaff_R15 = func_0x0032eb30(uVar7,&UNK_0015b231,7);
      unaff_R12 = &bStack_58;
      puStack_60 = &UNK_00408ace;
      _ZN12LibUsbDevice9GetSerialEv(unaff_R12,*(undefined8 *)(param_1 + 0x18));
      puStack_60 = &UNK_00408ad9;
      uVar7 = func_0x0032e5a0(unaff_R15,unaff_R12);
      puStack_60 = &UNK_00408aed;
      auVar13 = func_0x0032eb30(uVar7,&UNK_0015e1e5,0x12);
      puStack_60 = &UNK_00408afc;
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEb
                (auVar13._0_8_,*(undefined1 *)(param_1 + 0x10),auVar13._8_8_,
                 *(undefined1 *)(param_1 + 0x10));
      if ((bStack_58 & 1) != 0) {
        puStack_60 = &UNK_00408b13;
        _ZdaPvSt11align_val_t(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
      }
      puVar8 = (undefined1 *)&lStack_40;
      puStack_60 = &UNK_00408b1c;
      _ZN7android4base10LogMessageD2Ev();
      *unaff_R14 = uVar1;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
  puStack_60 = &UNK_00408b29;
  func_0x0099bd00();
  puStack_60 = &stack0xfffffffffffffff8;
  uStack_68 = unaff_R15;
  puStack_70 = unaff_R14;
  uStack_78 = unaff_R13;
  pbStack_80 = unaff_R12;
  lStack_88 = param_1;
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  *(long *)puVar8 = 0x99f178;
  if (((((byte)adb_trace_mask & 0x20) != 0) && ((int)adb_trace_severity._20_4_ < 2)) &&
     (cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar5 != '\0')) {
    puVar6 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_98,&UNK_0016b012,0x27,1,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_98);
    uVar7 = func_0x0032eb30(uVar7,&UNK_001645c0,0x11);
    _ZNK10Connection6SerialEv(&bStack_b0,puVar8);
    uVar7 = func_0x0032e5a0(uVar7,&bStack_b0);
    func_0x0032eb30(uVar7,&UNK_0017edf4,0xe);
    if ((bStack_b0 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_a0,CONCAT71(uStack_af,bStack_b0) & 0xfffffffffffffffe);
    }
    _ZN7android4base10LogMessageD2Ev(auStack_98);
    *puVar6 = uVar2;
  }
  (**(code **)(*(long *)puVar8 + 0x20))(puVar8);
  _ZNSt3__118condition_variableD2Ev((long *)((long)puVar8 + 0x88));
  func_0x003f11f0((long *)((long)puVar8 + 0x30));
  puVar12 = *(undefined8 **)((long)puVar8 + 0x38);
  puVar11 = *(undefined8 **)((long)puVar8 + 0x40);
  if (puVar12 != puVar11) {
    do {
      _ZdaPvSt11align_val_t(*puVar12,0x1000);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar11);
    puVar12 = *(undefined8 **)((long)puVar8 + 0x38);
    puVar11 = *(undefined8 **)((long)puVar8 + 0x40);
  }
  *(ulong *)((long)puVar8 + 0x40) =
       (long)puVar11 - ((long)puVar11 - (long)puVar12 & 0xfffffffffffffff8U);
  lVar3 = *(long *)((long)puVar8 + 0x30);
  if (lVar3 != 0) {
    _ZdaPvSt11align_val_t(lVar3,*(long *)((long)puVar8 + 0x48) - lVar3);
  }
  _ZNSt3__16threadD2Ev((long *)((long)puVar8 + 0x28));
  plVar9 = (long *)((long)puVar8 + 0x20);
  _ZNSt3__16threadD2Ev(plVar9);
  plVar10 = *(long **)((long)puVar8 + 0x18);
  *(long *)((long)puVar8 + 0x18) = 0;
  if (plVar10 != (long *)0x0) {
    _ZN12LibUsbDeviceD1Ev(plVar10);
    _ZdaPvSt11align_val_t(plVar10,0x70);
    plVar9 = plVar10;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_90) {
    func_0x0099bd00();
    _ZN16LibUsbConnectionD1Ev();
    free(plVar9,0xc0);
    return;
  }
  return;
}


