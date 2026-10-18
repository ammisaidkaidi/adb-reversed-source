// Function: _ZNK3adb5proto6Device18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 0041e470
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZNK3adb5proto6Device18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *in_RAX;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar10;
  undefined8 unaff_R12;
  int *piVar11;
  undefined8 unaff_R13;
  long lVar12;
  undefined8 unaff_R14;
  byte *pbVar13;
  undefined8 unaff_R15;
  bool bVar14;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar5 != 0) {
      pbVar9 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar9,uVar5,1,&UNK_00157a7f,0x17);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar9 = pbVar13 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      uVar5 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar5 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar5 < 0x80) && ((long)uVar5 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 10;
        param_2[1] = (byte)uVar5;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar9,uVar5);
        param_2 = param_2 + uVar5 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,1,pbVar9,uVar5,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar6 & 0x20) != 0) {
    uVar4 = *(uint *)(param_1 + 0x40);
    in_RAX = (byte *)(ulong)uVar4;
    if (uVar4 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
        uVar4 = *(uint *)(param_1 + 0x40);
      }
      *param_2 = 0x10;
      param_2 = param_2 + 1;
      in_RAX = (byte *)(long)(int)uVar4;
      pbVar13 = in_RAX;
      if (0x7f < uVar4) {
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
  if ((uVar6 & 2) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar5 != 0) {
      pbVar9 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar9,uVar5,1,&UNK_0016b10f,0x1c);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar9 = pbVar13 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      uVar5 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar5 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar5 < 0x80) && ((long)uVar5 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x1a;
        param_2[1] = (byte)uVar5;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar9,uVar5);
        param_2 = param_2 + uVar5 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,3,pbVar9,uVar5,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar6 & 4) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar5 != 0) {
      pbVar9 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar9,uVar5,1,&UNK_0015b3a9,0x18);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar9 = pbVar13 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      uVar5 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar5 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar5 < 0x80) && ((long)uVar5 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x22;
        param_2[1] = (byte)uVar5;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar9,uVar5);
        param_2 = param_2 + uVar5 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,4,pbVar9,uVar5,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar6 & 8) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar5 != 0) {
      pbVar9 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar9,uVar5,1,&UNK_0017bcb2,0x16);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar9 = pbVar13 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      uVar5 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar5 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar5 < 0x80) && ((long)uVar5 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x2a;
        param_2[1] = (byte)uVar5;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar9,uVar5);
        param_2 = param_2 + uVar5 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,5,pbVar9,uVar5,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar6 & 0x10) != 0) {
    pbVar13 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    bVar1 = *pbVar13;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)(pbVar13 + 8);
    }
    if (uVar5 != 0) {
      pbVar9 = pbVar13 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar9,uVar5,1,&UNK_00186923,0x17);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar9 = pbVar13 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      uVar5 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar5 = *(ulong *)(pbVar13 + 8);
      }
      if (((long)uVar5 < 0x80) && ((long)uVar5 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x32;
        param_2[1] = (byte)uVar5;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar9,uVar5);
        param_2 = param_2 + uVar5 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,6,pbVar9,uVar5,param_2);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar6 & 0x40) != 0) {
    uVar4 = *(uint *)(param_1 + 0x44);
    in_RAX = (byte *)(ulong)uVar4;
    if (uVar4 != 0) {
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
        uVar4 = *(uint *)(param_1 + 0x44);
      }
      *param_2 = 0x38;
      param_2 = param_2 + 1;
      in_RAX = (byte *)(long)(int)uVar4;
      pbVar13 = in_RAX;
      if (0x7f < uVar4) {
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
  if (((char)uVar6 < '\0') && (*(long *)(param_1 + 0x48) != 0)) {
    in_RAX = (byte *)_ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi8EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                               (param_3,*(long *)(param_1 + 0x48),param_2);
    param_2 = in_RAX;
  }
  if (((uVar6 & 0x100) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    in_RAX = (byte *)_ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi9EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                               (param_3,*(long *)(param_1 + 0x50),param_2);
    param_2 = in_RAX;
  }
  if (((uVar6 & 0x200) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    in_RAX = (byte *)_ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi10EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                               (param_3,*(long *)(param_1 + 0x58),param_2);
    param_2 = in_RAX;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = *(ulong *)(uVar10 + 0x10);
  bVar14 = (uVar5 & 4) == 0;
  if (bVar14) {
    if ((uVar5 & 3) == 0) {
      return param_2;
    }
  }
  else if (*(int *)(uVar10 + 0x18) < 1) {
    return param_2;
  }
  lVar12 = 0;
  do {
    uVar5 = uVar5 & 0xfffffffffffffff8;
    if (bVar14) {
      uVar5 = uVar10 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar11 = (int *)(uVar5 + lVar12 * 0x10);
    switch(piVar11[1]) {
    case 0:
      uVar5 = *(ulong *)(piVar11 + 2);
      uVar6 = *piVar11 << 3;
      if (uVar6 < 0x80) {
        uVar8 = (ulong)uVar6;
      }
      else {
        uVar8 = (ulong)uVar6;
        do {
          *param_2 = (byte)uVar6 | 0x80;
          uVar8 = uVar8 >> 7;
          param_2 = param_2 + 1;
          bVar14 = 0x3fff < uVar6;
          uVar6 = (uint)uVar8;
        } while (bVar14);
      }
      *param_2 = (byte)uVar8;
      param_2 = param_2 + 1;
      if (uVar5 < 0x80) {
        *param_2 = (byte)uVar5;
      }
      else {
        do {
          *param_2 = (byte)uVar5 | 0x80;
          uVar8 = uVar5 >> 7;
          param_2 = param_2 + 1;
          bVar14 = 0x3fff < uVar5;
          uVar5 = uVar8;
        } while (bVar14);
        *param_2 = (byte)uVar8;
      }
      goto code_r0x00625084;
    case 1:
      iVar2 = piVar11[2];
      uVar5 = (ulong)(*piVar11 * 8 + 5);
      if (0x7f < (uint)(*piVar11 << 3)) {
        do {
          uVar6 = (uint)uVar5;
          *param_2 = (byte)uVar5 | 0x80;
          uVar5 = uVar5 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar6);
      }
      *param_2 = (byte)uVar5;
      *(int *)(param_2 + 1) = iVar2;
      param_2 = param_2 + 5;
      break;
    case 2:
      uVar3 = *(undefined8 *)(piVar11 + 2);
      uVar5 = (ulong)(*piVar11 * 8 + 1);
      if (0x7f < (uint)(*piVar11 << 3)) {
        do {
          uVar6 = (uint)uVar5;
          *param_2 = (byte)uVar5 | 0x80;
          uVar5 = uVar5 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar6);
      }
      *param_2 = (byte)uVar5;
      *(undefined8 *)(param_2 + 1) = uVar3;
      param_2 = param_2 + 9;
      break;
    case 3:
      pbVar13 = *(byte **)(piVar11 + 2);
      bVar14 = (*pbVar13 & 1) != 0;
      pbVar9 = pbVar13 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar13 + 0x10);
      }
      uVar5 = (ulong)(*pbVar13 >> 1);
      if (bVar14) {
        uVar5 = *(ulong *)(pbVar13 + 8);
      }
      if ((long)uVar5 < 0x80) {
        uVar6 = *piVar11 * 8;
        lVar7 = 1;
        if (((0x7f < uVar6) && (lVar7 = 2, 0x3fff < uVar6)) && (lVar7 = 3, 0x1fffff < uVar6)) {
          lVar7 = 5 - (ulong)(uVar6 < 0x10000000);
        }
        if ((long)uVar5 <= (long)(~(ulong)(param_2 + lVar7) + *param_3 + 0x10)) {
          uVar8 = (ulong)(uVar6 | 2);
          if (0x7f < uVar6) {
            do {
              uVar6 = (uint)uVar8;
              *param_2 = (byte)uVar8 | 0x80;
              uVar8 = uVar8 >> 7;
              param_2 = param_2 + 1;
            } while (0x3fff < uVar6);
          }
          *param_2 = (byte)uVar8;
          param_2[1] = (byte)uVar5;
          func_0x0099bda0(param_2 + 2,pbVar9,uVar5);
          param_2 = param_2 + uVar5 + 2;
          break;
        }
      }
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,*piVar11,pbVar9,uVar5,param_2,param_6,in_RAX,unaff_RBX,
                                   unaff_R12,unaff_R13,unaff_R14,unaff_R15,unaff_RBP);
      break;
    case 4:
      uVar5 = (ulong)(*piVar11 * 8 + 3);
      if (0x7f < (uint)(*piVar11 << 3)) {
        do {
          uVar6 = (uint)uVar5;
          *param_2 = (byte)uVar5 | 0x80;
          uVar5 = uVar5 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar6);
      }
      *param_2 = (byte)uVar5;
      param_2 = (byte *)_ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                                  (*(undefined8 *)(piVar11 + 2),param_2 + 1,param_3);
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
      }
      uVar5 = (ulong)(*piVar11 * 8 + 4);
      if (0x7f < (uint)(*piVar11 << 3)) {
        do {
          uVar6 = (uint)uVar5;
          *param_2 = (byte)uVar5 | 0x80;
          uVar5 = uVar5 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar6);
      }
      *param_2 = (byte)uVar5;
code_r0x00625084:
      param_2 = param_2 + 1;
    }
    uVar5 = *(ulong *)(uVar10 + 0x10);
    bVar14 = (uVar5 & 4) == 0;
    if (bVar14) {
      uVar6 = (uint)uVar5 & 3;
    }
    else {
      uVar6 = *(uint *)(uVar10 + 0x18);
    }
    lVar12 = lVar12 + 1;
    if ((int)uVar6 <= lVar12) {
      return param_2;
    }
  } while( true );
}


