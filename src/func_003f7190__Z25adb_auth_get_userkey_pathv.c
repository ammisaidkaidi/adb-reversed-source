// Function: _Z25adb_auth_get_userkey_pathv
// Address: 003f7190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _Z25adb_auth_get_userkey_pathv(byte *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined8 uStack_58;
  ulong uStack_50;
  byte *pbStack_48;
  byte bStack_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  ulong uStack_30;
  byte *pbStack_28;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Z24adb_get_android_dir_pathv(&uStack_58);
  if ((uStack_58 & 1) == 0) {
    uVar11 = 0x16;
    if ((byte)uStack_58 != 0x2c) {
      uVar5 = (ulong)((byte)uStack_58 >> 1);
      uStack_58 = CONCAT71(uStack_58._1_7_,(byte)uStack_58 + 2);
      pbVar8 = (byte *)((long)&uStack_58 + 1);
      goto code_r0x003f721d;
    }
code_r0x003f71ec:
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
              (&uStack_58,uVar11,1,uVar11,uVar11,0,0);
    uVar5 = uVar11;
  }
  else {
    uVar11 = (uStack_58 & 0xfffffffffffffffe) - 1;
    uVar5 = uStack_50;
    if (uStack_50 == uVar11) goto code_r0x003f71ec;
  }
  uStack_50 = uVar5 + 1;
  pbVar8 = pbStack_48;
code_r0x003f721d:
  (pbVar8 + uVar5)[0] = 0x2f;
  (pbVar8 + uVar5)[1] = 0;
  pbStack_28 = pbStack_48;
  bStack_38 = (byte)uStack_58;
  uStack_37 = uStack_58._1_4_;
  uStack_33 = uStack_58._5_2_;
  uStack_31 = uStack_58._7_1_;
  uStack_30 = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  pbStack_48 = (byte *)0x0;
  pbVar8 = &bStack_38;
  puVar3 = (undefined8 *)
           _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (pbVar8,&UNK_00184b11);
  *(undefined8 *)(param_1 + 0x10) = puVar3[2];
  uVar1 = puVar3[1];
  *(undefined8 *)param_1 = *puVar3;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if ((bStack_38 & 1) != 0) {
    pbVar8 = pbStack_28;
    _ZdaPvSt11align_val_t
              (pbStack_28,
               CONCAT17(uStack_31,CONCAT25(uStack_33,CONCAT41(uStack_37,bStack_38))) &
               0xfffffffffffffffe);
  }
  if ((uStack_58 & 1) != 0) {
    pbVar8 = pbStack_48;
    _ZdaPvSt11align_val_t(pbStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_20) {
    func_0x0099bd00();
    uVar1 = uRam0000000000a00738;
    pbVar8[0x20] = 0;
    pbVar8[0x21] = 0;
    pbVar8[0x22] = 0;
    pbVar8[0x23] = 0;
    pbVar8[0x24] = 0;
    pbVar8[0x25] = 0;
    pbVar8[0x26] = 0;
    pbVar8[0x27] = 0;
    pbVar8[0x28] = 0;
    pbVar8[0x29] = 0;
    pbVar8[0x2a] = 0;
    pbVar8[0x2b] = 0;
    pbVar8[0x2c] = 0;
    pbVar8[0x2d] = 0;
    pbVar8[0x2e] = 0;
    pbVar8[0x2f] = 0;
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x12] = 0;
    pbVar8[0x13] = 0;
    pbVar8[0x14] = 0;
    pbVar8[0x15] = 0;
    pbVar8[0x16] = 0;
    pbVar8[0x17] = 0;
    pbVar8[0x18] = 0;
    pbVar8[0x19] = 0;
    pbVar8[0x1a] = 0;
    pbVar8[0x1b] = 0;
    pbVar8[0x1c] = 0;
    pbVar8[0x1d] = 0;
    pbVar8[0x1e] = 0;
    pbVar8[0x1f] = 0;
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 0;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    pbVar8[0xc] = 0;
    pbVar8[0xd] = 0;
    pbVar8[0xe] = 0;
    pbVar8[0xf] = 0;
    _ZNSt3__15mutex4lockEv();
    plVar6 = (long *)*plRam0000000000a00740;
    plVar12 = plRam0000000000a00740 + 1;
    if (plVar6 == plVar12) {
      lVar7 = 0;
      lVar9 = 0;
      uVar5 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar7 = *(long *)(pbVar8 + 8);
        uVar5 = 0;
        if (*(long *)(pbVar8 + 0x10) != lVar7) {
          uVar5 = (*(long *)(pbVar8 + 0x10) - lVar7) * 0x20 - 1;
        }
        uVar11 = lVar4 + *(long *)(pbVar8 + 0x20);
        if (uVar5 == uVar11) {
          func_0x003fb700();
          lVar7 = *(long *)(pbVar8 + 8);
          uVar11 = *(long *)(pbVar8 + 0x20) + *(long *)(pbVar8 + 0x28);
        }
        lVar7 = *(long *)(lVar7 + (uVar11 >> 8) * 8);
        uVar5 = (ulong)(((uint)uVar11 & 0xff) << 4);
        *(long *)(lVar7 + uVar5) = plVar6[7];
        lVar9 = plVar6[8];
        *(long *)(lVar7 + 8 + uVar5) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        lVar4 = *(long *)(pbVar8 + 0x28) + 1;
        *(long *)(pbVar8 + 0x28) = lVar4;
        plVar2 = (long *)plVar6[1];
        plVar10 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar10[2];
            bVar13 = plVar10 != (long *)*plVar6;
            plVar10 = plVar6;
          } while (bVar13);
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      } while (plVar6 != plVar12);
      lVar7 = *(long *)(pbVar8 + 8);
      lVar9 = *(long *)(pbVar8 + 0x10);
      uVar5 = lVar4 + *(long *)(pbVar8 + 0x20);
    }
    uVar11 = 0;
    if (lVar9 != lVar7) {
      uVar11 = (lVar9 - lVar7) * 0x20 - 1;
    }
    if (uVar11 == uVar5) {
      func_0x003fb700(pbVar8);
      lVar7 = *(long *)(pbVar8 + 8);
      uVar5 = *(long *)(pbVar8 + 0x20) + *(long *)(pbVar8 + 0x28);
    }
    puVar3 = (undefined8 *)
             (*(long *)(lVar7 + (uVar5 >> 8) * 8) + (ulong)(((uint)uVar5 & 0xff) << 4));
    *puVar3 = 0;
    puVar3[1] = 0;
    *(long *)(pbVar8 + 0x28) = *(long *)(pbVar8 + 0x28) + 1;
    _ZNSt3__115recursive_mutex6unlockEv(uVar1);
    return pbVar8;
  }
  return param_1;
}


