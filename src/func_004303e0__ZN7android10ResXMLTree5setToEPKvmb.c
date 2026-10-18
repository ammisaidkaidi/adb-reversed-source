// Function: _ZN7android10ResXMLTree5setToEPKvmb
// Address: 004303e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN7android10ResXMLTree5setToEPKvmb(long *param_1,short *param_2,ulong param_3,char param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ushort *puVar7;
  long *plVar8;
  long *unaff_R12;
  ushort *unaff_R13;
  ushort *puVar9;
  ushort *puVar10;
  ulong uVar11;
  undefined8 unaff_R14;
  ushort *puVar12;
  ushort *unaff_R15;
  long in_FS_OFFSET;
  
  *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
  _ZN7android13ResStringPool6uninitEv(param_1 + 0x10);
  if ((char)param_1[10] == '\x01') {
    _ZN7android4base10MappedFileD2Ev(param_1 + 7);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  lVar5 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar5 != 0) {
    _ZdaPvSt11align_val_t();
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_3 != 0 && param_2 != (short *)0x0) {
    if (7 < param_3) {
      if (param_4 != '\0') {
        lVar6 = _Znam(param_3);
        lVar5 = param_1[0xb];
        param_1[0xb] = lVar6;
        if (lVar5 != 0) {
          _ZdaPvSt11align_val_t();
          lVar6 = param_1[0xb];
          if (lVar6 == 0) {
            *(undefined4 *)(param_1 + 0xc) = 0xfffffff4;
            return 0xfffffff4;
          }
        }
        func_0x0099bda0(lVar6,param_2,param_3);
        param_2 = (short *)param_1[0xb];
      }
      do {
        *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
        *(ushort **)((long)register0x00000020 + -0x10) = unaff_R15;
        *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
        *(ushort **)((long)register0x00000020 + -0x20) = unaff_R13;
        *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
        *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
        *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
        param_1[0xd] = (long)param_2;
        uVar3 = *(uint *)(param_2 + 2);
        uVar11 = (ulong)uVar3;
        param_1[0xe] = uVar11;
        uVar1 = param_2[1];
        if (param_3 < uVar11 || uVar3 < uVar1) {
          uVar2 = *(undefined4 *)(param_2 + 2);
          puVar7 = (ushort *)&UNK_0015b3df;
          *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430052;
          __android_log_print(5,&UNK_0015b3df,&UNK_0015e348,uVar1,uVar2);
code_r0x00430260:
          uVar11 = 0x80000001;
code_r0x00430266:
          *(undefined4 *)(param_1 + 0xc) = 0xffffffed;
          *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430279;
          _ZN7android13ResStringPool6uninitEv(param_1 + 0x10);
          if ((char)param_1[10] == '\x01') {
            *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430288;
            _ZN7android4base10MappedFileD2Ev(param_1 + 7);
            *(undefined1 *)(param_1 + 10) = 0;
          }
          plVar8 = (long *)param_1[0xb];
          param_1[0xb] = 0;
          if (plVar8 != (long *)0x0) {
            *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004302a2;
            _ZdaPvSt11align_val_t();
          }
        }
        else {
          if (*param_2 != 3) {
            puVar7 = (ushort *)&UNK_0015b3df;
            *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430223;
            __android_log_print(5,&UNK_0015b3df,&UNK_0015b468);
            goto code_r0x00430260;
          }
          puVar7 = (ushort *)((long)param_2 + uVar11);
          param_1[0xf] = (long)puVar7;
          plVar8 = param_1 + 0x10;
          *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430078;
          _ZN7android13ResStringPool6uninitEv();
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          param_1[0x38] = 0;
          lVar5 = param_1[0xf];
          puVar9 = (ushort *)((ulong)*(ushort *)(param_1[0xd] + 2) + param_1[0xd]);
          if ((ushort *)(lVar5 + -8) <= puVar9) {
code_r0x00430246:
            puVar7 = (ushort *)&UNK_0015b3df;
            *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_00430260;
            __android_log_print(5,&UNK_0015b3df,&UNK_00178d1a);
            goto code_r0x00430260;
          }
          unaff_R12 = (long *)((long)register0x00000020 + -0x50);
          unaff_R13 = puVar9;
          puVar12 = unaff_R15;
          do {
            unaff_R15 = puVar9;
            puVar9 = unaff_R15;
            if ((ushort *)(lVar5 - (ulong)*(uint *)(unaff_R13 + 2)) <= unaff_R13) break;
            *(ushort **)((long)register0x00000020 + -0x50) = unaff_R13;
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
            *(long *)((long)register0x00000020 + -0x68) = lVar5;
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
            puVar7 = (ushort *)0x8;
            *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_0043014f;
            plVar8 = unaff_R12;
            uVar3 = func_0x0042d730(unaff_R12,8,&UNK_00157b62);
            if (uVar3 != 0) {
              uVar11 = (ulong)uVar3;
              goto code_r0x00430266;
            }
            uVar1 = *unaff_R13;
            puVar10 = (ushort *)(ulong)*(uint *)(unaff_R13 + 2);
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
              plVar8 = param_1 + 0x10;
              *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004301a0;
              puVar7 = puVar10;
              _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb(plVar8,puVar10,0);
            }
            else if ((uVar1 & 0xff80) == 0x100) {
              *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004301cb;
              puVar7 = unaff_R13;
              iVar4 = _ZNK7android10ResXMLTree12validateNodeEPKNS_15ResXMLTree_nodeE(param_1);
              uVar11 = 0x80000001;
              if (iVar4 != 0) goto code_r0x00430266;
              param_1[2] = (long)unaff_R15;
              *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004301e5;
              plVar8 = param_1;
              iVar4 = _ZN7android12ResXMLParser8nextNodeEv();
              if (iVar4 == -1) goto code_r0x00430266;
              lVar5 = param_1[2];
              *(int *)(param_1 + 0x38) = (int)param_1[2];
              *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)((long)param_1 + 0x14);
              *(int *)(param_1 + 0x39) = (int)param_1[3];
              *(undefined4 *)((long)param_1 + 0x1cc) = *(undefined4 *)((long)param_1 + 0x1c);
              *(int *)(param_1 + 0x3a) = (int)param_1[1];
              goto code_r0x0043022c;
            }
            puVar10 = (ushort *)((long)puVar10 + (long)unaff_R13);
            lVar5 = param_1[0xf];
            puVar9 = unaff_R13;
            unaff_R13 = puVar10;
            puVar12 = unaff_R15;
          } while (puVar10 < (ushort *)(lVar5 + -8));
          lVar5 = param_1[0x38];
          unaff_R13 = puVar9;
          unaff_R15 = puVar12;
code_r0x0043022c:
          if (lVar5 == 0) goto code_r0x00430246;
          uVar3 = *(uint *)(param_1 + 0x11);
          uVar11 = (ulong)uVar3;
          *(uint *)(param_1 + 0xc) = uVar3;
          if (uVar3 != 0) goto code_r0x00430266;
          uVar11 = 0;
        }
        param_1[2] = 0;
        *(uint *)(param_1 + 1) = -(uint)(*(int *)(*param_1 + 0x60) != 0);
        if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)register0x00000020 + -0x38)) {
          return uVar11;
        }
        *(undefined **)((long)register0x00000020 + -0xa0) = &UNK_004302e2;
        func_0x0099bd00();
        *(undefined1 **)((long)register0x00000020 + -0xa0) =
             (undefined1 *)((long)register0x00000020 + -8);
        *(ushort **)((long)register0x00000020 + -0xa8) = unaff_R15;
        *(ulong *)((long)register0x00000020 + -0xb0) = uVar11;
        *(long **)((long)register0x00000020 + -0xb8) = unaff_R12;
        *(long **)((long)register0x00000020 + -0xc0) = param_1;
        lVar5 = *(long *)puVar7;
        uVar11 = *(ulong *)(puVar7 + 4);
        *(undefined4 *)(plVar8 + 0xc) = 0xffffffed;
        *(undefined **)((long)register0x00000020 + -200) = &UNK_0043031b;
        _ZN7android13ResStringPool6uninitEv(plVar8 + 0x10);
        if ((char)plVar8[10] == '\x01') {
          *(undefined **)((long)register0x00000020 + -200) = &UNK_0043032a;
          _ZN7android4base10MappedFileD2Ev(plVar8 + 7);
          *(undefined1 *)(plVar8 + 10) = 0;
        }
        lVar6 = plVar8[0xb];
        plVar8[0xb] = 0;
        if (lVar6 != 0) {
          *(undefined **)((long)register0x00000020 + -200) = &UNK_00430344;
          _ZdaPvSt11align_val_t();
        }
        plVar8[2] = 0;
        *(undefined4 *)(plVar8 + 1) = 0;
        if (uVar11 == 0 || lVar5 == 0) goto code_r0x0043038c;
        if (uVar11 < 8) {
          *(undefined **)((long)register0x00000020 + -200) = &UNK_0043038c;
          __android_log_print(5,&UNK_0015b3df,&UNK_001758cf,uVar11 & 0xffffffff,8);
code_r0x0043038c:
          *(undefined4 *)(plVar8 + 0xc) = 0x80000001;
          return 0x80000001;
        }
        if ((char)plVar8[10] == '\x01') {
          *(undefined **)((long)register0x00000020 + -200) = &UNK_004303b3;
          _ZN7android4base10MappedFileaSEOS1_(plVar8 + 7,puVar7);
        }
        else {
          *(undefined **)((long)register0x00000020 + -200) = &UNK_004303bd;
          _ZN7android4base10MappedFileC2EOS1_(plVar8 + 7,puVar7);
          *(undefined1 *)(plVar8 + 10) = 1;
        }
        param_2 = (short *)(plVar8[7] + plVar8[9]);
        param_3 = plVar8[8];
        unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0xc0);
        unaff_R12 = *(long **)((long)register0x00000020 + -0xb8);
        unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0xb0);
        unaff_R15 = *(ushort **)((long)register0x00000020 + -0xa8);
        unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0xa0);
        register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x98);
        param_1 = plVar8;
      } while( true );
    }
    __android_log_print(5,&UNK_0015b3df,&UNK_001758cf,param_3 & 0xffffffff,8);
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80000001;
  return 0x80000001;
}


