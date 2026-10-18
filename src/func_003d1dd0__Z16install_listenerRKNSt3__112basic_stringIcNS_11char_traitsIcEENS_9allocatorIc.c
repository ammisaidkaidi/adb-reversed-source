// Function: _Z16install_listenerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcP10atransportiPiPS5_
// Address: 003d1dd0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Type propagation algorithm not settling */

uint * _Z16install_listenerRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcP10atransportiPiPS5_
                 (byte *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint *param_6
                 )

{
  byte bVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  byte *pbVar17;
  long extraout_RDX;
  uint *unaff_RBX;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  uint uStack_104;
  uint *puStack_100;
  uint *puStack_f8;
  undefined8 *puStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  undefined *puStack_d8;
  uint auStack_c8 [2];
  uint *puStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  uint *puStack_a8;
  undefined *apuStack_a0 [2];
  uint *puStack_90;
  byte *pbStack_88;
  uint *puStack_80;
  uint *puStack_78;
  uint *puStack_70;
  uint uStack_64;
  uint *puStack_60;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_60 = puRam0000000000a00618;
  apuStack_a0[0] = &UNK_003d1e18;
  puStack_90 = param_5;
  pbStack_88 = param_1;
  puStack_80 = param_3;
  puStack_78 = param_2;
  puStack_70 = param_6;
  uStack_64 = param_4;
  _ZNSt3__15mutex4lockEv();
  puVar21 = puRam0000000000a00620;
  puVar16 = *(uint **)(puRam0000000000a00620 + 2);
  if (puVar16 != puRam0000000000a00620) {
    if ((*pbStack_88 & 1) == 0) {
      unaff_RBX = (uint *)(ulong)(*pbStack_88 >> 1);
      pbVar17 = pbStack_88 + 1;
    }
    else {
      unaff_RBX = *(uint **)(pbStack_88 + 8);
      pbVar17 = *(byte **)(pbStack_88 + 0x10);
    }
    do {
      puVar7 = *(undefined8 **)(puVar16 + 4);
      bVar1 = *(byte *)(puVar7 + 2);
      if ((bVar1 & 1) == 0) {
        puVar13 = (uint *)(ulong)(bVar1 >> 1);
      }
      else {
        puVar13 = (uint *)puVar7[3];
      }
      if (unaff_RBX == puVar13) {
        if ((bVar1 & 1) == 0) {
          param_2 = (uint *)((long)puVar7 + 0x11);
        }
        else {
          param_2 = (uint *)puVar7[4];
        }
        apuStack_a0[0] = &UNK_003d1e60;
        iVar4 = func_0x0099bf90(pbVar17,param_2,unaff_RBX);
        if (iVar4 == 0) {
          bVar1 = *(byte *)(puVar7 + 5);
          if ((bVar1 & 1) == 0) {
            uVar8 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar8 = puVar7[6];
          }
          if (uVar8 == 0xd) {
            if ((bVar1 & 1) == 0) {
              plVar11 = (long *)((long)puVar7 + 0x29);
            }
            else {
              plVar11 = (long *)puVar7[7];
            }
            if (*(long *)((long)plVar11 + 5) == 0x2a74656b636f7374 && *plVar11 == 0x6f737472616d732a
               ) {
              param_2 = (uint *)&UNK_0015fbb3;
              apuStack_a0[0] = &UNK_003d224c;
              func_0x0032ea60(puStack_70);
              unaff_RBX = (uint *)0xffffffff;
              goto code_r0x003d2125;
            }
          }
          if ((uStack_64 & 1) == 0) {
            puVar7 = puVar7 + 5;
            apuStack_a0[0] = &UNK_003d21b1;
            func_0x0032ea60(puVar7);
            puVar13 = puStack_80;
            param_2 = *(uint **)(puVar16 + 4);
            unaff_RBX = (uint *)0x0;
            if (*(uint **)(param_2 + 0x10) != puStack_80) {
              apuStack_a0[0] = &UNK_003d21d4;
              _ZN10atransport16RemoveDisconnectEP11adisconnect
                        (*(uint **)(param_2 + 0x10),param_2 + 0x12);
              *(uint **)(*(long *)(puVar16 + 4) + 0x40) = puVar13;
              param_2 = (uint *)(*(long *)(puVar16 + 4) + 0x48);
              apuStack_a0[0] = &UNK_003d21ed;
              _ZN10atransport13AddDisconnectEP11adisconnect
                        (*(undefined8 *)(*(long *)(puVar16 + 4) + 0x40));
              puVar21 = puVar13;
            }
          }
          else {
            if ((*puStack_70 & 1) == 0) {
              *(byte *)puStack_70 = 0x1a;
              pbVar17 = (byte *)((long)puStack_70 + 1);
            }
            else {
              puStack_70[2] = 0xd;
              puStack_70[3] = 0;
              pbVar17 = *(byte **)(puStack_70 + 4);
            }
            pbVar17[5] = 0x74;
            pbVar17[6] = 0x20;
            pbVar17[7] = 0x72;
            pbVar17[8] = 0x65;
            pbVar17[9] = 0x62;
            pbVar17[10] = 0x69;
            pbVar17[0xb] = 0x6e;
            pbVar17[0xc] = 100;
            pbVar17[0] = 99;
            pbVar17[1] = 0x61;
            pbVar17[2] = 0x6e;
            pbVar17[3] = 0x6e;
            pbVar17[4] = 0x6f;
            pbVar17[5] = 0x74;
            pbVar17[6] = 0x20;
            pbVar17[7] = 0x72;
            pbVar17[0xd] = 0;
            unaff_RBX = (uint *)0xfffffffd;
            param_2 = puStack_78;
          }
          goto code_r0x003d2125;
        }
      }
      puVar16 = *(uint **)(puVar16 + 2);
    } while (puVar16 != puVar21);
  }
  apuStack_a0[0] = &UNK_003d1eae;
  puVar7 = (undefined8 *)_Znwm(0x58);
  puVar21 = puStack_78;
  apuStack_a0[0] = &UNK_003d1ebd;
  puVar13 = puStack_78;
  uVar8 = func_0x0099bcf0();
  if (0xfffffffffffffff6 < uVar8) goto code_r0x003d225b;
  if (uVar8 < 0x17) {
    uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar8 * '\x02');
    lVar9 = (long)&uStack_50 + 1;
  }
  else {
    lVar19 = 0x1a;
    if ((uVar8 | 7) != 0x17) {
      lVar19 = (uVar8 | 7) + 1;
    }
    apuStack_a0[0] = &UNK_003d1efe;
    lVar9 = _Znwm(lVar19);
    uStack_50 = lVar19 + 1;
    uStack_48 = uVar8;
    lStack_40 = lVar9;
  }
  puVar16 = puStack_70;
  apuStack_a0[0] = &UNK_003d1f22;
  func_0x0099bda0(lVar9,puVar21,uVar8);
  *(undefined1 *)(lVar9 + uVar8) = 0;
  apuStack_a0[0] = &UNK_003d1f38;
  _ZN9alistenerC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_
            (puVar7,pbStack_88,&uStack_50);
  if ((uStack_50 & 1) != 0) {
    apuStack_a0[0] = &UNK_003d1f4f;
    _ZdaPvSt11align_val_t(lStack_40,uStack_50 & 0xfffffffffffffffe);
  }
  bVar22 = (*(byte *)(puVar7 + 2) & 1) != 0;
  lVar19 = (long)puVar7 + 0x11;
  if (bVar22) {
    lVar19 = puVar7[4];
  }
  uStack_54 = 0;
  uVar8 = (ulong)(*(byte *)(puVar7 + 2) >> 1);
  if (bVar22) {
    uVar8 = puVar7[3];
  }
  apuStack_a0[0] = &UNK_003d1f7f;
  iVar4 = _Z18socket_spec_listenNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPi
                    (lVar19,uVar8,puVar16,&uStack_54);
  puVar13 = puStack_90;
  *(int *)(puVar7 + 1) = iVar4;
  if (iVar4 < 0) {
    apuStack_a0[0] = &UNK_003d202f;
    _ZN9alistenerD1Ev(puVar7);
    param_2 = (uint *)0x0;
    apuStack_a0[0] = &UNK_003d203c;
    _ZdaPvSt11align_val_t(puVar7);
    unaff_RBX = (uint *)0xfffffffe;
  }
  else {
    if (uStack_54 != 0) {
      apuStack_a0[0] = &UNK_003d1fb1;
      _ZN7android4base12StringPrintfEPKcz(&uStack_50,&UNK_00186185);
      if ((*(byte *)(puVar7 + 2) & 1) != 0) {
        apuStack_a0[0] = &UNK_003d1fc9;
        _ZdaPvSt11align_val_t(puVar7[4],puVar7[2] & 0xfffffffffffffffe);
      }
      puVar7[4] = lStack_40;
      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_50;
      *(undefined4 *)((long)puVar7 + 0x14) = uStack_50._4_4_;
      *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_48;
      *(undefined4 *)((long)puVar7 + 0x1c) = uStack_48._4_4_;
      if (puVar13 != (uint *)0x0) {
        *puVar13 = uStack_54;
      }
    }
    uVar2 = *(undefined4 *)(puVar7 + 1);
    apuStack_a0[0] = &UNK_003d1ff6;
    uVar5 = func_0x0099bf10(uVar2,1);
    if ((uVar5 & 0x80000001) == 0) {
      apuStack_a0[0] = &UNK_003d2010;
      func_0x0099bf10(uVar2,2,uVar5 | 1);
    }
    bVar1 = *(byte *)(puVar7 + 5);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0xd) goto code_r0x003d2053;
code_r0x003d209f:
      param_2 = (uint *)&UNK_003d23a0;
    }
    else {
      if (puVar7[6] != 0xd) goto code_r0x003d209f;
code_r0x003d2053:
      if ((bVar1 & 1) == 0) {
        plVar11 = (long *)((long)puVar7 + 0x29);
      }
      else {
        plVar11 = (long *)puVar7[7];
      }
      if (*(long *)((long)plVar11 + 5) != 0x2a74656b636f7374 || *plVar11 != 0x6f737472616d732a)
      goto code_r0x003d209f;
      param_2 = (uint *)&UNK_003d2260;
    }
    apuStack_a0[0] = &UNK_003d20b3;
    uVar10 = _Z14fdevent_createiPFvijPvES_(*(undefined4 *)(puVar7 + 1),param_2,puVar7);
    *puVar7 = uVar10;
    if ((uStack_64 & 2) == 0) {
      param_2 = (uint *)0x1;
      apuStack_a0[0] = &UNK_003d20ca;
      _Z11fdevent_setP7fdeventj(uVar10);
    }
    puVar7[8] = puStack_80;
    if (puStack_80 != (uint *)0x0) {
      puVar7[10] = puVar7;
      param_2 = (uint *)(puVar7 + 9);
      puVar7[9] = &UNK_003d24d0;
      apuStack_a0[0] = &UNK_003d20f5;
      _ZN10atransport13AddDisconnectEP11adisconnect();
    }
    puVar16 = puRam0000000000a00620;
    apuStack_a0[0] = &UNK_003d2106;
    plVar11 = (long *)_Znwm(0x18);
    plVar11[2] = (long)puVar7;
    plVar11[1] = (long)puVar16;
    lVar19 = *(long *)puVar16;
    *plVar11 = lVar19;
    *(long **)(lVar19 + 8) = plVar11;
    *(long **)puVar16 = plVar11;
    *(long *)(puVar16 + 4) = *(long *)(puVar16 + 4) + 1;
    unaff_RBX = (uint *)0x0;
    puVar16 = puVar13;
  }
code_r0x003d2125:
  apuStack_a0[0] = &UNK_003d212a;
  puVar13 = puStack_60;
  _ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return unaff_RBX;
  }
  apuStack_a0[0] = &UNK_003d225b;
  func_0x0099bd00();
code_r0x003d225b:
  apuStack_a0[0] = &UNK_003d2260;
  func_0x0032e8f0();
  puStack_c0 = *(uint **)(in_FS_OFFSET + 0x28);
  puVar18 = unaff_RBX;
  puVar20 = puVar13;
  puStack_b8 = unaff_RBX;
  puStack_b0 = puVar16;
  puStack_a8 = puVar21;
  apuStack_a0[0] = &stack0xfffffffffffffff8;
  if (((ulong)param_2 & 1) != 0) {
    puVar18 = (uint *)((ulong)puVar13 & 0xffffffff);
    apuStack_a0[0] = &stack0xfffffffffffffff8;
    do {
      puVar20 = (uint *)((ulong)puVar13 & 0xffffffff);
      param_2 = (uint *)0x0;
      puStack_d8 = &UNK_003d229b;
      uVar5 = func_0x0099c280(puVar20,0,0);
      if (uVar5 != 0xffffffff) {
        if ((int)uVar5 < 0) {
          puVar18 = (uint *)(ulong)uVar5;
          puStack_d8 = &UNK_003d2360;
          puVar12 = (uint *)func_0x0099bce0();
          puVar21 = (uint *)(ulong)*puVar12;
          puVar20 = (uint *)(ulong)uVar5;
          puStack_d8 = &UNK_003d236d;
          func_0x0099bd10();
          puVar16 = puVar12;
        }
        else {
          puStack_d8 = &UNK_003d22cb;
          uVar6 = func_0x0099bf10(uVar5,1);
          if ((uVar6 & 0x80000001) == 0) {
            puStack_d8 = &UNK_003d22e5;
            func_0x0099bf10(uVar5,2,uVar6 | 1);
          }
          puStack_d8 = &UNK_003d22ea;
          puVar12 = (uint *)func_0x0099bce0();
          auStack_c8[1] = 0x10000;
          param_2 = (uint *)0x1;
          puStack_d8 = &UNK_003d230f;
          func_0x0099bf50(uVar5,1,8,auStack_c8 + 1,4);
          puStack_d8 = &UNK_003d231b;
          auStack_c8[0] = uVar5;
          puVar13 = (uint *)_Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE
                                      (auStack_c8);
          uVar5 = *puVar12;
          puVar21 = (uint *)(ulong)uVar5;
          puVar20 = (uint *)(ulong)auStack_c8[0];
          if (auStack_c8[0] != 0xffffffff) {
            puStack_d8 = &UNK_003d2334;
            func_0x0099bd10();
          }
          auStack_c8[0] = 0xffffffff;
          *puVar12 = uVar5;
          puVar18 = (uint *)0x0;
          puVar16 = puVar12;
          if (puVar13 != (uint *)0x0) {
            puStack_d8 = &UNK_003d2351;
            _Z22connect_to_smartsocketP7asocket();
            puVar21 = (uint *)(ulong)*puVar12;
            puVar18 = puVar12;
            puVar20 = puVar13;
          }
        }
        break;
      }
      puStack_d8 = &UNK_003d22a5;
      puVar12 = (uint *)func_0x0099bce0();
      puVar21 = (uint *)(ulong)*puVar12;
    } while (*puVar12 == 4);
    *puVar12 = (uint)puVar21;
  }
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_c0) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  puStack_d8 = &UNK_003d2392;
  func_0x0099bd00();
  puStack_100 = *(uint **)(in_FS_OFFSET + 0x28);
  puStack_f8 = puVar18;
  puStack_f0 = puVar7;
  puStack_e8 = puVar16;
  puStack_e0 = puVar21;
  puStack_d8 = (undefined *)apuStack_a0;
  ppuVar3 = apuStack_a0;
  if (((ulong)param_2 & 1) != 0) {
    do {
      puStack_d8 = (undefined *)ppuVar3;
      puVar16 = (uint *)((ulong)puVar20 & 0xffffffff);
      uVar5 = func_0x0099c280(puVar16,0,0);
      if (uVar5 != 0xffffffff) {
        if (-1 < (int)uVar5) {
          uVar6 = func_0x0099bf10(uVar5,1);
          if ((uVar6 & 0x80000001) == 0) {
            func_0x0099bf10(uVar5,2,uVar6 | 1);
          }
          puVar15 = (undefined4 *)func_0x0099bce0();
          *puVar15 = *puVar15;
          uStack_104 = uVar5;
          puVar16 = (uint *)_Z19create_local_socketN7android4base14unique_fd_implINS0_13DefaultCloserEEE
                                      (&uStack_104);
          uVar2 = *puVar15;
          puVar20 = (uint *)(ulong)uStack_104;
          if (uStack_104 != 0xffffffff) {
            func_0x0099bd10();
          }
          uStack_104 = 0xffffffff;
          *puVar15 = uVar2;
          if (puVar16 != (uint *)0x0) {
            *(undefined8 *)(puVar16 + 0xe) = *(undefined8 *)(extraout_RDX + 0x40);
            bVar22 = (*(byte *)(extraout_RDX + 0x28) & 1) != 0;
            lVar19 = extraout_RDX + 0x29;
            if (bVar22) {
              lVar19 = *(long *)(extraout_RDX + 0x38);
            }
            uVar8 = (ulong)(*(byte *)(extraout_RDX + 0x28) >> 1);
            if (bVar22) {
              uVar8 = *(ulong *)(extraout_RDX + 0x30);
            }
            _Z17connect_to_remoteP7asocketNSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE
                      (puVar16,lVar19,uVar8);
            puVar20 = puVar16;
          }
          goto code_r0x003d24a5;
        }
        piVar14 = (int *)func_0x0099bce0();
        iVar4 = *piVar14;
        puVar16 = (uint *)(ulong)uVar5;
        func_0x0099bd10();
        break;
      }
      piVar14 = (int *)func_0x0099bce0();
      iVar4 = *piVar14;
      ppuVar3 = (undefined **)puStack_d8;
    } while (iVar4 == 4);
    *piVar14 = iVar4;
    puVar20 = puVar16;
  }
code_r0x003d24a5:
  if (*(uint **)(in_FS_OFFSET + 0x28) == puStack_100) {
    return *(uint **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  puVar21 = puRam0000000000a00618;
  _ZNSt3__15mutex4lockEv(puRam0000000000a00618);
  puVar13 = puRam0000000000a00620;
  puVar16 = puRam0000000000a00620;
  do {
    puVar16 = *(uint **)(puVar16 + 2);
    if (puVar16 == puRam0000000000a00620) goto code_r0x003d2562;
    puVar18 = *(uint **)(puVar16 + 4);
  } while (puVar18 != puVar20);
  puVar18[0x10] = 0;
  puVar18[0x11] = 0;
  puVar7 = *(undefined8 **)(puVar16 + 2);
  *(undefined8 **)(*(long *)puVar16 + 8) = puVar7;
  *puVar7 = *(undefined8 *)puVar16;
  *(long *)(puVar13 + 4) = *(long *)(puVar13 + 4) + -1;
  lVar19 = *(long *)(puVar16 + 4);
  puVar16[4] = 0;
  puVar16[5] = 0;
  if (lVar19 != 0) {
    _ZN9alistenerD1Ev(lVar19);
    _ZdaPvSt11align_val_t(lVar19,0x58);
  }
  _ZdaPvSt11align_val_t(puVar16,0x18);
code_r0x003d2562:
  puVar16 = (uint *)pthread_mutex_unlock(puVar21);
  return puVar16;
}


