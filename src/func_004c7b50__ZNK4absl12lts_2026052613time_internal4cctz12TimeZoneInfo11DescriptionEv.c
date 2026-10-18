// Function: _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo11DescriptionEv
// Address: 004c7b50
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK4absl12lts_2026052613time_internal4cctz12TimeZoneInfo11DescriptionEv
                 (long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *extraout_RDX;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [10];
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar21 = &stack0xfffffffffffffff8;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_d8 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  alStack_128[8] = 0;
  alStack_128[9] = 0;
  alStack_128[6] = 0;
  alStack_128[7] = 0;
  alStack_128[4] = 0;
  alStack_128[5] = 0;
  alStack_128[2] = 0;
  alStack_128[3] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  puVar16 = _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;
  uStack_140 = 0x9ba390;
  uStack_d0 = 0x9ba3b8;
  _ZNSt3__18ios_base4initEPv(&uStack_d0,&uStack_138);
  uStack_48 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_40._0_4_ = 0xffffffff;
  uStack_140 = 0x9ba3f8;
  uStack_d0 = 0x9ba420;
  uStack_138 = 0x9b9bf8;
  _ZNSt3__16localeC2Ev(&uStack_130);
  alStack_128[4] = 0;
  alStack_128[5] = 0;
  alStack_128[2] = 0;
  alStack_128[3] = 0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  uStack_138 = 0x9b9f28;
  alStack_128[6] = 0;
  alStack_128[7] = 0;
  alStack_128[8] = 0;
  alStack_128[9] = 0;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,0x10);
  func_0x00348610(&uStack_138);
  puVar15 = &uStack_140;
  uVar2 = func_0x0032eb30(puVar15,&UNK_00170a5c,7);
  pcVar17 = (char *)0xaaaaaaaaaaaaaaab;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
            (uVar2,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) * -0x5555555555555555);
  uVar2 = func_0x0032eb30(puVar15,&UNK_00183909,8);
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm
            (uVar2,(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 4) *
                   -0x5555555555555555);
  uVar2 = func_0x0032eb30(puVar15,&UNK_0017da4a,7);
  bVar18 = (*(byte *)(param_2 + 0x70) & 1) != 0;
  lVar5 = param_2 + 0x71;
  if (bVar18) {
    lVar5 = *(long *)(param_2 + 0x80);
  }
  uVar13 = (ulong)(*(byte *)(param_2 + 0x70) >> 1);
  if (bVar18) {
    uVar13 = *(ulong *)(param_2 + 0x78);
  }
  puVar3 = (undefined8 *)func_0x0032eb30(uVar2,lVar5,uVar13);
  func_0x0032eb30(puVar3,&UNK_00162c6d,1);
  if ((uStack_d8 & 0x10) == 0) {
    plVar4 = (long *)0x0;
    uVar13 = 0;
    if ((uStack_d8 & 8) != 0) {
      plVar4 = alStack_128;
      uVar13 = alStack_128[2];
      goto code_r0x004c7dda;
    }
code_r0x004c7df0:
    *(char *)param_1 = (char)uVar13 * '\x02';
    pcVar17 = (char *)((long)param_1 + 1);
  }
  else {
    if ((ulong)alStack_128[9] < (ulong)alStack_128[4]) {
      alStack_128[9] = alStack_128[4];
    }
    plVar4 = alStack_128 + 3;
    uVar13 = alStack_128[9];
code_r0x004c7dda:
    plVar4 = (long *)*plVar4;
    uVar13 = uVar13 - (long)plVar4;
    if (0xfffffffffffffff6 < uVar13) goto code_r0x004c7efc;
    if (uVar13 < 0x17) goto code_r0x004c7df0;
    lVar5 = 0x1a;
    if ((uVar13 | 7) != 0x17) {
      lVar5 = (uVar13 | 7) + 1;
    }
    pcVar17 = (char *)_Znwm(lVar5);
    *param_1 = lVar5 + 1;
    param_1[1] = uVar13;
    param_1[2] = (long)pcVar17;
  }
  puVar15 = &uStack_d0;
  func_0x0099bd90(pcVar17,plVar4,uVar13);
  pcVar17[uVar13] = '\0';
  uStack_140 = 0x9ba3f8;
  uStack_d0 = 0x9ba420;
  uStack_138 = 0x9b9f28;
  if ((alStack_128[6] & 1U) != 0) {
    _ZdaPvSt11align_val_t(alStack_128[8],alStack_128[6] & 0xfffffffffffffffe);
  }
  uStack_138 = 0x9b9bf8;
  _ZNSt3__16localeD2Ev(&uStack_130);
  puVar16 = _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE + 8;
  plVar4 = (long *)puVar16;
  _ZNSt3__18ios_base4InitD1Ev(&uStack_140);
  puVar3 = puVar15;
  _ZNSt3__19basic_iosIwNS_11char_traitsIwEEED1Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x004c7efc:
  func_0x0032e8f0();
  uVar2 = 0x9b9f28;
  plVar14 = (long *)puVar3[1];
  plVar1 = (long *)puVar3[2];
  if (plVar14 != plVar1) {
    plVar12 = plVar14 + 6;
    if (-0x800000000000000 < *plVar14) {
      plVar12 = plVar14;
    }
    puVar20 = extraout_RDX;
    lVar5 = _ZNSt3__16chrono12system_clock11from_time_tEl(0);
    lVar5 = SUB168(SEXT816(lVar5) * SEXT816(-0x431bde82d7b634db),8);
    plVar14 = plVar12;
    if ((long)plVar1 - (long)plVar12 != 0) {
      uVar9 = ((long)plVar1 - (long)plVar12 >> 4) * -0x5555555555555555;
      do {
        uVar6 = uVar9 >> 1;
        uVar7 = uVar6;
        if (plVar14[uVar6 * 6] <= ((lVar5 >> 0x12) - (lVar5 >> 0x3f)) + *plVar4) {
          uVar7 = ~uVar6 + uVar9;
          plVar14 = plVar14 + uVar6 * 6 + 6;
        }
        uVar9 = uVar7;
      } while (uVar7 != 0);
    }
    if (plVar14 != plVar1) {
      lVar5 = puVar3[4];
      do {
        pbVar8 = (byte *)(plVar14 + -5);
        if (plVar14 == plVar12) {
          pbVar8 = (byte *)(puVar3 + 7);
        }
        if (*pbVar8 != *(byte *)(plVar14 + 1)) {
          uVar9 = (ulong)((uint)*pbVar8 * 0x30);
          uVar7 = (ulong)((uint)*(byte *)(plVar14 + 1) * 0x30);
          if (*(int *)(lVar5 + uVar9) != *(int *)(lVar5 + uVar7)) break;
          lVar10 = uVar9 + lVar5;
          lVar11 = uVar7 + lVar5;
          if ((*(char *)(lVar10 + 0x28) != *(char *)(lVar11 + 0x28)) ||
             (*(char *)(lVar10 + 0x29) != *(char *)(lVar11 + 0x29))) break;
        }
        plVar14 = plVar14 + 6;
      } while (plVar14 != plVar1);
    }
    if (plVar14 != plVar1) {
      lVar5 = plVar14[5];
      auVar19 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                          (plVar14[4],(long)(char)lVar5,(long)(char)((ulong)lVar5 >> 8),
                           (long)(char)((ulong)lVar5 >> 0x10),(long)(char)((ulong)lVar5 >> 0x18),
                           (long)(char)((ulong)lVar5 >> 0x20) + 1,puVar20,uVar2,uVar13,puVar15,
                           puVar16,pcVar17,puVar21);
      *puVar20 = auVar19._0_8_;
      puVar20[1] = auVar19._8_8_ & 0xffffffffff;
      lVar5 = plVar14[3];
      puVar20[2] = plVar14[2];
      puVar20[3] = lVar5;
      return (long *)0x1;
    }
  }
  return (long *)0x0;
}


