// Function: _Z20is_local_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
// Address: 003e0020
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _Z20is_local_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEE
               (undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long *plStack_68;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)(lRam0000000000a006b0 + 0x10);
  do {
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      uStack_58 = 0;
      uStack_50 = 0;
      lStack_48 = 0;
      auStack_78 = (undefined1  [8])0x0;
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
      bVar10 = false;
      cVar3 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                        (param_1,param_2,auStack_78,0,0,&uStack_58);
      if (cVar3 != '\0') {
        if (((ulong)auStack_78 & 1) == 0) {
          uVar5 = (ulong)(auStack_78[0] >> 1);
          if (auStack_78[0] >> 1 == 0) goto code_r0x003e0241;
        }
        else {
          uVar5 = uStack_70;
          if (uStack_70 == 0) {
code_r0x003e0241:
            bVar10 = true;
            goto joined_r0x003e0278;
          }
        }
        if (uVar5 == 9) {
          plVar6 = plStack_68;
          if (((ulong)auStack_78 & 1) == 0) {
            plVar6 = (long *)(auStack_78 + 1);
          }
          bVar10 = (char)plVar6[1] == 't' && *plVar6 == 0x736f686c61636f6c;
        }
        else {
          bVar10 = false;
        }
      }
joined_r0x003e0278:
      if (((ulong)auStack_78 & 1) != 0) {
        _ZdaPvSt11align_val_t(plStack_68,(ulong)auStack_78 & 0xfffffffffffffffe);
      }
      if ((uStack_58 & 1) != 0) {
        _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
      }
      goto code_r0x003e02a2;
    }
    bVar2 = *(byte *)(plVar6 + 2);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar5 = plVar6[3];
    }
    lVar7 = plVar6[4];
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    uVar1 = uVar5 + 1;
    if (0xfffffffffffffff6 < uVar1) {
      func_0x0032e8f0();
      goto code_r0x003e02c8;
    }
    if (uVar1 < 0x17) {
      uVar8 = 0;
      uStack_58 = (ulong)(byte)((char)uVar1 * '\x02');
    }
    else {
      lVar9 = (uVar1 | 7) + 1;
      if ((uVar1 | 7) == 0x17) {
        lVar9 = 0x1a;
      }
      lStack_48 = _Znwm(lVar9);
      uStack_58 = lVar9 + 1;
      uVar8 = uStack_58 & 0xffffffff;
      uStack_50 = uVar1;
    }
    if ((bVar2 & 1) == 0) {
      lVar7 = (long)plVar6 + 0x11;
    }
    lVar9 = lStack_48;
    if ((uVar8 & 1) == 0) {
      lVar9 = (long)&uStack_58 + 1;
    }
    func_0x0099bda0(lVar9,lVar7,uVar5);
    uVar1 = uStack_58;
    *(undefined2 *)(lVar9 + uVar5) = 0x3a;
    lVar7 = lStack_48;
    if ((uStack_58 & 1) == 0) {
      if (param_2 < (uStack_58 >> 1 & 0x7f)) goto code_r0x003e019b;
code_r0x003e015f:
      lVar9 = lStack_48;
      if ((uStack_58 & 1) == 0) {
        lVar9 = (long)&uStack_58 + 1;
      }
      iVar4 = func_0x0099bf90(param_1,lVar9);
      bVar10 = iVar4 == 0;
    }
    else {
      if (uStack_50 <= param_2) goto code_r0x003e015f;
code_r0x003e019b:
      bVar10 = false;
    }
    if ((uVar1 & 1) != 0) {
      _ZdaPvSt11align_val_t(lVar7,uStack_58 & 0xfffffffffffffffe);
    }
  } while (!bVar10);
  bVar10 = true;
code_r0x003e02a2:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return bVar10;
  }
code_r0x003e02c8:
  func_0x0099bd00();
  return true;
}


