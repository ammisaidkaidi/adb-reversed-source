// Function: _ZN4absl12lts_202605268SNPrintFIJciiiEEEiPcmRKNS0_19str_format_internal18FormatSpecTemplateIJXspclsr19str_format_internalE14ArgumentToConvIT_EEEEEEDpRKS5_
// Address: 004d59e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_202605268SNPrintFIJciiiEEEiPcmRKNS0_19str_format_internal18FormatSpecTemplateIJXspclsr19str_format_internalE14ArgumentToConvIT_EEEEEEDpRKS5_
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,
               uint *param_5,uint *param_6,uint *param_7)

{
  code *pcVar1;
  long in_FS_OFFSET;
  ulong uStack_50;
  code *pcStack_48;
  ulong uStack_40;
  code *pcStack_38;
  ulong uStack_30;
  code *pcStack_28;
  ulong uStack_20;
  code *pcStack_18;
  long lStack_10;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_50 = (ulong)*param_4;
  pcStack_48 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIcEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_40 = (ulong)*param_5;
  pcStack_38 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_30 = (ulong)*param_6;
  pcStack_28 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  uStack_20 = (ulong)*param_7;
  pcStack_18 = 
  _ZN4absl12lts_2026052619str_format_internal13FormatArgImpl8DispatchIiEEbNS2_4DataENS1_24FormatConversionSpecImplEPv
  ;
  _ZN4absl12lts_2026052619str_format_internal8SnprintFEPcmNS1_21UntypedFormatSpecImplENS0_4SpanIKNS1_13FormatArgImplEEE
            (param_1,param_2,*param_3,param_3[1],&uStack_50,4);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


