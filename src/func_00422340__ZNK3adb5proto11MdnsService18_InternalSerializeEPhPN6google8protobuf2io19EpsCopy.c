// Function: _ZNK3adb5proto11MdnsService18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 00422340
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZNK3adb5proto11MdnsService18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 unaff_RBX;
  byte *pbVar10;
  undefined8 unaff_RBP;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 unaff_R12;
  long lVar14;
  int *piVar15;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar16;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = (ulong)uVar5 << 0x20;
  if ((uVar5 & 2) != 0) {
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar10;
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
    }
    if (uVar13 != 0) {
      pbVar12 = pbVar10 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar12,uVar13,1,&UNK_001697f2,0x1e);
      bVar16 = (*pbVar10 & 1) != 0;
      pbVar12 = pbVar10 + 1;
      if (bVar16) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      uVar13 = (ulong)(*pbVar10 >> 1);
      if (bVar16) {
        uVar13 = *(ulong *)(pbVar10 + 8);
      }
      if (((long)uVar13 < 0x80) && ((long)uVar13 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 10;
        param_2[1] = (byte)uVar13;
        func_0x0099bda0(param_2 + 2,pbVar12,uVar13);
        param_2 = param_2 + uVar13 + 2;
      }
      else {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                    (param_3,1,pbVar12,uVar13);
      }
      uVar5 = (uint)(uVar4 >> 0x20);
    }
  }
  if ((uVar5 & 4) == 0) {
    if ((uVar5 & 8) != 0) goto code_r0x004224ef;
code_r0x00422428:
    if ((uVar5 & 0x10) != 0) goto code_r0x004225a8;
  }
  else {
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    bVar1 = *pbVar10;
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
    }
    if (uVar13 != 0) {
      pbVar12 = pbVar10 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar12,uVar13,1,&UNK_0016305e,0x1d);
      bVar16 = (*pbVar10 & 1) != 0;
      pbVar12 = pbVar10 + 1;
      if (bVar16) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      uVar13 = (ulong)(*pbVar10 >> 1);
      if (bVar16) {
        uVar13 = *(ulong *)(pbVar10 + 8);
      }
      if (((long)uVar13 < 0x80) && ((long)uVar13 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x12;
        param_2[1] = (byte)uVar13;
        func_0x0099bda0(param_2 + 2,pbVar12,uVar13);
        param_2 = param_2 + uVar13 + 2;
      }
      else {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                    (param_3,2,pbVar12,uVar13);
      }
    }
    uVar5 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 0x800000000) == 0) goto code_r0x00422428;
code_r0x004224ef:
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    bVar1 = *pbVar10;
    if ((bVar1 & 1) == 0) {
      uVar13 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar13 = *(ulong *)(pbVar10 + 8);
    }
    if (uVar13 != 0) {
      pbVar12 = pbVar10 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar12,uVar13,1,&UNK_00178c9c,0x1c);
      bVar16 = (*pbVar10 & 1) != 0;
      pbVar12 = pbVar10 + 1;
      if (bVar16) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      uVar13 = (ulong)(*pbVar10 >> 1);
      if (bVar16) {
        uVar13 = *(ulong *)(pbVar10 + 8);
      }
      if (((long)uVar13 < 0x80) && ((long)uVar13 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x1a;
        param_2[1] = (byte)uVar13;
        func_0x0099bda0(param_2 + 2,pbVar12,uVar13);
        param_2 = param_2 + uVar13 + 2;
      }
      else {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                    (param_3,3,pbVar12,uVar13);
      }
    }
    uVar5 = (uint)(uVar4 >> 0x20);
    if ((uVar4 & 0x1000000000) != 0) {
code_r0x004225a8:
      pbVar10 = (byte *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if ((*pbVar10 & 1) == 0) {
        uVar5 = (uint)(*pbVar10 >> 1);
        pbVar12 = pbVar10 + 1;
      }
      else {
        uVar5 = *(uint *)(pbVar10 + 8);
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar12,uVar5,1,&UNK_00180551,0x1a);
      bVar16 = (*pbVar10 & 1) != 0;
      pbVar12 = pbVar10 + 1;
      if (bVar16) {
        pbVar12 = *(byte **)(pbVar10 + 0x10);
      }
      uVar13 = (ulong)(*pbVar10 >> 1);
      if (bVar16) {
        uVar13 = *(ulong *)(pbVar10 + 8);
      }
      if (((long)uVar13 < 0x80) && ((long)uVar13 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x22;
        param_2[1] = (byte)uVar13;
        func_0x0099bda0(param_2 + 2,pbVar12,uVar13);
        param_2 = param_2 + uVar13 + 2;
      }
      else {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                    (param_3,4,pbVar12,uVar13);
      }
      uVar5 = (uint)(uVar4 >> 0x20);
    }
  }
  if (((uVar5 & 1) != 0) && (iVar2 = *(int *)(param_1 + 0x20), 0 < (long)iVar2)) {
    lVar14 = 0;
    do {
      uVar13 = *(ulong *)(param_1 + 0x18);
      puVar6 = (ulong *)(uVar13 + 7 + lVar14);
      if ((uVar13 & 1) == 0) {
        puVar6 = (ulong *)(param_1 + 0x18);
      }
      pbVar12 = (byte *)*puVar6;
      pbVar10 = pbVar12 + 1;
      if ((*pbVar12 & 1) == 0) {
        uVar5 = (uint)(*pbVar12 >> 1);
        pbVar9 = pbVar10;
      }
      else {
        uVar5 = *(uint *)(pbVar12 + 8);
        pbVar9 = *(byte **)(pbVar12 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar9,uVar5,1,&UNK_00157a97,0x1a);
      bVar1 = *pbVar12;
      if ((bVar1 & 1) == 0) {
        uVar13 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar13 = *(ulong *)(pbVar12 + 8);
      }
      if (((long)uVar13 < 0x80) && ((long)uVar13 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x2a;
        param_2[1] = (byte)uVar13;
        if ((*pbVar12 & 1) != 0) {
          pbVar10 = *(byte **)(pbVar12 + 0x10);
        }
        func_0x0099bda0(param_2 + 2,pbVar10,uVar13);
        param_2 = param_2 + uVar13 + 2;
      }
      else {
        if ((bVar1 & 1) != 0) {
          pbVar10 = *(byte **)(pbVar12 + 0x10);
        }
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                    (param_3,5,pbVar10,uVar13);
      }
      lVar14 = lVar14 + 8;
    } while ((long)iVar2 << 3 != lVar14);
  }
  uVar5 = (uint)(uVar4 >> 0x20);
  uVar13 = uVar4;
  if (((uVar4 & 0x80000000000) != 0) && (uVar11 = *(uint *)(param_1 + 0x80), uVar11 != 0)) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
      uVar11 = *(uint *)(param_1 + 0x80);
    }
    *param_2 = 0x30;
    param_2 = param_2 + 1;
    if (uVar11 < 0x80) {
      uVar8 = (ulong)uVar11;
    }
    else {
      uVar8 = (ulong)uVar11;
      do {
        *param_2 = (byte)uVar11 | 0x80;
        uVar8 = uVar8 >> 7;
        param_2 = param_2 + 1;
        bVar16 = 0x3fff < uVar11;
        uVar11 = (uint)uVar8;
      } while (bVar16);
    }
    *param_2 = (byte)uVar8;
    param_2 = param_2 + 1;
  }
  if ((uVar4 & 0x2000000000) == 0) {
    if ((uVar4 & 0x4000000000) != 0) goto code_r0x00422874;
code_r0x0042279f:
    if ((char)uVar5 < '\0') goto code_r0x00422917;
code_r0x004227a7:
    if ((uVar5 & 0x100) != 0) goto code_r0x004229be;
code_r0x004227b3:
    if ((uVar5 & 0x200) != 0) goto code_r0x00422a65;
code_r0x004227bf:
    if ((uVar5 & 0x400) == 0) goto code_r0x00422ba4;
  }
  else {
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if ((*pbVar10 & 1) == 0) {
      uVar5 = (uint)(*pbVar10 >> 1);
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar5 = *(uint *)(pbVar10 + 8);
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar12,uVar5,1,&UNK_001661ee,0x23);
    bVar16 = (*pbVar10 & 1) != 0;
    pbVar12 = pbVar10 + 1;
    if (bVar16) {
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    uVar4 = (ulong)(*pbVar10 >> 1);
    if (bVar16) {
      uVar4 = *(ulong *)(pbVar10 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x3a;
      param_2[1] = (byte)uVar4;
      func_0x0099bda0(param_2 + 2,pbVar12,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,7,pbVar12,uVar4);
    }
    uVar5 = (uint)(uVar13 >> 0x20);
    if ((uVar13 & 0x4000000000) == 0) goto code_r0x0042279f;
code_r0x00422874:
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if ((*pbVar10 & 1) == 0) {
      uVar5 = (uint)(*pbVar10 >> 1);
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar5 = *(uint *)(pbVar10 + 8);
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar12,uVar5,1,&UNK_00166212,0x2c);
    bVar16 = (*pbVar10 & 1) != 0;
    pbVar12 = pbVar10 + 1;
    if (bVar16) {
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    uVar4 = (ulong)(*pbVar10 >> 1);
    if (bVar16) {
      uVar4 = *(ulong *)(pbVar10 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x42;
      param_2[1] = (byte)uVar4;
      func_0x0099bda0(param_2 + 2,pbVar12,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,8,pbVar12,uVar4);
    }
    uVar5 = (uint)(uVar13 >> 0x20);
    if (-1 < (char)(uVar13 >> 0x20)) goto code_r0x004227a7;
code_r0x00422917:
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    if ((*pbVar10 & 1) == 0) {
      uVar5 = (uint)(*pbVar10 >> 1);
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar5 = *(uint *)(pbVar10 + 8);
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar12,uVar5,1,&UNK_001597cd,0x20);
    bVar16 = (*pbVar10 & 1) != 0;
    pbVar12 = pbVar10 + 1;
    if (bVar16) {
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    uVar4 = (ulong)(*pbVar10 >> 1);
    if (bVar16) {
      uVar4 = *(ulong *)(pbVar10 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x4a;
      param_2[1] = (byte)uVar4;
      func_0x0099bda0(param_2 + 2,pbVar12,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,9,pbVar12,uVar4);
    }
    uVar5 = (uint)(uVar13 >> 0x20);
    if ((uVar13 & 0x10000000000) == 0) goto code_r0x004227b3;
code_r0x004229be:
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
    if ((*pbVar10 & 1) == 0) {
      uVar5 = (uint)(*pbVar10 >> 1);
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar5 = *(uint *)(pbVar10 + 8);
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar12,uVar5,1,&UNK_001597ee,0x1c);
    bVar16 = (*pbVar10 & 1) != 0;
    pbVar12 = pbVar10 + 1;
    if (bVar16) {
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    uVar4 = (ulong)(*pbVar10 >> 1);
    if (bVar16) {
      uVar4 = *(ulong *)(pbVar10 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x52;
      param_2[1] = (byte)uVar4;
      func_0x0099bda0(param_2 + 2,pbVar12,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,10,pbVar12,uVar4);
    }
    uVar5 = (uint)(uVar13 >> 0x20);
    if ((uVar13 & 0x20000000000) == 0) goto code_r0x004227bf;
code_r0x00422a65:
    pbVar10 = (byte *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
    if ((*pbVar10 & 1) == 0) {
      uVar5 = (uint)(*pbVar10 >> 1);
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar5 = *(uint *)(pbVar10 + 8);
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar12,uVar5,1,&UNK_001757c0,0x2a);
    bVar16 = (*pbVar10 & 1) != 0;
    pbVar12 = pbVar10 + 1;
    if (bVar16) {
      pbVar12 = *(byte **)(pbVar10 + 0x10);
    }
    uVar4 = (ulong)(*pbVar10 >> 1);
    if (bVar16) {
      uVar4 = *(ulong *)(pbVar10 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x5a;
      param_2[1] = (byte)uVar4;
      func_0x0099bda0(param_2 + 2,pbVar12,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,0xb,pbVar12,uVar4);
    }
    if ((uVar13 & 0x40000000000) == 0) goto code_r0x00422ba4;
  }
  pbVar10 = (byte *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
  if ((*pbVar10 & 1) == 0) {
    uVar5 = (uint)(*pbVar10 >> 1);
    pbVar12 = pbVar10 + 1;
  }
  else {
    uVar5 = *(uint *)(pbVar10 + 8);
    pbVar12 = *(byte **)(pbVar10 + 0x10);
  }
  _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
            (pbVar12,uVar5,1,&UNK_0017bcc9,0x1e);
  bVar16 = (*pbVar10 & 1) != 0;
  pbVar12 = pbVar10 + 1;
  if (bVar16) {
    pbVar12 = *(byte **)(pbVar10 + 0x10);
  }
  uVar4 = (ulong)(*pbVar10 >> 1);
  if (bVar16) {
    uVar4 = *(ulong *)(pbVar10 + 8);
  }
  if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
    *param_2 = 0x62;
    param_2[1] = (byte)uVar4;
    func_0x0099bda0(param_2 + 2,pbVar12,uVar4);
    param_2 = param_2 + uVar4 + 2;
  }
  else {
    param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                (param_3,0xc,pbVar12,uVar4);
  }
code_r0x00422ba4:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = *(ulong *)(uVar13 + 0x10);
  bVar16 = (uVar4 & 4) == 0;
  if (bVar16) {
    if ((uVar4 & 3) == 0) {
      return param_2;
    }
  }
  else if (*(int *)(uVar13 + 0x18) < 1) {
    return param_2;
  }
  lVar14 = 0;
  pbVar10 = param_2;
  do {
    uVar4 = uVar4 & 0xfffffffffffffff8;
    if (bVar16) {
      uVar4 = uVar13 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar15 = (int *)(uVar4 + lVar14 * 0x10);
    switch(piVar15[1]) {
    case 0:
      uVar4 = *(ulong *)(piVar15 + 2);
      uVar5 = *piVar15 << 3;
      if (uVar5 < 0x80) {
        uVar8 = (ulong)uVar5;
      }
      else {
        uVar8 = (ulong)uVar5;
        do {
          *param_2 = (byte)uVar5 | 0x80;
          uVar8 = uVar8 >> 7;
          param_2 = param_2 + 1;
          bVar16 = 0x3fff < uVar5;
          uVar5 = (uint)uVar8;
        } while (bVar16);
      }
      *param_2 = (byte)uVar8;
      param_2 = param_2 + 1;
      if (uVar4 < 0x80) {
        *param_2 = (byte)uVar4;
      }
      else {
        do {
          *param_2 = (byte)uVar4 | 0x80;
          uVar8 = uVar4 >> 7;
          param_2 = param_2 + 1;
          bVar16 = 0x3fff < uVar4;
          uVar4 = uVar8;
        } while (bVar16);
        *param_2 = (byte)uVar8;
      }
      goto code_r0x00625084;
    case 1:
      iVar2 = piVar15[2];
      uVar4 = (ulong)(*piVar15 * 8 + 5);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      *(int *)(param_2 + 1) = iVar2;
      param_2 = param_2 + 5;
      break;
    case 2:
      uVar3 = *(undefined8 *)(piVar15 + 2);
      uVar4 = (ulong)(*piVar15 * 8 + 1);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      *(undefined8 *)(param_2 + 1) = uVar3;
      param_2 = param_2 + 9;
      break;
    case 3:
      pbVar12 = *(byte **)(piVar15 + 2);
      bVar16 = (*pbVar12 & 1) != 0;
      pbVar9 = pbVar12 + 1;
      if (bVar16) {
        pbVar9 = *(byte **)(pbVar12 + 0x10);
      }
      uVar4 = (ulong)(*pbVar12 >> 1);
      if (bVar16) {
        uVar4 = *(ulong *)(pbVar12 + 8);
      }
      if ((long)uVar4 < 0x80) {
        uVar5 = *piVar15 * 8;
        lVar7 = 1;
        if (((0x7f < uVar5) && (lVar7 = 2, 0x3fff < uVar5)) && (lVar7 = 3, 0x1fffff < uVar5)) {
          lVar7 = 5 - (ulong)(uVar5 < 0x10000000);
        }
        if ((long)uVar4 <= (long)(~(ulong)(param_2 + lVar7) + *param_3 + 0x10)) {
          uVar8 = (ulong)(uVar5 | 2);
          if (0x7f < uVar5) {
            do {
              uVar5 = (uint)uVar8;
              *param_2 = (byte)uVar8 | 0x80;
              uVar8 = uVar8 >> 7;
              param_2 = param_2 + 1;
            } while (0x3fff < uVar5);
          }
          *param_2 = (byte)uVar8;
          param_2[1] = (byte)uVar4;
          func_0x0099bda0(param_2 + 2,pbVar9,uVar4);
          param_2 = param_2 + uVar4 + 2;
          break;
        }
      }
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,*piVar15,pbVar9,uVar4,param_2,param_6,pbVar10,unaff_RBX,
                                   unaff_R12,unaff_R13,unaff_R14,unaff_R15,unaff_RBP);
      break;
    case 4:
      uVar4 = (ulong)(*piVar15 * 8 + 3);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      param_2 = (byte *)_ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                                  (*(undefined8 *)(piVar15 + 2),param_2 + 1,param_3);
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
      }
      uVar4 = (ulong)(*piVar15 * 8 + 4);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
code_r0x00625084:
      param_2 = param_2 + 1;
    }
    uVar4 = *(ulong *)(uVar13 + 0x10);
    bVar16 = (uVar4 & 4) == 0;
    if (bVar16) {
      uVar5 = (uint)uVar4 & 3;
    }
    else {
      uVar5 = *(uint *)(uVar13 + 0x18);
    }
    lVar14 = lVar14 + 1;
    if ((int)uVar5 <= lVar14) {
      return param_2;
    }
  } while( true );
}


