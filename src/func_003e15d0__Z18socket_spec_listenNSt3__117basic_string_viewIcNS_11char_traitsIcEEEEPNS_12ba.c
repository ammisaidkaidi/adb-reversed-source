// Function: _Z18socket_spec_listenNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPi
// Address: 003e15d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z18socket_spec_listenNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPi
                (int *param_1,ulong param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  char *pcVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  long *plVar20;
  undefined *puVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  char *pcVar26;
  long in_FS_OFFSET;
  byte *pbStack_d0;
  uint uStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 4) {
code_r0x003e1639:
    cVar4 = _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_
                      (param_1,param_2,&UNK_0017eda3,9);
    if (cVar4 == '\0') {
      plVar14 = (long *)(lRam0000000000a006b0 + 0x10);
      pbStack_d0 = (byte *)((long)param_3 + 1);
      do {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          func_0x0032ea60(param_3,&UNK_0017063f);
          uVar22 = *param_3;
          lVar9 = 0x16;
          if ((*param_3 & 1) != 0) {
            lVar9 = (uVar22 & 0xfffffffffffffffe) - 1;
          }
          if ((uVar22 & 1) == 0) {
            uVar25 = (ulong)((uint)(uVar22 >> 1) & 0x7f);
          }
          else {
            uVar25 = param_3[1];
          }
          if (lVar9 - uVar25 < param_2) {
            _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                      (param_3,lVar9,(param_2 - lVar9) + uVar25,uVar25,uVar25,0,param_2,param_1);
            uStack_b0 = 0xffffffff;
          }
          else {
            uStack_b0 = 0xffffffff;
            if (param_2 != 0) {
              if ((uVar22 & 1) != 0) {
                pbStack_d0 = (byte *)param_3[2];
              }
              func_0x0099bd90(pbStack_d0 + uVar25,param_1,param_2);
              uVar25 = uVar25 + param_2;
              if ((*param_3 & 1) == 0) {
                *(char *)param_3 = (char)uVar25 * '\x02';
              }
              else {
                param_3[1] = uVar25;
              }
              pbStack_d0[uVar25] = 0;
            }
          }
          break;
        }
        bVar1 = *(byte *)(plVar14 + 2);
        if ((bVar1 & 1) == 0) {
          uVar22 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar22 = plVar14[3];
        }
        lVar9 = plVar14[4];
        _auStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = (long *)0x0;
        uVar25 = uVar22 + 1;
        if (0xfffffffffffffff6 < uVar25) goto code_r0x003e2261;
        if (uVar25 < 0x17) {
          uVar24 = 0;
          _auStack_68 = (ulong)(byte)((char)uVar25 * '\x02');
        }
        else {
          lVar16 = (uVar25 | 7) + 1;
          if ((uVar25 | 7) == 0x17) {
            lVar16 = 0x1a;
          }
          uStack_58 = (long *)_Znwm(lVar16);
          _auStack_68 = lVar16 + 1;
          uVar24 = _auStack_68 & 0xffffffff;
          uStack_60 = uVar25;
        }
        if ((bVar1 & 1) == 0) {
          lVar9 = (long)plVar14 + 0x11;
        }
        plVar20 = uStack_58;
        if ((uVar24 & 1) == 0) {
          plVar20 = (long *)(auStack_68 + 1);
        }
        func_0x0099bda0(plVar20,lVar9,uVar22);
        uVar25 = _auStack_68;
        *(undefined2 *)((long)plVar20 + uVar22) = 0x3a;
        uVar22 = uStack_60;
        if ((_auStack_68 & 1) == 0) {
          uVar22 = _auStack_68 >> 1 & 0x7f;
        }
        if (param_2 < uVar22) {
code_r0x003e1912:
          bVar3 = false;
        }
        else {
          plVar20 = (long *)(auStack_68 + 1);
          if ((_auStack_68 & 1) != 0) {
            plVar20 = uStack_58;
          }
          iVar23 = func_0x0099bf90(param_1,plVar20,uVar22);
          if (iVar23 != 0) goto code_r0x003e1912;
          if (*(char *)((long)plVar14 + 0x2c) == '\0') {
            func_0x0032ea60(param_3,&UNK_00181b2a);
            uVar22 = *param_3;
            lVar9 = (uVar22 & 0xfffffffffffffffe) - 1;
            if ((*param_3 & 1) == 0) {
              lVar9 = 0x16;
            }
            if ((uVar22 & 1) == 0) {
              uVar24 = (ulong)((uint)(uVar22 >> 1) & 0x7f);
            }
            else {
              uVar24 = param_3[1];
            }
            if (lVar9 - uVar24 < param_2) {
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                        (param_3,lVar9,(param_2 - lVar9) + uVar24,uVar24,uVar24,0,param_2,param_1);
              uStack_b0 = 0xffffffff;
              bVar3 = true;
            }
            else {
              uStack_b0 = 0xffffffff;
              bVar3 = true;
              if (param_2 != 0) {
                pbVar15 = pbStack_d0;
                if ((uVar22 & 1) != 0) {
                  pbVar15 = (byte *)param_3[2];
                }
                func_0x0099bd90(pbVar15 + uVar24,param_1,param_2);
                uVar24 = uVar24 + param_2;
                if ((*param_3 & 1) == 0) {
                  *(char *)param_3 = (char)uVar24 * '\x02';
                }
                else {
                  param_3[1] = uVar24;
                }
                pbVar15[uVar24] = 0;
              }
            }
          }
          else {
            uStack_b0 = socket_local_server(uVar22 + (long)param_1,*(undefined4 *)(plVar14 + 5),1);
            bVar3 = true;
            if (uStack_b0 == 0xffffffff) {
              puVar10 = (undefined4 *)func_0x0099bce0();
              uVar11 = func_0x0099bd20(*puVar10);
              func_0x0032ea60(param_3,uVar11);
              uStack_b0 = 0xffffffff;
              bVar3 = true;
            }
          }
        }
        if ((uVar25 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_58,_auStack_68 & 0xfffffffffffffffe);
        }
      } while (!bVar3);
    }
    else {
      pcVar26 = (char *)((long)param_1 + 9);
      pcVar18 = (char *)((long)param_1 + param_2);
      pcVar13 = pcVar26;
      pcVar17 = pcVar18;
      if (param_2 == 9) {
code_r0x003e1672:
        if ((pcVar13 == pcVar18) || (pcVar17 = pcVar13, 9 < (byte)(*pcVar13 - 0x30U)))
        goto code_r0x003e1c1f;
        uStack_58 = (long *)0x0;
        uStack_50 = 0;
        _auStack_68 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        lVar9 = 10;
        while (cVar4 = *pcVar13, 0xf5 < (byte)(cVar4 - 0x3aU)) {
          pcVar13 = pcVar13 + 1;
          (&uStack_6c)[lVar9] = (uint)(byte)(cVar4 - 0x30);
          lVar9 = lVar9 + -1;
          if ((lVar9 == 0) || (pcVar13 == pcVar18)) break;
        }
        lVar16 = lVar9 << 0x20;
        uVar22 = lVar16 >> 0x1e;
        uVar19 = *(uint *)(auStack_68 + uVar22);
        if (((((int)lVar9 < 8) &&
             ((((uVar19 = uVar19 + *(int *)(auStack_68 + uVar22 + 4) * 10, uVar22 < 0x1c &&
                (uVar19 = uVar19 + *(int *)((long)&uStack_60 + uVar22) * 100, uVar22 < 0x18)) &&
               (uVar19 = uVar19 + *(int *)((long)&uStack_60 + uVar22 + 4) * 1000, uVar22 < 0x14)) &&
              ((uVar19 = uVar19 + *(int *)((long)&uStack_58 + uVar22) * 10000, uVar22 < 0x10 &&
               (uVar19 = uVar19 + *(int *)((long)&uStack_58 + uVar22 + 4) * 100000, uVar22 < 0xc))))
             )) && (uVar19 = uVar19 + *(int *)((long)&uStack_50 + uVar22) * 1000000, uVar22 < 8)) &&
           (uVar19 = uVar19 + *(int *)((long)&uStack_50 + uVar22 + 4) * 10000000, lVar16 == 0)) {
          uVar19 = (int)uStack_48 * 100000000 + uVar19;
        }
        lVar9 = (uStack_48 >> 0x20) *
                (ulong)*(uint *)(&UNK_0018ee30 + (0x900000000 - lVar16 >> 0x1e));
        uVar6 = (uint)lVar9;
        pcVar13 = pcVar13 + -(ulong)((int)((ulong)lVar9 >> 0x20) != 0);
        if (pcVar13 != pcVar18) {
          if (((byte)(*pcVar13 - 0x30U) < 10) || (CARRY4(uVar19,uVar6))) goto code_r0x003e1def;
code_r0x003e1de1:
          if ((pcVar13 != pcVar18) || (iVar23 = uVar6 + uVar19, iVar23 < 0)) goto code_r0x003e1def;
          goto code_r0x003e1c36;
        }
        if (!CARRY4(uVar19,uVar6)) goto code_r0x003e1de1;
      }
      else {
        lVar9 = param_2 - 9;
        do {
          if (*pcVar13 != '0') goto code_r0x003e1672;
          pcVar13 = pcVar13 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
code_r0x003e1c1f:
        iVar23 = 0;
        if (pcVar17 != pcVar26 && pcVar17 == pcVar18) {
code_r0x003e1c36:
          uVar19 = func_0x0099bf10(iVar23,1);
          if ((int)uVar19 < 0) {
            puVar10 = (undefined4 *)func_0x0099bce0();
            uVar11 = func_0x0099bd20(*puVar10);
            puVar21 = &UNK_00184a01;
code_r0x003e1ca3:
            _ZN7android4base12StringPrintfEPKcz(auStack_68,puVar21,iVar23,uVar11);
          }
          else {
            if ((uVar19 & 1) == 0) {
              uStack_a8 = uStack_a8 & 0xffffffff00000000;
              uStack_88 = (char *)CONCAT44(uStack_88._4_4_,4);
              iVar7 = func_0x0099c360(iVar23,1,3,&uStack_a8,&uStack_88);
              if (iVar7 == 0) {
                uStack_b0 = func_0x0099bf10(iVar23,0x406,0);
                if (-1 < (int)uStack_b0) goto code_r0x003e2117;
                puVar10 = (undefined4 *)func_0x0099bce0();
                uVar11 = func_0x0099bd20(*puVar10);
                puVar21 = &UNK_001834e0;
                goto code_r0x003e1ca3;
              }
              puVar21 = &UNK_00161405;
            }
            else {
              puVar21 = &UNK_00167b52;
            }
            _ZN7android4base12StringPrintfEPKcz(auStack_68,puVar21,iVar23);
          }
          func_0x00353730(param_3,auStack_68);
          if ((_auStack_68 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_58,_auStack_68 & 0xfffffffffffffffe);
          }
          uStack_b0 = 0xffffffff;
          goto code_r0x003e2117;
        }
      }
code_r0x003e1def:
      if ((*param_3 & 1) == 0) {
        *(byte *)param_3 = 0x14;
        pbVar15 = (byte *)((long)param_3 + 1);
      }
      else {
        param_3[1] = 10;
        pbVar15 = (byte *)param_3[2];
      }
      pbVar15[0] = 0x69;
      pbVar15[1] = 0x6e;
      pbVar15[2] = 0x76;
      pbVar15[3] = 0x61;
      pbVar15[4] = 0x6c;
      pbVar15[5] = 0x69;
      pbVar15[6] = 100;
      pbVar15[7] = 0x20;
      pbVar15[8] = 0x66;
      pbVar15[9] = 100;
      pbVar15[10] = 0;
      uStack_b0 = 0xffffffff;
    }
  }
  else {
    if (*param_1 == 0x3a706374) {
      _auStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = (long *)0x0;
      uStack_a8 = uStack_a8 & 0xffffffff00000000;
      cVar4 = _Z21parse_tcp_socket_specNSt3__117basic_string_viewIcNS_11char_traitsIcEEEEPNS_12basic_stringIcS2_NS_9allocatorIcEEEEPiS8_S8_
                        (param_1,param_2,auStack_68,&uStack_a8,0,param_3);
      uVar22 = _auStack_68;
      uStack_b0 = 0xffffffff;
      if (cVar4 != '\0') {
        if ((_auStack_68 & 1) == 0) {
          uVar25 = _auStack_68 >> 1 & 0x7f;
          if (uVar25 == 0) goto code_r0x003e1d48;
code_r0x003e1d89:
          uVar5 = 1;
          if (uVar25 != 0) {
            if (uVar25 == 3) {
              plVar14 = uStack_58;
              if ((_auStack_68 & 1) == 0) {
                plVar14 = (long *)(auStack_68 + 1);
              }
              if (*(char *)((long)plVar14 + 2) == '1' && (short)*plVar14 == 0x3a3a) {
                uVar5 = 0;
                goto code_r0x003e20c0;
              }
            }
            else if (uVar25 == 9) {
              plVar14 = uStack_58;
              if ((_auStack_68 & 1) == 0) {
                plVar14 = (long *)(auStack_68 + 1);
              }
              if ((char)plVar14[1] == 't' && *plVar14 == 0x736f686c61636f6c) goto code_r0x003e20c0;
            }
            func_0x0032ea60(param_3,&UNK_00170609);
            goto joined_r0x003e2104;
          }
code_r0x003e20c0:
          uVar19 = _Z23network_loopback_serveriiPNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEb
                             (uStack_a8 & 0xffffffff,1,param_3,uVar5);
        }
        else {
          uVar25 = uStack_60;
          if (uStack_60 != 0) goto code_r0x003e1d89;
code_r0x003e1d48:
          if (gListenAll == '\0') goto code_r0x003e1d89;
          uVar19 = socket_inaddr_any_server(uStack_a8 & 0xffffffff,1);
          if (uVar19 == 0xffffffff) {
            puVar10 = (undefined4 *)func_0x0099bce0();
            uVar11 = func_0x0099bd20(*puVar10);
            func_0x0032ea60(param_3,uVar11);
            goto joined_r0x003e2104;
          }
        }
        uStack_b0 = uVar19;
        if (param_4 != (undefined4 *)0x0 && -1 < (int)uVar19) {
          uVar8 = socket_get_local_port(uVar19);
          *param_4 = uVar8;
        }
      }
    }
    else {
      if ((param_2 < 6) || ((short)param_1[1] != 0x3a6b || *param_1 != 0x636f7376))
      goto code_r0x003e1639;
      _auStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = (long *)0x0;
      if (0xfffffffffffffff6 < param_2) {
code_r0x003e2261:
        uStack_58 = (long *)0x0;
        uStack_60 = 0;
        _auStack_68 = 0;
        func_0x0032e8f0();
        goto code_r0x003e2266;
      }
      if (param_2 < 0x17) {
        _auStack_68 = (ulong)(byte)((char)param_2 * '\x02');
        plVar14 = (long *)(auStack_68 + 1);
      }
      else {
        lVar9 = 0x1a;
        if ((param_2 | 7) != 0x17) {
          lVar9 = (param_2 | 7) + 1;
        }
        plVar14 = (long *)_Znwm(lVar9);
        _auStack_68 = lVar9 + 1;
        uStack_60 = param_2;
        uStack_58 = plVar14;
      }
      func_0x0099bda0(plVar14,param_1,param_2);
      *(undefined1 *)((long)plVar14 + param_2) = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      lStack_98 = 0;
      uStack_88 = (char *)CONCAT53(uStack_88._3_5_,0x3a02);
      _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
                (&uStack_a8,auStack_68,&uStack_88);
      if (((ulong)uStack_88 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
      }
      if (uStack_a0 - uStack_a8 == 0x30) {
        if ((*(byte *)(uStack_a8 + 0x18) & 1) == 0) {
          lVar9 = uStack_a8 + 0x19;
        }
        else {
          lVar9 = *(long *)(uStack_a8 + 0x28);
        }
        plVar14 = (long *)func_0x0099be00();
        pcVar26 = (char *)(lVar9 + -1);
        do {
          pcVar13 = pcVar26;
          pcVar26 = pcVar13 + 1;
        } while ((*(byte *)(*plVar14 + 1 + (long)pcVar13[1] * 2) & 0x20) != 0);
        uVar8 = 10;
        if (pcVar13[1] == '0') {
          uVar8 = 0x10;
          if (pcVar13[2] != 'x') {
            uVar8 = 10;
            if (pcVar13[2] == 'X') {
              uVar8 = 0x10;
            }
          }
        }
        piVar12 = (int *)func_0x0099bce0();
        *piVar12 = 0;
        uStack_88 = (char *)0x0;
        lVar9 = func_0x0099beb0(pcVar26,&uStack_88,uVar8);
        if (*piVar12 != 0) {
code_r0x003e1ff7:
          puVar21 = &UNK_001849c3;
code_r0x003e1ffe:
          func_0x0032ea60(param_3,puVar21);
          *piVar12 = 0x16;
          goto code_r0x003e2011;
        }
        iVar23 = 0x16;
        if ((pcVar26 == uStack_88) || (*uStack_88 != '\0')) {
code_r0x003e1ff4:
          *piVar12 = iVar23;
          goto code_r0x003e1ff7;
        }
        iVar23 = 0x22;
        if ((int)(uint)lVar9 != lVar9) goto code_r0x003e1ff4;
        if (lVar9 < 0) {
          puVar21 = &UNK_001613ec;
          goto code_r0x003e1ffe;
        }
        uStack_b0 = func_0x0099c340(0x28,0x80001,0);
        if (uStack_b0 == 0xffffffff) {
          iVar23 = *piVar12;
          uVar11 = func_0x0099bd20(iVar23);
          _ZN7android4base12StringPrintfEPKcz(&uStack_88,&UNK_00175605,uVar11);
          func_0x00353730(param_3,&uStack_88);
          if (((ulong)uStack_88 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
          }
code_r0x003e2216:
          uStack_b0 = 0xffffffff;
        }
        else {
          uStack_88 = (char *)CONCAT44(-(uint)(lVar9 == 0) | (uint)lVar9,0x28);
          uStack_80 = 0xffffffff;
          uStack_ac = 0x10;
          iVar23 = func_0x0099c370(uStack_b0,&uStack_88,0x10);
          if ((iVar23 != 0) || (iVar23 = func_0x0099c380(uStack_b0,4), iVar23 != 0)) {
code_r0x003e21b4:
            iVar23 = *piVar12;
            func_0x0099bd10(uStack_b0);
            goto code_r0x003e2216;
          }
          if (param_4 != (undefined4 *)0x0 && -1 < (int)uStack_b0) {
            iVar23 = func_0x0099c390(uStack_b0,&uStack_88,&uStack_ac);
            if (iVar23 != 0) goto code_r0x003e21b4;
            *param_4 = uStack_88._4_4_;
          }
          iVar23 = *piVar12;
        }
        *piVar12 = iVar23;
      }
      else {
        func_0x0032ea60(param_3,&UNK_00186642);
code_r0x003e2011:
        uStack_b0 = 0xffffffff;
      }
      uVar24 = uStack_a8;
      uVar25 = uStack_a0;
      uVar22 = _auStack_68;
      if (uStack_a8 != 0) {
        for (; uVar24 != uVar25; uVar25 = uVar25 - 0x18) {
          if ((*(byte *)(uVar25 - 0x18) & 1) != 0) {
            _ZdaPvSt11align_val_t
                      (*(undefined8 *)(uVar25 - 8),*(ulong *)(uVar25 - 0x18) & 0xfffffffffffffffe);
          }
        }
        uStack_a0 = uVar24;
        _ZdaPvSt11align_val_t(uStack_a8,lStack_98 - uStack_a8);
        uVar22 = _auStack_68;
      }
    }
joined_r0x003e2104:
    if ((uVar22 & 1) != 0) {
      _ZdaPvSt11align_val_t(uStack_58,_auStack_68 & 0xfffffffffffffffe);
    }
  }
code_r0x003e2117:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return (ulong)uStack_b0;
  }
code_r0x003e2266:
  func_0x0099bd00();
  pcVar2 = (code *)swi(3);
  uVar22 = (*pcVar2)();
  return uVar22;
}


