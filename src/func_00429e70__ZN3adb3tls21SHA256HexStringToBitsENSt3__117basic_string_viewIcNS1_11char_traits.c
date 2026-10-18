// Function: _ZN3adb3tls21SHA256HexStringToBitsENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
// Address: 00429e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN3adb3tls21SHA256HexStringToBitsENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
          (undefined4 *param_1,long param_2,long param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0x40) {
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    lVar12 = 0;
    do {
      uStack_70 = 0;
      uStack_68 = 0;
      uVar1 = *(ushort *)(param_2 + lVar12 * 2);
      uStack_78 = (ulong)CONCAT21(uVar1,4);
      if ((9 < (byte)((byte)uVar1 - 0x30)) &&
         ((uVar9 = (byte)uVar1 - 0x41, 0x25 < uVar9 ||
          ((0x3f0000003fU >> ((ulong)uVar9 & 0x3f) & 1) == 0)))) {
code_r0x0042a023:
        cVar5 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        if (cVar5 != '\0') {
          puVar8 = (undefined4 *)func_0x0099bce0();
          uVar2 = *puVar8;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_80,&UNK_0017d936,0x7f,4,0,0xffffffff);
          uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_80);
          func_0x0032eb30(uVar7,&UNK_00159829,0x27);
          _ZN7android4base10LogMessageD2Ev(auStack_80);
          *puVar8 = uVar2;
        }
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        if ((uStack_78 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_68,uStack_78 & 0xfffffffffffffffe);
        }
        if ((uStack_58 & 1) != 0) {
          _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
        }
        goto code_r0x00429ffe;
      }
      if ((9 < (byte)((char)(uVar1 >> 8) - 0x30U)) &&
         ((uVar9 = (uVar1 >> 8) - 0x41, 0x25 < uVar9 ||
          ((0x3f0000003fU >> ((ulong)uVar9 & 0x3f) & 1) == 0)))) goto code_r0x0042a023;
      uVar4 = _ZNSt3__14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                        (&uStack_78,0,0x10);
      if ((uStack_58 & 1) == 0) {
        uVar11 = 0x16;
        if ((byte)uStack_58 == 0x2c) {
code_r0x00429f84:
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (&uStack_58,uVar11,1,uVar11,uVar11,0,0);
          uVar6 = uVar11;
          goto code_r0x00429fa9;
        }
        uVar6 = (ulong)((byte)uStack_58 >> 1);
        uStack_58 = CONCAT71(uStack_58._1_7_,(byte)uStack_58 + 2);
        lVar10 = (long)&uStack_58 + 1;
      }
      else {
        uVar11 = (uStack_58 & 0xfffffffffffffffe) - 1;
        uVar6 = uStack_50;
        if (uStack_50 == uVar11) goto code_r0x00429f84;
code_r0x00429fa9:
        uStack_50 = uVar6 + 1;
        lVar10 = lStack_48;
      }
      *(undefined1 *)(lVar10 + uVar6) = uVar4;
      *(undefined1 *)(lVar10 + 1 + uVar6) = 0;
      if ((uStack_78 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_68);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x20);
    *(long *)(param_1 + 4) = lStack_48;
    *param_1 = (undefined4)uStack_58;
    param_1[1] = uStack_58._4_4_;
    param_1[2] = (undefined4)uStack_50;
    param_1[3] = uStack_50._4_4_;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
code_r0x00429ffe:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  puVar8 = (undefined4 *)(*pcVar3)();
  return puVar8;
}


