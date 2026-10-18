// Function: _ZN4absl12lts_2026052613FromUniversalEl
// Address: 004c1a40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 ***** _ZN4absl12lts_2026052613FromUniversalEl(long param_1)

{
  undefined8 *puVar1;
  undefined8 *****pppppuVar2;
  uint uVar3;
  undefined8 *****pppppuVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  long in_FS_OFFSET;
  undefined8 ****ppppuStack_20;
  int iStack_18;
  long lStack_10;
  undefined8 uVar4;
  
  lStack_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_1 % 1000000000;
  ppppuStack_20 = (undefined8 ****)((lVar6 >> 0x3d) + param_1 / 1000000000);
  iStack_18 = (int)lVar6 * 4 + -0x1194d800;
  if (-1 < lVar6) {
    iStack_18 = (int)lVar6 * 4;
  }
  puVar1 = (undefined8 *)_ZN4absl12lts_202605268DurationmLEl(&ppppuStack_20,100);
  uVar4 = *puVar1;
  ppppuStack_20 = (undefined8 *****)0xfffffff1886e0900;
  iStack_18 = 0;
  pppppuVar7 = &ppppuStack_20;
  _ZN4absl12lts_202605268DurationpLES1_(pppppuVar7,uVar4,*(undefined4 *)(puVar1 + 1));
  uVar3 = (uint)uVar4;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_10) {
    return (undefined8 *****)ppppuStack_20;
  }
  func_0x0099bd00();
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)pppppuVar7 >> 0x21 == 0) {
    pppppuVar5 = (undefined8 *****)((ulong)(uVar3 >> 2) + (long)pppppuVar7 * 1000000000);
  }
  else {
    pppppuVar5 = (undefined8 *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lVar6) {
    func_0x0099bd00();
    lVar6 = *(long *)(in_FS_OFFSET + 0x28);
    if ((ulong)pppppuVar7 >> 0x2b == 0) {
      pppppuVar2 = (undefined8 *****)
                   (((ulong)pppppuVar5 & 0xffffffff) / 4000 + (long)pppppuVar7 * 1000000);
    }
    else {
      pppppuVar2 = (undefined8 *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
    }
    if (*(long *)(in_FS_OFFSET + 0x28) != lVar6) {
      func_0x0099bd00();
      lVar6 = *(long *)(in_FS_OFFSET + 0x28);
      if ((ulong)pppppuVar7 >> 0x35 == 0) {
        pppppuVar5 = (undefined8 *****)
                     (((ulong)pppppuVar5 & 0xffffffff) / 4000000 + (long)pppppuVar7 * 1000);
      }
      else {
        pppppuVar5 = (undefined8 *****)_ZN4absl12lts_2026052612IDivDurationENS0_8DurationES1_PS1_();
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == lVar6) {
        return pppppuVar5;
      }
      func_0x0099bd00();
      return pppppuVar7;
    }
    return pppppuVar2;
  }
  return pppppuVar5;
}


