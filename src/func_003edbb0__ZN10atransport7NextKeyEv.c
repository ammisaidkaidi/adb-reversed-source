// Function: _ZN10atransport7NextKeyEv
// Address: 003edbb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN10atransport7NextKeyEv(byte *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined *puVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  byte *pbVar23;
  byte *unaff_R12;
  undefined8 unaff_R13;
  int iVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined1 auStack_108 [8];
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d0;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  byte *pbStack_98;
  undefined *puStack_90;
  undefined4 *puStack_80;
  undefined4 uStack_74;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_2 + 0x140) == 0) {
    pbVar16 = (byte *)(param_2 + 0x118);
    if ((((byte)adb_trace_mask & 1) != 0) && ((int)adb_trace_severity._0_4_ < 2)) {
      puStack_90 = &UNK_003edd47;
      cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
      if (cVar8 != '\0') {
        puStack_90 = &UNK_003edd54;
        puStack_80 = (undefined4 *)func_0x0099bce0();
        uStack_74 = *puStack_80;
        puStack_90 = &UNK_003edd83;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x704,1,0,0xffffffff);
        puStack_90 = &UNK_003edd8b;
        uVar15 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        puStack_90 = &UNK_003edd9f;
        unaff_R13 = func_0x0032eb30(uVar15,&UNK_00162ea9,0x1c);
        puStack_90 = &UNK_003eddb1;
        _ZNK10atransport11serial_nameEv(&bStack_70,param_2);
        puStack_90 = &UNK_003eddbc;
        func_0x0032e5a0(unaff_R13,&bStack_70);
        if ((bStack_70 & 1) != 0) {
          puStack_90 = &UNK_003eddd3;
          _ZdaPvSt11align_val_t(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
        }
        puStack_90 = &UNK_003edddc;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
        *puStack_80 = uStack_74;
      }
    }
    unaff_R12 = &bStack_70;
    puStack_90 = &UNK_003edcc3;
    _Z25adb_auth_get_private_keysv(unaff_R12);
    puStack_90 = &UNK_003edcce;
    func_0x003f1e70(pbVar16,unaff_R12);
    puStack_90 = &UNK_003edcd6;
    pbVar23 = unaff_R12;
    func_0x003f08a0();
    if (*(long *)(param_2 + 0x140) == 0) {
      pbVar16 = &bStack_70;
      puStack_90 = &UNK_003ede10;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (pbVar16,&UNK_0017a1e0,0x708,6,0,0xffffffff);
      puStack_90 = &UNK_003ede18;
      uVar15 = _ZN7android4base10LogMessage6streamEv(pbVar16);
      puStack_90 = &UNK_003ede2c;
      uVar15 = func_0x0032eb30(uVar15,&UNK_0017d6aa,0x1c);
      puStack_90 = &UNK_003ede40;
      func_0x0032eb30(uVar15,&UNK_0015ae05,1);
      puStack_90 = &UNK_003ede48;
      pbVar23 = pbVar16;
      _ZN7android4base10LogMessageD2Ev();
      goto code_r0x003edc7d;
    }
  }
  else {
    pbVar16 = *(byte **)(*(long *)(*(long *)(param_2 + 0x120) +
                                  (*(ulong *)(param_2 + 0x138) >> 8) * 8) + 8 +
                        (ulong)(((uint)*(ulong *)(param_2 + 0x138) & 0xff) << 4));
    pbVar23 = param_1;
    if (pbVar16 != (byte *)0x0) {
      LOCK();
      pbVar3 = pbVar16 + 8;
      lVar10 = *(long *)pbVar3;
      *(long *)pbVar3 = *(long *)pbVar3 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        puStack_90 = &UNK_003edc23;
        (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
        puStack_90 = &UNK_003edc2b;
        pbVar23 = pbVar16;
        _ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    lVar10 = *(long *)(param_2 + 0x140) + -1;
    *(long *)(param_2 + 0x140) = lVar10;
    uVar17 = *(long *)(param_2 + 0x138) + 1;
    *(ulong *)(param_2 + 0x138) = uVar17;
    if (0x1ff < uVar17) {
      pbVar23 = (byte *)**(undefined8 **)(param_2 + 0x120);
      puStack_90 = &UNK_003edc6a;
      _ZdaPvSt11align_val_t(pbVar23,0x1000);
      *(long *)(param_2 + 0x120) = *(long *)(param_2 + 0x120) + 8;
      *(long *)(param_2 + 0x138) = *(long *)(param_2 + 0x138) + -0x100;
code_r0x003edc7d:
      lVar10 = *(long *)(param_2 + 0x140);
    }
    if (lVar10 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      goto code_r0x003edd16;
    }
  }
  lVar10 = *(long *)(*(long *)(param_2 + 0x120) + (*(ulong *)(param_2 + 0x138) >> 8) * 8);
  uVar17 = (ulong)(((uint)*(ulong *)(param_2 + 0x138) & 0xff) << 4);
  lVar12 = *(long *)(lVar10 + 8 + uVar17);
  puVar14 = (undefined4 *)(lVar10 + uVar17);
  uVar1 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  *(undefined4 *)param_1 = *puVar14;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  if (lVar12 != 0) {
    LOCK();
    plVar2 = (long *)(lVar12 + 8);
    *plVar2 = *plVar2 + 1;
    UNLOCK();
  }
code_r0x003edd16:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  puStack_90 = &UNK_003ede52;
  func_0x0099bd00();
  pbStack_c0 = *(byte **)(in_FS_OFFSET + 0x28);
  pbStack_b8 = param_1;
  pbStack_b0 = unaff_R12;
  uStack_a8 = unaff_R13;
  lStack_a0 = param_2;
  pbStack_98 = pbVar16;
  puStack_90 = &stack0xfffffffffffffff8;
  do {
    uStack_f8 = 1;
    pbStack_100 = pbVar23;
    _ZNSt3__15mutex4lockEv(pbVar23);
    if (*(long *)(pbVar23 + 0x78) == 0) {
      _ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(pbVar23 + 0x38,&pbStack_100)
      ;
      if (pbVar23[0x28] != 1) goto code_r0x003ee167;
code_r0x003edee8:
      pbVar16 = *(byte **)(pbVar23 + 0x68);
      if (pbVar16 != pbVar23 + 0x70) {
        do {
          if (*(char *)(*(long *)(pbVar16 + 0x20) + 200) == '\x01') {
            if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
               (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
              puVar14 = (undefined4 *)func_0x0099bce0();
              uVar1 = *puVar14;
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_108,&UNK_0017a1e0,0xde,1,0,0xffffffff);
              uVar15 = _ZN7android4base10LogMessage6streamEv(auStack_108);
              lVar10 = *(long *)(pbVar16 + 0x20);
              if ((*(byte *)(lVar10 + 0x28) & 1) == 0) {
                lVar10 = lVar10 + 0x29;
              }
              else {
                lVar10 = *(long *)(lVar10 + 0x38);
              }
              _ZN7android4base12StringPrintfEPKcz(&puStack_f0,&UNK_0018adf6,lVar10);
              func_0x0032e5a0(uVar15,&puStack_f0);
              if (((ulong)puStack_f0 & 1) != 0) {
                _ZdaPvSt11align_val_t(uStack_e0,(ulong)puStack_f0 & 0xfffffffffffffffe);
              }
              _ZN7android4base10LogMessageD2Ev(auStack_108);
              *puVar14 = uVar1;
            }
            puStack_e8 = *(undefined **)(pbVar16 + 0x20);
            puStack_f0 = &UNK_0099eda8;
            ppuStack_d0 = &puStack_f0;
            _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_f0);
            if (ppuStack_d0 == &puStack_f0) {
              lVar10 = 0x20;
code_r0x003ee006:
              (**(code **)(*ppuStack_d0 + lVar10))();
            }
            else {
              lVar10 = 0x28;
              if (ppuStack_d0 != (undefined **)0x0) goto code_r0x003ee006;
            }
            pbVar3 = *(byte **)(pbVar16 + 8);
            pbVar18 = pbVar16;
            if (*(byte **)(pbVar16 + 8) == (byte *)0x0) {
              do {
                pbVar25 = *(byte **)(pbVar18 + 0x10);
                bVar26 = pbVar18 != *(byte **)pbVar25;
                pbVar18 = pbVar25;
              } while (bVar26);
            }
            else {
              do {
                pbVar25 = pbVar3;
                pbVar3 = *(byte **)pbVar25;
              } while (*(byte **)pbVar25 != (byte *)0x0);
            }
            if (*(byte **)(pbVar23 + 0x68) == pbVar16) {
              *(byte **)(pbVar23 + 0x68) = pbVar25;
            }
            *(long *)(pbVar23 + 0x78) = *(long *)(pbVar23 + 0x78) + -1;
            func_0x003d6d50(*(long *)(pbVar23 + 0x70),pbVar16);
            _ZdaPvSt11align_val_t(pbVar16);
            pbVar16 = pbVar25;
          }
          else {
            pbVar3 = *(byte **)(pbVar16 + 8);
            pbVar18 = pbVar16;
            if (*(byte **)(pbVar16 + 8) == (byte *)0x0) {
              do {
                pbVar16 = *(byte **)(pbVar18 + 0x10);
                bVar26 = pbVar18 != *(byte **)pbVar16;
                pbVar18 = pbVar16;
              } while (bVar26);
            }
            else {
              do {
                pbVar16 = pbVar3;
                pbVar3 = *(byte **)pbVar16;
              } while (*(byte **)pbVar16 != (byte *)0x0);
            }
          }
        } while (pbVar16 != pbVar23 + 0x70);
      }
      iVar24 = 2;
      if (*(long *)(pbVar23 + 0x78) == 0) goto code_r0x003ee16d;
      lVar10 = _ZNSt3__16chrono12steady_clock3nowEv();
      plVar2 = *(long **)(pbVar23 + 0x68);
      if (lVar10 < plVar2[5]) goto code_r0x003ee16d;
      plVar7 = (long *)plVar2[1];
      plVar20 = plVar2;
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar20[2];
          bVar26 = plVar20 != (long *)*plVar11;
          plVar20 = plVar11;
        } while (bVar26);
      }
      else {
        do {
          plVar11 = plVar7;
          plVar7 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      puVar19 = (undefined *)plVar2[4];
      lVar10 = plVar2[6];
      *(long **)(pbVar23 + 0x68) = plVar11;
      *(long *)(pbVar23 + 0x78) = *(long *)(pbVar23 + 0x78) + -1;
      func_0x003d6d50(*(long *)(pbVar23 + 0x70),plVar2);
      _ZdaPvSt11align_val_t(plVar2,0x38);
      iVar24 = 0;
      bVar26 = true;
    }
    else {
      func_0x003d06b0(pbVar23 + 0x38,&pbStack_100,*(long *)(pbVar23 + 0x68) + 0x28);
      if (pbVar23[0x28] == 1) goto code_r0x003edee8;
code_r0x003ee167:
      iVar24 = 1;
code_r0x003ee16d:
      lVar10 = 0;
      puVar19 = (undefined *)0x0;
      bVar26 = false;
    }
    if ((char)uStack_f8 == '\x01') {
      _ZNSt3__115recursive_mutex6unlockEv(pbStack_100);
    }
    if (!bVar26) goto code_r0x003ede9c;
    if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
       (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
      puVar14 = (undefined4 *)func_0x0099bce0();
      uVar1 = *puVar14;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (&pbStack_100,&UNK_0017a1e0,0xf4,1,0,0xffffffff);
      uVar15 = _ZN7android4base10LogMessage6streamEv(&pbStack_100);
      if ((puVar19[0x28] & 1) == 0) {
        puVar21 = puVar19 + 0x29;
      }
      else {
        puVar21 = *(undefined **)(puVar19 + 0x38);
      }
      _ZN7android4base12StringPrintfEPKcz(&puStack_f0,&UNK_00167b87,puVar21);
      func_0x0032e5a0(uVar15,&puStack_f0);
      if (((ulong)puStack_f0 & 1) != 0) {
        _ZdaPvSt11align_val_t(uStack_e0,(ulong)puStack_f0 & 0xfffffffffffffffe);
      }
      _ZN7android4base10LogMessageD2Ev(&pbStack_100);
      *puVar14 = uVar1;
    }
    plVar2 = *(long **)(puVar19 + 400);
    puStack_f0 = puVar19;
    if (plVar2 == (long *)0x0) {
      func_0x00343f00();
      goto code_r0x003ee7cc;
    }
    iVar9 = (**(code **)(*plVar2 + 0x30))(plVar2,&puStack_f0);
    if (iVar9 == 2) {
      if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
         (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
        puVar14 = (undefined4 *)func_0x0099bce0();
        uVar1 = *puVar14;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&pbStack_100,&UNK_0017a1e0,0x112,1,0,0xffffffff);
        uVar15 = _ZN7android4base10LogMessage6streamEv(&pbStack_100);
        if ((puVar19[0x28] & 1) == 0) {
          puVar21 = puVar19 + 0x29;
        }
        else {
          puVar21 = *(undefined **)(puVar19 + 0x38);
        }
        puVar22 = &UNK_00162ec6;
code_r0x003ee765:
        _ZN7android4base12StringPrintfEPKcz(&puStack_f0,puVar22,puVar21);
        func_0x0032e5a0(uVar15,&puStack_f0);
        if (((ulong)puStack_f0 & 1) != 0) {
          _ZdaPvSt11align_val_t(uStack_e0,(ulong)puStack_f0 & 0xfffffffffffffffe);
        }
        _ZN7android4base10LogMessageD2Ev(&pbStack_100);
        *puVar14 = uVar1;
      }
code_r0x003ee3f3:
      puStack_f0 = &UNK_0099eda8;
code_r0x003ee406:
      puStack_e8 = puVar19;
      ppuStack_d0 = &puStack_f0;
      _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(&puStack_f0);
      if (ppuStack_d0 == &puStack_f0) {
        lVar10 = 0x20;
code_r0x003ede90:
        (**(code **)(*ppuStack_d0 + lVar10))();
      }
      else {
        lVar10 = 0x28;
        if (ppuStack_d0 != (undefined **)0x0) goto code_r0x003ede90;
      }
      iVar24 = 2;
    }
    else {
      if (iVar9 == 1) {
        if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
           (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
          puVar14 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar14;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_100,&UNK_0017a1e0,0x10c,1,0,0xffffffff);
          uVar15 = _ZN7android4base10LogMessage6streamEv(&pbStack_100);
          if ((puVar19[0x28] & 1) == 0) {
            puVar21 = puVar19 + 0x29;
          }
          else {
            puVar21 = *(undefined **)(puVar19 + 0x38);
          }
          _ZN7android4base12StringPrintfEPKcz(&puStack_f0,&UNK_0016ec8e,puVar21);
          func_0x0032e5a0(uVar15,&puStack_f0);
          if (((ulong)puStack_f0 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_e0,(ulong)puStack_f0 & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&pbStack_100);
          *puVar14 = uVar1;
        }
        puStack_f0 = &UNK_0099ee38;
        goto code_r0x003ee406;
      }
      iVar24 = 0;
      if (iVar9 == 0) {
        if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
           (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
          puVar14 = (undefined4 *)func_0x0099bce0();
          uVar1 = *puVar14;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (&pbStack_100,&UNK_0017a1e0,0xf9,1,0,0xffffffff);
          uVar15 = _ZN7android4base10LogMessage6streamEv(&pbStack_100);
          if ((puVar19[0x28] & 1) == 0) {
            puVar21 = puVar19 + 0x29;
          }
          else {
            puVar21 = *(undefined **)(puVar19 + 0x38);
          }
          _ZN7android4base12StringPrintfEPKcz(&puStack_f0,&UNK_00187dd0,puVar21);
          func_0x0032e5a0(uVar15,&puStack_f0);
          if (((ulong)puStack_f0 & 1) != 0) {
            _ZdaPvSt11align_val_t(uStack_e0,(ulong)puStack_f0 & 0xfffffffffffffffe);
          }
          _ZN7android4base10LogMessageD2Ev(&pbStack_100);
          *puVar14 = uVar1;
        }
        pbVar16 = pbVar23 + 0x70;
        if (lVar10 == 0) {
          if (((((byte)adb_trace_mask & 8) != 0) && ((int)adb_trace_severity._12_4_ < 2)) &&
             (cVar8 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0), cVar8 != '\0')) {
            puVar14 = (undefined4 *)func_0x0099bce0();
            uVar1 = *puVar14;
            _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                      (&pbStack_100,&UNK_0017a1e0,0xfc,1,0,0xffffffff);
            uVar15 = _ZN7android4base10LogMessage6streamEv(&pbStack_100);
            if ((puVar19[0x28] & 1) == 0) {
              puVar21 = puVar19 + 0x29;
            }
            else {
              puVar21 = *(undefined **)(puVar19 + 0x38);
            }
            puVar22 = &UNK_00184a56;
            goto code_r0x003ee765;
          }
          goto code_r0x003ee3f3;
        }
        _ZNSt3__15mutex4lockEv(pbVar23);
        lVar12 = _ZNSt3__16chrono12steady_clock3nowEv();
        lVar12 = lVar12 + 3000000000;
        pbVar3 = *(byte **)(pbVar23 + 0x70);
        while (pbVar18 = pbVar16, pbVar3 != (byte *)0x0) {
          while( true ) {
            pbVar16 = pbVar3;
            lVar4 = *(long *)(pbVar16 + 0x28);
            bVar26 = lVar12 < lVar4;
            if (lVar12 == lVar4) {
              bVar26 = puVar19 < *(undefined **)(pbVar16 + 0x20);
            }
            if (bVar26) break;
            bVar26 = lVar4 < lVar12;
            if (lVar4 == lVar12) {
              bVar26 = *(undefined **)(pbVar16 + 0x20) < puVar19;
            }
            if (!bVar26) goto code_r0x003ee2fd;
            pbVar3 = *(byte **)(pbVar16 + 8);
            if (*(byte **)(pbVar16 + 8) == (byte *)0x0) {
              pbVar18 = pbVar16 + 8;
              goto code_r0x003ee2a5;
            }
          }
          pbVar3 = *(byte **)pbVar16;
        }
code_r0x003ee2a5:
        puVar13 = (undefined8 *)_Znwm(0x38);
        puVar13[4] = puVar19;
        puVar13[5] = lVar12;
        puVar13[6] = lVar10 + -1;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = pbVar16;
        *(undefined8 **)pbVar18 = puVar13;
        if (**(long **)(pbVar23 + 0x68) != 0) {
          *(long *)(pbVar23 + 0x68) = **(long **)(pbVar23 + 0x68);
          puVar13 = *(undefined8 **)pbVar18;
        }
        func_0x003d6af0(*(long *)(pbVar23 + 0x70),puVar13);
        *(long *)(pbVar23 + 0x78) = *(long *)(pbVar23 + 0x78) + 1;
code_r0x003ee2fd:
        _ZNSt3__115recursive_mutex6unlockEv(pbVar23);
        iVar24 = 2;
      }
    }
code_r0x003ede9c:
  } while (iVar24 != 1);
  if (*(byte **)(in_FS_OFFSET + 0x28) == pbStack_c0) {
    return *(byte **)(in_FS_OFFSET + 0x28);
  }
code_r0x003ee7cc:
  func_0x0099bd00();
  pbVar16 = (byte *)free();
  return pbVar16;
}


