// Function: _ZN4absl12lts_202605269FromUDateEd
// Address: 004c19f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 ***** _ZN4absl12lts_202605269FromUDateEd(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  uint uVar4;
  undefined8 *****pppppuVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  long in_FS_OFFSET;
  undefined8 ****ppppuStack_48;
  int iStack_40;
  long lStack_38;
  code *pcStack_30;
  undefined8 uStack_20;
  undefined4 uStack_18;
  long lStack_10;
  undefined8 uVar5;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_20 = 0;
  uStack_18 = 4000000;
  puVar2 = &uStack_20;
  pcStack_30 = (code *)&UNK_004c1a1d;
  puVar1 = (undefined8 *)_ZN4absl12lts_202605268DurationmLEd();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return (undefined8 *****)*puVar1;
  }
  pcStack_30 = _ZN4absl12lts_2026052613FromUniversalEl;
  func_0x0099bd00();
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (long)puVar2 % 1000000000;
  ppppuStack_48 = (undefined8 ****)((lVar7 >> 0x3d) + (long)puVar2 / 1000000000);
  iStack_40 = (int)lVar7 * 4 + -0x1194d800;
  if (-1 < lVar7) {
    iStack_40 = (int)lVar7 * 4;
  }
  pcStack_30 = (code *)&stack0xfffffffffffffff8;
  puVar2 = (undefined8 *)_ZN4absl12lts_202605268DurationmLEl(&ppppuStack_48,100);
  uVar5 = *puVar2;
  ppppuStack_48 = (undefined8 *****)0xfffffff1886e0900;
  iStack_40 = 0;
  pppppuVar8 = &ppppuStack_48;
  _ZN4absl12lts_202605268DurationpLES1_(pppppuVar8,uVar5,*(undefined4 *)(puVar2 + 1));
  uVar4 = (uint)uVar5;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (undefined8 *****)ppppuStack_48;
  }
  func_0x0099bd00();
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)pppppuVar8 >> 0x21 == 0) {
    pppppuVar6 = (undefined8 *****)((ulong)(uVar4 >> 2) + (long)pppppuVar8 * 1000000000);
  }
  else {
    pppppuVar6 = (undefined8 *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lVar7) {
    return pppppuVar6;
  }
  func_0x0099bd00();
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)pppppuVar8 >> 0x2b == 0) {
    pppppuVar3 = (undefined8 *****)
                 (((ulong)pppppuVar6 & 0xffffffff) / 4000 + (long)pppppuVar8 * 1000000);
  }
  else {
    pppppuVar3 = (undefined8 *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lVar7) {
    func_0x0099bd00();
    lVar7 = *(long *)(in_FS_OFFSET + 0x28);
    if ((ulong)pppppuVar8 >> 0x35 == 0) {
      pppppuVar6 = (undefined8 *****)
                   (((ulong)pppppuVar6 & 0xffffffff) / 4000000 + (long)pppppuVar8 * 1000);
    }
    else {
      pppppuVar6 = (undefined8 *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lVar7) {
      return pppppuVar6;
    }
    func_0x0099bd00();
    return pppppuVar8;
  }
  return pppppuVar3;
}


