// Function: _ZNK3adb5proto12ProcessEntry18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 0036bd40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZNK3adb5proto12ProcessEntry18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *in_RAX;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 unaff_R12;
  byte *pbVar14;
  int *piVar15;
  undefined8 unaff_R13;
  long lVar16;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar17;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if (((uVar7 & 8) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    in_RAX = (byte *)_ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi1EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                               (param_3);
    param_2 = in_RAX;
  }
  if (((uVar7 & 0x40) != 0) && (*(char *)(param_1 + 0x58) == '\x01')) {
    in_RAX = (byte *)0x1;
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
      in_RAX = (byte *)(ulong)*(byte *)(param_1 + 0x58);
    }
    *param_2 = 0x10;
    param_2[1] = (byte)in_RAX;
    param_2 = param_2 + 2;
  }
  if (((char)uVar7 < '\0') && (*(char *)(param_1 + 0x59) == '\x01')) {
    in_RAX = (byte *)0x1;
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
      in_RAX = (byte *)(ulong)*(byte *)(param_1 + 0x59);
    }
    *param_2 = 0x18;
    param_2[1] = (byte)in_RAX;
    param_2 = param_2 + 2;
  }
  if ((uVar7 & 2) != 0) {
    pbVar14 = (byte *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    bVar1 = *pbVar14;
    in_RAX = (byte *)(ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar6 = *(ulong *)(pbVar14 + 8);
    }
    if (uVar6 != 0) {
      pbVar10 = pbVar14 + 1;
      if ((bVar1 & 1) != 0) {
        pbVar10 = *(byte **)(pbVar14 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar10,uVar6,1,&UNK_00180319,0x23);
      bVar17 = (*pbVar14 & 1) != 0;
      pbVar10 = pbVar14 + 1;
      if (bVar17) {
        pbVar10 = *(byte **)(pbVar14 + 0x10);
      }
      uVar6 = (ulong)(*pbVar14 >> 1);
      if (bVar17) {
        uVar6 = *(ulong *)(pbVar14 + 8);
      }
      if (((long)uVar6 < 0x80) && ((long)uVar6 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x22;
        param_2[1] = (byte)uVar6;
        in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar10,uVar6);
        param_2 = param_2 + uVar6 + 2;
      }
      else {
        in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                   (param_3,4,pbVar10,uVar6);
        param_2 = in_RAX;
      }
    }
  }
  if ((uVar7 & 0x10) != 0) {
    in_RAX = (byte *)_ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi5EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                               (param_3,*(undefined8 *)(param_1 + 0x48));
    param_2 = in_RAX;
  }
  if ((uVar7 & 4) != 0) {
    pbVar14 = (byte *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    if ((*pbVar14 & 1) == 0) {
      uVar11 = (uint)(*pbVar14 >> 1);
      pbVar10 = pbVar14 + 1;
    }
    else {
      uVar11 = *(uint *)(pbVar14 + 8);
      pbVar10 = *(byte **)(pbVar14 + 0x10);
    }
    _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
              (pbVar10,uVar11,1,&UNK_0018033d,0x23);
    bVar17 = (*pbVar14 & 1) != 0;
    pbVar10 = pbVar14 + 1;
    if (bVar17) {
      pbVar10 = *(byte **)(pbVar14 + 0x10);
    }
    uVar6 = (ulong)(*pbVar14 >> 1);
    if (bVar17) {
      uVar6 = *(ulong *)(pbVar14 + 8);
    }
    if (((long)uVar6 < 0x80) && ((long)uVar6 <= (*param_3 - (long)param_2) + 0xe)) {
      *param_2 = 0x32;
      param_2[1] = (byte)uVar6;
      in_RAX = (byte *)func_0x0099bda0(param_2 + 2,pbVar10,uVar6);
      param_2 = param_2 + uVar6 + 2;
    }
    else {
      in_RAX = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream30WriteStringMaybeAliasedOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                 (param_3,6,pbVar10,uVar6);
      param_2 = in_RAX;
    }
  }
  if (((uVar7 & 1) != 0) && (in_RAX = (byte *)(long)*(int *)(param_1 + 0x20), 0 < (long)in_RAX)) {
    in_RAX = (byte *)((long)in_RAX << 3);
    pbVar14 = (byte *)0x0;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar5 = (ulong *)(pbVar14 + uVar6 + 7);
      if ((uVar6 & 1) == 0) {
        puVar5 = (ulong *)(param_1 + 0x18);
      }
      pbVar3 = (byte *)*puVar5;
      pbVar10 = pbVar3 + 1;
      if ((*pbVar3 & 1) == 0) {
        uVar11 = (uint)(*pbVar3 >> 1);
        pbVar12 = pbVar10;
      }
      else {
        uVar11 = *(uint *)(pbVar3 + 8);
        pbVar12 = *(byte **)(pbVar3 + 0x10);
      }
      _ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationENSt3__117basic_string_viewIcNS6_11char_traitsIcEEEE
                (pbVar12,uVar11,1,&UNK_00162cf8,0x24);
      bVar1 = *pbVar3;
      if ((bVar1 & 1) == 0) {
        uVar6 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar6 = *(ulong *)(pbVar3 + 8);
      }
      if (((long)uVar6 < 0x80) && ((long)uVar6 <= (*param_3 - (long)param_2) + 0xe)) {
        *param_2 = 0x3a;
        param_2[1] = (byte)uVar6;
        if ((*pbVar3 & 1) != 0) {
          pbVar10 = *(byte **)(pbVar3 + 0x10);
        }
        func_0x0099bda0(param_2 + 2,pbVar10,uVar6);
        param_2 = param_2 + uVar6 + 2;
      }
      else {
        if ((bVar1 & 1) != 0) {
          pbVar10 = *(byte **)(pbVar3 + 0x10);
        }
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                    (param_3,7,pbVar10,uVar6);
      }
      pbVar14 = pbVar14 + 8;
    } while (in_RAX != pbVar14);
  }
  if ((uVar7 & 0x100) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    bVar1 = *(byte *)(param_1 + 0x5a);
    in_RAX = (byte *)(ulong)bVar1;
    *param_2 = 0x40;
    param_2[1] = bVar1;
    param_2 = param_2 + 2;
  }
  if ((uVar7 & 0x20) != 0) {
    in_RAX = (byte *)_ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi9EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                               (param_3,*(undefined8 *)(param_1 + 0x50));
    param_2 = in_RAX;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = *(ulong *)(uVar13 + 0x10);
  bVar17 = (uVar6 & 4) == 0;
  if (bVar17) {
    if ((uVar6 & 3) == 0) {
      return param_2;
    }
  }
  else if (*(int *)(uVar13 + 0x18) < 1) {
    return param_2;
  }
  lVar16 = 0;
  do {
    uVar6 = uVar6 & 0xfffffffffffffff8;
    if (bVar17) {
      uVar6 = uVar13 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar15 = (int *)(uVar6 + lVar16 * 0x10);
    switch(piVar15[1]) {
    case 0:
      uVar6 = *(ulong *)(piVar15 + 2);
      uVar7 = *piVar15 << 3;
      if (uVar7 < 0x80) {
        uVar9 = (ulong)uVar7;
      }
      else {
        uVar9 = (ulong)uVar7;
        do {
          *param_2 = (byte)uVar7 | 0x80;
          uVar9 = uVar9 >> 7;
          param_2 = param_2 + 1;
          bVar17 = 0x3fff < uVar7;
          uVar7 = (uint)uVar9;
        } while (bVar17);
      }
      *param_2 = (byte)uVar9;
      param_2 = param_2 + 1;
      if (uVar6 < 0x80) {
        *param_2 = (byte)uVar6;
      }
      else {
        do {
          *param_2 = (byte)uVar6 | 0x80;
          uVar9 = uVar6 >> 7;
          param_2 = param_2 + 1;
          bVar17 = 0x3fff < uVar6;
          uVar6 = uVar9;
        } while (bVar17);
        *param_2 = (byte)uVar9;
      }
      goto code_r0x00625084;
    case 1:
      iVar2 = piVar15[2];
      uVar6 = (ulong)(*piVar15 * 8 + 5);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar7 = (uint)uVar6;
          *param_2 = (byte)uVar6 | 0x80;
          uVar6 = uVar6 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar7);
      }
      *param_2 = (byte)uVar6;
      *(int *)(param_2 + 1) = iVar2;
      param_2 = param_2 + 5;
      break;
    case 2:
      uVar4 = *(undefined8 *)(piVar15 + 2);
      uVar6 = (ulong)(*piVar15 * 8 + 1);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar7 = (uint)uVar6;
          *param_2 = (byte)uVar6 | 0x80;
          uVar6 = uVar6 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar7);
      }
      *param_2 = (byte)uVar6;
      *(undefined8 *)(param_2 + 1) = uVar4;
      param_2 = param_2 + 9;
      break;
    case 3:
      pbVar14 = *(byte **)(piVar15 + 2);
      bVar17 = (*pbVar14 & 1) != 0;
      pbVar10 = pbVar14 + 1;
      if (bVar17) {
        pbVar10 = *(byte **)(pbVar14 + 0x10);
      }
      uVar6 = (ulong)(*pbVar14 >> 1);
      if (bVar17) {
        uVar6 = *(ulong *)(pbVar14 + 8);
      }
      if ((long)uVar6 < 0x80) {
        uVar7 = *piVar15 * 8;
        lVar8 = 1;
        if (((0x7f < uVar7) && (lVar8 = 2, 0x3fff < uVar7)) && (lVar8 = 3, 0x1fffff < uVar7)) {
          lVar8 = 5 - (ulong)(uVar7 < 0x10000000);
        }
        if ((long)uVar6 <= (long)(~(ulong)(param_2 + lVar8) + *param_3 + 0x10)) {
          uVar9 = (ulong)(uVar7 | 2);
          if (0x7f < uVar7) {
            do {
              uVar7 = (uint)uVar9;
              *param_2 = (byte)uVar9 | 0x80;
              uVar9 = uVar9 >> 7;
              param_2 = param_2 + 1;
            } while (0x3fff < uVar7);
          }
          *param_2 = (byte)uVar9;
          param_2[1] = (byte)uVar6;
          func_0x0099bda0(param_2 + 2,pbVar10,uVar6);
          param_2 = param_2 + uVar6 + 2;
          break;
        }
      }
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,*piVar15,pbVar10,uVar6,param_2,param_6,in_RAX,unaff_RBX,
                                   unaff_R12,unaff_R13,unaff_R14,unaff_R15,unaff_RBP);
      break;
    case 4:
      uVar6 = (ulong)(*piVar15 * 8 + 3);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar7 = (uint)uVar6;
          *param_2 = (byte)uVar6 | 0x80;
          uVar6 = uVar6 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar7);
      }
      *param_2 = (byte)uVar6;
      param_2 = (byte *)_ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                                  (*(undefined8 *)(piVar15 + 2),param_2 + 1,param_3);
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
      }
      uVar6 = (ulong)(*piVar15 * 8 + 4);
      if (0x7f < (uint)(*piVar15 << 3)) {
        do {
          uVar7 = (uint)uVar6;
          *param_2 = (byte)uVar6 | 0x80;
          uVar6 = uVar6 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar7);
      }
      *param_2 = (byte)uVar6;
code_r0x00625084:
      param_2 = param_2 + 1;
    }
    uVar6 = *(ulong *)(uVar13 + 0x10);
    bVar17 = (uVar6 & 4) == 0;
    if (bVar17) {
      uVar7 = (uint)uVar6 & 3;
    }
    else {
      uVar7 = *(uint *)(uVar13 + 0x18);
    }
    lVar16 = lVar16 + 1;
    if ((int)uVar7 <= lVar16) {
      return param_2;
    }
  } while( true );
}


