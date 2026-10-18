// Function: _ZNK3adb5proto12MdnsServices18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 00420a30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZNK3adb5proto12MdnsServices18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,ulong *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar11;
  undefined8 unaff_R12;
  int *piVar12;
  undefined8 unaff_R13;
  long lVar13;
  int iVar14;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar15;
  byte *pbVar16;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if (((uVar5 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
    puVar7 = (ulong *)(param_1 + 0x18);
    iVar14 = 0;
    do {
      uVar4 = *puVar7;
      puVar6 = (ulong *)(uVar4 + 7 + (long)iVar14 * 8);
      if ((uVar4 & 1) == 0) {
        puVar6 = puVar7;
      }
      param_2 = (byte *)_ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                                  (1,*puVar6,*(undefined4 *)(*puVar6 + 0x14),param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar1 != iVar14);
  }
  if (((uVar5 & 2) != 0) && (iVar1 = *(int *)(param_1 + 0x38), iVar1 != 0)) {
    puVar7 = (ulong *)(param_1 + 0x30);
    iVar14 = 0;
    do {
      uVar4 = *puVar7;
      puVar6 = (ulong *)(uVar4 + 7 + (long)iVar14 * 8);
      if ((uVar4 & 1) == 0) {
        puVar6 = puVar7;
      }
      param_2 = (byte *)_ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                                  (2,*puVar6,*(undefined4 *)(*puVar6 + 0x14),param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar1 != iVar14);
  }
  if (((uVar5 & 4) != 0) && (iVar1 = *(int *)(param_1 + 0x50), iVar1 != 0)) {
    iVar14 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + 0x48);
      puVar7 = (ulong *)(uVar4 + 7 + (long)iVar14 * 8);
      if ((uVar4 & 1) == 0) {
        puVar7 = (ulong *)(param_1 + 0x48);
      }
      param_2 = (byte *)_ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                                  (3,*puVar7,*(undefined4 *)(*puVar7 + 0x14),param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar1 != iVar14);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = *(ulong *)(uVar11 + 0x10);
  bVar15 = (uVar4 & 4) == 0;
  if (bVar15) {
    if ((uVar4 & 3) == 0) {
      return param_2;
    }
  }
  else if (*(int *)(uVar11 + 0x18) < 1) {
    return param_2;
  }
  lVar13 = 0;
  pbVar16 = param_2;
  do {
    uVar4 = uVar4 & 0xfffffffffffffff8;
    if (bVar15) {
      uVar4 = uVar11 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar12 = (int *)(uVar4 + lVar13 * 0x10);
    switch(piVar12[1]) {
    case 0:
      uVar4 = *(ulong *)(piVar12 + 2);
      uVar5 = *piVar12 << 3;
      if (uVar5 < 0x80) {
        uVar9 = (ulong)uVar5;
      }
      else {
        uVar9 = (ulong)uVar5;
        do {
          *param_2 = (byte)uVar5 | 0x80;
          uVar9 = uVar9 >> 7;
          param_2 = param_2 + 1;
          bVar15 = 0x3fff < uVar5;
          uVar5 = (uint)uVar9;
        } while (bVar15);
      }
      *param_2 = (byte)uVar9;
      param_2 = param_2 + 1;
      if (uVar4 < 0x80) {
        *param_2 = (byte)uVar4;
      }
      else {
        do {
          *param_2 = (byte)uVar4 | 0x80;
          uVar9 = uVar4 >> 7;
          param_2 = param_2 + 1;
          bVar15 = 0x3fff < uVar4;
          uVar4 = uVar9;
        } while (bVar15);
        *param_2 = (byte)uVar9;
      }
      goto code_r0x00625084;
    case 1:
      iVar1 = piVar12[2];
      uVar4 = (ulong)(*piVar12 * 8 + 5);
      if (0x7f < (uint)(*piVar12 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      *(int *)(param_2 + 1) = iVar1;
      param_2 = param_2 + 5;
      break;
    case 2:
      uVar2 = *(undefined8 *)(piVar12 + 2);
      uVar4 = (ulong)(*piVar12 * 8 + 1);
      if (0x7f < (uint)(*piVar12 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      *(undefined8 *)(param_2 + 1) = uVar2;
      param_2 = param_2 + 9;
      break;
    case 3:
      pbVar3 = *(byte **)(piVar12 + 2);
      bVar15 = (*pbVar3 & 1) != 0;
      pbVar10 = pbVar3 + 1;
      if (bVar15) {
        pbVar10 = *(byte **)(pbVar3 + 0x10);
      }
      uVar4 = (ulong)(*pbVar3 >> 1);
      if (bVar15) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      if ((long)uVar4 < 0x80) {
        uVar5 = *piVar12 * 8;
        lVar8 = 1;
        if (((0x7f < uVar5) && (lVar8 = 2, 0x3fff < uVar5)) && (lVar8 = 3, 0x1fffff < uVar5)) {
          lVar8 = 5 - (ulong)(uVar5 < 0x10000000);
        }
        if ((long)uVar4 <= (long)(~(ulong)(param_2 + lVar8) + *param_3 + 0x10)) {
          uVar9 = (ulong)(uVar5 | 2);
          if (0x7f < uVar5) {
            do {
              uVar5 = (uint)uVar9;
              *param_2 = (byte)uVar9 | 0x80;
              uVar9 = uVar9 >> 7;
              param_2 = param_2 + 1;
            } while (0x3fff < uVar5);
          }
          *param_2 = (byte)uVar9;
          param_2[1] = (byte)uVar4;
          func_0x0099bda0(param_2 + 2,pbVar10,uVar4);
          param_2 = param_2 + uVar4 + 2;
          break;
        }
      }
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream18WriteStringOutlineEjNSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEPh
                                  (param_3,*piVar12,pbVar10,uVar4,param_2,param_6,pbVar16,unaff_RBX,
                                   unaff_R12,unaff_R13,unaff_R14,unaff_R15,unaff_RBP);
      break;
    case 4:
      uVar4 = (ulong)(*piVar12 * 8 + 3);
      if (0x7f < (uint)(*piVar12 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      param_2 = (byte *)_ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                                  (*(undefined8 *)(piVar12 + 2),param_2 + 1,param_3);
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
      }
      uVar4 = (ulong)(*piVar12 * 8 + 4);
      if (0x7f < (uint)(*piVar12 << 3)) {
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
    uVar4 = *(ulong *)(uVar11 + 0x10);
    bVar15 = (uVar4 & 4) == 0;
    if (bVar15) {
      uVar5 = (uint)uVar4 & 3;
    }
    else {
      uVar5 = *(uint *)(uVar11 + 0x18);
    }
    lVar13 = lVar13 + 1;
    if ((int)uVar5 <= lVar13) {
      return param_2;
    }
  } while( true );
}


