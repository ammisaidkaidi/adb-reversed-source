// Function: _ZN4absl12lts_2026052613time_internal4cctz14load_time_zoneERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS2_9time_zoneE
// Address: 004c3690
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_2026052613time_internal4cctz14load_time_zoneERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS2_9time_zoneE
                (undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined7 uVar10;
  long in_FS_OFFSET;
  long lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (cRam0000000000a009f8 == '\0') {
    iVar5 = __cxa_guard_acquire(0xa009f8);
    if (iVar5 != 0) {
      puVar8 = (ulong *)_Znwm(0x20);
      _ZN4absl12lts_2026052613time_internal4cctz9time_zone4ImplC2Ev(puVar8);
      puRam0000000000a009f0 = puVar8;
      __cxa_guard_release(0xa009f8);
    }
  }
  puVar8 = puRam0000000000a009f0;
  lStack_58 = 0;
  cVar4 = _ZN4absl12lts_2026052613time_internal4cctz19FixedOffsetFromNameERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPNS3_6chrono8durationIlNS3_5ratioILl1ELl1EEEEE
                    (param_1,&lStack_58);
  if ((cVar4 == '\0') || (lStack_58 != 0)) {
    if (cRam0000000000a00a08 == '\0') goto code_r0x004c3b4a;
    goto code_r0x004c39a2;
  }
  *param_2 = puVar8;
  param_2 = (undefined8 *)CONCAT71((int7)((ulong)param_2 >> 8),1);
code_r0x004c3ae4:
  do {
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return (ulong)param_2 & 0xffffffff;
    }
    func_0x0099bd00();
code_r0x004c3b4a:
    iVar5 = __cxa_guard_acquire(0xa00a08);
    if (iVar5 != 0) {
      puRam0000000000a00a00 = (undefined8 *)_Znwm(0x28);
      *puRam0000000000a00a00 = 0;
      puRam0000000000a00a00[1] = 0;
      puRam0000000000a00a00[2] = 0;
      puRam0000000000a00a00[3] = 0;
      puRam0000000000a00a00[4] = 0;
      __cxa_guard_release(0xa00a08);
    }
code_r0x004c39a2:
    puVar3 = puRam0000000000a00a00;
    _ZNSt3__15mutex4lockEv(puRam0000000000a00a00);
    uVar10 = (undefined7)((ulong)param_2 >> 8);
    if (puRam0000000000a009d8 != (undefined8 *)0x0) {
      lVar6 = _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEERKT_
                        (puRam0000000000a009d8,param_1);
      if (lVar6 != 0) {
        *param_2 = *(undefined8 *)(lVar6 + 0x28);
        param_2 = (undefined8 *)CONCAT71(uVar10,*(ulong **)(lVar6 + 0x28) != puVar8);
        _ZNSt3__115recursive_mutex6unlockEv(puVar3);
        goto code_r0x004c3ae4;
      }
    }
    _ZNSt3__115recursive_mutex6unlockEv(puVar3);
    puVar7 = (ulong *)_Znwm(0x20);
    _ZN4absl12lts_2026052613time_internal4cctz9time_zone4ImplC2ERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
              (puVar7,param_1);
    if (cRam0000000000a00a08 == '\0') {
      iVar5 = __cxa_guard_acquire(0xa00a08);
      if (iVar5 != 0) {
        puRam0000000000a00a00 = (undefined8 *)_Znwm(0x28);
        *puRam0000000000a00a00 = 0;
        puRam0000000000a00a00[1] = 0;
        puRam0000000000a00a00[2] = 0;
        puRam0000000000a00a00[3] = 0;
        puRam0000000000a00a00[4] = 0;
        __cxa_guard_release(0xa00a08);
      }
    }
    puVar3 = puRam0000000000a00a00;
    _ZNSt3__15mutex4lockEv(puRam0000000000a00a00);
    if (puRam0000000000a009d8 == (undefined8 *)0x0) {
      puRam0000000000a009d8 = (undefined8 *)_Znwm(0x28);
      *puRam0000000000a009d8 = 0;
      puRam0000000000a009d8[1] = 0;
      puRam0000000000a009d8[2] = 0;
      puRam0000000000a009d8[3] = 0;
      *(undefined4 *)(puRam0000000000a009d8 + 4) = 0x3f800000;
    }
    uStack_48 = param_1;
    puStack_40 = puRam0000000000a009d8;
    lVar6 = _ZZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKN4absl12lts_2026052613time_internal4cctz9time_zone4ImplEEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_SF_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SK_SO_SM_EENS5_ISK_EEE16__emplace_uniqueB8nn220000IJRKNS_21piecewise_construct_tENS_5tupleIJRSJ_EEENSY_IJEEEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEEDpOT_ENKUlSZ_SX_OS10_OS11_E_clESZ_SX_S1C_S1D_
                      (&puStack_40,param_1,&_ZNSt3__119piecewise_constructE,&uStack_48,&uStack_49);
    puVar9 = *(ulong **)(lVar6 + 0x28);
    if (puVar9 == (ulong *)0x0) {
      uVar1 = puVar7[3];
      puVar9 = puVar7;
      if (uVar1 == 0) {
        puVar9 = puVar8;
      }
      *(ulong **)(lVar6 + 0x28) = puVar9;
      if (uVar1 != 0) {
        puVar7 = (ulong *)0x0;
      }
    }
    *param_2 = puVar9;
    param_2 = (undefined8 *)CONCAT71(uVar10,*(ulong **)(lVar6 + 0x28) != puVar8);
    _ZNSt3__115recursive_mutex6unlockEv(puVar3);
    if (puVar7 != (ulong *)0x0) {
      plVar2 = (long *)puVar7[3];
      puVar7[3] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if ((*puVar7 & 1) != 0) {
        _ZdaPvSt11align_val_t(puVar7[2],*puVar7 & 0xfffffffffffffffe);
      }
      _ZdaPvSt11align_val_t(puVar7,0x20);
    }
  } while( true );
}


