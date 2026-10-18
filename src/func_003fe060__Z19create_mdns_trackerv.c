// Function: _Z19create_mdns_trackerv
// Address: 003fe060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003fe385: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003fe5e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003fe38a) */
/* WARNING: Removing unreachable block (ram,0x003fe4c5) */
/* WARNING: Removing unreachable block (ram,0x003fe4ff) */
/* WARNING: Removing unreachable block (ram,0x003fe621) */
/* WARNING: Removing unreachable block (ram,0x003fe640) */
/* WARNING: Removing unreachable block (ram,0x003fe519) */
/* WARNING: Removing unreachable block (ram,0x003fe527) */
/* WARNING: Removing unreachable block (ram,0x003fe5a2) */
/* WARNING: Removing unreachable block (ram,0x003fe596) */
/* WARNING: Removing unreachable block (ram,0x003fe5a7) */
/* WARNING: Removing unreachable block (ram,0x003fe5a0) */
/* WARNING: Removing unreachable block (ram,0x003fe5ad) */
/* WARNING: Removing unreachable block (ram,0x003fe39d) */
/* WARNING: Removing unreachable block (ram,0x003fe5e5) */
/* WARNING: Removing unreachable block (ram,0x003fe5eb) */
/* WARNING: Removing unreachable block (ram,0x003fe5fc) */
/* WARNING: Removing unreachable block (ram,0x003fe735) */
/* WARNING: Removing unreachable block (ram,0x003fe60f) */

undefined4 * _Z19create_mdns_trackerv(void)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  undefined **ppuVar15;
  ulong unaff_R12;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined4 *puStack_160;
  undefined **ppuStack_158;
  ulong uStack_150;
  undefined *apuStack_128 [4];
  undefined **ppuStack_108;
  undefined4 *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  ulong uStack_c0;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined4 *puStack_78;
  ulong uStack_70;
  undefined *apuStack_50 [2];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack_50[0] = &UNK_003fe083;
  lVar3 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    apuStack_50[0] = &UNK_003fe08e;
    lVar3 = _Z19fdevent_get_ambientv();
    apuStack_50[0] = &UNK_003fe096;
    lVar4 = _ZN7android4base11GetThreadIdEv();
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != lVar4) {
      do {
        apuStack_50[0] = &UNK_003fe262;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0016146a,0x8f,6,0,0xffffffff);
        apuStack_50[0] = &UNK_003fe26a;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        apuStack_50[0] = &UNK_003fe27e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        apuStack_50[0] = &UNK_003fe292;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
        apuStack_50[0] = &UNK_003fe2a2;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        apuStack_50[0] = &UNK_003fe2b6;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        apuStack_50[0] = &UNK_003fe2c6;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        apuStack_50[0] = &UNK_003fe2da;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        apuStack_50[0] = &UNK_003fe2ee;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
        apuStack_50[0] = &UNK_003fe2f9;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar3);
        apuStack_50[0] = &UNK_003fe30d;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        apuStack_50[0] = &UNK_003fe318;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar4);
        apuStack_50[0] = &UNK_003fe328;
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        apuStack_50[0] = &UNK_003fe330;
        _ZN7android4base10LogMessageD2Ev(auStack_40);
      } while( true );
    }
  }
  apuStack_50[0] = &UNK_003fe0ad;
  puVar5 = (undefined4 *)_Znwm(0xb0);
  *puVar5 = 0;
  *(undefined2 *)(puVar5 + 1) = 0;
  puVar5[2] = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(undefined8 *)(puVar5 + 0xe) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  puVar5[0x12] = 0xffffffff;
  *(undefined1 *)(puVar5 + 0x22) = 0;
  *(undefined8 *)(puVar5 + 0x24) = 0;
  *(undefined8 *)(puVar5 + 0x26) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x1a) = 0;
  *(undefined8 *)(puVar5 + 0x1c) = 0;
  *(undefined8 *)(puVar5 + 0x1e) = 0;
  *(undefined1 *)(puVar5 + 0x20) = 0;
  if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
    apuStack_50[0] = &UNK_003fe1b9;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      apuStack_50[0] = &UNK_003fe1c6;
      puVar8 = (uint *)func_0x0099bce0();
      uVar10 = *puVar8;
      unaff_R12 = (ulong)uVar10;
      apuStack_50[0] = &UNK_003fe1f2;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_40,&UNK_0016146a,0x91,1,0,0xffffffff);
      apuStack_50[0] = &UNK_003fe1fa;
      uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_40);
      apuStack_50[0] = &UNK_003fe20e;
      func_0x0032eb30(uVar9,&UNK_00178b33,0x14);
      apuStack_50[0] = &UNK_003fe216;
      _ZN7android4base10LogMessageD2Ev(auStack_40);
      *puVar8 = uVar10;
    }
  }
  *(undefined **)(puVar5 + 6) = &UNK_003fe340;
  *(undefined **)(puVar5 + 8) = &UNK_003fe4d0;
  *(undefined **)(puVar5 + 0xc) = &UNK_003fe740;
  *(undefined1 *)(puVar5 + 0x2a) = 1;
  lVar3 = 0x18;
  apuStack_50[0] = &UNK_003fe15d;
  plVar6 = (long *)_Znwm();
  plVar6[2] = (long)puVar5;
  plVar6[1] = 0x9fa570;
  *plVar6 = (long)plRam00000000009fa570;
  *(long **)((long)plRam00000000009fa570 + 8) = plVar6;
  plRam00000000009fa570 = plVar6;
  lRam00000000009fa580 = lRam00000000009fa580 + 1;
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar5;
  }
  apuStack_50[0] = &UNK_003fe33a;
  func_0x0099bd00();
  uStack_80 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack_98 = &UNK_003fe366;
  puStack_78 = puVar5;
  uStack_70 = unaff_R12;
  apuStack_50[0] = &stack0xfffffffffffffff8;
  lVar4 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    puStack_98 = &UNK_003fe371;
    lVar4 = _Z19fdevent_get_ambientv();
    puStack_98 = &UNK_003fe379;
    lVar7 = _ZN7android4base11GetThreadIdEv();
    lVar4 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar7) {
      do {
        puStack_98 = &UNK_003fe3f2;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_88,&UNK_0016146a,0x6f,6,0,0xffffffff);
        puStack_98 = &UNK_003fe3fa;
        uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_88);
        puStack_98 = &UNK_003fe40e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        puStack_98 = &UNK_003fe422;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
        puStack_98 = &UNK_003fe432;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        puStack_98 = &UNK_003fe446;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        puStack_98 = &UNK_003fe456;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        puStack_98 = &UNK_003fe46a;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        puStack_98 = &UNK_003fe47e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
        puStack_98 = &UNK_003fe489;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar4);
        puStack_98 = &UNK_003fe49d;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        puStack_98 = &UNK_003fe4a8;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar7);
        puStack_98 = &UNK_003fe4b8;
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        puStack_98 = &UNK_003fe4c0;
        _ZN7android4base10LogMessageD2Ev(auStack_88);
      } while( true );
    }
  }
  puStack_98 = &UNK_003fe38a;
  puStack_d0 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  puStack_e8 = &UNK_003fe766;
  puStack_c8 = puVar5;
  uStack_c0 = unaff_R12;
  puStack_a0 = (undefined1 *)apuStack_50;
  lVar4 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    puStack_e8 = &UNK_003fe771;
    lVar4 = _Z19fdevent_get_ambientv();
    puStack_e8 = &UNK_003fe779;
    lVar7 = _ZN7android4base11GetThreadIdEv();
    lVar4 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar7) {
      do {
        puStack_e8 = &UNK_003fe932;
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&lStack_d8,&UNK_0016146a,0x61,6,0,0xffffffff);
        puStack_e8 = &UNK_003fe93a;
        uVar9 = _ZN7android4base10LogMessage6streamEv(&lStack_d8);
        puStack_e8 = &UNK_003fe94e;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        puStack_e8 = &UNK_003fe962;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
        puStack_e8 = &UNK_003fe972;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        puStack_e8 = &UNK_003fe986;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        puStack_e8 = &UNK_003fe996;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        puStack_e8 = &UNK_003fe9aa;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        puStack_e8 = &UNK_003fe9be;
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
        puStack_e8 = &UNK_003fe9c9;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar4);
        puStack_e8 = &UNK_003fe9dd;
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        puStack_e8 = &UNK_003fe9e8;
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar7);
        puStack_e8 = &UNK_003fe9f8;
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        puStack_e8 = &UNK_003fea00;
        _ZN7android4base10LogMessageD2Ev(&lStack_d8);
      } while( true );
    }
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  lStack_d8 = lVar3;
  if (((adb_trace_mask._1_1_ & 0x40) != 0) && ((int)adb_trace_severity._56_4_ < 2)) {
    puStack_e8 = &UNK_003fe890;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(1,0);
    if (cVar2 != '\0') {
      puStack_e8 = &UNK_003fe89d;
      puVar8 = (uint *)func_0x0099bce0();
      uVar10 = *puVar8;
      unaff_R12 = (ulong)uVar10;
      puStack_e8 = &UNK_003fe8c9;
      _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                (auStack_e0,&UNK_0016146a,0x65,1,0,0xffffffff);
      puStack_e8 = &UNK_003fe8d1;
      uVar9 = _ZN7android4base10LogMessage6streamEv(auStack_e0);
      puStack_e8 = &UNK_003fe8e5;
      func_0x0032eb30(uVar9,&UNK_001579f8,0x14);
      puStack_e8 = &UNK_003fe8ed;
      _ZN7android4base10LogMessageD2Ev(auStack_e0);
      *puVar8 = uVar10;
    }
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = 0;
    puStack_e8 = &UNK_003fe7bf;
    (**(code **)(lVar4 + 0x30))(lVar4);
  }
  pbVar12 = (byte *)&lStack_d8;
  puStack_e8 = &UNK_003fe7cf;
  func_0x003f0c30(0x9fa570);
  lVar3 = lStack_d8;
  if (lStack_d8 != 0) {
    if ((*(byte *)(lStack_d8 + 0x90) & 1) != 0) {
      puStack_e8 = &UNK_003fe7fc;
      _ZdaPvSt11align_val_t
                (*(undefined8 *)(lStack_d8 + 0xa0),*(ulong *)(lStack_d8 + 0x90) & 0xfffffffffffffffe
                );
    }
    lVar4 = *(long *)(lVar3 + 0x68);
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar3 + 0x70);
      lVar14 = lVar4;
      if (lVar4 != lVar7) {
        do {
          lVar14 = *(long *)(lVar7 + -0x20);
          *(undefined8 *)(lVar7 + -0x20) = 0;
          if (lVar14 != 0) {
            puStack_e8 = &UNK_003fe83f;
            _ZdaPvSt11align_val_t();
          }
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != lVar4);
        lVar14 = *(long *)(lVar3 + 0x68);
      }
      *(long *)(lVar3 + 0x70) = lVar4;
      puStack_e8 = &UNK_003fe855;
      _ZdaPvSt11align_val_t(lVar14,*(long *)(lVar3 + 0x78) - lVar14);
    }
    pbVar12 = (byte *)0xb0;
    puStack_e8 = &UNK_003fe862;
    _ZdaPvSt11align_val_t(lVar3);
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_d0) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  puStack_e8 = &UNK_003fea0a;
  func_0x0099bd00();
  lStack_f0 = lVar3;
  puStack_f8 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  apuStack_128[0] = &UNK_0099f0b0;
  ppuStack_108 = apuStack_128;
  puStack_e8 = (undefined *)&puStack_a0;
  _Z21fdevent_run_on_looperNSt3__18functionIFvvEEE(apuStack_128);
  ppuVar15 = ppuStack_108;
  if (ppuStack_108 == apuStack_128) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (ppuStack_108 == (undefined **)0x0) goto code_r0x003fea61;
  }
  (**(code **)(*ppuStack_108 + lVar3))();
code_r0x003fea61:
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) == puStack_f8) {
    return *(undefined4 **)(in_FS_OFFSET + 0x28);
  }
  func_0x0099bd00();
  puStack_160 = *(undefined4 **)(in_FS_OFFSET + 0x28);
  ppuStack_158 = apuStack_128;
  uStack_150 = unaff_R12;
  lVar3 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    lVar3 = _Z19fdevent_get_ambientv();
    lVar4 = _ZN7android4base11GetThreadIdEv();
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != lVar4) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (&puStack_190,&UNK_0016146a,0x76,6,0,0xffffffff);
        uVar9 = _ZN7android4base10LogMessage6streamEv(&puStack_190);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165d45,0xe);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00162e7f,0x29);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015aef8,2);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0015ae05,1);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00183451,0x1c);
        uVar9 = func_0x0032eb30(uVar9,&UNK_0017ed76,0x2c);
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar3);
        uVar9 = func_0x0032eb30(uVar9,&UNK_00165f20,0x1f);
        uVar9 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar9,lVar4);
        func_0x0032eb30(uVar9,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(&puStack_190);
      } while( true );
    }
  }
  puVar1 = ppuVar15[2];
  uStack_180 = 0;
  uStack_178 = 0;
  puStack_190 = (undefined4 *)0x0;
  uStack_188 = 0;
  if ((*pbVar12 & 1) == 0) {
    uVar11 = (ulong)(*pbVar12 >> 1);
  }
  else {
    uVar11 = *(ulong *)(pbVar12 + 8);
  }
  _ZN5Block6resizeEm(&puStack_190,uVar11 + 4);
  uStack_164 = 0;
  uStack_168 = 0;
  if ((*pbVar12 & 1) == 0) {
    uVar10 = (uint)(*pbVar12 >> 1);
  }
  else {
    uVar10 = *(uint *)(pbVar12 + 8);
  }
  func_0x0099c030(&uStack_168,5,&UNK_00179ee3,uVar10);
  *puStack_190 = uStack_168;
  bVar16 = (*pbVar12 & 1) != 0;
  pbVar13 = pbVar12 + 1;
  if (bVar16) {
    pbVar13 = *(byte **)(pbVar12 + 0x10);
  }
  uVar11 = (ulong)(*pbVar12 >> 1);
  if (bVar16) {
    uVar11 = *(ulong *)(pbVar12 + 8);
  }
  func_0x0099bda0(puStack_190 + 1,pbVar13,uVar11);
  uStack_198 = uStack_178;
  puStack_1b0 = puStack_190;
  puStack_190 = (undefined4 *)0x0;
  uStack_1a8 = (undefined4)uStack_188;
  uStack_1a4 = uStack_188._4_4_;
  uStack_1a0 = (undefined4)uStack_180;
  uStack_19c = uStack_180._4_4_;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  (**(code **)(puVar1 + 0x18))(puVar1,&puStack_1b0);
  puVar5 = puStack_1b0;
  puStack_1b0 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    _ZdaPvSt11align_val_t();
  }
  puVar5 = puStack_190;
  puStack_190 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    _ZdaPvSt11align_val_t();
  }
  if (*(undefined4 **)(in_FS_OFFSET + 0x28) != puStack_160) {
    func_0x0099bd00();
    puVar5 = (undefined4 *)free();
    return puVar5;
  }
  return *(undefined4 **)(in_FS_OFFSET + 0x28);
}


