// Function: _ZNK3com7android10fastdeploy11APKMetaData18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 003c95b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 *
_ZNK3com7android10fastdeploy11APKMetaData18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
          (long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uVar9 & 2) != 0) {
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar10;
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar10 + 8);
    }
    if (uVar6 != 0) {
      pbVar5 = pbVar10 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar5 = *(byte **)(pbVar10 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar5,uVar6,1,&UNK_0017d551,0x30);
      bVar11 = (*pbVar10 & 1) != 0;
      pbVar5 = pbVar10 + 1;
      if (bVar11) {
        pbVar5 = *(byte **)(pbVar10 + 0x10);
      }
      uVar6 = (ulong)(*pbVar10 >> 1);
      if (bVar11) {
        uVar6 = *(ulong *)(pbVar10 + 8);
      }
      if (((long)uVar6 < 0x80) && ((long)uVar6 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 10;
        param_2[1] = (char)uVar6;
        func_0x0099bda0(param_2 + 2,pbVar5,uVar6);
        param_2 = param_2 + uVar6 + 2;
      }
      else {
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                            (param_3,1,pbVar5,uVar6);
      }
    }
  }
  if (((uVar9 & 1) != 0) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) {
    iVar7 = 0;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar4 = (ulong *)(uVar6 + 7 + (long)iVar7 * 8);
      if ((uVar6 & 1) == 0) {
        puVar4 = (ulong *)(param_1 + 0x18);
      }
      param_2 = (undefined1 *)
                _ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                          (2,*puVar4,*(undefined4 *)(*puVar4 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      lVar8 = uVar6 + 9;
      uVar9 = (uint)(*(byte *)(uVar6 + 8) >> 1);
    }
    else {
      uVar9 = *(uint *)(uVar6 + 0x10);
      lVar8 = *(long *)(uVar6 + 0x18);
    }
    if ((long)(int)uVar9 <= *param_3 - (long)param_2) {
      func_0x0099bda0(param_2,lVar8,uVar9);
      return param_2 + (int)uVar9;
    }
    lVar3 = (*param_3 - (long)param_2) + 0x10;
    if ((int)lVar3 < (int)uVar9) {
      do {
        uVar9 = uVar9 - (int)lVar3;
        lVar3 = (long)(int)lVar3;
        func_0x0099bda0(param_2,lVar8,lVar3);
        lVar8 = lVar8 + lVar3;
        param_2 = (undefined1 *)
                  _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                            (param_3,param_2 + lVar3);
        lVar3 = (*param_3 - (long)param_2) + 0x10;
      } while ((int)lVar3 < (int)uVar9);
    }
    func_0x0099bda0(param_2,lVar8,(long)(int)uVar9);
    return param_2 + (int)uVar9;
  }
  return param_2;
}


