// Function: _Z14is_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
// Address: 003dfe00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

bool _Z14is_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
               (long *param_1,long *param_2)

{
  byte bVar1;
  undefined1 auVar2 [8];
  char cVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_RBX;
  long *plVar6;
  long *unaff_R12;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *unaff_R15;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  undefined *puStack_80;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long *plStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = (long *)(lRam0000000000a006b0 + 0x10);
  plVar7 = param_2;
  plStack_68 = param_2;
  plStack_60 = param_1;
  do {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      if (plVar7 < (long *)0x4) {
code_r0x003dffa1:
        bVar12 = false;
      }
      else {
        bVar12 = true;
        param_2 = plStack_60;
        if ((int)*plStack_60 == 0x3a706374) goto code_r0x003dffa7;
        if (plVar7 < (long *)0x9) {
          if (plVar7 < (long *)0x6) goto code_r0x003dffa1;
        }
        else if ((char)plStack_60[1] == ':' && *plStack_60 == 0x6466747065636361)
        goto code_r0x003dffa7;
        bVar12 = *(short *)((long)plStack_60 + 4) == 0x3a6b && (int)*plStack_60 == 0x636f7376;
      }
      goto code_r0x003dffa7;
    }
    bVar1 = *(byte *)(plVar8 + 2);
    if ((bVar1 & 1) == 0) {
      unaff_R15 = (long *)(ulong)(bVar1 >> 1);
    }
    else {
      unaff_R15 = (long *)plVar8[3];
    }
    unaff_R12 = (long *)plVar8[4];
    auStack_58 = (undefined1  [8])0x0;
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    unaff_RBX = (long *)((long)unaff_R15 + 1);
    if ((long *)0xfffffffffffffff6 < unaff_RBX) {
      puStack_80 = &UNK_003e0018;
      func_0x0032e8f0();
      goto code_r0x003e0018;
    }
    if (unaff_RBX < (long *)0x17) {
      uVar5 = 0;
      auStack_58._1_7_ = 0;
      auStack_58[0] = (char)unaff_RBX * '\x02';
    }
    else {
      lVar10 = ((ulong)unaff_RBX | 7) + 1;
      if (((ulong)unaff_RBX | 7) == 0x17) {
        lVar10 = 0x1a;
      }
      puStack_80 = &UNK_003dfed7;
      plStack_70 = unaff_R15;
      plStack_48 = (long *)_Znwm(lVar10);
      auStack_58 = (undefined1  [8])(lVar10 + 1);
      uVar5 = (ulong)auStack_58 & 0xffffffff;
      unaff_R15 = plStack_70;
      plStack_50 = unaff_RBX;
    }
    if ((bVar1 & 1) == 0) {
      unaff_R12 = (long *)((long)plVar8 + 0x11);
    }
    plVar6 = plStack_48;
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)(auStack_58 + 1);
    }
    puStack_80 = &UNK_003dff17;
    param_2 = unaff_R12;
    param_1 = plVar6;
    func_0x0099bda0(plVar6,unaff_R12,unaff_R15);
    auVar2 = auStack_58;
    plVar7 = plStack_68;
    *(undefined2 *)((long)plVar6 + (long)unaff_R15) = 0x3a;
    unaff_R15 = plStack_48;
    unaff_RBX = (long *)((ulong)auStack_58 & 0xff);
    plVar6 = plStack_50;
    if (((ulong)auStack_58 & 1) == 0) {
      plVar6 = (long *)((ulong)auStack_58 >> 1 & 0x7f);
    }
    if (plStack_68 < plVar6) {
      unaff_R12 = (long *)0x0;
    }
    else {
      param_2 = plStack_48;
      if (((ulong)auStack_58 & 1) == 0) {
        param_2 = (long *)(auStack_58 + 1);
      }
      puStack_80 = &UNK_003dff77;
      param_1 = plStack_60;
      iVar4 = func_0x0099bf90();
      unaff_R12 = (long *)CONCAT71((int7)((ulong)unaff_R12 >> 8),iVar4 == 0);
    }
    if (((ulong)auVar2 & 1) != 0) {
      param_2 = (long *)((ulong)auStack_58 & 0xfffffffffffffffe);
      puStack_80 = &UNK_003dff96;
      param_1 = unaff_R15;
      _ZdaPvSt11align_val_t();
    }
  } while ((char)unaff_R12 == '\0');
  bVar12 = true;
code_r0x003dffa7:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return bVar12;
  }
code_r0x003e0018:
  puStack_80 = &UNK_003e001d;
  func_0x0099bd00();
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)(lRam0000000000a006b0 + 0x10);
  plStack_a8 = unaff_RBX;
  plStack_a0 = unaff_R12;
  plStack_98 = plVar7;
  lStack_90 = (long)plVar8;
  plStack_88 = unaff_R15;
  puStack_80 = &stack0xfffffffffffffff8;
  do {
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      uStack_d0 = 0;
      plStack_c8 = (long *)0x0;
      lStack_c0 = 0;
      auStack_f0 = (undefined1  [8])0x0;
      uStack_e8 = 0;
      plStack_e0 = (long *)0x0;
      bVar12 = false;
      cVar3 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                        (param_1,param_2,auStack_f0,0,0,&uStack_d0);
      if (cVar3 != '\0') {
        if (((ulong)auStack_f0 & 1) == 0) {
          uVar5 = (ulong)(auStack_f0[0] >> 1);
          if (auStack_f0[0] >> 1 == 0) goto code_r0x003e0241;
        }
        else {
          uVar5 = uStack_e8;
          if (uStack_e8 == 0) {
code_r0x003e0241:
            bVar12 = true;
            goto joined_r0x003e0278;
          }
        }
        if (uVar5 == 9) {
          plVar8 = plStack_e0;
          if (((ulong)auStack_f0 & 1) == 0) {
            plVar8 = (long *)(auStack_f0 + 1);
          }
          bVar12 = (char)plVar8[1] == 't' && *plVar8 == 0x736f686c61636f6c;
        }
        else {
          bVar12 = false;
        }
      }
joined_r0x003e0278:
      if (((ulong)auStack_f0 & 1) != 0) {
        _ZdaPvSt11align_val_t(plStack_e0,(ulong)auStack_f0 & 0xfffffffffffffffe);
      }
      if ((uStack_d0 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_c0,uStack_d0 & 0xfffffffffffffffe);
      }
      goto code_r0x003e02a2;
    }
    bVar1 = *(byte *)(plVar6 + 2);
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = plVar6[3];
    }
    lVar10 = plVar6[4];
    uStack_d0 = 0;
    plStack_c8 = (long *)0x0;
    lStack_c0 = 0;
    plVar8 = (long *)(uVar5 + 1);
    if ((long *)0xfffffffffffffff6 < plVar8) {
      func_0x0032e8f0();
      goto code_r0x003e02c8;
    }
    if (plVar8 < (long *)0x17) {
      uVar9 = 0;
      uStack_d0 = (ulong)(byte)((char)plVar8 * '\x02');
    }
    else {
      lVar11 = ((ulong)plVar8 | 7) + 1;
      if (((ulong)plVar8 | 7) == 0x17) {
        lVar11 = 0x1a;
      }
      lStack_c0 = _Znwm(lVar11);
      uStack_d0 = lVar11 + 1;
      uVar9 = uStack_d0 & 0xffffffff;
      plStack_c8 = plVar8;
    }
    if ((bVar1 & 1) == 0) {
      lVar10 = (long)plVar6 + 0x11;
    }
    lVar11 = lStack_c0;
    if ((uVar9 & 1) == 0) {
      lVar11 = (long)&uStack_d0 + 1;
    }
    func_0x0099bda0(lVar11,lVar10,uVar5);
    uVar9 = uStack_d0;
    *(undefined2 *)(lVar11 + uVar5) = 0x3a;
    lVar10 = lStack_c0;
    if ((uStack_d0 & 1) == 0) {
      if (param_2 < (long *)(uStack_d0 >> 1 & 0x7f)) goto code_r0x003e019b;
code_r0x003e015f:
      lVar11 = lStack_c0;
      if ((uStack_d0 & 1) == 0) {
        lVar11 = (long)&uStack_d0 + 1;
      }
      iVar4 = func_0x0099bf90(param_1,lVar11);
      bVar12 = iVar4 == 0;
    }
    else {
      if (plStack_c8 <= param_2) goto code_r0x003e015f;
code_r0x003e019b:
      bVar12 = false;
    }
    if ((uVar9 & 1) != 0) {
      _ZdaPvSt11align_val_t(lVar10,uStack_d0 & 0xfffffffffffffffe);
    }
  } while (!bVar12);
  bVar12 = true;
code_r0x003e02a2:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_b0) {
    return bVar12;
  }
code_r0x003e02c8:
  func_0x0099bd00();
  return true;
}


