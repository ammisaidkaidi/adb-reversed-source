// Function: _ZNK3adb5proto12AppProcesses18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
// Address: 0036c640
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZNK3adb5proto12AppProcesses18_InternalSerializeEPhPN6google8protobuf2io19EpsCopyOutputStreamE
                 (long param_1,byte *param_2,ulong *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar10;
  undefined8 unaff_R12;
  int *piVar11;
  int iVar12;
  undefined8 unaff_R13;
  long lVar13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  bool bVar14;
  byte *pbVar15;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
    iVar12 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar6 = (ulong *)(uVar4 + 7 + (long)iVar12 * 8);
      if ((uVar4 & 1) == 0) {
        puVar6 = (ulong *)(param_1 + 0x18);
      }
      param_2 = (byte *)_ZN6google8protobuf8internal14WireFormatLite20InternalWriteMessageEiRKNS0_11MessageLiteEiPhPNS0_2io19EpsCopyOutputStreamE
                                  (1,*puVar6,*(undefined4 *)(*puVar6 + 0x14),param_2,param_3);
      iVar12 = iVar12 + 1;
    } while (iVar1 != iVar12);
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
  lVar13 = 0;
  pbVar15 = param_2;
  do {
    uVar4 = uVar4 & 0xfffffffffffffff8;
    if (bVar14) {
      uVar4 = uVar10 + 0x18;
    }
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)_ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
                                  (param_3,param_2);
    }
    piVar11 = (int *)(uVar4 + lVar13 * 0x10);
    switch(piVar11[1]) {
    case 0:
      uVar4 = *(ulong *)(piVar11 + 2);
      uVar5 = *piVar11 << 3;
      if (uVar5 < 0x80) {
        uVar8 = (ulong)uVar5;
      }
      else {
        uVar8 = (ulong)uVar5;
        do {
          *param_2 = (byte)uVar5 | 0x80;
          uVar8 = uVar8 >> 7;
          param_2 = param_2 + 1;
          bVar14 = 0x3fff < uVar5;
          uVar5 = (uint)uVar8;
        } while (bVar14);
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
          bVar14 = 0x3fff < uVar4;
          uVar4 = uVar8;
        } while (bVar14);
        *param_2 = (byte)uVar8;
      }
      goto code_r0x00625084;
    case 1:
      iVar1 = piVar11[2];
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
      *(int *)(param_2 + 1) = iVar1;
      param_2 = param_2 + 5;
      break;
    case 2:
      uVar2 = *(undefined8 *)(piVar11 + 2);
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
      *(undefined8 *)(param_2 + 1) = uVar2;
      param_2 = param_2 + 9;
      break;
    case 3:
      pbVar3 = *(byte **)(piVar11 + 2);
      bVar14 = (*pbVar3 & 1) != 0;
      pbVar9 = pbVar3 + 1;
      if (bVar14) {
        pbVar9 = *(byte **)(pbVar3 + 0x10);
      }
      uVar4 = (ulong)(*pbVar3 >> 1);
      if (bVar14) {
        uVar4 = *(ulong *)(pbVar3 + 8);
      }
      if ((long)uVar4 < 0x80) {
        uVar5 = *piVar11 * 8;
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
                                  (param_3,*piVar11,pbVar9,uVar4,param_2,param_6,pbVar15,unaff_RBX,
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
    lVar13 = lVar13 + 1;
    if ((int)uVar5 <= lVar13) {
      return param_2;
    }
  } while( true );
}


