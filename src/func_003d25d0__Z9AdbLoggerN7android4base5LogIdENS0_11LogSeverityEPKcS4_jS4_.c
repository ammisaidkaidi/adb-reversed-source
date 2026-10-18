// Function: _Z9AdbLoggerN7android4base5LogIdENS0_11LogSeverityEPKcS4_jS4_
// Address: 003d25d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Removing unreachable block (ram,0x007db1c9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Z9AdbLoggerN7android4base5LogIdENS0_11LogSeverityEPKcS4_jS4_
               (undefined8 param_1,uint param_2,undefined *param_3,long param_4,undefined8 param_5,
               byte *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong extraout_RDX;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_e8 = 0;
  lStack_e0 = 0;
  pbVar12 = param_6;
  func_0x0099c650(0,&uStack_e8);
  uStack_108 = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  uVar5 = func_0x0099c140();
  uVar6 = _ZN7android4base11GetThreadIdEv();
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_68 = 0;
  func_0x0099c6b0(&uStack_e8,&uStack_98);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar13 = 0x14;
  uVar7 = func_0x0099cba0(&uStack_58,0x14,&UNK_00163f0f,&uStack_98);
  if (uVar7 < 0x15) {
    func_0x0099c030((long)&uStack_58 + uVar7,0x14 - uVar7,&UNK_00163f1e,lStack_e0 / 1000000);
    pbVar12 = (byte *)(ulong)(uint)(int)(char)(&UNK_0017b30c)[param_2];
    puVar15 = &UNK_00184321;
    if (param_3 != (undefined *)0x0) {
      puVar15 = param_3;
    }
    if (param_4 == 0) {
      _ZN7android4base12StringPrintfEPKcz
                (&uStack_d0,&UNK_0017feae,&uStack_58,uVar5,uVar6,pbVar12,puVar15);
    }
    else {
      _ZN7android4base12StringPrintfEPKcz
                (&uStack_d0,&UNK_0015c352,&uStack_58,uVar5,uVar6,pbVar12,puVar15,param_4,param_5);
    }
    uStack_b8 = CONCAT22(uStack_ce,uStack_d0);
    lStack_a8 = lStack_c0;
    uStack_ac = uStack_c4;
    uStack_b0 = uStack_c8;
    uStack_b4 = uStack_cc;
    uStack_d0 = 0;
    uVar13 = (ulong)*param_6;
    uVar7 = 0;
    if (*param_6 != 0) {
      lVar9 = 0;
      do {
        uVar11 = (ulong)((int)lVar9 + 1);
        if ((SCARRY4((int)lVar9,1)) ||
           (((char)uVar13 == '\n' &&
            (iVar10 = (int)uVar7, uVar7 = (ulong)(iVar10 + 1), SCARRY4(iVar10,1))))) {
          func_0x008fce60();
          uVar11 = extraout_RDX;
          break;
        }
        lVar16 = lVar9 + 1;
        uVar13 = (ulong)param_6[lVar16];
        lVar9 = lVar9 + 1;
      } while (param_6[lVar16] != 0);
      uVar7 = uVar7 << 0x20 | uVar11 & 0xffffffff;
    }
    uStack_108 = 0;
    uStack_100 = 0;
    lStack_f8 = 0;
    bVar3 = (byte)uStack_b8;
    uVar11 = (ulong)((byte)uStack_b8 >> 1);
    uVar17 = CONCAT44(uStack_ac,uStack_b0);
    uVar8 = uVar17;
    if ((uStack_b8 & 1) == 0) {
      uVar8 = uVar11;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)uVar7 >> 0x20;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    uVar8 = SUB168(auVar1 * auVar2,0);
    if (SUB168(auVar1 * auVar2,8) != 0) goto code_r0x007db460;
    uVar13 = (long)(int)uVar7 + uVar8;
    if (CARRY8((long)(int)uVar7,uVar8)) goto code_r0x007db465;
    bVar18 = uVar13 == 0xffffffffffffffff;
    uVar13 = 0;
    if (bVar18) goto code_r0x007db46a;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&uStack_108);
    uVar13 = 10;
    lVar9 = func_0x0099c0c0(param_6);
    if (lVar9 != 0) {
      do {
        lVar16 = lVar9 - (long)param_6;
        if ((int)lVar16 != lVar16) {
          func_0x008fd120();
          goto code_r0x007db45b;
        }
        bVar18 = (uStack_b8 & 1) == 0;
        lVar14 = lStack_a8;
        if (bVar18) {
          lVar14 = (long)&uStack_b8 + 1;
        }
        uVar13 = (ulong)((byte)uStack_b8 >> 1);
        if (!bVar18) {
          uVar13 = CONCAT44(uStack_ac,uStack_b0);
        }
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_108,lVar14,uVar13);
        if (lVar16 == -1) {
          lVar16 = func_0x0099bcf0(param_6);
        }
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_108,param_6,lVar16);
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_108,&UNK_0017a0d6,1);
        param_6 = (byte *)(lVar9 + 1);
        uVar13 = 10;
        lVar9 = func_0x0099c0c0(param_6);
      } while (lVar9 != 0);
      uVar17 = CONCAT44(uStack_ac,uStack_b0);
      uVar11 = (ulong)((byte)uStack_b8 >> 1);
      bVar3 = (byte)uStack_b8;
    }
    lVar9 = lStack_a8;
    if ((bVar3 & 1) == 0) {
      lVar9 = (long)&uStack_b8 + 1;
      uVar17 = uVar11;
    }
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_108,lVar9,uVar17);
    uVar6 = func_0x0099bcf0(param_6);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_108,param_6,uVar6);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_108,&UNK_0017a0d6,1);
    uVar13 = CONCAT44(uStack_b4,uStack_b8);
    if ((uVar13 < 2 & (byte)uStack_b8) == 1) goto code_r0x007db46f;
    if ((uStack_b8 & 1) != 0) {
      _ZdaPvSt11align_val_t(lStack_a8,uVar13 & 0xfffffffffffffffe);
    }
    lVar9 = lStack_f8;
    if ((uStack_108 & 1) == 0) {
      lVar9 = (long)&uStack_108 + 1;
    }
    func_0x0099bf00(lVar9,_stderr);
    uVar13 = uStack_108;
    if ((uStack_108 < 2 & (byte)uStack_108) != 1) {
      if ((uStack_108 & 1) != 0) {
        uVar13 = uStack_108 & 0xfffffffffffffffe;
        _ZdaPvSt11align_val_t(lStack_f8);
      }
      iVar10 = (int)uVar13;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        return;
      }
      goto code_r0x007db479;
    }
  }
  else {
code_r0x007db45b:
    func_0x008fce90();
code_r0x007db460:
    func_0x008fcec0();
code_r0x007db465:
    func_0x008fce60();
code_r0x007db46a:
    func_0x008fce60();
code_r0x007db46f:
    func_0x008fce90();
  }
  iVar10 = (int)uVar13;
  func_0x008fce90();
code_r0x007db479:
  func_0x0099bd00();
  if (iVar10 < 3) {
    puVar15 = &UNK_0015f7ba;
    uVar6 = _stdout;
  }
  else {
    func_0x0099bd50(_stdout);
    pbVar4 = _program_invocation_short_name;
    uVar6 = _stderr;
    lVar9 = func_0x0099c160(_program_invocation_short_name,0x2f);
    pbVar12 = (byte *)(lVar9 + 1);
    if (lVar9 == 0) {
      pbVar12 = pbVar4;
    }
    puVar15 = &UNK_00168d7c;
  }
  fprintf(uVar6,puVar15,pbVar12);
  return;
}


