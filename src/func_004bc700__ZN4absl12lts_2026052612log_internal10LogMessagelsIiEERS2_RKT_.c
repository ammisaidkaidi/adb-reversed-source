// Function: _ZN4absl12lts_2026052612log_internal10LogMessagelsIiEERS2_RKT_
// Address: 004bc700
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN4absl12lts_2026052612log_internal10LogMessagelsIiEERS2_RKT_
               (long param_1,undefined4 *param_2)

{
  code *pcVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_38 = 0;
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewC2ERNS2_14LogMessageDataE
            (&uStack_a8,*(undefined8 *)(param_1 + 8));
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_68 + 0x118,*param_2);
  _ZN4absl12lts_2026052612log_internal10LogMessage11OstreamViewD2Ev(&uStack_a8);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}


