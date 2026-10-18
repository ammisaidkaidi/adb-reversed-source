// Function: _ZN10ApkArchive27ParseCentralDirectoryRecordEPKcmPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPlSA_
// Address: 003c7d40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _ZN10ApkArchive27ParseCentralDirectoryRecordEPKcmPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPlSA_
                (byte *param_1,ulong param_2,byte *param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong extraout_RDX;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong *unaff_RBX;
  byte *pbVar10;
  ulong *unaff_R12;
  long lVar11;
  byte *unaff_R13;
  int *piVar12;
  byte *unaff_R14;
  long lVar13;
  long in_FS_OFFSET;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int *piStack_d0;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int *piStack_90;
  long lStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar10 = param_1;
  if (param_2 < 0x2e) {
    uVar6 = 0;
    param_1 = unaff_R14;
  }
  else if (*(int *)param_1 == 0x2014b50) {
    uStack_48 = 0;
    uStack_40 = 0;
    uVar6 = (ulong)*(ushort *)(param_1 + 0x20) +
            (ulong)*(ushort *)(param_1 + 0x1e) + (ulong)*(ushort *)(param_1 + 0x1c) + 0x2e;
    puStack_50 = &UNK_003c7db4;
    param_2 = uVar6;
    MD5(param_1,uVar6,&uStack_48);
    if ((*param_3 & 1) == 0) {
      *param_3 = 0x20;
      unaff_R13 = param_3 + 1;
    }
    else {
      param_3[8] = 0x10;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      unaff_R13 = *(byte **)(param_3 + 0x10);
    }
    *(undefined4 *)unaff_R13 = (undefined4)uStack_48;
    *(undefined4 *)(unaff_R13 + 4) = uStack_48._4_4_;
    *(undefined4 *)(unaff_R13 + 8) = (undefined4)uStack_40;
    *(undefined4 *)(unaff_R13 + 0xc) = uStack_40._4_4_;
    unaff_R13[0x10] = 0;
    *param_4 = (ulong)*(uint *)(param_1 + 0x2a);
    *param_5 = (ulong)*(uint *)(param_1 + (ulong)(*(short *)(param_1 + 10) == 0) * 4 + 0x14);
    unaff_RBX = param_5;
    unaff_R12 = param_4;
  }
  else {
    pbVar10 = &UNK_0015c751;
    param_2 = 0x2b;
    puStack_50 = &UNK_003c7e3b;
    func_0x0099bd40(&UNK_0015c751,0x2b,1,_stderr);
    uVar6 = 0;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar6;
  }
  puStack_50 = &UNK_003c7e45;
  func_0x0099bd00();
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_78 = unaff_RBX;
  puStack_70 = unaff_R12;
  pbStack_68 = unaff_R13;
  pbStack_60 = param_1;
  uStack_58 = uVar6;
  puStack_50 = &stack0xfffffffffffffff8;
  if (*(int *)(pbVar10 + 0x20) < 0) {
    puStack_50 = &stack0xfffffffffffffff8;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_c0,&UNK_00165e61,0x149,6,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(&lStack_c0);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017b9f6,0x15);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    func_0x0032e5a0(uVar5,pbVar10);
    _ZN7android4base10LogMessageD2Ev(&lStack_c0);
  }
  if (*(long *)(pbVar10 + 0x18) < (long)(param_2 + 0x1e)) {
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    uVar6 = 0;
    func_0x0099bd30(_stderr,&UNK_00184907,pbVar10,param_2);
    goto code_r0x003c80e8;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  piStack_90 = (int *)0x0;
  func_0x003c7c10(&lStack_c0,*(undefined4 *)(pbVar10 + 0x20),param_2,0x1e);
  if ((char)uStack_a8 == '\x01') {
    piVar12 = (int *)(lStack_c0 + lStack_b0);
    iVar1 = *piVar12;
joined_r0x003c7f16:
    if (iVar1 != 0x4034b50) goto code_r0x003c7eee;
code_r0x003c7f18:
    if ((*(byte *)((long)piVar12 + 6) & 8) == 0) {
      uStack_108 = (ulong)*(uint *)((long)piVar12 + (ulong)((short)piVar12[2] == 0) * 4 + 0x12);
      lVar13 = 0;
code_r0x003c80a5:
      if (uStack_108 == extraout_RDX) {
        uVar6 = (ulong)*(ushort *)(piVar12 + 7) +
                extraout_RDX + lVar13 + (ulong)*(ushort *)((long)piVar12 + 0x1a) + 0x1e;
      }
      else {
        if ((*pbVar10 & 1) == 0) {
          pbVar10 = pbVar10 + 1;
        }
        else {
          pbVar10 = *(byte **)(pbVar10 + 0x10);
        }
        uVar6 = 0;
        func_0x0099bd30(_stderr,&UNK_0017ecba,pbVar10,param_2,extraout_RDX);
      }
    }
    else {
      lVar11 = param_2 + 0x1e + extraout_RDX + (ulong)*(ushort *)((long)piVar12 + 0x1a) +
               (ulong)*(ushort *)(piVar12 + 7);
      if (*(long *)(pbVar10 + 0x18) < lVar11 + 4) {
        if ((*pbVar10 & 1) == 0) {
          pbVar10 = pbVar10 + 1;
        }
        else {
          pbVar10 = *(byte **)(pbVar10 + 0x10);
        }
        uVar6 = 0;
        func_0x0099bd30(_stderr,&UNK_0018338f,pbVar10,lVar11);
      }
      else {
        uStack_e0 = 0;
        uStack_d8 = 0;
        lStack_f0 = 0;
        uStack_e8 = 0;
        lStack_100 = 0;
        uStack_f8 = 0;
        piStack_d0 = (int *)0x0;
        func_0x003c7c10(&lStack_100,*(undefined4 *)(pbVar10 + 0x20),lVar11,0x10);
        if ((char)uStack_e8 == '\x01') {
          piVar4 = (int *)(lStack_100 + lStack_f0);
        }
        else {
          piVar4 = piStack_d0;
          if ((uStack_e0 & 1) == 0) {
            piVar4 = (int *)((long)&uStack_e0 + 1);
          }
        }
        iVar1 = *piVar4;
        if (iVar1 == 0x8074b50) {
          lVar11 = lVar11 + 4;
        }
        lVar13 = (ulong)(iVar1 == 0x8074b50) * 4;
        lVar2 = *(long *)(pbVar10 + 0x18);
        if (lVar2 < lVar11 + 0xc) {
          if ((*pbVar10 & 1) == 0) {
            pbVar9 = pbVar10 + 1;
          }
          else {
            pbVar9 = *(byte **)(pbVar10 + 0x10);
          }
          uStack_108 = 0;
          func_0x0099bd30(_stderr,&UNK_001864dd,pbVar9,lVar11);
        }
        else {
          if ((char)uStack_e8 == '\0') {
            piVar4 = piStack_d0;
            if ((uStack_e0 & 1) == 0) {
              piVar4 = (int *)((long)&uStack_e0 + 1);
            }
          }
          else {
            piVar4 = (int *)(lStack_100 + lStack_f0);
          }
          lVar7 = (ulong)(iVar1 == 0x8074b50) * 4;
          lVar8 = lVar7 + 4;
          if ((short)piVar12[2] == 0) {
            lVar8 = lVar7 + 8;
          }
          uStack_108 = (ulong)*(uint *)((long)piVar4 + lVar8);
          lVar13 = lVar13 + 0xc;
        }
        if ((uStack_e0 & 1) != 0) {
          _ZdaPvSt11align_val_t(piStack_d0,uStack_e0 & 0xfffffffffffffffe);
        }
        if ((char)uStack_e8 == '\x01') {
          _ZN7android4base10MappedFileD2Ev(&lStack_100);
        }
        if (lVar11 + 0xc <= lVar2) goto code_r0x003c80a5;
        uVar6 = 0;
      }
    }
  }
  else {
    if ((uStack_a0 & 1) == 0) {
      piVar12 = (int *)((long)&uStack_a0 + 1);
      iVar1 = uStack_a0._1_4_;
      goto joined_r0x003c7f16;
    }
    piVar12 = piStack_90;
    if (*piStack_90 == 0x4034b50) goto code_r0x003c7f18;
code_r0x003c7eee:
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    uVar6 = 0;
    func_0x0099bd30(_stderr,&UNK_0015dfbb,pbVar10,param_2);
  }
  if ((uStack_a0 & 1) != 0) {
    _ZdaPvSt11align_val_t(piStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  if ((char)uStack_a8 == '\x01') {
    _ZN7android4base10MappedFileD2Ev(&lStack_c0);
  }
code_r0x003c80e8:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
    return uVar6;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}


