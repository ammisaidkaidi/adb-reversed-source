// Function: _Z13errno_to_wirei
// Address: 003e2db0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z13errno_to_wirei(uint param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 unaff_R12;
  undefined4 *unaff_R14;
  undefined1 *unaff_R15;
  long in_FS_OFFSET;
  undefined1 auStack_80 [8];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined4 *puStack_60;
  undefined1 *puStack_58;
  code *pcStack_50;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  uVar6 = (ulong)param_1;
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = (undefined1 *)plRam0000000000a006b8[1];
  if ((puVar15 != (undefined1 *)0x0) && (plRam0000000000a006b8[3] != 0)) {
    puVar9 = (undefined1 *)(long)(int)param_1;
    puVar1 = puVar15 + -1;
    if (((ulong)puVar15 & (ulong)puVar1) == 0) {
      puVar11 = (undefined1 *)((ulong)puVar1 & (ulong)puVar9);
    }
    else {
      puVar11 = puVar9;
      if (puVar15 <= puVar9) {
        if (((ulong)puVar9 | (ulong)puVar15) >> 0x20 == 0) {
          puVar11 = (undefined1 *)((ulong)param_1 % ((ulong)puVar15 & 0xffffffff));
        }
        else {
          puVar11 = (undefined1 *)((ulong)puVar9 % (ulong)puVar15);
        }
      }
    }
    puVar16 = *(undefined8 **)(*plRam0000000000a006b8 + (long)puVar11 * 8);
    if (puVar16 != (undefined8 *)0x0) {
      for (puVar16 = (undefined8 *)*puVar16; puVar16 != (undefined8 *)0x0;
          puVar16 = (undefined8 *)*puVar16) {
        puVar12 = (undefined1 *)puVar16[1];
        if (puVar12 == puVar9) {
          if (*(uint *)(puVar16 + 2) == param_1) {
            uVar5 = (ulong)*(uint *)((long)puVar16 + 0x14);
            goto code_r0x003e2eac;
          }
        }
        else {
          if (((ulong)puVar15 & (ulong)puVar1) == 0) {
            puVar12 = (undefined1 *)((ulong)puVar12 & (ulong)puVar1);
          }
          else if (puVar15 <= puVar12) {
            if (((ulong)puVar12 | (ulong)puVar15) >> 0x20 == 0) {
              if ((undefined1 *)(((ulong)puVar12 & 0xffffffff) % ((ulong)puVar15 & 0xffffffff)) ==
                  puVar11) goto code_r0x003e2e4a;
              break;
            }
            puVar12 = (undefined1 *)((ulong)puVar12 % (ulong)puVar15);
          }
          if (puVar12 != puVar11) break;
        }
code_r0x003e2e4a:
      }
    }
  }
  puVar15 = (undefined1 *)0x4;
  pcStack_50 = (code *)&UNK_003e2ea1;
  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
  uVar5 = 5;
  if (cVar4 != '\0') {
    pcStack_50 = (code *)&UNK_003e2ed9;
    unaff_R14 = (undefined4 *)func_0x0099bce0();
    uVar2 = *unaff_R14;
    unaff_R15 = auStack_40;
    pcStack_50 = (code *)&UNK_003e2f05;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (unaff_R15,&UNK_00181b5b,0x51,4,0,0xffffffff);
    pcStack_50 = (code *)&UNK_003e2f0d;
    uVar8 = _ZN7android4base10LogMessage6streamEv(unaff_R15);
    pcStack_50 = (code *)&UNK_003e2f21;
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015c878,0x18);
    pcStack_50 = (code *)&UNK_003e2f2b;
    uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,uVar6);
    pcStack_50 = (code *)&UNK_003e2f3f;
    unaff_R12 = func_0x0032eb30(uVar8,&UNK_0016ebd4,2);
    pcStack_50 = (code *)&UNK_003e2f49;
    uVar6 = func_0x0099bd20(uVar6);
    pcStack_50 = (code *)&UNK_003e2f54;
    uVar8 = func_0x0099bcf0(uVar6);
    pcStack_50 = (code *)&UNK_003e2f62;
    uVar8 = func_0x0032eb30(unaff_R12,uVar6,uVar8);
    pcStack_50 = (code *)&UNK_003e2f76;
    func_0x0032eb30(uVar8,&UNK_0018adb3,9);
    pcStack_50 = (code *)&UNK_003e2f7e;
    puVar15 = unaff_R15;
    _ZN7android4base10LogMessageD2Ev();
    uVar5 = 5;
    *unaff_R14 = uVar2;
  }
code_r0x003e2eac:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar5;
  }
  pcStack_50 = _Z15errno_from_wirei;
  func_0x0099bd00();
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = plRam0000000000a006b8[1];
  uStack_70 = uVar6;
  uStack_68 = unaff_R12;
  puStack_60 = unaff_R14;
  puStack_58 = unaff_R15;
  if ((uVar5 != 0) && (plRam0000000000a006b8[3] != 0)) {
    uVar10 = (ulong)(int)puVar15;
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar13 = uVar6 & uVar10;
    }
    else {
      uVar13 = uVar10;
      if (uVar5 <= uVar10) {
        if ((uVar10 | uVar5) >> 0x20 == 0) {
          uVar13 = ((ulong)puVar15 & 0xffffffff) % (uVar5 & 0xffffffff);
        }
        else {
          uVar13 = uVar10 % uVar5;
        }
      }
    }
    puVar16 = *(undefined8 **)(*plRam0000000000a006b8 + uVar13 * 8);
    if (puVar16 != (undefined8 *)0x0) {
      for (puVar16 = (undefined8 *)*puVar16; puVar16 != (undefined8 *)0x0;
          puVar16 = (undefined8 *)*puVar16) {
        uVar14 = puVar16[1];
        if (uVar14 == uVar10) {
          if (*(int *)(puVar16 + 2) == (int)puVar15) {
            uVar6 = (ulong)*(uint *)((long)puVar16 + 0x14);
            pcStack_50 = (code *)&stack0xfffffffffffffff8;
            goto code_r0x003e308c;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar14 = uVar14 & uVar6;
          }
          else if (uVar5 <= uVar14) {
            if ((uVar14 | uVar5) >> 0x20 == 0) {
              if ((uVar14 & 0xffffffff) % (uVar5 & 0xffffffff) == uVar13) goto code_r0x003e302a;
              break;
            }
            uVar14 = uVar14 % uVar5;
          }
          if (uVar14 != uVar13) break;
        }
code_r0x003e302a:
      }
    }
  }
  pcStack_50 = (code *)&stack0xfffffffffffffff8;
  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
  uVar6 = 5;
  if (cVar4 != '\0') {
    puVar7 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar7;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_80,&UNK_00181b5b,0x5c,4,0,0xffffffff);
    uVar8 = _ZN7android4base10LogMessage6streamEv(auStack_80);
    uVar8 = func_0x0032eb30(uVar8,&UNK_0015c878,0x18);
    uVar8 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar8,(ulong)puVar15 & 0xffffffff);
    func_0x0032eb30(uVar8,&UNK_00169620,10);
    _ZN7android4base10LogMessageD2Ev(auStack_80);
    uVar6 = 5;
    *puVar7 = uVar2;
  }
code_r0x003e308c:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_78) {
    func_0x0099bd00();
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  return uVar6;
}


