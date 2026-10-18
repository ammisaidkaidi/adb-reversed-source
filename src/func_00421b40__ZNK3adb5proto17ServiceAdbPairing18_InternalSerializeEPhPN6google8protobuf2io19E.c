// Function: _ZNK3adb5proto17ServiceAdbPairing18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 00421b40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZNK3adb5proto17ServiceAdbPairing18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,ulong *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 unaff_RBX;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  bool bVar12;
  byte *pbVar13;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = (byte *)_ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                                (1,*(long *)(param_1 + 0x18),
                                 *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = *(ulong *)(uVar9 + 0x10);
  bVar12 = (uVar4 & 4) == 0;
  if (bVar12) {
    if ((uVar4 & 3) == 0) {
      return param_2;
    }
  }
  else if (*(int *)(uVar9 + 0x18) < 1) {
    return param_2;
  }
  lVar11 = 0;
  pbVar13 = param_2;
  do {
    uVar4 = uVar4 & 0xfffffffffffffff8;
    if (bVar12) {
      uVar4 = uVar9 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar10 = (int *)(uVar4 + lVar11 * 0x10);
    switch(piVar10[1]) {
    case 0:
      uVar4 = *(ulong *)(piVar10 + 2);
      uVar5 = *piVar10 << 3;
      if (uVar5 < 0x80) {
        uVar7 = (ulong)uVar5;
      }
      else {
        uVar7 = (ulong)uVar5;
        do {
          *param_2 = (byte)uVar5 | 0x80;
          uVar7 = uVar7 >> 7;
          param_2 = param_2 + 1;
          bVar12 = 0x3fff < uVar5;
          uVar5 = (uint)uVar7;
        } while (bVar12);
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
          bVar12 = 0x3fff < uVar4;
          uVar4 = uVar7;
        } while (bVar12);
        *param_2 = (byte)uVar7;
      }
      goto code_r0x00625084;
    case 1:
      iVar1 = piVar10[2];
      uVar4 = (ulong)(*piVar10 * 8 + 5);
      if (0x7f < (uint)(*piVar10 << 3)) {
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
      uVar2 = *(undefined8 *)(piVar10 + 2);
      uVar4 = (ulong)(*piVar10 * 8 + 1);
      if (0x7f < (uint)(*piVar10 << 3)) {
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
      pbVar3 = *(byte **)(piVar10 + 2);
      bVar12 = (*pbVar3 & 1) != 0;
      pbVar8 = pbVar3 + 1;
      if (bVar12) {
        pbVar8 = *(byte **)(pbVar3 + 0x10);
      }
      uVar4 = (ulong)(*pbVar3 >> 1);
      if (bVar12) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      if ((long)uVar4 < 0x80) {
        uVar5 = *piVar10 * 8;
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
                                  (param_3,*piVar10,pbVar8,uVar4,param_2,param_6,pbVar13,unaff_RBX);
      break;
    case 4:
      uVar4 = (ulong)(*piVar10 * 8 + 3);
      if (0x7f < (uint)(*piVar10 << 3)) {
        do {
          uVar5 = (uint)uVar4;
          *param_2 = (byte)uVar4 | 0x80;
          uVar4 = uVar4 >> 7;
          param_2 = param_2 + 1;
        } while (0x3fff < uVar5);
      }
      *param_2 = (byte)uVar4;
      param_2 = (byte *)_ZN6google8protobuf8internal10WireFormat37InternalSerializeUnknownFieldsToArrayERKNS0_15UnknownFieldSetEPhPNS0_2io19EpsCopyOutputStreamE
                                  (*(undefined8 *)(piVar10 + 2),param_2 + 1,param_3);
      if ((byte *)*param_3 <= param_2) {
        param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                    (param_3,param_2);
      }
      uVar4 = (ulong)(*piVar10 * 8 + 4);
      if (0x7f < (uint)(*piVar10 << 3)) {
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
    uVar4 = *(ulong *)(uVar9 + 0x10);
    bVar12 = (uVar4 & 4) == 0;
    if (bVar12) {
      uVar5 = (uint)uVar4 & 3;
    }
    else {
      uVar5 = *(uint *)(uVar9 + 0x18);
    }
    lVar11 = lVar11 + 1;
    if ((int)uVar5 <= lVar11) {
      return param_2;
    }
  } while( true );
}


