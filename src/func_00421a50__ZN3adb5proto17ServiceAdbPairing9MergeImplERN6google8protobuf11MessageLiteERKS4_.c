// Function: _ZN3adb5proto17ServiceAdbPairing9MergeImplERN6google8protobuf11MessageLiteERKS4_
// Address: 00421a50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN3adb5proto17ServiceAdbPairing9MergeImplERN6google8protobuf11MessageLiteERKS4_
                (long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
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
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  uVar12 = *(uint *)(param_2 + 0x10);
  if ((uVar12 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      puStack_30 = &UNK_00421a91;
      uVar8 = _ZN6google8protobuf5Arena13CopyConstructIN3adb5proto11MdnsServiceEEEPvPS1_PKv
                        (uVar8,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar8;
    }
    else {
      puStack_30 = &UNK_00421a84;
      uVar8 = _ZN3adb5proto11MdnsService9MergeImplERN6google8protobuf11MessageLiteERKS4_();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar12;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return uVar8;
  }
  uVar13 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
  uVar14 = uVar13 + 8;
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) == 0) {
    lVar16 = _ZN6google8protobuf8internal16InternalMetadata27mutable_unknown_fields_slowINS0_15UnknownFieldSetEEEPT_v
                       ((ulong *)(param_1 + 8));
  }
  else {
    lVar16 = (uVar8 & 0xfffffffffffffffe) + 8;
  }
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar8 = *(ulong *)(uVar13 + 0x10);
  uVar7 = (uint)uVar8 & 3;
  uVar18 = uVar8 & 4;
  puVar17 = (ulong *)(ulong)*(uint *)(uVar13 + 0x18);
  uVar12 = *(uint *)(uVar13 + 0x18);
  if (uVar18 == 0) {
    uVar12 = uVar7;
  }
  if (0 < (int)uVar12) {
    uVar5 = *(ulong *)(lVar16 + 8);
    if ((uVar5 & 4) == 0) {
      uVar11 = (uint)uVar5 & 3;
      iVar19 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar16 + 0x10);
      iVar19 = *(int *)(lVar16 + 0x14);
    }
    uVar1 = uVar13 + 0x18;
    puVar2 = (ulong *)(lVar16 + 8);
    if (iVar19 < (int)(uVar12 + uVar11)) {
      uVar14 = (ulong)((uVar5 & 4) == 0);
      _ZN6google8protobuf13RepeatedFieldINS0_12UnknownFieldEE4GrowEbii(puVar2);
      uVar8 = *(ulong *)(uVar13 + 0x10);
      puVar17 = (ulong *)(ulong)*(uint *)(uVar13 + 0x18);
      uVar18 = (ulong)((uint)uVar8 & 4);
      uVar7 = (uint)uVar8 & 3;
    }
    if (uVar18 != 0) {
      uVar7 = (uint)puVar17;
      uVar1 = uVar8 & 0xfffffffffffffff8;
    }
    if (uVar7 != 0) {
      uVar8 = *puVar2;
      lVar21 = 0;
      do {
        puVar3 = (undefined4 *)(uVar1 + lVar21);
        uStack_48 = *puVar3;
        uStack_44 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_3c = puVar3[3];
        uVar14 = uVar8 & 0xfffffffffffffff8;
        if ((uVar8 & 4) != 0) {
          uVar14 = *(ulong *)(uVar14 - 0x10);
        }
        auVar22 = _ZNK6google8protobuf12UnknownField8DeepCopyEPNS0_5ArenaE(&uStack_48,uVar14);
        uVar8 = *(ulong *)(lVar16 + 8);
        uVar12 = (uint)uVar8 & 3;
        iVar19 = 0;
        puVar17 = (ulong *)(ulong)*(uint *)(lVar16 + 0x10);
        puVar10 = (ulong *)(ulong)uVar12;
        if ((uVar8 & 4) != 0) {
          iVar19 = *(int *)(lVar16 + 0x14);
          puVar10 = puVar17;
        }
        iVar20 = (int)puVar10 + 1;
        if ((int)puVar10 == iVar19) {
          _ZN6google8protobuf13RepeatedFieldINS0_12UnknownFieldEE4GrowEbii
                    (puVar2,(uVar8 & 4) == 0,puVar10,iVar20);
          uVar13 = *(ulong *)(lVar16 + 8) & 0xfffffffffffffff8;
          puVar17 = (ulong *)(ulong)*(uint *)(lVar16 + 0x10);
code_r0x00622f10:
          *(int *)(lVar16 + 0x10) = iVar20;
          uVar12 = (uint)puVar17;
        }
        else {
          uVar13 = uVar8 & 0xfffffffffffffff8;
          if ((uVar8 & 4) != 0) goto code_r0x00622f10;
          puVar17 = (ulong *)(long)iVar20;
          *puVar2 = uVar13 | (ulong)puVar17;
          uVar13 = lVar16 + 0x10;
        }
        uVar14 = (long)(int)uVar12 * 0x10;
        *(long *)(uVar13 + uVar14) = auVar22._0_8_;
        *(long *)(uVar13 + 8 + uVar14) = auVar22._8_8_;
        uVar8 = *puVar2;
        lVar21 = lVar21 + 0x10;
      } while ((long)(int)uVar7 * 0x10 != lVar21);
    }
  }
  if (*(ulong *)(in_FS_OFFSET + 0x28) == uStack_38) {
    return *(ulong *)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  uVar8 = *puVar17;
  pbVar15 = (byte *)puVar17[1];
  if (uVar8 >> 0x20 == 4) {
    if (uVar14 == 0) {
      puVar9 = (undefined8 *)_Znwm(0x18);
      *puVar9 = 0;
      puVar9[1] = 0;
    }
    else {
      puVar9 = (undefined8 *)_ZN6google8protobuf5Arena8AllocateEm(uVar14,0x18);
      *puVar9 = 0;
      puVar9[1] = uVar14;
      pbVar15 = (byte *)puVar17[1];
    }
    _ZN6google8protobuf15UnknownFieldSet9MergeFromERKS1_(puVar9,pbVar15);
  }
  else if ((int)(uVar8 >> 0x20) == 3) {
    if (uVar14 == 0) {
      puVar9 = (undefined8 *)_Znwm(0x18);
      bVar4 = *pbVar15;
    }
    else {
      puVar9 = (undefined8 *)
               _ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv(uVar14);
      bVar4 = *pbVar15;
    }
    if ((bVar4 & 1) == 0) {
      puVar9[2] = *(undefined8 *)(pbVar15 + 0x10);
      uVar6 = *(undefined8 *)(pbVar15 + 8);
      *puVar9 = *(undefined8 *)pbVar15;
      puVar9[1] = uVar6;
    }
    else {
      func_0x00330340(puVar9,*(undefined8 *)(pbVar15 + 0x10),*(undefined8 *)(pbVar15 + 8));
    }
  }
  return uVar8;
}


