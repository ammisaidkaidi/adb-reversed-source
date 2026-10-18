// Function: _ZN18EmulatorConnectionD2Ev
// Address: 0040da30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN18EmulatorConnectionD2Ev(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 **ppuStack_48;
  undefined4 *puStack_40;
  long lStack_38;
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99f1e8;
  if ((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) {
    cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar4 != '\0') {
      puVar6 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar6;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&ppuStack_48,&UNK_0015b284,0x104,1,0,0xffffffff);
      uVar7 = _ZN7android4base10LogMessage6streamEv(&ppuStack_48);
      uVar7 = func_0x0032eb30(uVar7,&UNK_001696ea,0x1b);
      _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7,*(undefined4 *)(param_1 + 3));
      _ZN7android4base10LogMessageD2Ev(&ppuStack_48);
      *puVar6 = uVar1;
    }
  }
  uVar7 = retry_ports_lock;
  _ZNSt3__15mutex4lockEv(retry_ports_lock);
  lVar3 = lRam0000000000a00880;
  uStack_58 = *(undefined4 *)(param_1 + 3);
  uStack_54 = 0x3c;
  puStack_50 = *(undefined8 **)(lRam0000000000a00880 + 8);
  ppuStack_48 = &puStack_50;
  puStack_40 = &uStack_58;
  lStack_38 = lRam0000000000a00880;
  if (puStack_50 < *(undefined8 **)(lRam0000000000a00880 + 0x10)) {
    *puStack_50 = CONCAT44(0x3c,uStack_58);
    puVar5 = puStack_50 + 1;
  }
  else {
    _ZZNSt3__16vectorIPKN6google8protobuf7MessageENS_9allocatorIS5_EEE12emplace_backIJS5_EEERS5_DpOT_ENKUlvE0_clEv
              (&ppuStack_48);
    puVar5 = puStack_50;
  }
  *(undefined8 **)(lVar3 + 8) = puVar5;
  _ZNSt3__118condition_variable10notify_oneEv(retry_ports_cond);
  _ZNSt3__115recursive_mutex6unlockEv(uVar7);
  _ZN12FdConnectionD1Ev(param_1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_30) {
    return;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


