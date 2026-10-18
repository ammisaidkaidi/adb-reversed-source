// Function: _ZNK3adb5proto15AdbServerStatus18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 0041fa80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

byte * _ZNK3adb5proto15AdbServerStatus18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *in_RAX;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  uint uVar9;
  ulong uVar10;
  undefined8 unaff_R12;
  int *piVar11;
  undefined8 unaff_R13;
  long lVar12;
  undefined8 unaff_R14;
  byte *pbVar13;
  undefined8 unaff_R15;
  bool bVar14;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 0x100) != 0) {
    uVar9 = *(uint *)(param_1 + 0x58);
    in_RAX = (byte *)(ulong)uVar9;
    if (uVar9 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
        uVar9 = *(uint *)(param_1 + 0x58);
      }
      *param_2 = 8;
      param_2 = param_2 + 1;
      in_RAX = (byte *)(long)(int)uVar9;
      pbVar13 = in_RAX;
      if (0x7f < uVar9) {
        do {
          *param_2 = (byte)pbVar13 | 0x80;
          in_RAX = (byte *)((ulong)pbVar13 >> 7);
          param_2 = param_2 + 1;
          bVar14 = (byte *)0x3fff < pbVar13;
          pbVar13 = in_RAX;
        } while (bVar14);
      }
      *param_2 = (byte)in_RAX;
      param_2 = param_2 + 1;
    }
  }
  if (((uVar5 & 0x400) != 0) && (*(char *)(param_1 + 0x60) == '\x01')) {
    in_RAX = (byte *)0x1;
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
      in_RAX = (byte *)(ulong)*(byte *)(param_1 + 0x60);
    }
    *param_2 = 0x10;
    param_2[1] = (byte)in_RAX;
    param_2 = param_2 + 2;
  }
  if ((uVar5 & 0x200) != 0) {
    uVar9 = *(uint *)(param_1 + 0x5c);
    in_RAX = (byte *)(ulong)uVar9;
    if (uVar9 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
        uVar9 = *(uint *)(param_1 + 0x5c);
      }
      *param_2 = 0x18;
      param_2 = param_2 + 1;
      in_RAX = (byte *)(long)(int)uVar9;
      pbVar13 = in_RAX;
      if (0x7f < uVar9) {
        do {
          *param_2 = (byte)pbVar13 | 0x80;
          in_RAX = (byte *)((ulong)pbVar13 >> 7);
          param_2 = param_2 + 1;
          bVar14 = (byte *)0x3fff < pbVar13;
          pbVar13 = in_RAX;
        } while (bVar14);
      }
      *param_2 = (byte)in_RAX;
      param_2 = param_2 + 1;
    }
  }
  if (((uVar5 & 0x800) != 0) && (*(char *)(param_1 + 0x61) == '\x01')) {
    in_RAX = (byte *)0x1;
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
      in_RAX = (byte *)(ulong)*(byte *)(param_1 + 0x61);
    }
    *param_2 = 0x20;
    param_2[1] = (byte)in_RAX;
    param_2 = param_2 + 2;
  }
  if ((uVar5 & 1) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar4 != 0) {
      pbVar8 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar8,uVar4,1,&UNK_0015c9f4,0x21);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar8 = pbVar13 + 1;
      if (bVar14) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      uVar4 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x2a;
        param_2[1] = (byte)uVar4;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
        param_2 = param_2 + uVar4 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,5,pbVar8,uVar4,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar5 & 2) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar4 != 0) {
      pbVar8 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar8,uVar4,1,&UNK_001757a0,0x1f);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar8 = pbVar13 + 1;
      if (bVar14) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      uVar4 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x32;
        param_2[1] = (byte)uVar4;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
        param_2 = param_2 + uVar4 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,6,pbVar8,uVar4,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar5 & 4) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar4 != 0) {
      pbVar8 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar8,uVar4,1,&UNK_0017d888,0x32);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar8 = pbVar13 + 1;
      if (bVar14) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      uVar4 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x3a;
        param_2[1] = (byte)uVar4;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
        param_2 = param_2 + uVar4 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,7,pbVar8,uVar4,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar5 & 8) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar4 != 0) {
      pbVar8 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar8,uVar4,1,&UNK_0018374f,0x2b);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar8 = pbVar13 + 1;
      if (bVar14) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      uVar4 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x42;
        param_2[1] = (byte)uVar4;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
        param_2 = param_2 + uVar4 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,8,pbVar8,uVar4,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar5 & 0x10) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar4 != 0) {
      pbVar8 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar8,uVar4,1,&UNK_00180534,0x1c);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar8 = pbVar13 + 1;
      if (bVar14) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      uVar4 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x4a;
        param_2[1] = (byte)uVar4;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
        param_2 = param_2 + uVar4 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,9,pbVar8,uVar4,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar5 & 0x20) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if ((*pbVar13 & 1) == 0) {
      uVar9 = (uint)(*pbVar13 >> 1);
      pbVar8 = pbVar13 + 1;
    }
    else {
      uVar9 = *(uint *)(pbVar13 + 8);
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar8,uVar9,1,&UNK_0017a370,0x25);
    bVar14 = (*pbVar13 & 1) != 0;
    pbVar8 = pbVar13 + 1;
    if (bVar14) {
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    uVar4 = (ulong)(*pbVar13 >> 1);
    if (bVar14) {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x52;
      param_2[1] = (byte)uVar4;
      in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                 (param_3,10,pbVar8,uVar4,param_2);
      param_2 = in_RAX;
    }
  }
  if ((uVar5 & 0x1000) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    bVar1 = *(byte *)(param_1 + 0x62);
    in_RAX = (byte *)(ulong)bVar1;
    *param_2 = 0x58;
    param_2[1] = bVar1;
    param_2 = param_2 + 2;
  }
  if ((uVar5 & 0x2000) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    bVar1 = *(byte *)(param_1 + 99);
    in_RAX = (byte *)(ulong)bVar1;
    *param_2 = 0x60;
    param_2[1] = bVar1;
    param_2 = param_2 + 2;
  }
  if ((uVar5 & 0x40) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if ((*pbVar13 & 1) == 0) {
      uVar9 = (uint)(*pbVar13 >> 1);
      pbVar8 = pbVar13 + 1;
    }
    else {
      uVar9 = *(uint *)(pbVar13 + 8);
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar8,uVar9,1,&UNK_001697ca,0x27);
    bVar14 = (*pbVar13 & 1) != 0;
    pbVar8 = pbVar13 + 1;
    if (bVar14) {
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    uVar4 = (ulong)(*pbVar13 >> 1);
    if (bVar14) {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x6a;
      param_2[1] = (byte)uVar4;
      in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                 (param_3,0xd,pbVar8,uVar4,param_2);
      param_2 = in_RAX;
    }
  }
  if ((char)uVar5 < '\0') {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if ((*pbVar13 & 1) == 0) {
      uVar5 = (uint)(*pbVar13 >> 1);
      pbVar8 = pbVar13 + 1;
    }
    else {
      uVar5 = *(uint *)(pbVar13 + 8);
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar8,uVar5,1,&UNK_0015ca16,0x2a);
    bVar14 = (*pbVar13 & 1) != 0;
    pbVar8 = pbVar13 + 1;
    if (bVar14) {
      pbVar8 = *(byte **)(pbVar13 + 0x10);
    }
    uVar4 = (ulong)(*pbVar13 >> 1);
    if (bVar14) {
      uVar4 = *(ulong *)(pbVar13 + 8);
    }
    if (((long)uVar4 < 0x80) && ((long)uVar4 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x72;
      param_2[1] = (byte)uVar4;
      in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
      param_2 = param_2 + uVar4 + 2;
    }
    else {
      in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                 (param_3,0xe,pbVar8,uVar4,param_2);
      param_2 = in_RAX;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = *(ulong *)(uVar10 + 0x10);
  bVar14 = (uVar4 & 4) == 0;
  if (bVar14) {
    if ((uVar4 & 3) == 0) {
      return param_2;
    }
  }
  else if (*(int *)(uVar10 + 0x18) < 1) {
    return param_2;
  }
  lVar12 = 0;
  do {
    uVar4 = uVar4 & 0xfffffffffffffff8;
    if (bVar14) {
      uVar4 = uVar10 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar11 = (int *)(uVar4 + lVar12 * 0x10);
    switch(piVar11[1]) {
    case 0:
      uVar4 = *(ulong *)(piVar11 + 2);
      uVar5 = *piVar11 << 3;
      if (uVar5 < 0x80) {
        uVar7 = (ulong)uVar5;
      }
      else {
        uVar7 = (ulong)uVar5;
        do {
          *param_2 = (byte)uVar5 | 0x80;
          uVar7 = uVar7 >> 7;
          param_2 = param_2 + 1;
          bVar14 = 0x3fff < uVar5;
          uVar5 = (uint)uVar7;
        } while (bVar14);
      }
      *param_2 = (byte)uVar7;
      param_2 = param_2 + 1;
      if (uVar4 < 0x80) {
        *param_2 = (byte)uVar4;
      }
      else {
        do {
          *param_2 = (byte)uVar4 | 0x80;
          uVar7 = uVar4 >> 7;
          param_2 = param_2 + 1;
          bVar14 = 0x3fff < uVar4;
          uVar4 = uVar7;
        } while (bVar14);
        *param_2 = (byte)uVar7;
      }
      goto code_r0x00625084;
    case 1:
      iVar2 = piVar11[2];
      uVar4 = (ulong)(*piVar11 * 8 + 5);
      if (0x7f < (uint)(*piVar11 << 3)) {
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
      uVar3 = *(undefined8 *)(piVar11 + 2);
      uVar4 = (ulong)(*piVar11 * 8 + 1);
      if (0x7f < (uint)(*piVar11 << 3)) {
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
      pbVar13 = *(byte **)(piVar11 + 2);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar8 = pbVar13 + 1;
      if (bVar14) {
        pbVar8 = *(byte **)(pbVar13 + 0x10);
      }
      uVar4 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar13 + 8);
      }
      if ((long)uVar4 < 0x80) {
        uVar5 = *piVar11 * 8;
        lVar6 = 1;
        if (((0x7f < uVar5) && (lVar6 = 2, 0x3fff < uVar5)) && (lVar6 = 3, 0x1fffff < uVar5)) {
          lVar6 = 5 - (ulong)(uVar5 < 0x10000000);
        }
        if ((long)uVar4 <= (long)(~(ulong)(param_2 + lVar6) + *param_3 + 0x10)) {
          uVar7 = (ulong)(uVar5 | 2);
          if (0x7f < uVar5) {
            do {
              uVar5 = (uint)uVar7;
              *param_2 = (byte)uVar7 | 0x80;
              uVar7 = uVar7 >> 7;
              param_2 = param_2 + 1;
            } while (0x3fff < uVar5);
          }
          *param_2 = (byte)uVar7;
          param_2[1] = (byte)uVar4;
          func_0x0099bda0(param_2 + 2,pbVar8,uVar4);
          param_2 = param_2 + uVar4 + 2;
          break;
        }
      }
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,*piVar11,pbVar8,uVar4,param_2,param_6,in_RAX,unaff_RBX,
                                   unaff_R12,unaff_R13,unaff_R14,unaff_R15,unaff_RBP);
      break;
    case 4:
      uVar4 = (ulong)(*piVar11 * 8 + 3);
      if (0x7f < (uint)(*piVar11 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      param_2 = (byte *)_ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                                  (*(undefined8 *)(piVar11 + 2),param_2 + 1,param_3);
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
      }
      uVar4 = (ulong)(*piVar11 * 8 + 4);
      if (0x7f < (uint)(*piVar11 << 3)) {
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
    uVar4 = *(ulong *)(uVar10 + 0x10);
    bVar14 = (uVar4 & 4) == 0;
    if (bVar14) {
      uVar5 = (uint)uVar4 & 3;
    }
    else {
      uVar5 = *(uint *)(uVar10 + 0x18);
    }
    lVar12 = lVar12 + 1;
    if ((int)uVar5 <= lVar12) {
      return param_2;
    }
  } while( true );
}


