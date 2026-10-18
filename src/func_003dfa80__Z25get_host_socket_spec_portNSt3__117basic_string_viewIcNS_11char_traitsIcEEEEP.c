// Function: _Z25get_host_socket_spec_portNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
// Address: 003dfa80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

uint *******
_Z25get_host_socket_spec_portNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEE
          (uint *******param_1,uint *******param_2,uint *******param_3)

{
  byte bVar1;
  undefined1 auVar2 [8];
  char cVar3;
  int iVar4;
  uint *******pppppppuVar5;
  ulong uVar6;
  uint *******unaff_RBX;
  long *plVar7;
  uint *******unaff_R12;
  uint *******unaff_R13;
  uint *******pppppppuVar8;
  uint *******unaff_R14;
  uint ******ppppppuVar9;
  uint *******pppppppuVar10;
  long *plVar11;
  ulong uVar12;
  uint *******unaff_R15;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined1 auStack_188 [8];
  ulong uStack_180;
  long *plStack_178;
  undefined8 uStack_168;
  uint *******pppppppuStack_160;
  long lStack_158;
  long lStack_148;
  uint *******pppppppuStack_140;
  uint *******pppppppuStack_138;
  uint *******pppppppuStack_130;
  long lStack_128;
  uint *******pppppppuStack_120;
  undefined *puStack_118;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  undefined1 auStack_f0 [8];
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  long lStack_d0;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_a8;
  undefined *apuStack_a0 [2];
  uint *******apppppppuStack_90 [2];
  undefined8 uStack_80;
  uint *******pppppppuStack_78;
  uint *******pppppppuStack_70;
  long lStack_68;
  undefined1 auStack_58 [8];
  uint *******pppppppuStack_50;
  uint *******pppppppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < (uint *******)0x4) {
code_r0x003dfac7:
    param_2 = (uint *******)&UNK_00165f9a;
    apuStack_a0[0] = &UNK_003dfad6;
    func_0x0032ea60();
    param_1 = param_3;
code_r0x003dfad6:
    pppppppuVar5 = (uint *******)0xffffffff;
  }
  else {
    if (*(int *)param_1 != 0x3a706374) {
      if ((param_2 < (uint *******)0x6) ||
         (*(short *)((long)param_1 + 4) != 0x3a6b || *(int *)param_1 != 0x636f7376))
      goto code_r0x003dfac7;
      auStack_58 = (undefined1  [8])0x0;
      pppppppuStack_50 = (uint *******)0x0;
      pppppppuStack_48 = (uint *******)0x0;
      if ((uint *******)0xfffffffffffffff6 < param_2) goto code_r0x003dfdf7;
      if (param_2 < (uint *******)0x17) {
        auStack_58._1_7_ = 0;
        auStack_58[0] = (char)param_2 * '\x02';
        unaff_R15 = (uint *******)(auStack_58 + 1);
      }
      else {
        lVar13 = 0x1a;
        if (((ulong)param_2 | 7) != 0x17) {
          lVar13 = ((ulong)param_2 | 7) + 1;
        }
        apuStack_a0[0] = &UNK_003dfb7a;
        unaff_R15 = (uint *******)_Znwm(lVar13);
        unaff_R12 = (uint *******)(lVar13 + 1);
        unaff_R13 = param_2;
        auStack_58 = (undefined1  [8])unaff_R12;
        pppppppuStack_50 = param_2;
        pppppppuStack_48 = unaff_R15;
      }
      apuStack_a0[0] = &UNK_003dfba0;
      func_0x0099bda0(unaff_R15,param_1,param_2);
      *(char *)((long)unaff_R15 + (long)param_2) = '\0';
      pppppppuStack_78 = (uint *******)0x0;
      pppppppuStack_70 = (uint *******)0x0;
      lStack_68 = 0;
      apppppppuStack_90[0] = (uint *******)CONCAT53(apppppppuStack_90[0]._3_5_,0x3a02);
      apuStack_a0[0] = &UNK_003dfbd8;
      _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                (&pppppppuStack_78,auStack_58,apppppppuStack_90);
      if (((ulong)apppppppuStack_90[0] & 1) != 0) {
        apuStack_a0[0] = &UNK_003dfbf5;
        _ZdaPvSt11align_val_t(uStack_80,(ulong)apppppppuStack_90[0] & 0xfffffffffffffffe);
      }
      pppppppuVar10 = pppppppuStack_78;
      if ((long)pppppppuStack_70 - (long)pppppppuStack_78 == 0x30) {
        if (((ulong)pppppppuStack_78[3] & 1) == 0) {
          ppppppuVar9 = (uint ******)((long)pppppppuStack_78 + 0x19);
        }
        else {
          ppppppuVar9 = pppppppuStack_78[5];
        }
        apuStack_a0[0] = &UNK_003dfc30;
        plVar11 = (long *)func_0x0099be00();
        pppppppuVar10 = (uint *******)((long)ppppppuVar9 + -1);
        do {
          pppppppuVar5 = pppppppuVar10;
          pppppppuVar10 = (uint *******)((long)pppppppuVar5 + 1);
        } while ((*(byte *)(*plVar11 + 1 + (long)*(char *)((long)pppppppuVar5 + 1) * 2) & 0x20) != 0
                );
        unaff_R12 = (uint *******)0xa;
        if (*(char *)((long)pppppppuVar5 + 1) == '0') {
          unaff_R12 = (uint *******)0x10;
          if ((*(char *)((long)pppppppuVar5 + 2) != 'x') &&
             (unaff_R12 = (uint *******)0xa, *(char *)((long)pppppppuVar5 + 2) == 'X')) {
            unaff_R12 = (uint *******)0x10;
          }
        }
        apuStack_a0[0] = &UNK_003dfc7f;
        unaff_R15 = (uint *******)func_0x0099bce0();
        *(int *)unaff_R15 = 0;
        apppppppuStack_90[0] = (uint *******)0x0;
        param_2 = (uint *******)apppppppuStack_90;
        apuStack_a0[0] = &UNK_003dfca5;
        param_1 = pppppppuVar10;
        pppppppuVar5 = (uint *******)func_0x0099beb0(pppppppuVar10,param_2,unaff_R12);
        unaff_R14 = pppppppuStack_78;
        if (*(int *)unaff_R15 == 0) {
          iVar4 = 0x16;
          if (((pppppppuVar10 == apppppppuStack_90[0]) || (*(char *)apppppppuStack_90[0] != '\0'))
             || (iVar4 = 0x22, (uint *******)(long)(int)pppppppuVar5 != pppppppuVar5)) {
            *(int *)unaff_R15 = iVar4;
            goto code_r0x003dfcd5;
          }
          if (-1 < (long)pppppppuVar5) {
            pppppppuVar10 = pppppppuStack_78;
            pppppppuVar8 = pppppppuStack_70;
            if (pppppppuStack_78 != (uint *******)0x0) {
              while (unaff_R15 = pppppppuVar8, param_1 = pppppppuVar10, pppppppuStack_78 = param_1,
                    unaff_R14 != unaff_R15) {
                if (((ulong)unaff_R15[-3] & 1) != 0) {
                  apuStack_a0[0] = &UNK_003dfda7;
                  _ZdaPvSt11align_val_t(unaff_R15[-1],(ulong)unaff_R15[-3] & 0xfffffffffffffffe);
                }
                pppppppuVar10 = pppppppuStack_78;
                pppppppuVar8 = unaff_R15 + -3;
              }
              pppppppuStack_70 = unaff_R14;
              param_2 = (uint *******)(lStack_68 - (long)param_1);
              apuStack_a0[0] = &UNK_003dfdc9;
              _ZdaPvSt11align_val_t();
              param_3 = pppppppuVar5;
            }
            unaff_RBX = param_3;
            if (((ulong)auStack_58 & 1) != 0) {
              param_2 = (uint *******)((ulong)auStack_58 & 0xfffffffffffffffe);
              apuStack_a0[0] = &UNK_003dfdea;
              param_1 = pppppppuStack_48;
              _ZdaPvSt11align_val_t();
              unaff_RBX = pppppppuVar5;
            }
            goto code_r0x003dfadb;
          }
          param_2 = (uint *******)&UNK_001613ec;
        }
        else {
code_r0x003dfcd5:
          param_2 = (uint *******)&UNK_001849c3;
        }
        apuStack_a0[0] = &UNK_003dfce4;
        func_0x0032ea60();
        *(int *)unaff_R15 = 0x16;
      }
      else {
        param_2 = (uint *******)&UNK_00186642;
        apuStack_a0[0] = &UNK_003dfc22;
        func_0x0032ea60();
      }
      unaff_RBX = pppppppuStack_78;
      pppppppuVar5 = pppppppuStack_78;
      pppppppuVar8 = pppppppuStack_70;
      if (pppppppuStack_78 != (uint *******)0x0) {
        while (pppppppuVar10 = pppppppuVar8, param_3 = pppppppuVar5, pppppppuStack_78 = param_3,
              unaff_RBX != pppppppuVar10) {
          if (((ulong)pppppppuVar10[-3] & 1) != 0) {
            apuStack_a0[0] = &UNK_003dfd31;
            _ZdaPvSt11align_val_t(pppppppuVar10[-1],(ulong)pppppppuVar10[-3] & 0xfffffffffffffffe);
          }
          pppppppuVar5 = pppppppuStack_78;
          pppppppuVar8 = pppppppuVar10 + -3;
        }
        pppppppuStack_70 = unaff_RBX;
        param_2 = (uint *******)(lStack_68 - (long)param_3);
        apuStack_a0[0] = &UNK_003dfd47;
        _ZdaPvSt11align_val_t();
      }
      param_1 = param_3;
      unaff_R14 = pppppppuVar10;
      if (((ulong)auStack_58 & 1) != 0) {
        param_2 = (uint *******)((ulong)auStack_58 & 0xfffffffffffffffe);
        apuStack_a0[0] = &UNK_003dfd62;
        param_1 = pppppppuStack_48;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x003dfad6;
    }
    auStack_58 = (undefined1  [8])((ulong)auStack_58 & 0xffffffff00000000);
    apuStack_a0[0] = &UNK_003dfb15;
    cVar3 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                      (param_1,param_2,0,auStack_58,0,param_3);
    pppppppuVar5 = (uint *******)0xffffffff;
    if (cVar3 != '\0') {
      pppppppuVar5 = (uint *******)((ulong)auStack_58 & 0xffffffff);
    }
  }
code_r0x003dfadb:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return pppppppuVar5;
  }
  apuStack_a0[0] = &UNK_003dfdf7;
  func_0x0099bd00();
code_r0x003dfdf7:
  apuStack_a0[0] = &UNK_003dfdfc;
  func_0x0032e8f0();
  lStack_d0 = *(long *)(in_FS_OFFSET + 0x28);
  plVar11 = (long *)(lRam0000000000a006b0 + 0x10);
  pppppppuVar10 = param_2;
  pppppppuStack_100 = param_2;
  pppppppuStack_f8 = param_1;
  pppppppuStack_c8 = unaff_RBX;
  pppppppuStack_c0 = unaff_R12;
  pppppppuStack_b8 = unaff_R13;
  pppppppuStack_b0 = unaff_R14;
  pppppppuStack_a8 = unaff_R15;
  apuStack_a0[0] = &stack0xfffffffffffffff8;
  do {
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      if (pppppppuVar10 < (uint *******)0x4) {
code_r0x003dffa1:
        pppppppuVar5 = (uint *******)0x0;
      }
      else {
        pppppppuVar5 = (uint *******)0x1;
        param_2 = pppppppuStack_f8;
        if (*(int *)pppppppuStack_f8 == 0x3a706374) goto code_r0x003dffa7;
        if (pppppppuVar10 < (uint *******)0x9) {
          if (pppppppuVar10 < (uint *******)0x6) goto code_r0x003dffa1;
        }
        else if (*(char *)(pppppppuStack_f8 + 1) == ':' &&
                 *pppppppuStack_f8 == (uint ******)0x6466747065636361) goto code_r0x003dffa7;
        pppppppuVar5 = (uint *******)
                       (ulong)(*(short *)((long)pppppppuStack_f8 + 4) == 0x3a6b &&
                              *(int *)pppppppuStack_f8 == 0x636f7376);
      }
      goto code_r0x003dffa7;
    }
    bVar1 = *(byte *)(plVar11 + 2);
    if ((bVar1 & 1) == 0) {
      unaff_R15 = (uint *******)(ulong)(bVar1 >> 1);
    }
    else {
      unaff_R15 = (uint *******)plVar11[3];
    }
    unaff_R12 = (uint *******)plVar11[4];
    auStack_f0 = (undefined1  [8])0x0;
    pppppppuStack_e8 = (uint *******)0x0;
    pppppppuStack_e0 = (uint *******)0x0;
    unaff_RBX = (uint *******)((long)unaff_R15 + 1);
    if ((uint *******)0xfffffffffffffff6 < unaff_RBX) {
      puStack_118 = &UNK_003e0018;
      func_0x0032e8f0();
      goto code_r0x003e0018;
    }
    if (unaff_RBX < (uint *******)0x17) {
      uVar6 = 0;
      auStack_f0._1_7_ = 0;
      auStack_f0[0] = (char)unaff_RBX * '\x02';
      pppppppuVar5 = unaff_R15;
    }
    else {
      lVar13 = ((ulong)unaff_RBX | 7) + 1;
      if (((ulong)unaff_RBX | 7) == 0x17) {
        lVar13 = 0x1a;
      }
      puStack_118 = &UNK_003dfed7;
      pppppppuStack_108 = unaff_R15;
      pppppppuStack_e0 = (uint *******)_Znwm(lVar13);
      auStack_f0 = (undefined1  [8])(lVar13 + 1);
      uVar6 = (ulong)auStack_f0 & 0xffffffff;
      pppppppuVar5 = pppppppuStack_108;
      pppppppuStack_e8 = unaff_RBX;
    }
    if ((bVar1 & 1) == 0) {
      unaff_R12 = (uint *******)((long)plVar11 + 0x11);
    }
    pppppppuVar8 = pppppppuStack_e0;
    if ((uVar6 & 1) == 0) {
      pppppppuVar8 = (uint *******)(auStack_f0 + 1);
    }
    puStack_118 = &UNK_003dff17;
    param_2 = unaff_R12;
    param_1 = pppppppuVar8;
    func_0x0099bda0(pppppppuVar8,unaff_R12,pppppppuVar5);
    auVar2 = auStack_f0;
    pppppppuVar10 = pppppppuStack_100;
    ((char *)((long)pppppppuVar8 + (long)pppppppuVar5))[0] = ':';
    unaff_R15 = pppppppuStack_e0;
    ((char *)((long)pppppppuVar8 + (long)pppppppuVar5))[1] = '\0';
    unaff_RBX = (uint *******)((ulong)auStack_f0 & 0xff);
    pppppppuVar5 = pppppppuStack_e8;
    if (((ulong)auStack_f0 & 1) == 0) {
      pppppppuVar5 = (uint *******)((ulong)auStack_f0 >> 1 & 0x7f);
    }
    if (pppppppuStack_100 < pppppppuVar5) {
      unaff_R12 = (uint *******)0x0;
    }
    else {
      param_2 = pppppppuStack_e0;
      if (((ulong)auStack_f0 & 1) == 0) {
        param_2 = (uint *******)(auStack_f0 + 1);
      }
      puStack_118 = &UNK_003dff77;
      param_1 = pppppppuStack_f8;
      iVar4 = func_0x0099bf90();
      unaff_R12 = (uint *******)CONCAT71((int7)((ulong)unaff_R12 >> 8),iVar4 == 0);
    }
    if (((ulong)auVar2 & 1) != 0) {
      param_2 = (uint *******)((ulong)auStack_f0 & 0xfffffffffffffffe);
      puStack_118 = &UNK_003dff96;
      param_1 = unaff_R15;
      _ZdaPvSt11align_val_t();
    }
  } while ((char)unaff_R12 == '\0');
  pppppppuVar5 = (uint *******)0x1;
code_r0x003dffa7:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_d0) {
    return pppppppuVar5;
  }
code_r0x003e0018:
  puStack_118 = &UNK_003e001d;
  func_0x0099bd00();
  lStack_148 = *(long *)(in_FS_OFFSET + 0x28);
  plVar7 = (long *)(lRam0000000000a006b0 + 0x10);
  pppppppuStack_140 = unaff_RBX;
  pppppppuStack_138 = unaff_R12;
  pppppppuStack_130 = pppppppuVar10;
  lStack_128 = (long)plVar11;
  pppppppuStack_120 = unaff_R15;
  puStack_118 = (undefined *)apuStack_a0;
  do {
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      uStack_168 = 0;
      pppppppuStack_160 = (uint *******)0x0;
      lStack_158 = 0;
      auStack_188 = (undefined1  [8])0x0;
      uStack_180 = 0;
      plStack_178 = (long *)0x0;
      pppppppuVar10 = (uint *******)0x0;
      cVar3 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                        (param_1,param_2,auStack_188,0,0,&uStack_168);
      if (cVar3 != '\0') {
        if (((ulong)auStack_188 & 1) == 0) {
          uVar6 = (ulong)(auStack_188[0] >> 1);
          if (auStack_188[0] >> 1 == 0) goto code_r0x003e0241;
        }
        else {
          uVar6 = uStack_180;
          if (uStack_180 == 0) {
code_r0x003e0241:
            pppppppuVar10 = (uint *******)0x1;
            goto joined_r0x003e0278;
          }
        }
        if (uVar6 == 9) {
          plVar11 = plStack_178;
          if (((ulong)auStack_188 & 1) == 0) {
            plVar11 = (long *)(auStack_188 + 1);
          }
          pppppppuVar10 =
               (uint *******)(ulong)((char)plVar11[1] == 't' && *plVar11 == 0x736f686c61636f6c);
        }
        else {
          pppppppuVar10 = (uint *******)0x0;
        }
      }
joined_r0x003e0278:
      if (((ulong)auStack_188 & 1) != 0) {
        _ZdaPvSt11align_val_t(plStack_178,(ulong)auStack_188 & 0xfffffffffffffffe);
      }
      if ((uStack_168 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_158,uStack_168 & 0xfffffffffffffffe);
      }
      goto code_r0x003e02a2;
    }
    bVar1 = *(byte *)(plVar7 + 2);
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar6 = plVar7[3];
    }
    lVar13 = plVar7[4];
    uStack_168 = 0;
    pppppppuStack_160 = (uint *******)0x0;
    lStack_158 = 0;
    pppppppuVar10 = (uint *******)(uVar6 + 1);
    if ((uint *******)0xfffffffffffffff6 < pppppppuVar10) {
      func_0x0032e8f0();
      goto code_r0x003e02c8;
    }
    if (pppppppuVar10 < (uint *******)0x17) {
      uVar12 = 0;
      uStack_168 = (ulong)(byte)((char)pppppppuVar10 * '\x02');
    }
    else {
      lVar14 = ((ulong)pppppppuVar10 | 7) + 1;
      if (((ulong)pppppppuVar10 | 7) == 0x17) {
        lVar14 = 0x1a;
      }
      lStack_158 = _Znwm(lVar14);
      uStack_168 = lVar14 + 1;
      uVar12 = uStack_168 & 0xffffffff;
      pppppppuStack_160 = pppppppuVar10;
    }
    if ((bVar1 & 1) == 0) {
      lVar13 = (long)plVar7 + 0x11;
    }
    lVar14 = lStack_158;
    if ((uVar12 & 1) == 0) {
      lVar14 = (long)&uStack_168 + 1;
    }
    func_0x0099bda0(lVar14,lVar13,uVar6);
    uVar12 = uStack_168;
    *(undefined2 *)(lVar14 + uVar6) = 0x3a;
    lVar13 = lStack_158;
    if ((uStack_168 & 1) == 0) {
      if (param_2 < (uint *******)(uStack_168 >> 1 & 0x7f)) goto code_r0x003e019b;
code_r0x003e015f:
      lVar14 = lStack_158;
      if ((uStack_168 & 1) == 0) {
        lVar14 = (long)&uStack_168 + 1;
      }
      iVar4 = func_0x0099bf90(param_1,lVar14);
      bVar15 = iVar4 == 0;
    }
    else {
      if (pppppppuStack_160 <= param_2) goto code_r0x003e015f;
code_r0x003e019b:
      bVar15 = false;
    }
    if ((uVar12 & 1) != 0) {
      _ZdaPvSt11align_val_t(lVar13,uStack_168 & 0xfffffffffffffffe);
    }
  } while (!bVar15);
  pppppppuVar10 = (uint *******)0x1;
code_r0x003e02a2:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_148) {
    return pppppppuVar10;
  }
code_r0x003e02c8:
  func_0x0099bd00();
  return (uint *******)0x1;
}


