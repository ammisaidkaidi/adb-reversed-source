// Function: _ZN7android10ResXMLTree5setToEONS_4base10MappedFileE
// Address: 004302f0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN7android10ResXMLTree5setToEONS_4base10MappedFileE(long *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_RBX;
  undefined1 *unaff_RBP;
  short *psVar10;
  long *plVar11;
  long *unaff_R12;
  ushort *unaff_R13;
  ushort *puVar12;
  ushort *puVar13;
  ulong unaff_R14;
  ushort *puVar14;
  ushort *unaff_R15;
  long in_FS_OFFSET;
  
  do {
    *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ushort **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x28) = unaff_RBX;
    lVar9 = *(long *)param_2;
    uVar3 = *(ulong *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
    *(undefined **)((long)register0x00000020 + -0x30) = &UNK_0043031b;
    _ZN7android13ResStringPool6uninitEv(param_1 + 0x10);
    if ((char)param_1[10] == '\x01') {
      *(undefined **)((long)register0x00000020 + -0x30) = &UNK_0043032a;
      _ZN7android4base10MappedFileD2Ev(param_1 + 7);
      *(undefined1 *)(param_1 + 10) = 0;
    }
    lVar4 = param_1[0xb];
    param_1[0xb] = 0;
    if (lVar4 != 0) {
      *(undefined **)((long)register0x00000020 + -0x30) = &UNK_00430344;
      _ZdaPvSt11align_val_t();
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    if (uVar3 == 0 || lVar9 == 0) {
code_r0x0043038c:
      *(undefined4 *)(param_1 + 0xc) = 0x80000001;
      return 0x80000001;
    }
    if (uVar3 < 8) {
      *(undefined **)((long)register0x00000020 + -0x30) = &UNK_0043038c;
      __android_log_print(5,&UNK_0015b3df,&UNK_001758cf,uVar3 & 0xffffffff,8);
      goto code_r0x0043038c;
    }
    if ((char)param_1[10] == '\x01') {
      *(undefined **)((long)register0x00000020 + -0x30) = &UNK_004303b3;
      _ZN7android4base10MappedFileaSEOS1_(param_1 + 7,param_2);
    }
    else {
      *(undefined **)((long)register0x00000020 + -0x30) = &UNK_004303bd;
      _ZN7android4base10MappedFileC2EOS1_(param_1 + 7,param_2);
      *(undefined1 *)(param_1 + 10) = 1;
    }
    psVar10 = (short *)(param_1[7] + param_1[9]);
    uVar3 = param_1[8];
    uVar5 = *(undefined8 *)((long)register0x00000020 + -0x28);
    unaff_R12 = *(long **)((long)register0x00000020 + -0x20);
    unaff_R15 = *(ushort **)((long)register0x00000020 + -0x10);
    unaff_RBP = (undefined1 *)((long)register0x00000020 + -8);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(ushort **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) =
         *(undefined8 *)((long)register0x00000020 + -0x18);
    *(ushort **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar5;
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    param_1[0xd] = (long)psVar10;
    uVar6 = *(uint *)(psVar10 + 2);
    uVar8 = (ulong)uVar6;
    param_1[0xe] = uVar8;
    uVar1 = psVar10[1];
    if (uVar3 < uVar8 || uVar6 < uVar1) {
      uVar2 = *(undefined4 *)(psVar10 + 2);
      param_2 = (ushort *)&UNK_0015b3df;
      *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430052;
      __android_log_print(5,&UNK_0015b3df,&UNK_0015e348,uVar1,uVar2);
code_r0x00430260:
      unaff_R14 = 0x80000001;
code_r0x00430266:
      *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
      *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430279;
      _ZN7android13ResStringPool6uninitEv(param_1 + 0x10);
      if ((char)param_1[10] == '\x01') {
        *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430288;
        _ZN7android4base10MappedFileD2Ev(param_1 + 7);
        *(undefined1 *)(param_1 + 10) = 0;
      }
      plVar11 = (long *)param_1[0xb];
      param_1[0xb] = 0;
      if (plVar11 != (long *)0x0) {
        *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004302a2;
        _ZdaPvSt11align_val_t();
      }
    }
    else {
      if (*psVar10 != 3) {
        param_2 = (ushort *)&UNK_0015b3df;
        *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430223;
        __android_log_print(5,&UNK_0015b3df,&UNK_0015b468);
        goto code_r0x00430260;
      }
      param_2 = (ushort *)((long)psVar10 + uVar8);
      param_1[0xf] = (long)param_2;
      plVar11 = param_1 + 0x10;
      *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430078;
      _ZN7android13ResStringPool6uninitEv();
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x38] = 0;
      lVar9 = param_1[0xf];
      puVar12 = (ushort *)((ulong)*(ushort *)(param_1[0xd] + 2) + param_1[0xd]);
      if ((ushort *)(lVar9 + -8) <= puVar12) {
code_r0x00430246:
        param_2 = (ushort *)&UNK_0015b3df;
        *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430260;
        __android_log_print(5,&UNK_0015b3df,&UNK_00178d1a);
        goto code_r0x00430260;
      }
      unaff_R12 = (long *)((long)register0x00000020 + -0x50);
      unaff_R13 = puVar12;
      puVar14 = unaff_R15;
      do {
        unaff_R15 = puVar12;
        puVar12 = unaff_R15;
        if ((ushort *)(lVar9 - (ulong)*(uint *)(unaff_R13 + 2)) <= unaff_R13) break;
        *(ushort **)((long)register0x00000020 + -0x50) = unaff_R13;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
        *(long *)((long)register0x00000020 + -0x68) = lVar9;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x88) =
             *(undefined8 *)((long)register0x00000020 + -0x58);
        *(undefined4 *)((long)register0x00000020 + -0x98) =
             *(undefined4 *)((long)register0x00000020 + -0x68);
        *(undefined4 *)((long)register0x00000020 + -0x94) =
             *(undefined4 *)((long)register0x00000020 + -100);
        *(undefined4 *)((long)register0x00000020 + -0x90) =
             *(undefined4 *)((long)register0x00000020 + -0x60);
        *(undefined4 *)((long)register0x00000020 + -0x8c) =
             *(undefined4 *)((long)register0x00000020 + -0x5c);
        param_2 = (ushort *)0x8;
        *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_0043014f;
        plVar11 = unaff_R12;
        uVar6 = func_0x0042d730(unaff_R12,8,&UNK_00157b62);
        if (uVar6 != 0) {
          unaff_R14 = (ulong)uVar6;
          goto code_r0x00430266;
        }
        uVar1 = *unaff_R13;
        puVar13 = (ushort *)(ulong)*(uint *)(unaff_R13 + 2);
        if (uVar1 == 0x180) {
          param_1[0x36] = (long)((ulong)unaff_R13[1] + (long)unaff_R13);
          param_1[0x37] = (ulong)(*(int *)(unaff_R13 + 2) - (uint)unaff_R13[1] >> 2);
        }
        else if (uVar1 == 1) {
          *(ushort **)((long)register0x00000020 + -0x80) = unaff_R13;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000020 + -0x88) =
               *(undefined8 *)((long)register0x00000020 + -0x70);
          *(undefined4 *)((long)register0x00000020 + -0x98) =
               *(undefined4 *)((long)register0x00000020 + -0x80);
          *(undefined4 *)((long)register0x00000020 + -0x94) =
               *(undefined4 *)((long)register0x00000020 + -0x7c);
          *(undefined4 *)((long)register0x00000020 + -0x90) =
               *(undefined4 *)((long)register0x00000020 + -0x78);
          *(undefined4 *)((long)register0x00000020 + -0x8c) =
               *(undefined4 *)((long)register0x00000020 + -0x74);
          plVar11 = param_1 + 0x10;
          *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004301a0;
          param_2 = puVar13;
          _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb(plVar11,puVar13,0);
        }
        else if ((uVar1 & 0xff80) == 0x100) {
          *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004301cb;
          param_2 = unaff_R13;
          iVar7 = _ZNK7android10ResXMLTree12validateNodeEPKNS_15ResXMLTree_nodeE(param_1);
          unaff_R14 = 0x80000001;
          if (iVar7 != 0) goto code_r0x00430266;
          param_1[2] = (long)unaff_R15;
          *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004301e5;
          plVar11 = param_1;
          iVar7 = _ZN7android12ResXMLParser8nextNodeEv();
          if (iVar7 == -1) goto code_r0x00430266;
          lVar9 = param_1[2];
          *(int *)(param_1 + 0x38) = (int)param_1[2];
          *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_1 + 0x14);
          *(int *)(param_1 + 0x39) = (int)param_1[3];
          *(undefined4 *)((long)param_1 + 0x1cc) = *(undefined4 *)((long)param_1 + 0x1c);
          *(int *)(param_1 + 0x3a) = (int)param_1[1];
          goto code_r0x0043022c;
        }
        puVar13 = (ushort *)((long)puVar13 + (long)unaff_R13);
        lVar9 = param_1[0xf];
        puVar12 = unaff_R13;
        unaff_R13 = puVar13;
        puVar14 = unaff_R15;
      } while (puVar13 < (ushort *)(lVar9 + -8));
      lVar9 = param_1[0x38];
      unaff_R13 = puVar12;
      unaff_R15 = puVar14;
code_r0x0043022c:
      if (lVar9 == 0) goto code_r0x00430246;
      uVar6 = *(uint *)(param_1 + 0x11);
      unaff_R14 = (ulong)uVar6;
      *(uint *)(param_1 + 0xc) = uVar6;
      if (uVar6 != 0) goto code_r0x00430266;
      unaff_R14 = 0;
    }
    param_1[2] = 0;
    *(uint *)(param_1 + 1) = -(uint)(*(int *)(*param_1 + 0x60) != 0);
    if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
      return unaff_R14;
    }
    *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004302e2;
    func_0x0099bd00();
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x98);
    param_1 = plVar11;
  } while( true );
}


