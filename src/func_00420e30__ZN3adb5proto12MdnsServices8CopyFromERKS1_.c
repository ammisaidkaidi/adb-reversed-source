// Function: _ZN3adb5proto12MdnsServices8CopyFromERKS1_
// Address: 00420e30
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN3adb5proto12MdnsServices8CopyFromERKS1_(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong in_RAX;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined8 unaff_RBX;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 == param_1) {
    return in_RAX;
  }
  uVar8 = _ZN3adb5proto12MdnsServices5ClearEv();
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  uVar13 = *(uint *)(param_2 + 0x10);
  uStack_28 = unaff_RBX;
  if ((uVar13 & 7) != 0) {
    if (((uVar13 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      puStack_30 = &UNK_004208fd;
      uVar8 = _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeFromConcreteMessageERKS2_PNS0_5ArenaEPFPvS6_PKvE
                        (param_1 + 0x18,param_2 + 0x18,uVar9,
                         _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto13ServiceAdbTcpEEEPvPS1_PKv
                        );
    }
    if (((uVar13 & 2) != 0) && (*(int *)(param_2 + 0x38) != 0)) {
      puStack_30 = &UNK_00420921;
      uVar8 = _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeFromConcreteMessageERKS2_PNS0_5ArenaEPFPvS6_PKvE
                        (param_1 + 0x30,param_2 + 0x30,uVar9,
                         _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto13ServiceAdbTlsEEEPvPS1_PKv
                        );
    }
    if (((uVar13 & 4) != 0) && (*(int *)(param_2 + 0x50) != 0)) {
      puStack_30 = &UNK_00420945;
      uVar8 = _ZN6google8protobuf8internal20RepeatedPtrFieldBase24MergeFromConcreteMessageERKS2_PNS0_5ArenaEPFPvS6_PKvE
                        (param_1 + 0x48,param_2 + 0x48,uVar9,
                         _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto17ServiceAdbPairingEEEPvPS1_PKv
                        );
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar13;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return uVar8;
  }
  uVar14 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
  uVar8 = uVar14 + 8;
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) == 0) {
    lVar16 = _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINS0_15UnknownFieldSetEEEPT_v
                       ((ulong *)(param_1 + 8));
  }
  else {
    lVar16 = (uVar9 & 0xfffffffffffffffe) + 8;
  }
  puStack_30 = (undefined *)uStack_28;
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar9 = *(ulong *)(uVar14 + 0x10);
  uVar7 = (uint)uVar9 & 3;
  uVar18 = uVar9 & 4;
  puVar17 = (ulong *)(ulong)*(uint *)(uVar14 + 0x18);
  uVar13 = *(uint *)(uVar14 + 0x18);
  if (uVar18 == 0) {
    uVar13 = uVar7;
  }
  if (0 < (int)uVar13) {
    uVar5 = *(ulong *)(lVar16 + 8);
    if ((uVar5 & 4) == 0) {
      uVar12 = (uint)uVar5 & 3;
      iVar19 = 0;
    }
    else {
      uVar12 = *(uint *)(lVar16 + 0x10);
      iVar19 = *(int *)(lVar16 + 0x14);
    }
    uVar1 = uVar14 + 0x18;
    puVar2 = (ulong *)(lVar16 + 8);
    if (iVar19 < (int)(uVar13 + uVar12)) {
      uVar8 = (ulong)((uVar5 & 4) == 0);
      _ZN6google8protobuf13RepeatedFieldINS0_12UnknownFieldEE4GrowEbii(puVar2);
      uVar9 = *(ulong *)(uVar14 + 0x10);
      puVar17 = (ulong *)(ulong)*(uint *)(uVar14 + 0x18);
      uVar18 = (ulong)((uint)uVar9 & 4);
      uVar7 = (uint)uVar9 & 3;
    }
    if (uVar18 != 0) {
      uVar7 = (uint)puVar17;
      uVar1 = uVar9 & 0xfffffffffffffff8;
    }
    if (uVar7 != 0) {
      uVar9 = *puVar2;
      lVar21 = 0;
      do {
        puVar3 = (undefined4 *)(uVar1 + lVar21);
        uStack_48 = *puVar3;
        uStack_44 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_3c = puVar3[3];
        uVar8 = uVar9 & 0xfffffffffffffff8;
        if ((uVar9 & 4) != 0) {
          uVar8 = *(ulong *)(uVar8 - 0x10);
        }
        auVar22 = _ZNK6google8protobuf12UnknownField8DeepCopyEPNS0_5ArenaE(&uStack_48,uVar8);
        uVar9 = *(ulong *)(lVar16 + 8);
        uVar13 = (uint)uVar9 & 3;
        iVar19 = 0;
        puVar17 = (ulong *)(ulong)*(uint *)(lVar16 + 0x10);
        puVar11 = (ulong *)(ulong)uVar13;
        if ((uVar9 & 4) != 0) {
          iVar19 = *(int *)(lVar16 + 0x14);
          puVar11 = puVar17;
        }
        iVar20 = (int)puVar11 + 1;
        if ((int)puVar11 == iVar19) {
          _ZN6google8protobuf13RepeatedFieldINS0_12UnknownFieldEE4GrowEbii
                    (puVar2,(uVar9 & 4) == 0,puVar11,iVar20);
          uVar14 = *(ulong *)(lVar16 + 8) & 0xfffffffffffffff8;
          puVar17 = (ulong *)(ulong)*(uint *)(lVar16 + 0x10);
code_r0x00622f10:
          *(int *)(lVar16 + 0x10) = iVar20;
          uVar13 = (uint)puVar17;
        }
        else {
          uVar14 = uVar9 & 0xfffffffffffffff8;
          if ((uVar9 & 4) != 0) goto code_r0x00622f10;
          puVar17 = (ulong *)(long)iVar20;
          *puVar2 = uVar14 | (ulong)puVar17;
          uVar14 = lVar16 + 0x10;
        }
        uVar8 = (long)(int)uVar13 * 0x10;
        *(long *)(uVar14 + uVar8) = auVar22._0_8_;
        *(long *)(uVar14 + 8 + uVar8) = auVar22._8_8_;
        uVar9 = *puVar2;
        lVar21 = lVar21 + 0x10;
      } while ((long)(int)uVar7 * 0x10 != lVar21);
    }
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_38) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar9 = *puVar17;
  pbVar15 = (byte *)puVar17[1];
  if (uVar9 >> 0x20 == 4) {
    if (uVar8 == 0) {
      puVar10 = (undefined8 *)_Znwm(0x18);
      *puVar10 = 0;
      puVar10[1] = 0;
    }
    else {
      puVar10 = (undefined8 *)_ZN6google8protobuf5Arena8AllocateEm(uVar8,0x18);
      *puVar10 = 0;
      puVar10[1] = uVar8;
      pbVar15 = (byte *)puVar17[1];
    }
    _ZN6google8protobuf15UnknownFieldSet9MergeFromERKS1_(puVar10,pbVar15);
  }
  else if ((int)(uVar9 >> 0x20) == 3) {
    if (uVar8 == 0) {
      puVar10 = (undefined8 *)_Znwm(0x18);
      bVar4 = *pbVar15;
    }
    else {
      puVar10 = (undefined8 *)
                _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(uVar8);
      bVar4 = *pbVar15;
    }
    if ((bVar4 & 1) == 0) {
      puVar10[2] = *(undefined8 *)(pbVar15 + 0x10);
      uVar6 = *(undefined8 *)(pbVar15 + 8);
      *puVar10 = *(undefined8 *)pbVar15;
      puVar10[1] = uVar6;
    }
    else {
      func_0x00330340(puVar10,*(undefined8 *)(pbVar15 + 0x10),*(undefined8 *)(pbVar15 + 8));
    }
  }
  return uVar9;
}


