// Function: _ZNK3com7android10fastdeploy8APKEntry18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 003c8fe0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZNK3com7android10fastdeploy8APKEntry18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
          (long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    pbVar3 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar3;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    if (uVar4 != 0) {
      if ((bVar1 & 1) == 0) {
        pbVar3 = pbVar3 + 1;
      }
      else {
        pbVar3 = *(byte **)(pbVar3 + 0x10);
      }
      if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 10;
        param_2[1] = (char)uVar4;
        func_0x0099bda0(param_2 + 2,pbVar3,uVar4);
        param_2 = param_2 + uVar4 + 2;
      }
      else {
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                            (param_3,1,pbVar3,uVar4,param_2);
      }
    }
  }
  if (((uVar6 & 2) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    param_2 = (undefined1 *)
              _ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi2EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                        (param_3,*(long *)(param_1 + 0x20),param_2);
  }
  if (((uVar6 & 4) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    param_2 = (undefined1 *)
              _ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi3EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                        (param_3,*(long *)(param_1 + 0x28),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar4 + 8) & 1) == 0) {
      lVar5 = uVar4 + 9;
      uVar6 = (uint)(*(byte *)(uVar4 + 8) >> 1);
    }
    else {
      uVar6 = *(uint *)(uVar4 + 0x10);
      lVar5 = *(long *)(uVar4 + 0x18);
    }
    if ((long)(int)uVar6 <= *param_3 - (long)param_2) {
      func_0x0099bda0(param_2,lVar5,uVar6);
      return param_2 + (int)uVar6;
    }
    lVar2 = (*param_3 - (long)param_2) + 0x10;
    if ((int)lVar2 < (int)uVar6) {
      do {
        uVar6 = uVar6 - (int)lVar2;
        lVar2 = (long)(int)lVar2;
        func_0x0099bda0(param_2,lVar5,lVar2);
        lVar5 = lVar5 + lVar2;
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                            (param_3,param_2 + lVar2);
        lVar2 = (*param_3 - (long)param_2) + 0x10;
      } while ((int)lVar2 < (int)uVar6);
    }
    func_0x0099bda0(param_2,lVar5,(long)(int)uVar6);
    return param_2 + (int)uVar6;
  }
  return param_2;
}


