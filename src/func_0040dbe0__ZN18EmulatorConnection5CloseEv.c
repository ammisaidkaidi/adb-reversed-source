// Function: _ZN18EmulatorConnection5CloseEv
// Address: 0040dbe0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN18EmulatorConnection5CloseEv(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam0000000000a00850;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
  _ZNSt3__112__hash_tableINS_17__hash_value_typeIiP10atransportEENS_22__unordered_map_hasherIiNS_4pairIKiS3_EENS_4hashIiEENS_8equal_toIiEEEENS_21__unordered_map_equalIiS8_SC_SA_EENS_9allocatorIS8_EEE14__erase_uniqueIiEEmRKT_
            (0xa00858,param_1 + 0x18);
  _ZN12FdConnection5CloseEv(param_1);
  pthread_mutex_unlock(uVar1);
  return;
}


