// Function: _ZN15AttachedDevices19ShouldStartDetachedERK10Connection
// Address: 003fdb10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN15AttachedDevices19ShouldStartDetachedERK10Connection(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar1 == '\0') goto code_r0x003fdbb2;
  if (cRam0000000000a00770 == '\0') goto code_r0x003fdbd3;
  while( true ) {
    if (cRam0000000000a00780 == '\0') {
      iVar2 = __cxa_guard_acquire(0xa00780);
      if (iVar2 != 0) {
        if (pbRam0000000000a00768 == (byte *)0x0) {
          cRam0000000000a00778 = false;
        }
        else {
          uVar3 = *pbRam0000000000a00768 - 0x31;
          if (uVar3 == 0) {
            uVar3 = (uint)pbRam0000000000a00768[1];
          }
          cRam0000000000a00778 = uVar3 == 0;
        }
        __cxa_guard_release(0xa00780);
      }
    }
    if (cRam0000000000a00778 == '\x01') {
      _ZNK10Connection6SerialEv(&bStack_40,param_2);
      _ZNSt3__15mutex4lockEv(param_1);
      lVar4 = _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE11ServiceInfoEENS_22__unordered_map_hasherIS7_NS_4pairIKS7_S8_EENS_4hashIS7_EENS_8equal_toIS7_EEEENS_21__unordered_map_equalIS7_SD_SH_SF_EENS5_ISD_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS9_PvEEEERKT_
                        (param_1 + 0x28,&bStack_40);
      param_2 = (long *)CONCAT71((int7)((ulong)param_2 >> 8),lVar4 == 0);
      _ZNSt3__115recursive_mutex6unlockEv(param_1);
      if ((bStack_40 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
      }
      uVar5 = (ulong)param_2 & 0xffffffff;
    }
    else {
code_r0x003fdbb2:
      uVar5 = 0;
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) break;
    func_0x0099bd00();
code_r0x003fdbd3:
    iVar2 = __cxa_guard_acquire(0xa00770);
    if (iVar2 != 0) {
      pbRam0000000000a00768 = (byte *)func_0x0099be70(&UNK_001660e5);
      __cxa_guard_release(0xa00770);
    }
  }
  return uVar5;
}


