// Function: _ZNK10ApkArchive27CalculateLocalFileEntrySizeEll
// Address: 003c7e50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _ZNK10ApkArchive27CalculateLocalFileEntrySizeEll(byte *param_1,long param_2,ulong param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long in_FS_OFFSET;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int *piStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x20) < 0) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&lStack_78,&UNK_00165e61,0x149,6,0,0xffffffff);
    uVar4 = _ZN7android4base10LogMessage6streamEv(&lStack_78);
    uVar4 = func_0x0032eb30(uVar4,&UNK_0017b9f6,0x15);
    uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
    func_0x0032e5a0(uVar4,param_1);
    _ZN7android4base10LogMessageD2Ev(&lStack_78);
  }
  if (*(long *)(param_1 + 0x18) < param_2 + 0x1e) {
    if ((*param_1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    lVar5 = 0;
    func_0x0099bd30(_stderr,&UNK_00184907,param_1,param_2);
    goto code_r0x003c80e8;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  piStack_48 = (int *)0x0;
  func_0x003c7c10(&lStack_78,*(undefined4 *)(param_1 + 0x20),param_2,0x1e);
  if ((char)uStack_60 == '\x01') {
    piVar10 = (int *)(lStack_78 + lStack_68);
    iVar1 = *piVar10;
joined_r0x003c7f16:
    if (iVar1 != 0x4034b50) goto code_r0x003c7eee;
code_r0x003c7f18:
    if ((*(byte *)((long)piVar10 + 6) & 8) == 0) {
      uStack_c0 = (ulong)*(uint *)((long)piVar10 + (ulong)((short)piVar10[2] == 0) * 4 + 0x12);
      lVar11 = 0;
code_r0x003c80a5:
      if (uStack_c0 == param_3) {
        lVar5 = (ulong)*(ushort *)(piVar10 + 7) +
                param_3 + lVar11 + (ulong)*(ushort *)((long)piVar10 + 0x1a) + 0x1e;
      }
      else {
        if ((*param_1 & 1) == 0) {
          param_1 = param_1 + 1;
        }
        else {
          param_1 = *(byte **)(param_1 + 0x10);
        }
        lVar5 = 0;
        func_0x0099bd30(_stderr,&UNK_0017ecba,param_1,param_2,param_3);
      }
    }
    else {
      lVar9 = param_2 + 0x1e + param_3 + (ulong)*(ushort *)((long)piVar10 + 0x1a) +
              (ulong)*(ushort *)(piVar10 + 7);
      if (*(long *)(param_1 + 0x18) < lVar9 + 4) {
        if ((*param_1 & 1) == 0) {
          param_1 = param_1 + 1;
        }
        else {
          param_1 = *(byte **)(param_1 + 0x10);
        }
        lVar5 = 0;
        func_0x0099bd30(_stderr,&UNK_0018338f,param_1,lVar9);
      }
      else {
        uStack_98 = 0;
        uStack_90 = 0;
        lStack_a8 = 0;
        uStack_a0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0;
        piStack_88 = (int *)0x0;
        func_0x003c7c10(&lStack_b8,*(undefined4 *)(param_1 + 0x20),lVar9,0x10);
        if ((char)uStack_a0 == '\x01') {
          piVar3 = (int *)(lStack_b8 + lStack_a8);
        }
        else {
          piVar3 = piStack_88;
          if ((uStack_98 & 1) == 0) {
            piVar3 = (int *)((long)&uStack_98 + 1);
          }
        }
        iVar1 = *piVar3;
        if (iVar1 == 0x8074b50) {
          lVar9 = lVar9 + 4;
        }
        lVar11 = (ulong)(iVar1 == 0x8074b50) * 4;
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 < lVar9 + 0xc) {
          if ((*param_1 & 1) == 0) {
            pbVar8 = param_1 + 1;
          }
          else {
            pbVar8 = *(byte **)(param_1 + 0x10);
          }
          uStack_c0 = 0;
          func_0x0099bd30(_stderr,&UNK_001864dd,pbVar8,lVar9);
        }
        else {
          if ((char)uStack_a0 == '\0') {
            piVar3 = piStack_88;
            if ((uStack_98 & 1) == 0) {
              piVar3 = (int *)((long)&uStack_98 + 1);
            }
          }
          else {
            piVar3 = (int *)(lStack_b8 + lStack_a8);
          }
          lVar6 = (ulong)(iVar1 == 0x8074b50) * 4;
          lVar7 = lVar6 + 4;
          if ((short)piVar10[2] == 0) {
            lVar7 = lVar6 + 8;
          }
          uStack_c0 = (ulong)*(uint *)((long)piVar3 + lVar7);
          lVar11 = lVar11 + 0xc;
        }
        if ((uStack_98 & 1) != 0) {
          _ZdaPvSt11align_val_t(piStack_88,uStack_98 & 0xfffffffffffffffe);
        }
        if ((char)uStack_a0 == '\x01') {
          _ZN7android4base10MappedFileD2Ev(&lStack_b8);
        }
        if (lVar9 + 0xc <= lVar5) goto code_r0x003c80a5;
        lVar5 = 0;
      }
    }
  }
  else {
    if ((uStack_58 & 1) == 0) {
      piVar10 = (int *)((long)&uStack_58 + 1);
      iVar1 = uStack_58._1_4_;
      goto joined_r0x003c7f16;
    }
    piVar10 = piStack_48;
    if (*piStack_48 == 0x4034b50) goto code_r0x003c7f18;
code_r0x003c7eee:
    if ((*param_1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    lVar5 = 0;
    func_0x0099bd30(_stderr,&UNK_0015dfbb,param_1,param_2);
  }
  if ((uStack_58 & 1) != 0) {
    _ZdaPvSt11align_val_t(piStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  if ((char)uStack_60 == '\x01') {
    _ZN7android4base10MappedFileD2Ev(&lStack_78);
  }
code_r0x003c80e8:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return lVar5;
  }
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  lVar5 = (*pcVar2)();
  return lVar5;
}


