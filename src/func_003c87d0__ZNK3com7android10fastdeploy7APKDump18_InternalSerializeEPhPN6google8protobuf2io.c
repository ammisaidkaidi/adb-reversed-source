// Function: _ZNK3com7android10fastdeploy7APKDump18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 003c87d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZNK3com7android10fastdeploy7APKDump18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
          (long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar3 != 0) {
      pbVar4 = pbVar7 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar4 = *(byte **)(pbVar7 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar4,uVar3,1,&UNK_0016435a,0x23);
      bVar8 = (*pbVar7 & 1) != 0;
      pbVar4 = pbVar7 + 1;
      if (bVar8) {
        pbVar4 = *(byte **)(pbVar7 + 0x10);
      }
      uVar3 = (ulong)(*pbVar7 >> 1);
      if (bVar8) {
        uVar3 = *(ulong *)(pbVar7 + 8);
      }
      if (((long)uVar3 < 0x80) && ((long)uVar3 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 10;
        param_2[1] = (char)uVar3;
        func_0x0099bda0(param_2 + 2,pbVar4,uVar3);
        param_2 = param_2 + uVar3 + 2;
      }
      else {
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                            (param_3,1,pbVar4,uVar3,param_2);
      }
    }
  }
  if ((uVar6 & 2) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar3 != 0) {
      if ((bVar1 & 1) == 0) {
        pbVar7 = pbVar7 + 1;
      }
      else {
        pbVar7 = *(byte **)(pbVar7 + 0x10);
      }
      if (((long)uVar3 < 0x80) && ((long)uVar3 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x12;
        param_2[1] = (char)uVar3;
        func_0x0099bda0(param_2 + 2,pbVar7,uVar3);
        param_2 = param_2 + uVar3 + 2;
      }
      else {
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                            (param_3,2,pbVar7,uVar3,param_2);
      }
    }
  }
  if ((uVar6 & 4) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar3 != 0) {
      if ((bVar1 & 1) == 0) {
        pbVar7 = pbVar7 + 1;
      }
      else {
        pbVar7 = *(byte **)(pbVar7 + 0x10);
      }
      if (((long)uVar3 < 0x80) && ((long)uVar3 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x1a;
        param_2[1] = (char)uVar3;
        func_0x0099bda0(param_2 + 2,pbVar7,uVar3);
        param_2 = param_2 + uVar3 + 2;
      }
      else {
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                            (param_3,3,pbVar7,uVar3,param_2);
      }
    }
  }
  if ((uVar6 & 8) != 0) {
    pbVar7 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar7;
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(pbVar7 + 8);
    }
    if (uVar3 != 0) {
      pbVar4 = pbVar7 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar4 = *(byte **)(pbVar7 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar4,uVar3,1,&UNK_0015fb49,0x2c);
      bVar8 = (*pbVar7 & 1) != 0;
      pbVar4 = pbVar7 + 1;
      if (bVar8) {
        pbVar4 = *(byte **)(pbVar7 + 0x10);
      }
      uVar3 = (ulong)(*pbVar7 >> 1);
      if (bVar8) {
        uVar3 = *(ulong *)(pbVar7 + 8);
      }
      if (((long)uVar3 < 0x80) && ((long)uVar3 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x22;
        param_2[1] = (char)uVar3;
        func_0x0099bda0(param_2 + 2,pbVar4,uVar3);
        param_2 = param_2 + uVar3 + 2;
      }
      else {
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                            (param_3,4,pbVar4,uVar3,param_2);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(uVar3 + 8) & 1) == 0) {
    lVar5 = uVar3 + 9;
    uVar6 = (uint)(*(byte *)(uVar3 + 8) >> 1);
  }
  else {
    uVar6 = *(uint *)(uVar3 + 0x10);
    lVar5 = *(long *)(uVar3 + 0x18);
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar6) {
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
  func_0x0099bda0(param_2,lVar5,uVar6);
  return param_2 + (int)uVar6;
}


