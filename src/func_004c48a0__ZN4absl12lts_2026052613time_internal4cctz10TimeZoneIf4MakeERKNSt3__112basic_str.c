// Function: _ZN4absl12lts_2026052613time_internal4cctz10TimeZoneIf4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// Address: 004c48a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN4absl12lts_2026052613time_internal4cctz10TimeZoneIf4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
                  (ulong *param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar8 = (*param_2 & 1) != 0;
  uVar6 = (ulong)(*param_2 >> 1);
  if (bVar8) {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  pbVar7 = param_2 + 1;
  if (bVar8) {
    pbVar7 = *(byte **)(param_2 + 0x10);
  }
  uVar4 = 5;
  if (uVar6 < 5) {
    uVar4 = uVar6;
  }
  iVar1 = func_0x0099bf90(pbVar7,&UNK_0018b209,uVar4);
  if (iVar1 != 0 || uVar6 < 5) {
    _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
              (&uStack_58,param_2);
    *param_1 = uStack_58;
  }
  else {
    uVar6 = uVar6 - 5;
    if (0xfffffffffffffff6 < uVar6) goto code_r0x004c49e2;
    if (uVar6 < 0x17) {
      uStack_58 = CONCAT71(uStack_58._1_7_,(char)uVar6 * '\x02');
      lVar2 = (long)&uStack_58 + 1;
    }
    else {
      lVar5 = 0x1a;
      if ((uVar6 | 7) != 0x17) {
        lVar5 = (uVar6 | 7) + 1;
      }
      lVar2 = _Znwm(lVar5);
      uStack_58 = lVar5 + 1;
      uStack_50 = uVar6;
      lStack_48 = lVar2;
    }
    func_0x0099bd90(lVar2,pbVar7 + 5,uVar6);
    *(undefined1 *)(lVar2 + uVar6) = 0;
    _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneLibC4MakeERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
              (&uStack_40,&uStack_58);
    *param_1 = uStack_40;
    uStack_40 = 0;
    if ((uStack_58 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x004c49e2:
  puVar3 = (ulong *)func_0x0032e8f0();
  return puVar3;
}


