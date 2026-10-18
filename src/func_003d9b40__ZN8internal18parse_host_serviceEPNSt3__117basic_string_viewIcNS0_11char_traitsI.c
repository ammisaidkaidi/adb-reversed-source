// Function: _ZN8internal18parse_host_serviceEPNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEES5_S4_
// Address: 003d9b40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003d9beb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d9c65: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d9e31: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d9d62: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d9dc9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d9d67) */
/* WARNING: Removing unreachable block (ram,0x003d9d70) */
/* WARNING: Removing unreachable block (ram,0x003d9c6a) */
/* WARNING: Removing unreachable block (ram,0x003d9c8b) */
/* WARNING: Removing unreachable block (ram,0x003d9c9b) */
/* WARNING: Removing unreachable block (ram,0x003d9ca4) */
/* WARNING: Removing unreachable block (ram,0x003d9cb9) */
/* WARNING: Removing unreachable block (ram,0x003d9e36) */
/* WARNING: Removing unreachable block (ram,0x003d9cc8) */
/* WARNING: Removing unreachable block (ram,0x003d9cd0) */
/* WARNING: Removing unreachable block (ram,0x003d9bf0) */
/* WARNING: Removing unreachable block (ram,0x003d9bfb) */
/* WARNING: Removing unreachable block (ram,0x003d9c09) */
/* WARNING: Removing unreachable block (ram,0x003d9dce) */

long _ZN8internal18parse_host_serviceEPNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEES5_S4_
               (uint *****param_1,uint ***param_2,uint *****param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint ***pppuVar8;
  uint ***pppuVar9;
  uint ****ppppuVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  char cVar22;
  int iVar23;
  long lVar24;
  uint ****ppppuVar25;
  int *piVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  uint *****pppppuVar29;
  uint ****ppppuVar30;
  uint *****pppppuVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  undefined1 (*pauVar34) [16];
  ulong uVar35;
  undefined4 *puVar36;
  uint *puVar37;
  uint ***pppuVar38;
  byte bVar39;
  uint *****extraout_RDX;
  ulong uVar40;
  ulong extraout_RDX_00;
  uint uVar41;
  uint *****unaff_RBX;
  undefined **ppuVar42;
  uint *****pppppuVar43;
  undefined *puVar44;
  undefined1 *puVar45;
  uint *****pppppuVar46;
  char *pcVar47;
  char *pcVar48;
  byte bVar49;
  char *pcVar50;
  long *plVar51;
  byte bVar52;
  uint uVar53;
  undefined8 unaff_R12;
  undefined1 *puVar54;
  undefined8 unaff_R13;
  undefined1 *puVar55;
  ulong unaff_R14;
  uint ***pppuVar56;
  uint *****pppppuVar57;
  uint ***unaff_R15;
  uint *****pppppuVar58;
  long in_FS_OFFSET;
  bool bVar59;
  undefined1 auVar60 [16];
  long lVar61;
  long lVar62;
  long lVar63;
  ulong auStack_2360 [1112];
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 ****ppppuStack_90;
  undefined8 **ppuStack_88;
  undefined1 *puStack_80;
  uint ****ppppuStack_78;
  uint ****ppppuStack_70;
  undefined1 *puStack_68;
  uint ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [16];
  undefined8 ****ppppuStack_30;
  ulong uStack_28;
  long lStack_20;
  
  ppuVar42 = (undefined **)auStack_98;
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  ppppuStack_30 = param_3;
  uStack_28 = param_4;
  pppppuVar58 = param_1;
  if (param_4 == 0) {
code_r0x003d9e42:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return 0;
    }
    puStack_a0 = &UNK_003d9e62;
    func_0x0099bd00();
    param_3 = unaff_RBX;
    param_4 = unaff_R14;
  }
  else {
    auStack_48 = (undefined1  [16])0x0;
    ppppuStack_58 = param_3;
    uStack_50 = param_4;
    ppppuStack_70 = (uint ****)&ppppuStack_30;
    puStack_80 = auStack_48;
    puStack_68 = puStack_80;
    ppppuStack_78 = (uint ****)&ppppuStack_58;
    ppppuStack_60 = ppppuStack_78;
    unaff_RBX = param_3;
    pppppuVar58 = param_3;
    unaff_R14 = param_4;
    ppppuStack_90 = param_1;
    ppuStack_88 = param_2;
    if (param_4 < 4) {
code_r0x003d9bbe:
      if (*(byte *)param_3 == 0x5b) {
        puStack_a0 = &UNK_003d9bd3;
        lVar24 = func_0x0099c070(param_3,0x5d,param_4);
        if ((lVar24 != 0) && (lVar24 - (long)param_3 != -1)) {
          param_2 = (uint ***)((lVar24 - (long)param_3) + 1);
          pppppuVar58 = &ppppuStack_70;
          ppuVar42 = &puStack_a0;
          puStack_a0 = &UNK_003d9bf0;
          goto code_r0x003d9e70;
        }
      }
      puStack_a0 = &UNK_003d9c43;
      param_2 = (uint ***)func_0x0099c070(param_3,0x3a,param_4);
      if ((param_2 == (uint ***)0x0) ||
         (param_2 = (uint ***)((long)param_2 - (long)param_3),
         param_2 == (uint ***)0xffffffffffffffff)) goto code_r0x003d9e42;
      param_2 = (uint ***)((long)param_2 + 1);
      pppppuVar58 = &ppppuStack_70;
      ppuVar42 = &puStack_a0;
      puStack_a0 = &UNK_003d9c6a;
    }
    else {
      if (*(uint *)param_3 == 0x3a627375) {
        uVar28 = 4;
      }
      else if (param_4 < 8) {
        if (param_4 < 6) {
code_r0x003d9d49:
          if ((*(uint *)param_3 == 0x3a706374) || (*(uint *)param_3 == 0x3a706475)) {
            pppppuVar58 = &ppppuStack_70;
            param_2 = (uint ***)0x4;
            ppuVar42 = &puStack_a0;
            puStack_a0 = &UNK_003d9d67;
          }
          else {
            if ((param_4 < 6) ||
               (*(short *)((long)param_3 + 4) != 0x3a6b || *(uint *)param_3 != 0x636f7376))
            goto code_r0x003d9bbe;
            puStack_a0 = &UNK_003d9da7;
            param_2 = (uint ***)func_0x0099c070(param_3,0x3a,param_4);
            if ((param_2 == (uint ***)0x0) ||
               (param_2 = (uint ***)((long)param_2 - (long)param_3),
               param_2 == (uint ***)0xffffffffffffffff)) goto code_r0x003d9e42;
            param_2 = (uint ***)((long)param_2 + 1);
            pppppuVar58 = &ppppuStack_70;
            ppuVar42 = &puStack_a0;
            puStack_a0 = &UNK_003d9dce;
          }
          goto code_r0x003d9e70;
        }
code_r0x003d9cf2:
        if (*(short *)((long)param_3 + 4) == 0x3a6c && *(uint *)param_3 == 0x65646f6d) {
          uVar28 = 6;
        }
        else {
          if (param_4 < 7) goto code_r0x003d9d49;
          if (*(int *)((long)param_3 + 3) == 0x3a656369 && *(uint *)param_3 == 0x69766564) {
            uVar28 = 7;
          }
          else {
            if ((param_4 < 0x10) ||
               (auVar60[0] = -(*(byte *)param_3 == 0x6c),
               auVar60[1] = -(*(byte *)((long)param_3 + 1) == 0x6f),
               auVar60[2] = -(*(byte *)((long)param_3 + 2) == 99),
               auVar60[3] = -(*(byte *)((long)param_3 + 3) == 0x61),
               auVar60[4] = -(*(byte *)((long)param_3 + 4) == 0x6c),
               auVar60[5] = -(*(byte *)((long)param_3 + 5) == 0x66),
               auVar60[6] = -(*(byte *)((long)param_3 + 6) == 0x69),
               auVar60[7] = -(*(byte *)((long)param_3 + 7) == 0x6c),
               auVar60[8] = -(*(byte *)(param_3 + 1) == 0x65),
               auVar60[9] = -(*(byte *)((long)param_3 + 9) == 0x73),
               auVar60[10] = -(*(byte *)((long)param_3 + 10) == 0x79),
               auVar60[0xb] = -(*(byte *)((long)param_3 + 0xb) == 0x73),
               auVar60[0xc] = -(*(byte *)((long)param_3 + 0xc) == 0x74),
               auVar60[0xd] = -(*(byte *)((long)param_3 + 0xd) == 0x65),
               auVar60[0xe] = -(*(byte *)((long)param_3 + 0xe) == 0x6d),
               auVar60[0xf] = -(*(byte *)((long)param_3 + 0xf) == 0x3a),
               (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar60[0xf] >> 7) << 0xf) != 0xffff)) goto code_r0x003d9d49;
            uVar28 = 0x10;
          }
        }
      }
      else {
        if (*param_3 != (uint ****)0x3a746375646f7270) goto code_r0x003d9cf2;
        uVar28 = 8;
      }
      puStack_a0 = &UNK_003d9e02;
      func_0x003d9e70(&ppppuStack_70,uVar28);
      unaff_RBX = (uint *****)ppppuStack_58;
      puStack_a0 = &UNK_003d9e17;
      pppppuVar58 = (uint *****)ppppuStack_58;
      param_2 = (uint ***)func_0x0099c070(ppppuStack_58,0x3a,uStack_50);
      if ((param_2 == (uint ***)0x0) ||
         (param_2 = (uint ***)((long)param_2 - (long)unaff_RBX),
         param_2 == (uint ***)0xffffffffffffffff)) goto code_r0x003d9e42;
      param_2 = (uint ***)((long)param_2 + 1);
      pppppuVar58 = &ppppuStack_70;
      ppuVar42 = &puStack_a0;
      puStack_a0 = &UNK_003d9e36;
      param_3 = unaff_RBX;
    }
  }
code_r0x003d9e70:
  *(undefined1 **)((long)ppuVar42 + -8) = &stack0xfffffffffffffff8;
  *(uint ****)((long)ppuVar42 + -0x10) = unaff_R15;
  *(ulong *)((long)ppuVar42 + -0x18) = param_4;
  *(undefined8 *)((long)ppuVar42 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppuVar42 + -0x28) = unaff_R12;
  *(uint ******)((long)ppuVar42 + -0x30) = param_3;
  *(undefined8 *)((long)ppuVar42 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pppuVar56 = pppppuVar58[2][1];
  if (pppuVar56 < param_2) {
    puVar54 = (undefined1 *)((long)ppuVar42 + -0x40);
    do {
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9f42;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (puVar54,&UNK_0015b0ed,0x2b1,6,0,0xffffffff);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9f4a;
      uVar28 = _ZN7android4base10LogMessage6streamEv(puVar54);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9f5e;
      uVar28 = func_0x0032eb30(uVar28,&UNK_00165d45,0xe);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9f72;
      uVar28 = func_0x0032eb30(uVar28,&UNK_0015b12c,5);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9f82;
      uVar28 = func_0x0032eb30(uVar28,&UNK_0015ae05,1);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9f96;
      uVar28 = func_0x0032eb30(uVar28,&UNK_00184995,2);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9fa6;
      uVar28 = func_0x0032eb30(uVar28,&UNK_0015ae05,1);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9fba;
      uVar28 = func_0x0032eb30(uVar28,&UNK_00167ace,0xe);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9fce;
      uVar28 = func_0x0032eb30(uVar28,&UNK_00162e68,8);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9fd9;
      uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar28,param_2);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9fed;
      uVar28 = func_0x0032eb30(uVar28,&UNK_0015fc14,0x11);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003d9ff8;
      uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar28,pppuVar56);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da008;
      func_0x0032eb30(uVar28,&UNK_0017b788,2);
      *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da010;
      _ZN7android4base10LogMessageD2Ev(puVar54);
    } while( true );
  }
  ppppuVar30 = pppppuVar58[1];
  pppuVar8 = ppppuVar30[1];
  if (pppuVar8 != (uint ***)0x0) {
    pppuVar56 = (uint ***)((long)*ppppuVar30 + (long)pppuVar8);
    unaff_R15 = *pppppuVar58[2];
    if (pppuVar56 != unaff_R15) {
      puVar54 = (undefined1 *)((long)ppuVar42 + -0x40);
      do {
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da052;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar54,&UNK_0015b0ed,0x2b3,6,0,0xffffffff);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da05a;
        uVar28 = _ZN7android4base10LogMessage6streamEv(puVar54);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da06e;
        uVar28 = func_0x0032eb30(uVar28,&UNK_00165d45,0xe);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da082;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015c7fe,0x1d);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da092;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015ae05,1);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da0a6;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015aef8,2);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da0b6;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015ae05,1);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da0ca;
        uVar28 = func_0x0032eb30(uVar28,&UNK_001865bc,0xe);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da0de;
        uVar28 = func_0x0032eb30(uVar28,&UNK_001865cb,0x20);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da0e9;
        uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uVar28,pppuVar56);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da0fd;
        uVar28 = func_0x0032eb30(uVar28,&UNK_001865ec,0x11);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da108;
        uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uVar28,unaff_R15);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da118;
        func_0x0032eb30(uVar28,&UNK_0017b788,2);
        *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da120;
        _ZN7android4base10LogMessageD2Ev(puVar54);
      } while( true );
    }
  }
  pppppuVar43 = (uint *****)**pppppuVar58;
  pppuVar9 = (*pppppuVar58)[1];
  pppuVar38 = (uint ***)((long)pppuVar8 + (long)param_2);
  if (pppuVar9 < (uint ***)((long)pppuVar8 + (long)param_2)) {
    pppuVar38 = pppuVar9;
  }
  *ppppuVar30 = (uint ***)pppppuVar43;
  ppppuVar30[1] = pppuVar38;
  ppppuVar30 = pppppuVar58[2];
  *ppppuVar30 = (uint ***)((long)*ppppuVar30 + (long)param_2);
  ppppuVar30[1] = (uint ***)((long)ppppuVar30[1] - (long)param_2);
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar42 + -0x38)) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)ppuVar42 + -0x50) = &UNK_003da12a;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar42 + -0x50) = (undefined1 *)((long)ppuVar42 + -8);
  *(uint ****)((long)ppuVar42 + -0x58) = unaff_R15;
  *(uint ****)((long)ppuVar42 + -0x60) = pppuVar56;
  *(undefined8 *)((long)ppuVar42 + -0x68) = unaff_R13;
  *(undefined8 *)((long)ppuVar42 + -0x70) = unaff_R12;
  *(uint ****)((long)ppuVar42 + -0x78) = param_2;
  *(undefined8 *)((long)ppuVar42 + -0x80) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  ppppuVar30 = pppppuVar58[2];
  pppuVar8 = ppppuVar30[1];
  if ((pppuVar8 == (uint ***)0x0) || (pppppuVar58[3][1] == (uint ***)0x0)) {
    lVar24 = 0;
  }
  else {
    cVar22 = *(char *)((long)*ppppuVar30 + -1 + (long)pppuVar8);
    if (cVar22 != ':') {
      puVar54 = (undefined1 *)((long)ppuVar42 + -0x90);
      do {
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da202;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (puVar54,&UNK_0015b0ed,0x2c0,6,0,0xffffffff);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da20a;
        uVar28 = _ZN7android4base10LogMessage6streamEv(puVar54);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da21e;
        uVar28 = func_0x0032eb30(uVar28,&UNK_00165d45,0xe);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da232;
        uVar28 = func_0x0032eb30(uVar28,&UNK_00167add,3);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da242;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015ae05,1);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da256;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015aef8,2);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da266;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015ae05,1);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da27a;
        uVar28 = func_0x0032eb30(uVar28,&UNK_001789e7,0xd);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da28e;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0016ebc8,6);
        *(undefined1 *)((long)ppuVar42 + -0x81) = 0x3a;
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da2a2;
        uVar28 = func_0x0032eb30(uVar28,(undefined1 *)((long)ppuVar42 + -0x81),1);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da2b6;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0017a1ac,0x10);
        *(char *)((long)ppuVar42 + -0x81) = cVar22;
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da2ca;
        uVar28 = func_0x0032eb30(uVar28,(undefined1 *)((long)ppuVar42 + -0x81),1);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da2da;
        func_0x0032eb30(uVar28,&UNK_0017b788,2);
        *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da2e2;
        _ZN7android4base10LogMessageD2Ev(puVar54);
      } while( true );
    }
    ppppuVar30[1] = (uint ***)((long)pppuVar8 + -1);
    ppppuVar30 = *pppppuVar58;
    pppuVar8 = pppppuVar58[2][1];
    *ppppuVar30 = *pppppuVar58[2];
    ppppuVar30[1] = pppuVar8;
    ppppuVar30 = pppppuVar58[1];
    pppuVar8 = pppppuVar58[3][1];
    *ppppuVar30 = *pppppuVar58[3];
    ppppuVar30[1] = pppuVar8;
    lVar24 = CONCAT71((int7)((ulong)ppppuVar30 >> 8),1);
    unaff_R15 = (uint ***)0x3a;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar42 + -0x80)) {
    return lVar24;
  }
  *(undefined **)((long)ppuVar42 + -0x98) = &UNK_003da2ec;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar42 + -0x98) = (undefined1 *)((long)ppuVar42 + -0x50);
  *(uint ****)((long)ppuVar42 + -0xa0) = unaff_R15;
  *(uint ****)((long)ppuVar42 + -0xa8) = pppuVar56;
  *(undefined8 *)((long)ppuVar42 + -0xb0) = unaff_R13;
  *(undefined8 *)((long)ppuVar42 + -0xb8) = unaff_R12;
  *(uint ****)((long)ppuVar42 + -0xc0) = param_2;
  *(undefined8 *)((long)ppuVar42 + -200) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar54 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    pppppuVar43 = (uint *****)0x0;
    *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da408;
    cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar22 != '\0') {
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da415;
      pppuVar56 = (uint ***)func_0x0099bce0();
      *(undefined4 *)((long)ppuVar42 + -0xec) = *(undefined4 *)pppuVar56;
      unaff_R15 = (uint ***)((long)ppuVar42 + -0xe8);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da443;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R15,&UNK_0015b0ed,0x3e2,1,0);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da44b;
      uVar28 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
      pppppuVar43 = (uint *****)&UNK_00161370;
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da45f;
      func_0x0032eb30(uVar28,&UNK_00161370,0x1a);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da467;
      _ZN7android4base10LogMessageD2Ev(unaff_R15);
      *(undefined4 *)pppuVar56 = *(undefined4 *)((long)ppuVar42 + -0xec);
    }
  }
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    pppppuVar43 = (uint *****)0x0;
    *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da47e;
    cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar22 != '\0') {
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da48b;
      pppuVar56 = (uint ***)func_0x0099bce0();
      *(undefined4 *)((long)ppuVar42 + -0xec) = *(undefined4 *)pppuVar56;
      unaff_R15 = (uint ***)((long)ppuVar42 + -0xe8);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da4b9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(unaff_R15,&UNK_0015b0ed,0x3d6,1,0);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da4c1;
      uVar28 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
      pppppuVar43 = (uint *****)&UNK_0018961a;
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da4d5;
      func_0x0032eb30(uVar28,&UNK_0018961a,0x15);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da4dd;
      _ZN7android4base10LogMessageD2Ev(unaff_R15);
      *(undefined4 *)pppuVar56 = *(undefined4 *)((long)ppuVar42 + -0xec);
    }
  }
  *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da34f;
  ppppuVar25 = (uint ****)_Znwm(0xa8);
  ppppuVar25[8] = (uint ***)0x0;
  ppppuVar25[9] = (uint ***)0x0;
  ppppuVar25[0x10] = (uint ***)0x0;
  ppppuVar25[0x11] = (uint ***)0x0;
  ppppuVar25[2] = (uint ***)0x0;
  ppppuVar25[3] = (uint ***)0x0;
  ppppuVar25[4] = (uint ***)0x0;
  ppppuVar25[5] = (uint ***)0x0;
  ppppuVar25[6] = (uint ***)0x0;
  ppppuVar25[7] = (uint ***)0x0;
  *ppppuVar25 = (uint ***)0x0;
  ppppuVar25[1] = (uint ***)0x0;
  ppppuVar25[10] = (uint ***)0x0;
  ppppuVar25[0xb] = (uint ***)0x0;
  ppppuVar25[0xc] = (uint ***)0x0;
  ppppuVar25[0xd] = (uint ***)0x0;
  ppppuVar25[0xe] = (uint ***)0x0;
  ppppuVar25[0xf] = (uint ***)0x0;
  *(undefined4 *)(ppppuVar25 + 9) = 0xffffffff;
  ppppuVar25[0x12] = (uint ***)0x0;
  ppppuVar25[0x13] = (uint ***)0x0;
  ppppuVar25[0x14] = (uint ***)0x0;
  *(undefined1 *)(ppppuVar25 + 0x10) = 0;
  ppppuVar25[3] = (uint ***)&UNK_003daae0;
  ppppuVar25[4] = (uint ***)&UNK_003dc1a0;
  ppppuVar25[6] = (uint ***)&UNK_003dc2a0;
  ppppuVar30 = (uint ****)&adb_trace_mask;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    pppppuVar43 = (uint *****)0x0;
    *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da4f7;
    cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    ppppuVar30 = ppppuVar25;
    if (cVar22 != '\0') {
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da509;
      pppuVar56 = (uint ***)func_0x0099bce0();
      *(undefined4 *)((long)ppuVar42 + -0xec) = *(undefined4 *)pppuVar56;
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da537;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                ((undefined1 *)((long)ppuVar42 + -0xd0),&UNK_0015b0ed,0x3dd,1,0);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da53f;
      unaff_R15 = (uint ***)
                  _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0xd0));
      puVar54 = (undefined1 *)((long)ppuVar42 + -0xe8);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da559;
      _ZN7android4base12StringPrintfEPKcz(puVar54,&UNK_0015e051,0);
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da564;
      pppppuVar43 = (uint *****)puVar54;
      func_0x0032e5a0(unaff_R15);
      if ((*(byte *)((long)ppuVar42 + -0xe8) & 1) != 0) {
        pppppuVar43 = (uint *****)(*(ulong *)((long)ppuVar42 + -0xe8) & 0xfffffffffffffffe);
        *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da57b;
        _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0xd8));
      }
      *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da584;
      _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0xd0));
      *(undefined4 *)pppuVar56 = *(undefined4 *)((long)ppuVar42 + -0xec);
    }
  }
  pppppuVar58[2] = ppppuVar25;
  ppppuVar25[2] = (uint ***)pppppuVar58;
  ppppuVar25 = pppppuVar58[4];
  *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da3da;
  pppppuVar46 = pppppuVar58;
  (*(code *)ppppuVar25)();
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar42 + -200)) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)ppuVar42 + -0x100) = &UNK_003da597;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar42 + -0x100) = (undefined1 *)((long)ppuVar42 + -0x98);
  *(uint ****)((long)ppuVar42 + -0x108) = unaff_R15;
  *(uint ****)((long)ppuVar42 + -0x110) = pppuVar56;
  *(uint *****)((long)ppuVar42 + -0x118) = ppppuVar30;
  *(undefined1 **)((long)ppuVar42 + -0x120) = puVar54;
  *(uint ******)((long)ppuVar42 + -0x128) = pppppuVar58;
  *(undefined8 *)((long)ppuVar42 + -0x130) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pppppuVar58 = (uint *****)&adb_trace_mask;
  puVar55 = adb_trace_severity;
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    pppppuVar43 = (uint *****)0x0;
    *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da788;
    cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
    if (cVar22 != '\0') {
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da795;
      puVar27 = (undefined4 *)func_0x0099bce0();
      *(undefined4 **)((long)ppuVar42 + -0x1a0) = puVar27;
      *(undefined4 *)((long)ppuVar42 + -0x194) = *puVar27;
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da7ca;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                ((undefined1 *)((long)ppuVar42 + -0x170),&UNK_0015b0ed,0x79,1,0);
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da7d2;
      uVar28 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x170));
      uVar41 = *(uint *)pppppuVar46;
      ppppuVar30 = pppppuVar46[10];
      ppppuVar25 = pppppuVar46[0xb];
      puVar54 = (undefined1 *)((long)ppuVar42 + -0x150);
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da7fb;
      _ZN7android4base12StringPrintfEPKcz
                (puVar54,&UNK_0017ed58,uVar41,&UNK_00167a77,(long)ppppuVar30 - (long)ppppuVar25);
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da806;
      pppppuVar43 = (uint *****)puVar54;
      func_0x0032e5a0(uVar28);
      if ((*(byte *)((long)ppuVar42 + -0x150) & 1) != 0) {
        pppppuVar43 = (uint *****)(*(ulong *)((long)ppuVar42 + -0x150) & 0xfffffffffffffffe);
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da81d;
        _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x140));
      }
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da826;
      _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x170));
      **(undefined4 **)((long)ppuVar42 + -0x1a0) = *(undefined4 *)((long)ppuVar42 + -0x194);
    }
  }
  ppppuVar30 = pppppuVar46[10];
  pppppuVar31 = (uint *****)CONCAT71((int7)((ulong)puVar54 >> 8),1);
  pppppuVar29 = (uint *****)0x0;
  ppppuVar25 = ppppuVar30;
  if (ppppuVar30 != pppppuVar46[0xb]) {
    *(undefined8 *)((long)ppuVar42 + -0x150) = 0;
    *(undefined8 *)((long)ppuVar42 + -0x148) = 0;
    *(undefined8 *)((long)ppuVar42 + -0x140) = 0;
    *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da614;
    _ZNK8IOVector6iovecsEv((undefined1 *)((long)ppuVar42 + -0x150),pppppuVar46 + 10);
    uVar41 = *(uint *)(pppppuVar46 + 9);
    pppppuVar43 = *(uint ******)((long)ppuVar42 + -0x150);
    uVar40 = 0x400;
    if ((int)((ulong)(*(long *)((long)ppuVar42 + -0x148) - (long)pppppuVar43) >> 4) < 0x400) {
      uVar40 = (ulong)(*(long *)((long)ppuVar42 + -0x148) - (long)pppppuVar43) >> 4 & 0xffffffff;
    }
    *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da638;
    pppppuVar29 = (uint *****)func_0x0099c300(uVar41,pppppuVar43,uVar40);
    if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
      pppppuVar43 = (uint *****)0x0;
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da846;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1);
      if (cVar22 != '\0') {
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da853;
        puVar27 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)ppuVar42 + -0x1a0) = puVar27;
        *(undefined4 *)((long)ppuVar42 + -0x194) = *puVar27;
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da888;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)ppuVar42 + -0x158),&UNK_0015b0ed,0x7f,1,0);
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da890;
        puVar55 = (undefined1 *)
                  _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x158));
        uVar41 = *(uint *)pppppuVar46;
        pppppuVar58 = (uint *****)((long)ppuVar42 + -0x170);
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da8b4;
        _ZN7android4base12StringPrintfEPKcz
                  (pppppuVar58,&UNK_00189606,uVar41,&UNK_00167a77,pppppuVar29);
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da8bf;
        pppppuVar43 = pppppuVar58;
        func_0x0032e5a0(puVar55);
        if ((*(byte *)((long)ppuVar42 + -0x170) & 1) != 0) {
          pppppuVar43 = (uint *****)(*(ulong *)((long)ppuVar42 + -0x170) & 0xfffffffffffffffe);
          *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da8d6;
          _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x160));
        }
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da8df;
        _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x158));
        **(undefined4 **)((long)ppuVar42 + -0x1a0) = *(undefined4 *)((long)ppuVar42 + -0x194);
      }
    }
    if ((long)pppppuVar29 < 1) {
      if (pppppuVar29 == (uint *****)0xffffffffffffffff) {
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da697;
        piVar26 = (int *)func_0x0099bce0();
        pppppuVar29 = (uint *****)0x0;
        if (*piVar26 == 0xb) goto code_r0x003da6b4;
      }
      *(byte *)((long)pppppuVar46 + 5) = 1;
      pppppuVar29 = (uint *****)0x0;
    }
    else if (pppppuVar29 == (uint *****)((long)pppppuVar46[10] - (long)pppppuVar46[0xb])) {
      pppppuVar43 = pppppuVar46 + 10;
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da66e;
      _ZN8IOVector5clearEv((undefined1 *)((long)ppuVar42 + -400));
      lVar24 = *(long *)((long)ppuVar42 + -400);
      *(undefined8 *)((long)ppuVar42 + -400) = 0;
      if (lVar24 != 0) {
        *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da68a;
        _ZdaPvSt11align_val_t();
      }
    }
    else {
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da6b4;
      pppppuVar43 = pppppuVar29;
      _ZN8IOVector10drop_frontEm(pppppuVar46 + 10);
    }
code_r0x003da6b4:
    lVar24 = *(long *)((long)ppuVar42 + -0x150);
    if (lVar24 != 0) {
      *(long *)((long)ppuVar42 + -0x148) = lVar24;
      pppppuVar43 = (uint *****)(*(long *)((long)ppuVar42 + -0x140) - lVar24);
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da6cd;
      _ZdaPvSt11align_val_t();
    }
    ppppuVar30 = pppppuVar46[10];
    ppppuVar25 = pppppuVar46[0xb];
    if (ppppuVar30 != ppppuVar25) {
      pppppuVar31 = (uint *****)(ulong)*(byte *)((long)pppppuVar46 + 5);
    }
  }
  ppppuVar10 = pppppuVar46[7];
  if (((ppppuVar10 != (uint ****)0x0) &&
      (pppppuVar43 = (uint *****)pppppuVar46[2], pppppuVar43 != (uint *****)0x0)) &&
     ((*(byte *)(pppppuVar46 + 0x11) != 0 ||
      (iVar23 = (int)pppppuVar29, pppppuVar29 = (uint *****)0x0,
      (ulong)((long)ppppuVar30 - (long)ppppuVar25) < 0x100000 && iVar23 != 0)))) {
    uVar41 = *(uint *)pppppuVar46;
    pppppuVar43 = (uint *****)(ulong)*(uint *)pppppuVar43;
    *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da721;
    _Z10send_readyjjP10atransportj(uVar41,pppppuVar43,ppppuVar10,(ulong)pppppuVar29 & 0xffffffff);
  }
  if ((*(byte *)((long)pppppuVar46 + 4) & (byte)pppppuVar31) == 1) {
    ppppuVar30 = pppppuVar46[6];
    *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da732;
    pppppuVar57 = pppppuVar46;
    (*(code *)ppppuVar30)();
    lVar24 = 0;
  }
  else {
    pppppuVar57 = (uint *****)pppppuVar46[8];
    pppppuVar43 = (uint *****)0x2;
    if ((byte)pppppuVar31 == 0) {
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da755;
      _Z11fdevent_addP7fdeventj();
      lVar24 = 1;
    }
    else {
      *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da749;
      _Z11fdevent_delP7fdeventj();
      lVar24 = 2;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar42 + -0x130)) {
    return lVar24;
  }
  *(undefined **)((long)ppuVar42 + -0x1a8) = &UNK_003da8f8;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar42 + -0x1a8) = (undefined1 *)((long)ppuVar42 + -0x100);
  *(uint ******)((long)ppuVar42 + -0x1b0) = pppppuVar58;
  *(uint ******)((long)ppuVar42 + -0x1b8) = pppppuVar29;
  *(undefined1 **)((long)ppuVar42 + -0x1c0) = puVar55;
  *(uint ******)((long)ppuVar42 + -0x1c8) = pppppuVar31;
  *(uint ******)((long)ppuVar42 + -0x1d0) = pppppuVar46;
  *(undefined8 *)((long)ppuVar42 + -0x1d8) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (((ulong)pppppuVar43 & 1) == 0) {
    if (((ulong)pppppuVar43 & 8) != 0) {
      pppppuVar43 = (uint *****)0x0;
      *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da943;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3);
      if (cVar22 != '\0') {
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da950;
        pppppuVar58 = (uint *****)func_0x0099bce0();
        uVar41 = *(uint *)pppppuVar58;
        pppppuVar31 = (uint *****)((long)ppuVar42 + -0x21d8);
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da97f;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppuVar31,&UNK_0015b0ed,0x13b,3,0);
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da987;
        uVar28 = _ZN7android4base10LogMessage6streamEv(pppppuVar31);
        pppppuVar43 = (uint *****)&UNK_00187d3e;
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da99b;
        func_0x0032eb30(uVar28,&UNK_00187d3e,0x2e);
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da9a3;
        _ZN7android4base10LogMessageD2Ev(pppppuVar31);
        *(uint *)pppppuVar58 = uVar41;
        puVar55 = (undefined1 *)(ulong)uVar41;
      }
    }
code_r0x003daa38:
    *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daa40;
    pppppuVar46 = pppppuVar57;
    _Z15fdevent_destroyP7fdevent();
    pppppuVar29 = pppppuVar58;
    if (extraout_RDX != (uint *****)0x0) {
      pppppuVar43 = (uint *****)0x8;
      *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daa52;
      pppppuVar46 = extraout_RDX;
      _ZdaPvSt11align_val_t();
    }
  }
  else {
    pppppuVar58 = (uint *****)((long)ppuVar42 + -0x21d8);
    *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da9c1;
    func_0x0099bdb0(pppppuVar58,0,0x2000);
    do {
      pppppuVar31 = (uint *****)(ulong)*(uint *)(pppppuVar57 + 1);
      while( true ) {
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da9e0;
        pppppuVar43 = pppppuVar58;
        pppppuVar46 = pppppuVar31;
        lVar24 = func_0x0099be20(pppppuVar31,pppppuVar58,0x2000);
        if (lVar24 != -1) break;
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003da9eb;
        pppppuVar29 = (uint *****)func_0x0099bce0();
        uVar41 = *(uint *)pppppuVar29;
        if (uVar41 != 4) goto code_r0x003daa10;
      }
    } while (0 < (int)lVar24);
    if ((int)lVar24 != -1) goto code_r0x003daa38;
    *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daa0e;
    pppppuVar29 = (uint *****)func_0x0099bce0();
    uVar41 = *(uint *)pppppuVar29;
code_r0x003daa10:
    if (uVar41 != 0xb) goto code_r0x003daa38;
    *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daa1d;
    lVar24 = _ZNSt3__16chrono12steady_clock3nowEv();
    if (1000000000 < lVar24 - (long)*extraout_RDX) {
      pppppuVar43 = (uint *****)0x0;
      *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daa34;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(3);
      pppppuVar58 = pppppuVar29;
      if (cVar22 != '\0') {
        uVar41 = *(uint *)pppppuVar29;
        pppppuVar31 = (uint *****)(ulong)uVar41;
        pppppuVar58 = (uint *****)((long)ppuVar42 + -0x21e0);
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daaa5;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (pppppuVar58,&UNK_0015b0ed,0x135,3,0);
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daaad;
        uVar28 = _ZN7android4base10LogMessage6streamEv(pppppuVar58);
        pppppuVar43 = (uint *****)&UNK_00187cfc;
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daac1;
        func_0x0032eb30(uVar28,&UNK_00187cfc,0x41);
        *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daac9;
        _ZN7android4base10LogMessageD2Ev(pppppuVar58);
        *(uint *)pppppuVar29 = uVar41;
        puVar55 = (undefined1 *)pppppuVar29;
      }
      goto code_r0x003daa38;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar42 + -0x1d8)) {
    return *(long *)(in_FS_OFFSET + 0x28);
  }
  *(undefined **)((long)ppuVar42 + -0x21f0) = &UNK_003daad7;
  func_0x0099bd00();
  *(undefined1 **)((long)ppuVar42 + -0x21f0) = (undefined1 *)((long)ppuVar42 + -0x1a8);
  *(uint ******)((long)ppuVar42 + -0x21f8) = pppppuVar29;
  *(uint ******)((long)ppuVar42 + -0x2200) = pppppuVar57;
  *(undefined1 **)((long)ppuVar42 + -0x2208) = puVar55;
  *(uint ******)((long)ppuVar42 + -0x2210) = pppppuVar31;
  *(uint ******)((long)ppuVar42 + -0x2218) = extraout_RDX;
  *(undefined8 *)((long)ppuVar42 + -0x2220) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])((long)ppuVar42 + -0x22d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)ppuVar42 + -0x22e0) = (undefined1  [16])0x0;
  *(uint ******)((long)ppuVar42 + -0x2338) = pppppuVar46;
  puVar54 = (undefined1 *)extraout_RDX;
  if ((((byte)adb_trace_mask & 2) != 0) &&
     (puVar54 = (undefined1 *)extraout_RDX, (int)adb_trace_severity._4_4_ < 2)) {
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dadf2;
    cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    pppppuVar58 = *(uint ******)((long)ppuVar42 + -0x2338);
    puVar54 = (undefined1 *)pppppuVar43;
    pppppuVar46 = pppppuVar58;
    if (cVar22 != '\0') {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dae0f;
      pppppuVar57 = (uint *****)func_0x0099bce0();
      *(uint *)((long)ppuVar42 + -0x2348) = *(uint *)pppppuVar57;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dae43;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x327,1,0);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dae4b;
      uVar28 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x2300));
      uVar41 = *(uint *)pppppuVar58;
      ppppuVar30 = pppppuVar43[2];
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dae6f;
      _ZN7android4base12StringPrintfEPKcz
                ((undefined1 *)((long)ppuVar42 + -0x22c0),&UNK_001755e1,uVar41,ppppuVar30);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dae7a;
      func_0x0032e5a0(uVar28,(undefined1 *)((long)ppuVar42 + -0x22c0));
      if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dae9a;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar42 + -0x22b0),
                   *(ulong *)((long)ppuVar42 + -0x22c0) & 0xfffffffffffffffe);
      }
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daea6;
      _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
      *(uint *)pppppuVar57 = *(uint *)((long)ppuVar42 + -0x2348);
      pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
      puVar55 = (undefined1 *)pppppuVar58;
    }
  }
  if ((*(byte *)(pppppuVar46 + 0x12) & 1) == 0) {
    ppppuVar30 = (uint ****)(ulong)(*(byte *)(pppppuVar46 + 0x12) >> 1);
  }
  else {
    ppppuVar30 = pppppuVar46[0x13];
  }
  pppppuVar58 = pppppuVar46 + 0x12;
  ppppuVar25 = *pppppuVar43;
  pppppuVar43 = (uint *****)pppppuVar43[2];
  *(uint ******)((long)ppuVar42 + -0x2348) = pppppuVar58;
  if (ppppuVar30 == (uint ****)0x0) {
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dac52;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16__assign_trivialB8nn220000INS_11__wrap_iterIPKcEESA_EEvT_T0_m
              (pppppuVar58,ppppuVar25,(byte *)((long)ppppuVar25 + (long)pppppuVar43),pppppuVar43);
    pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
  }
  else if (pppppuVar43 != (uint *****)0x0) {
    *(byte **)((long)ppuVar42 + -0x2340) = (byte *)((long)pppppuVar46 + 0x91);
    puVar54 = (undefined1 *)0x0;
    do {
      bVar4 = *(byte *)((long)ppppuVar25 + (long)puVar54);
      pppppuVar57 = (uint *****)(ulong)bVar4;
      bVar39 = *(byte *)pppppuVar58;
      if ((bVar39 & 1) == 0) {
        puVar55 = (undefined1 *)0x16;
        if (bVar39 == 0x2c) {
code_r0x003dab90:
          pppppuVar31 = (uint *****)puVar55;
          *(undefined8 *)((long)ppuVar42 + -0x2350) = 0;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dabb1;
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                    (pppppuVar58,pppppuVar31,1,pppppuVar31,pppppuVar31);
          pppppuVar58 = *(uint ******)((long)ppuVar42 + -0x2348);
          pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
          puVar55 = (undefined1 *)pppppuVar31;
          goto code_r0x003dabc2;
        }
        pppppuVar31 = (uint *****)(ulong)(bVar39 >> 1);
        *(byte *)pppppuVar58 = bVar39 + 2;
        ppppuVar30 = *(uint *****)((long)ppuVar42 + -0x2340);
      }
      else {
        pppppuVar31 = (uint *****)pppppuVar46[0x13];
        puVar55 = (undefined1 *)(((ulong)pppppuVar46[0x12] & 0xfffffffffffffffe) - 1);
        if (pppppuVar31 == (uint *****)puVar55) goto code_r0x003dab90;
code_r0x003dabc2:
        ppppuVar30 = pppppuVar46[0x14];
        pppppuVar46[0x13] = (uint ****)((long)pppppuVar31 + 1);
      }
      *(byte *)((long)ppppuVar30 + (long)pppppuVar31) = bVar4;
      *(byte *)((long)ppppuVar30 + 1 + (long)pppppuVar31) = 0;
      puVar54 = (undefined1 *)((long)puVar54 + 1);
    } while (pppppuVar43 != (uint *****)puVar54);
  }
  bVar4 = *(byte *)(pppppuVar46 + 0x12);
  if ((bVar4 & 1) == 0) {
    ppppuVar30 = (uint ****)(ulong)(bVar4 >> 1);
  }
  else {
    ppppuVar30 = pppppuVar46[0x13];
  }
  lVar24 = 0;
  if (ppppuVar30 < (uint ****)0x4) goto code_r0x003dad76;
  pppppuVar43 = (uint *****)((long)pppppuVar46 + 0x91);
  puVar54 = (undefined1 *)pppppuVar43;
  if ((bVar4 & 1) != 0) {
    puVar54 = (undefined1 *)pppppuVar46[0x14];
  }
  bVar4 = *puVar54;
  bVar39 = bVar4 - 0x30;
  ppppuVar25 = (uint ****)0xffffffff;
  if (bVar39 < 0x37) {
    if ((0x7e0000007e03ffU >> ((ulong)bVar39 & 0x3f) & 1) != 0) {
      pbVar1 = (byte *)((long)puVar54 + 1);
      bVar49 = *pbVar1 - 0x30;
      if ((bVar49 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)bVar49 & 0x3f) & 1) != 0)) {
        pbVar2 = (byte *)((long)puVar54 + 2);
        bVar52 = *pbVar2 - 0x30;
        if ((bVar52 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)bVar52 & 0x3f) & 1) != 0)) {
          bVar5 = *(byte *)((long)puVar54 + 3);
          pppppuVar57 = (uint *****)(ulong)bVar5;
          uVar41 = bVar5 - 0x30;
          puVar54 = (undefined1 *)(ulong)uVar41;
          if ((byte)uVar41 < 0x37) {
            puVar54 = (undefined1 *)(ulong)(uVar41 & 0xff);
            pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
            if ((0x7e0000007e03ffU >> ((ulong)puVar54 & 0x3f) & 1) == 0) goto code_r0x003dad51;
            pppppuVar57 = (uint *****)
                          (ulong)((uint)bVar5 + *(int *)(&UNK_001fe318 + (long)puVar54 * 4));
            uVar41 = (((uint)*pbVar1 + *(int *)(&UNK_001fe318 + (ulong)bVar49 * 4)) * 0x10 |
                      ((uint)bVar4 + *(int *)(&UNK_001fe318 + (ulong)bVar39 * 4)) * 0x100 |
                     (uint)*pbVar2 + *(int *)(&UNK_001fe318 + (ulong)bVar52 * 4)) << 4 |
                     (uint)bVar5 + *(int *)(&UNK_001fe318 + (long)puVar54 * 4);
            ppppuVar25 = (uint ****)(ulong)uVar41;
            if (0xffefffff < uVar41 - 0x100001) {
              pppppuVar57 = (uint *****)&adb_trace_mask;
              puVar27 = *(undefined4 **)((long)ppuVar42 + -0x2338);
              puVar54 = adb_trace_severity;
              if (((byte)adb_trace_mask & 2) == 0) goto code_r0x003dadc0;
              if ((int)adb_trace_severity._4_4_ < 2) goto code_r0x003dbc93;
              goto code_r0x003dadc0;
            }
          }
        }
      }
    }
    pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
  }
code_r0x003dad51:
  if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dafb0;
    cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
    if (cVar22 != '\0') {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dafc7;
      pppppuVar57 = (uint *****)func_0x0099bce0();
      uVar41 = *(uint *)pppppuVar57;
      pppppuVar58 = (uint *****)(ulong)uVar41;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daff5;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x337,1,0);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daffd;
      pppppuVar43 = (uint *****)
                    _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x2300));
      uVar53 = *(uint *)pppppuVar46;
      puVar55 = (undefined1 *)((long)ppuVar42 + -0x22c0);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db01f;
      _ZN7android4base12StringPrintfEPKcz(puVar55,&UNK_001613d6,uVar53,ppppuVar25);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db02a;
      func_0x0032e5a0(pppppuVar43,puVar55);
      if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db04a;
        _ZdaPvSt11align_val_t
                  (*(undefined8 *)((long)ppuVar42 + -0x22b0),
                   *(ulong *)((long)ppuVar42 + -0x22c0) & 0xfffffffffffffffe);
      }
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db056;
      _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
      *(uint *)pppppuVar57 = uVar41;
      goto code_r0x003db9c7;
    }
  }
code_r0x003dad6e:
  do {
    ppppuVar30 = pppppuVar46[6];
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dad71;
    (*(code *)ppppuVar30)();
    lVar24 = 0xffffffff;
code_r0x003dad76:
    while( true ) {
      uVar41 = (uint)ppppuVar25;
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)((long)ppuVar42 + -0x2220)) {
        return lVar24;
      }
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc93;
      func_0x0099bd00();
code_r0x003dbc93:
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc9f;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      puVar27 = *(undefined4 **)((long)ppuVar42 + -0x2338);
      if (cVar22 != '\0') {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbcba;
        puVar36 = (undefined4 *)func_0x0099bce0();
        *(undefined4 **)((long)ppuVar42 + -0x2340) = puVar36;
        uVar6 = *puVar36;
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbcec;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x33b,1,0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbcf4;
        puVar55 = (undefined1 *)
                  _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x2300));
        uVar7 = *puVar27;
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbd15;
        _ZN7android4base12StringPrintfEPKcz
                  ((undefined1 *)((long)ppuVar42 + -0x22c0),&UNK_001789f5,uVar7,uVar41);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbd20;
        func_0x0032e5a0(puVar55,(undefined1 *)((long)ppuVar42 + -0x22c0));
        if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbd40;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar42 + -0x22b0),
                     *(ulong *)((long)ppuVar42 + -0x22c0) & 0xfffffffffffffffe);
        }
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbd4c;
        _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
        **(undefined4 **)((long)ppuVar42 + -0x2340) = uVar6;
        puVar27 = *(undefined4 **)((long)ppuVar42 + -0x2338);
        puVar54 = adb_trace_severity;
        pppppuVar57 = (uint *****)&adb_trace_mask;
      }
code_r0x003dadc0:
      lVar24 = 0;
      ppppuVar25 = (uint ****)((ulong)uVar41 + 4);
      bVar4 = *(byte *)(puVar27 + 0x24);
      if ((bVar4 & 1) == 0) {
        ppppuVar30 = (uint ****)(ulong)(bVar4 >> 1);
      }
      else {
        ppppuVar30 = *(uint *****)(puVar27 + 0x26);
      }
      if (ppppuVar25 <= ppppuVar30) break;
      if ((((ulong)*pppppuVar57 & 2) != 0) && ((int)*(uint *)((long)puVar54 + 4) < 2)) {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daeeb;
        cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        puVar37 = *(uint **)((long)ppuVar42 + -0x2338);
        lVar24 = 0;
        if (cVar22 != '\0') {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daf06;
          pppppuVar57 = (uint *****)func_0x0099bce0();
          puVar55 = (undefined1 *)(ulong)*(uint *)pppppuVar57;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daf35;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x33e,1,0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003daf3d;
          pppppuVar43 = (uint *****)
                        _ZN7android4base10LogMessage6streamEv
                                  ((undefined1 *)((long)ppuVar42 + -0x2300));
          uVar40 = (ulong)*puVar37;
          bVar4 = (byte)puVar37[0x24];
          uVar41 = (uint)bVar4;
          if ((bVar4 & 1) == 0) {
code_r0x003dc136:
            uVar35 = (ulong)(uVar41 >> 1);
          }
          else {
            uVar35 = *(ulong *)(*(long *)((long)ppuVar42 + -0x2338) + 0x98);
          }
          ppppuVar25 = (uint ****)((long)ppppuVar25 - uVar35);
          puVar54 = (undefined1 *)((long)ppuVar42 + -0x22c0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc156;
          _ZN7android4base12StringPrintfEPKcz(puVar54,&UNK_0017a1bd,uVar40,ppppuVar25);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc161;
          func_0x0032e5a0(pppppuVar43);
          if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
            *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc181;
            _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x22b0));
          }
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc18d;
          _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
          *(uint *)pppppuVar57 = (uint)puVar55;
          lVar24 = 0;
        }
      }
    }
    pppppuVar58 = pppppuVar43;
    if ((bVar4 & 1) != 0) {
      pppppuVar58 = *(uint ******)(puVar27 + 0x28);
    }
    *(byte *)((long)pppppuVar58 + (long)ppppuVar25) = 0;
    if ((((ulong)*pppppuVar57 & 2) != 0) && ((int)*(uint *)((long)puVar54 + 4) < 2)) {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbd7d;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      puVar27 = *(undefined4 **)((long)ppuVar42 + -0x2338);
      if (cVar22 != '\0') {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbd94;
        puVar36 = (undefined4 *)func_0x0099bce0();
        *(undefined4 *)((long)ppuVar42 + -0x2340) = *puVar36;
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbdc8;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x345,1,0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbdd0;
        puVar55 = (undefined1 *)
                  _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x2300));
        uVar6 = *puVar27;
        pppppuVar58 = pppppuVar43;
        if ((*(byte *)(puVar27 + 0x24) & 1) != 0) {
          pppppuVar58 = *(uint ******)(*(long *)((long)ppuVar42 + -0x2338) + 0xa0);
        }
        ppppuVar25 = (uint ****)((long)ppuVar42 + -0x22c0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbe0d;
        _ZN7android4base12StringPrintfEPKcz
                  (ppppuVar25,&UNK_00167ae1,uVar6,(uint *)((long)pppppuVar58 + 4));
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbe18;
        func_0x0032e5a0(puVar55,ppppuVar25);
        if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbe38;
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)((long)ppuVar42 + -0x22b0),
                     *(ulong *)((long)ppuVar42 + -0x22c0) & 0xfffffffffffffffe);
        }
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbe44;
        _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
        *puVar36 = *(undefined4 *)((long)ppuVar42 + -0x2340);
        puVar27 = *(undefined4 **)((long)ppuVar42 + -0x2338);
        puVar54 = adb_trace_severity;
        pppppuVar57 = (uint *****)&adb_trace_mask;
      }
    }
    bVar4 = *(byte *)(puVar27 + 0x24);
    if ((bVar4 & 1) == 0) {
      uVar40 = (ulong)(bVar4 >> 1);
    }
    else {
      uVar40 = *(ulong *)(puVar27 + 0x26);
    }
    if (uVar40 < 4) {
code_r0x003dc12a:
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc136;
      uVar41 = func_0x0032fc70(&UNK_001705cc);
      uVar40 = extraout_RDX_00;
      goto code_r0x003dc136;
    }
    pppppuVar58 = pppppuVar43;
    if ((bVar4 & 1) != 0) {
      pppppuVar58 = *(uint ******)(puVar27 + 0x28);
    }
    *(uint **)((long)ppuVar42 + -0x22d0) = (uint *)((long)pppppuVar58 + 4);
    *(ulong *)((long)ppuVar42 + -0x22c8) = uVar40 - 4;
    if ((((ulong)*pppppuVar57 & 0x200) != 0) && ((int)*(uint *)((long)puVar54 + 0x24) < 2)) {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbe72;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar22 != '\0') {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbe7f;
        ppppuVar25 = (uint ****)func_0x0099bce0();
        uVar41 = *(uint *)ppppuVar25;
        puVar54 = (undefined1 *)(ulong)uVar41;
        puVar55 = (undefined1 *)((long)ppuVar42 + -0x22c0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbead;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar55,&UNK_0015b0ed,0x34a,1,0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbeb5;
        uVar28 = _ZN7android4base10LogMessage6streamEv(puVar55);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbec9;
        uVar28 = func_0x0032eb30(uVar28,&UNK_001803b9,0x12);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbedf;
        uVar28 = func_0x0032eb30(uVar28,*(undefined8 *)((long)ppuVar42 + -0x22d0),
                                 *(undefined8 *)((long)ppuVar42 + -0x22c8));
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbef3;
        func_0x0032eb30(uVar28,&UNK_00162c6d,1);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbefb;
        _ZN7android4base10LogMessageD2Ev(puVar55);
        *(uint *)ppppuVar25 = uVar41;
      }
    }
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db0c1;
    cVar22 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                       (*(undefined8 *)((long)ppuVar42 + -0x22d0),
                        *(undefined8 *)((long)ppuVar42 + -0x22c8),&UNK_001643d9,0xc);
    if (cVar22 == '\0') {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db136;
      cVar22 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                         (*(long *)((long)ppuVar42 + -0x22d0),
                          *(undefined8 *)((long)ppuVar42 + -0x22c8),&UNK_00173f7c,0x12);
      lVar24 = *(long *)((long)ppuVar42 + -0x22d0);
      if (cVar22 == '\0') {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db261;
        cVar22 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (lVar24,*(undefined8 *)((long)ppuVar42 + -0x22c8),&UNK_0018ad4b,9);
        if (cVar22 == '\0') {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db38b;
          cVar22 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                             (*(long *)((long)ppuVar42 + -0x22d0),
                              *(undefined8 *)((long)ppuVar42 + -0x22c8),&UNK_0017bb27,0xb);
          if (cVar22 == '\0') {
            *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db3d5;
            cVar22 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                               (*(long *)((long)ppuVar42 + -0x22d0),
                                *(undefined8 *)((long)ppuVar42 + -0x22c8),&UNK_0015752c,5);
            if (cVar22 == '\0') {
              *(undefined1 (*) [16])((long)ppuVar42 + -0x22d0) = (undefined1  [16])0x0;
              goto code_r0x003db107;
            }
            *(long *)((long)ppuVar42 + -0x22d0) = *(long *)((long)ppuVar42 + -0x22d0) + 5;
            puVar55 = (undefined1 *)(*(long *)((long)ppuVar42 + -0x22c8) + -5);
            *(undefined1 **)((long)ppuVar42 + -0x22c8) = puVar55;
            uVar28 = 2;
          }
          else {
            *(long *)((long)ppuVar42 + -0x22d0) = *(long *)((long)ppuVar42 + -0x22d0) + 0xb;
            puVar55 = (undefined1 *)(*(long *)((long)ppuVar42 + -0x22c8) + -0xb);
            *(undefined1 **)((long)ppuVar42 + -0x22c8) = puVar55;
            uVar28 = 1;
          }
          goto code_r0x003db113;
        }
        *(long *)((long)ppuVar42 + -0x22d0) = *(long *)((long)ppuVar42 + -0x22d0) + 9;
        puVar55 = (undefined1 *)(*(long *)((long)ppuVar42 + -0x22c8) + -9);
        *(undefined1 **)((long)ppuVar42 + -0x22c8) = puVar55;
        pppppuVar57 = (uint *****)0x0;
        uVar28 = 0;
        goto code_r0x003db45a;
      }
      pcVar3 = (char *)(lVar24 + 0x12);
      *(char **)((long)ppuVar42 + -0x22d0) = pcVar3;
      pcVar50 = (char *)(lVar24 + *(long *)((long)ppuVar42 + -0x22c8));
      uVar40 = *(long *)((long)ppuVar42 + -0x22c8) - 0x12;
      *(ulong *)((long)ppuVar42 + -0x22c8) = uVar40;
      pcVar47 = pcVar3;
      pcVar48 = pcVar50;
      if (uVar40 == 0) {
code_r0x003db297:
        if ((pcVar47 == pcVar50) ||
           (uVar40 = (ulong)(byte)(*pcVar47 - 0x30U), pcVar48 = pcVar47,
           9 < (byte)(*pcVar47 - 0x30U))) goto code_r0x003db404;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2230) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2240) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2250) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2260) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2270) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2280) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x2290) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x22a0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x22b0) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)ppuVar42 + -0x22c0) = (undefined1  [16])0x0;
        lVar24 = 0x14;
        while (cVar22 = *pcVar47, 0xf5 < (byte)(cVar22 - 0x3aU)) {
          pcVar47 = pcVar47 + 1;
          *(ulong *)((long)ppuVar42 + lVar24 * 8 + -0x22c8) = (ulong)(byte)(cVar22 - 0x30);
          lVar24 = lVar24 + -1;
          if ((lVar24 == 0) || (pcVar47 == pcVar50)) break;
        }
        puVar54 = (undefined1 *)((lVar24 << 0x20) >> 0x1d);
        uVar40 = *(ulong *)((undefined1 *)((long)ppuVar42 + -0x22c0) + (long)puVar54);
        if ((int)lVar24 < 0x12) {
          uVar35 = 0;
          if (puVar54 < (uint *****)0x89) {
            uVar35 = 0x88 - (long)puVar54;
          }
          if (uVar35 < 0x18) {
            plVar51 = (long *)&UNK_0018fd78;
            pppppuVar58 = (uint *****)puVar54;
          }
          else {
            uVar41 = ((uint)(uVar35 >> 3) & 0x1fffffff) + 1;
            uVar53 = uVar41 & 0x3c;
            plVar51 = (long *)(&UNK_0018fd78 + uVar53 * 8);
            pppppuVar58 = (uint *****)((ulong)(uVar53 * 8) + (long)puVar54);
            lVar61 = 0;
            puVar45 = (undefined1 *)((long)ppuVar42 + -0x22c0) + (long)puVar54;
            lVar62 = 0;
            lVar63 = 0;
            puVar54 = (undefined1 *)0x0;
            do {
              uVar35 = *(ulong *)(puVar45 + (long)puVar54 * 8 + 8);
              uVar15 = *(ulong *)((long)(puVar45 + (long)puVar54 * 8 + 8) + 8);
              uVar16 = *(ulong *)(puVar45 + (long)puVar54 * 8 + 0x18);
              uVar17 = *(ulong *)((long)(puVar45 + (long)puVar54 * 8 + 0x18) + 8);
              uVar18 = *(ulong *)(&UNK_0018fd78 + (long)puVar54 * 8);
              uVar19 = *(ulong *)(&UNK_0018fd80 + (long)puVar54 * 8);
              uVar20 = *(ulong *)(&UNK_0018fd88 + (long)puVar54 * 8);
              uVar21 = *(ulong *)(&UNK_0018fd90 + (long)puVar54 * 8);
              uVar40 = uVar40 + (uVar18 & 0xffffffff) * (uVar35 & 0xffffffff) +
                       ((uVar35 >> 0x20) * (uVar18 & 0xffffffff) +
                        (uVar18 >> 0x20) * (uVar35 & 0xffffffff) << 0x20);
              lVar61 = lVar61 + (uVar19 & 0xffffffff) * (uVar15 & 0xffffffff) +
                       ((uVar15 >> 0x20) * (uVar19 & 0xffffffff) +
                        (uVar19 >> 0x20) * (uVar15 & 0xffffffff) << 0x20);
              lVar62 = lVar62 + (uVar20 & 0xffffffff) * (uVar16 & 0xffffffff) +
                       ((uVar16 >> 0x20) * (uVar20 & 0xffffffff) +
                        (uVar20 >> 0x20) * (uVar16 & 0xffffffff) << 0x20);
              lVar63 = lVar63 + (uVar21 & 0xffffffff) * (uVar17 & 0xffffffff) +
                       ((uVar17 >> 0x20) * (uVar21 & 0xffffffff) +
                        (uVar21 >> 0x20) * (uVar17 & 0xffffffff) << 0x20);
              puVar54 = (undefined1 *)((long)puVar54 + 4);
            } while ((uint *****)(ulong)uVar53 != (uint *****)puVar54);
            uVar40 = lVar63 + lVar61 + lVar62 + uVar40;
            if (uVar41 == uVar53) goto code_r0x003dbb78;
          }
          pppppuVar58 = pppppuVar58 + -1;
          do {
            uVar40 = uVar40 + *plVar51 *
                              *(long *)((undefined1 *)((long)ppuVar42 + -0x22b0) + (long)pppppuVar58
                                       );
            plVar51 = plVar51 + 1;
            pppppuVar58 = pppppuVar58 + 1;
          } while (pppppuVar58 < (uint *****)0x88);
        }
code_r0x003dbb78:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulong *)((long)ppuVar42 + -0x2228);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulong *)(&UNK_0018fd70 + (0x1300000000 - (lVar24 << 0x20) >> 0x1d));
        auVar14 = auVar12 * auVar13;
        uVar35 = auVar14._0_8_;
        pcVar48 = pcVar47 + -(ulong)(auVar14._8_8_ != 0);
        if (pcVar48 != pcVar50) {
          if ((9 < (byte)(*pcVar48 - 0x30U)) && (!CARRY8(uVar40,uVar35))) goto code_r0x003dbbc2;
          goto code_r0x003dbbd2;
        }
        if (CARRY8(uVar40,uVar35)) goto code_r0x003dbbd2;
code_r0x003dbbc2:
        pppppuVar57 = (uint *****)(uVar35 + uVar40);
code_r0x003db410:
        *(char **)((long)ppuVar42 + -0x22d0) = pcVar48;
        *(long *)((long)ppuVar42 + -0x22c8) = (long)pcVar50 - (long)pcVar48;
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db435;
        cVar22 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                           (pcVar48,(long)pcVar50 - (long)pcVar48,&UNK_00173d53,1);
        if (cVar22 != '\0') {
          *(long *)((long)ppuVar42 + -0x22d0) = *(long *)((long)ppuVar42 + -0x22d0) + 1;
          puVar55 = (undefined1 *)(*(long *)((long)ppuVar42 + -0x22c8) + -1);
          *(undefined1 **)((long)ppuVar42 + -0x22c8) = puVar55;
          uVar28 = 2;
          goto code_r0x003db45a;
        }
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db7cc;
        cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        lVar24 = 0xffffffff;
        ppppuVar25 = *(uint *****)((long)ppuVar42 + -0x2338);
        if (cVar22 != '\0') {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db7e7;
          pppppuVar57 = (uint *****)func_0x0099bce0();
          uVar53 = *(uint *)pppppuVar57;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db815;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    ((undefined1 *)((long)ppuVar42 + -0x22c0),&UNK_0015b0ed,0x359,4,0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db81d;
          uVar28 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x22c0));
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db831;
          uVar28 = func_0x0032eb30(uVar28,&UNK_0015fc26,3);
          uVar41 = *(uint *)ppppuVar25;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db83d;
          uVar32 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar28,uVar41);
          puVar44 = &UNK_001803cc;
          uVar28 = 0x24;
          goto code_r0x003dbc71;
        }
      }
      else {
        do {
          if (*pcVar47 != '0') goto code_r0x003db297;
          uVar40 = uVar40 - 1;
          pcVar47 = pcVar47 + 1;
        } while (uVar40 != 0);
code_r0x003db404:
        auVar14._8_8_ = uVar40;
        auVar14._0_8_ = pppppuVar57;
        if (pcVar48 != pcVar3) {
          pppppuVar57 = (uint *****)0x0;
          goto code_r0x003db410;
        }
code_r0x003dbbd2:
        pppppuVar57 = auVar14._0_8_;
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbbde;
        cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
        lVar24 = 0xffffffff;
        ppppuVar25 = *(uint *****)((long)ppuVar42 + -0x2338);
        if (cVar22 != '\0') {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbbf9;
          pppppuVar57 = (uint *****)func_0x0099bce0();
          uVar53 = *(uint *)pppppuVar57;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc27;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    ((undefined1 *)((long)ppuVar42 + -0x22c0),&UNK_0015b0ed,0x355,4,0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc2f;
          uVar28 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x22c0));
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc43;
          uVar28 = func_0x0032eb30(uVar28,&UNK_0015fc26,3);
          uVar41 = *(uint *)ppppuVar25;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc4f;
          uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar28,uVar41);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc63;
          uVar32 = func_0x0032eb30(uVar28,&UNK_00164408,0x26);
          puVar44 = *(undefined **)((long)ppuVar42 + -0x22d0);
          uVar28 = *(undefined8 *)((long)ppuVar42 + -0x22c8);
code_r0x003dbc71:
          pppppuVar43 = (uint *****)((long)ppuVar42 + -0x22c0);
          puVar54 = (undefined1 *)(ulong)uVar53;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc79;
          func_0x0032eb30(uVar32,puVar44,uVar28);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbc81;
          _ZN7android4base10LogMessageD2Ev(pppppuVar43);
          lVar24 = 0xffffffff;
          *(uint *)pppppuVar57 = uVar53;
        }
      }
      goto code_r0x003dad76;
    }
    lVar24 = *(long *)((long)ppuVar42 + -0x22d0) + 0xc;
    *(long *)((long)ppuVar42 + -0x22d0) = lVar24;
    *(long *)((long)ppuVar42 + -0x22c8) = *(long *)((long)ppuVar42 + -0x22c8) + -0xc;
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db0ff;
    cVar22 = _ZN8internal18parse_host_serviceEPNSt3__117basic_string_viewIcNS0_11char_traitsIcEEEES5_S4_
                       ((undefined1 *)((long)ppuVar42 + -0x22e0),
                        (undefined1 *)((long)ppuVar42 + -0x22d0),lVar24);
    if (cVar22 == '\0') {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db196;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
      pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
      if (cVar22 == '\0') goto code_r0x003dad6e;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db1aa;
      pppppuVar57 = (uint *****)func_0x0099bce0();
      uVar41 = *(uint *)pppppuVar57;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db1d8;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                ((undefined1 *)((long)ppuVar42 + -0x22c0),&UNK_0015b0ed,0x350,4,0);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db1e0;
      uVar28 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x22c0));
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db1f4;
      uVar28 = func_0x0032eb30(uVar28,&UNK_0015fc26,3);
      uVar6 = **(undefined4 **)((long)ppuVar42 + -0x2338);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db205;
      uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar28,uVar6);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db219;
      uVar32 = func_0x0032eb30(uVar28,&UNK_001643e6,0x21);
      puVar44 = *(undefined **)((long)ppuVar42 + -0x22d0);
      uVar28 = *(undefined8 *)((long)ppuVar42 + -0x22c8);
code_r0x003db227:
      pppppuVar43 = (uint *****)((long)ppuVar42 + -0x22c0);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db22f;
      func_0x0032eb30(uVar32,puVar44,uVar28);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db237;
      _ZN7android4base10LogMessageD2Ev(pppppuVar43);
      pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
      *(uint *)pppppuVar57 = uVar41;
      puVar54 = (undefined1 *)(ulong)uVar41;
      goto code_r0x003dad6e;
    }
code_r0x003db107:
    uVar28 = 2;
    puVar55 = *(undefined1 **)((long)ppuVar42 + -0x22c8);
code_r0x003db113:
    pppppuVar57 = (uint *****)0x0;
code_r0x003db45a:
    if ((uint *****)puVar55 == (uint *****)0x0) {
      pppppuVar58 = *(uint ******)((long)ppuVar42 + -0x2338);
      if (pppppuVar58[7] == (uint ****)0x0) {
        uVar6 = *(undefined4 *)(pppppuVar58[2] + 9);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db7b8;
        _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                  (uVar6,&UNK_0017d625,0x1d);
        puVar54 = (undefined1 *)pppppuVar58;
        pppppuVar46 = pppppuVar58;
        goto code_r0x003dad6e;
      }
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db4bb;
      iVar23 = _ZNK10atransport18GetConnectionStateEv();
      if (5 < iVar23 - 6U) {
        uVar6 = *(undefined4 *)(pppppuVar58[2] + 9);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db862;
        _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
                  (uVar6,&UNK_00173f8f,0x22);
        goto code_r0x003db9c7;
      }
      pppppuVar58[2][4] = (uint ***)&UNK_003dc450;
      lVar24 = *(long *)((long)ppuVar42 + -0x2338);
      *(undefined8 *)(*(long *)(lVar24 + 0x10) + 0x28) = 0;
      *(undefined **)(*(long *)(lVar24 + 0x10) + 0x30) = &UNK_003dc490;
      *(undefined8 *)(*(long *)(lVar24 + 0x10) + 0x10) = 0;
      *(undefined8 *)(*(long *)(lVar24 + 0x10) + 0x38) = *(undefined8 *)(lVar24 + 0x38);
      bVar4 = *(byte *)(lVar24 + 0x90);
      if ((bVar4 & 1) == 0) {
        uVar40 = (ulong)(bVar4 >> 1);
      }
      else {
        uVar40 = *(ulong *)(*(long *)((long)ppuVar42 + -0x2338) + 0x98);
      }
      if (uVar40 < 4) goto code_r0x003dc12a;
      if ((bVar4 & 1) != 0) {
        pppppuVar43 = *(uint ******)(*(long *)((long)ppuVar42 + -0x2338) + 0xa0);
      }
      puVar54 = *(undefined1 **)((long)ppuVar42 + -0x2338);
      ppppuVar30 = *(uint *****)((long)puVar54 + 0x10);
      pppppuVar43 = (uint *****)((long)pppppuVar43 + 4);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dba0e;
      _Z17connect_to_remoteP7asocketNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                (ppppuVar30,pppppuVar43,uVar40 - 4);
      *(uint *****)((long)puVar54 + 0x10) = (uint ****)0x0;
      ppppuVar30 = *(uint *****)((long)puVar54 + 0x30);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dba1c;
      (*(code *)ppppuVar30)(puVar54);
      lVar24 = 1;
      goto code_r0x003dad76;
    }
    uVar32 = *(undefined8 *)((long)ppuVar42 + -0x22d0);
    if (*(long *)((long)ppuVar42 + -0x22d8) == 0) {
      lVar24 = *(long *)((long)ppuVar42 + -0x2338);
      *(long *)((long)ppuVar42 + -0x2350) = lVar24;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db559;
      uVar41 = _Z19handle_host_requestNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE13TransportTypePKcmiP7asocket
                         (uVar32,puVar55,uVar28,0);
    }
    else {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db489;
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
                ((undefined1 *)((long)ppuVar42 + -0x22c0),(undefined1 *)((long)ppuVar42 + -0x22e0));
      if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) == 0) {
        puVar54 = (undefined1 *)((long)ppuVar42 + -0x22bf);
      }
      else {
        puVar54 = *(undefined1 **)((long)ppuVar42 + -0x22b0);
      }
      *(undefined8 *)((long)ppuVar42 + -0x2350) = *(undefined8 *)((long)ppuVar42 + -0x2338);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db588;
      uVar41 = _Z19handle_host_requestNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE13TransportTypePKcmiP7asocket
                         (uVar32,puVar55,uVar28,puVar54);
      if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db5ab;
        _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x22b0));
      }
      lVar24 = *(long *)((long)ppuVar42 + -0x2338);
    }
    ppppuVar25 = (uint ****)(ulong)uVar41;
    puVar54 = (undefined1 *)(lVar24 + 0x10);
    if (uVar41 == 1) {
      if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbf10;
        cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar22 != '\0') {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbf1d;
          pppppuVar57 = (uint *****)func_0x0099bce0();
          uVar41 = *(uint *)pppppuVar57;
          puVar54 = (undefined1 *)(ulong)uVar41;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbf4b;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x375,1,0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbf53;
          puVar55 = (undefined1 *)
                    _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x2300));
          uVar6 = **(undefined4 **)((long)ppuVar42 + -0x2338);
          ppppuVar25 = (uint ****)((long)ppuVar42 + -0x22c0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbf77;
          _ZN7android4base12StringPrintfEPKcz(ppppuVar25,&UNK_00184998,uVar6);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbf82;
          func_0x0032e5a0(puVar55);
          if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
            *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbfa2;
            _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x22b0));
          }
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbfae;
          _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
          *(uint *)pppppuVar57 = uVar41;
        }
      }
      if ((**(byte **)((long)ppuVar42 + -0x2348) & 1) == 0) {
        *(byte *)pppppuVar43 = 0;
        **(undefined1 **)((long)ppuVar42 + -0x2348) = 0;
        lVar24 = 0;
      }
      else {
        lVar24 = *(long *)((long)ppuVar42 + -0x2338);
        **(undefined1 **)(lVar24 + 0xa0) = 0;
        *(undefined8 *)(lVar24 + 0x98) = 0;
        lVar24 = 0;
      }
      goto code_r0x003dad76;
    }
    if (uVar41 == 0) {
      pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
      if (((adb_trace_mask._1_1_ & 2) == 0) || (1 < (int)adb_trace_severity._36_4_))
      goto code_r0x003dad6e;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db5fe;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
      if (cVar22 == '\0') goto code_r0x003dad6e;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db612;
      pppppuVar57 = (uint *****)func_0x0099bce0();
      uVar41 = *(uint *)pppppuVar57;
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db640;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                ((undefined1 *)((long)ppuVar42 + -0x22c0),&UNK_0015b0ed,0x371,1,0);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db648;
      uVar28 = _ZN7android4base10LogMessage6streamEv((undefined1 *)((long)ppuVar42 + -0x22c0));
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db65c;
      uVar28 = func_0x0032eb30(uVar28,&UNK_0015fc26,3);
      uVar6 = **(undefined4 **)((long)ppuVar42 + -0x2338);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db66d;
      uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar28,uVar6);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db681;
      uVar28 = func_0x0032eb30(uVar28,&UNK_001578bc,0x19);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db697;
      uVar32 = func_0x0032eb30(uVar28,*(undefined8 *)((long)ppuVar42 + -0x22d0),
                               *(undefined8 *)((long)ppuVar42 + -0x22c8));
      puVar44 = &UNK_00162c6d;
      uVar28 = 1;
      goto code_r0x003db227;
    }
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db711;
    pppppuVar57 = (uint *****)
                  _Z22host_service_to_socketNSt3__117basic_string_viewIcNS_11char_traitsIcEEEES3_m
                            (*(undefined8 *)((long)ppuVar42 + -0x22d0),
                             *(undefined8 *)((long)ppuVar42 + -0x22c8),
                             *(undefined8 *)((long)ppuVar42 + -0x22e0),
                             *(undefined8 *)((long)ppuVar42 + -0x22d8));
    puVar55 = puVar54;
    if (pppppuVar57 != (uint *****)0x0) {
      uVar6 = *(undefined4 *)(*(uint *****)puVar54 + 9);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db729;
      _Z8SendOkayN7android4base11borrowed_fdE(uVar6);
      (*(uint *****)puVar54)[4] = (uint ***)&UNK_003d79f0;
      (*(uint *****)puVar54)[5] = (uint ***)0x0;
      (*(uint *****)puVar54)[6] = (uint ***)&UNK_003d7a10;
      (*(uint *****)puVar54)[2] = (uint ***)pppppuVar57;
      pppppuVar57[2] = *(uint *****)puVar54;
      *(uint *****)puVar54 = (uint ****)0x0;
      if ((((byte)adb_trace_mask & 2) != 0) && ((int)adb_trace_severity._4_4_ < 2)) {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbfc2;
        cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
        if (cVar22 != '\0') {
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbfcf;
          pppppuVar43 = (uint *****)func_0x0099bce0();
          uVar41 = *(uint *)pppppuVar43;
          puVar54 = (undefined1 *)(ulong)uVar41;
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dbffd;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_0015b0ed,0x39a,1,0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc005;
          ppppuVar25 = (uint ****)
                       _ZN7android4base10LogMessage6streamEv
                                 ((undefined1 *)((long)ppuVar42 + -0x2300));
          uVar6 = **(undefined4 **)((long)ppuVar42 + -0x2338);
          puVar55 = (undefined1 *)((long)ppuVar42 + -0x22c0);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc029;
          _ZN7android4base12StringPrintfEPKcz(puVar55,&UNK_0018ad55,uVar6);
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc034;
          func_0x0032e5a0(ppppuVar25);
          if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
            *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc054;
            _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x22b0));
          }
          *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc060;
          _ZN7android4base10LogMessageD2Ev((undefined1 *)((long)ppuVar42 + -0x2300));
          *(uint *)pppppuVar43 = uVar41;
        }
      }
      pcVar11 = *(code **)(*(long *)((long)ppuVar42 + -0x2338) + 0x30);
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db792;
      (*pcVar11)();
      ppppuVar30 = pppppuVar57[4];
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db799;
      (*(code *)ppppuVar30)(pppppuVar57);
      lVar24 = 0;
      goto code_r0x003dad76;
    }
    pppppuVar58 = (uint *****)puVar54;
    if (((adb_trace_mask._1_1_ & 2) != 0) && ((int)adb_trace_severity._36_4_ < 2)) {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc074;
      cVar22 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar22 != '\0') {
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc081;
        puVar37 = (uint *)func_0x0099bce0();
        uVar41 = *puVar37;
        pppppuVar58 = (uint *****)(ulong)uVar41;
        puVar45 = (undefined1 *)((long)ppuVar42 + -0x22c0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc0af;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(puVar45,&UNK_0015b0ed,900,1,0);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc0b7;
        uVar28 = _ZN7android4base10LogMessage6streamEv(puVar45);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc0cb;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015fc26,3);
        uVar6 = **(undefined4 **)((long)ppuVar42 + -0x2338);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc0dc;
        uVar28 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj(uVar28,uVar6);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc0f0;
        uVar28 = func_0x0032eb30(uVar28,&UNK_0015c81c,0x21);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc106;
        uVar28 = func_0x0032eb30(uVar28,*(undefined8 *)((long)ppuVar42 + -0x22d0),
                                 *(undefined8 *)((long)ppuVar42 + -0x22c8));
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc11a;
        func_0x0032eb30(uVar28,&UNK_00162c6d,1);
        *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dc122;
        _ZN7android4base10LogMessageD2Ev(puVar45);
        *puVar37 = uVar41;
      }
    }
    pppppuVar57 = (uint *****)((long)ppuVar42 + -0x2318);
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db8be;
    _ZN4absl12lts_2026052612NoDestructorINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEC2IJRA28_KcETnNS2_9enable_ifIXntsr3std7is_sameIFvDpRu7__decayIT_EEFvRS9_EEE5valueEiE4typeELi0EEEDpOSF_
              (pppppuVar57,&UNK_0015e058);
    pppppuVar43 = (uint *****)((long)ppuVar42 + -0x2330);
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db8d4;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8nn220000INS_17basic_string_viewIcS2_EETnNS_9enable_ifIXaa35__can_be_converted_to_string_view_vIcS2_T_Entsr7is_sameIu14__remove_cvrefISA_ES5_EE5valueEiE4typeELi0EEERKSA_
              (pppppuVar43,(undefined1 *)((long)ppuVar42 + -0x22d0));
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db8df;
    puVar33 = (undefined8 *)func_0x0032e820(pppppuVar57,pppppuVar43);
    *(undefined8 *)((long)ppuVar42 + -0x22f0) = puVar33[2];
    uVar28 = puVar33[1];
    *(undefined8 *)((long)ppuVar42 + -0x2300) = *puVar33;
    *(undefined8 *)((long)ppuVar42 + -0x22f8) = uVar28;
    *puVar33 = 0;
    puVar33[1] = 0;
    puVar33[2] = 0;
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db915;
    pauVar34 = (undefined1 (*) [16])
               _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                         ((undefined1 *)((long)ppuVar42 + -0x2300),&UNK_00162c6d);
    *(undefined8 *)((long)ppuVar42 + -0x22b0) = *(undefined8 *)pauVar34[1];
    uVar28 = *(undefined8 *)(*pauVar34 + 8);
    *(undefined8 *)((long)ppuVar42 + -0x22c0) = *(undefined8 *)*pauVar34;
    *(undefined8 *)((long)ppuVar42 + -0x22b8) = uVar28;
    *pauVar34 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar34[1] = 0;
    if ((*(byte *)((long)ppuVar42 + -0x2300) & 1) == 0) {
      if ((*(byte *)((long)ppuVar42 + -0x2330) & 1) == 0) goto code_r0x003db956;
code_r0x003dba5b:
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dba72;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)ppuVar42 + -0x2320),
                 *(ulong *)((long)ppuVar42 + -0x2330) & 0xfffffffffffffffe);
      bVar4 = *(byte *)((long)ppuVar42 + -0x2318);
    }
    else {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003dba4e;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)ppuVar42 + -0x22f0),
                 *(ulong *)((long)ppuVar42 + -0x2300) & 0xfffffffffffffffe);
      if ((*(byte *)((long)ppuVar42 + -0x2330) & 1) != 0) goto code_r0x003dba5b;
code_r0x003db956:
      bVar4 = *(byte *)((long)ppuVar42 + -0x2318);
    }
    if ((bVar4 & 1) != 0) {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db976;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)((long)ppuVar42 + -0x2308),
                 *(ulong *)((long)ppuVar42 + -0x2318) & 0xfffffffffffffffe);
    }
    bVar59 = (*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0;
    puVar45 = (undefined1 *)((long)ppuVar42 + -0x22bf);
    if (bVar59) {
      puVar45 = *(undefined1 **)((long)ppuVar42 + -0x22b0);
    }
    uVar6 = *(undefined4 *)(*(uint *****)puVar54 + 9);
    uVar40 = (ulong)(*(byte *)((long)ppuVar42 + -0x22c0) >> 1);
    if (bVar59) {
      uVar40 = *(ulong *)((long)ppuVar42 + -0x22b8);
    }
    *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db9a7;
    _Z8SendFailN7android4base11borrowed_fdENSt3__117basic_string_viewIcNS2_11char_traitsIcEEEE
              (uVar6,puVar45,uVar40);
    if ((*(byte *)((long)ppuVar42 + -0x22c0) & 1) != 0) {
      *(undefined **)((long)ppuVar42 + -0x2358) = &UNK_003db9c7;
      _ZdaPvSt11align_val_t(*(undefined8 *)((long)ppuVar42 + -0x22b0));
    }
code_r0x003db9c7:
    puVar54 = (undefined1 *)pppppuVar58;
    pppppuVar46 = *(uint ******)((long)ppuVar42 + -0x2338);
  } while( true );
}


