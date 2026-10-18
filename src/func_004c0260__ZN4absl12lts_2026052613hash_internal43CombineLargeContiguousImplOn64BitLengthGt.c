// Function: _ZN4absl12lts_2026052613hash_internal43CombineLargeContiguousImplOn64BitLengthGt32EmPKhm
// Address: 004c0260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004c034b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004c0350) */

ulong _ZN4absl12lts_2026052613hash_internal43CombineLargeContiguousImplOn64BitLengthGt32EmPKhm
                (ulong param_1,ulong *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong *puVar32;
  ulong unaff_RBX;
  undefined1 *puVar33;
  undefined1 *unaff_RBP;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulong *unaff_R14;
  ulong *puVar39;
  undefined8 unaff_R15;
  ulong uVar40;
  undefined1 auStack_20 [24];
  undefined1 auStack_8 [8];
  
  do {
    if (param_3 < 0x401) {
      uVar34 = param_3;
      if (param_3 < 0x41) {
        uVar34 = param_1 ^ param_3 ^ 0x243f6a8885a308d3;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_2[1] ^ uVar34;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *param_2 ^ 0x13198a2e03707344;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar34 ^ param_2[3];
        auVar20._8_8_ = 0;
        auVar20._0_8_ = param_2[2] ^ 0xa4093822299f31d0;
        uVar34 = SUB168(auVar5 * auVar20,0) ^
                 SUB168(auVar4 * auVar19,8) ^ SUB168(auVar5 * auVar20,8) ^
                 SUB168(auVar4 * auVar19,0);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = *(ulong *)((long)param_2 + (param_3 - 0x18)) ^ uVar34;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = *(ulong *)((long)param_2 + (param_3 - 0x20)) ^ 0x13198a2e03707344;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar34 ^ *(ulong *)((long)param_2 + (param_3 - 8));
        auVar22._8_8_ = 0;
        auVar22._0_8_ = *(ulong *)((long)param_2 + (param_3 - 0x10)) ^ 0xa4093822299f31d0;
        return SUB168(auVar7 * auVar22,0) ^
               SUB168(auVar6 * auVar21,8) ^ SUB168(auVar7 * auVar22,8) ^ SUB168(auVar6 * auVar21,0);
      }
code_r0x004c0390:
      *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
      *(ulong **)((long)register0x00000020 + -0x18) = unaff_R14;
      *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
      *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
      *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
      uVar35 = param_1 ^ uVar34 ^ 0x243f6a8885a308d3;
      uVar36 = uVar35;
      uVar37 = uVar35;
      uVar38 = uVar35;
      puVar32 = param_2;
      uVar40 = uVar34;
      do {
        puVar39 = puVar32;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar35 ^ puVar39[1];
        auVar23._8_8_ = 0;
        auVar23._0_8_ = *puVar39 ^ 0x13198a2e03707344;
        uVar35 = SUB168(auVar8 * auVar23,8) ^ SUB168(auVar8 * auVar23,0);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar37 ^ puVar39[3];
        auVar24._8_8_ = 0;
        auVar24._0_8_ = puVar39[2] ^ 0xa4093822299f31d0;
        uVar37 = SUB168(auVar9 * auVar24,8) ^ SUB168(auVar9 * auVar24,0);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar38 ^ puVar39[5];
        auVar25._8_8_ = 0;
        auVar25._0_8_ = puVar39[4] ^ 0x82efa98ec4e6c89;
        uVar38 = SUB168(auVar10 * auVar25,8) ^ SUB168(auVar10 * auVar25,0);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar36 ^ puVar39[7];
        auVar26._8_8_ = 0;
        auVar26._0_8_ = puVar39[6] ^ 0x452821e638d01377;
        uVar36 = SUB168(auVar11 * auVar26,8) ^ SUB168(auVar11 * auVar26,0);
        uVar40 = uVar40 - 0x40;
        puVar32 = puVar39 + 8;
      } while (0x40 < uVar40);
      uVar36 = uVar35 ^ uVar37 ^ uVar36 + uVar38;
      if (0x20 < uVar40) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = puVar39[9] ^ uVar36;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = puVar39[8] ^ 0x13198a2e03707344;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar36 ^ puVar39[0xb];
        auVar28._8_8_ = 0;
        auVar28._0_8_ = puVar39[10] ^ 0xa4093822299f31d0;
        uVar36 = SUB168(auVar13 * auVar28,8) ^ SUB168(auVar12 * auVar27,8) ^
                 SUB168(auVar12 * auVar27,0) ^ SUB168(auVar13 * auVar28,0);
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = *(ulong *)((long)param_2 + (uVar34 - 0x18)) ^ uVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = *(ulong *)((long)param_2 + (uVar34 - 0x20)) ^ 0x13198a2e03707344;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar36 ^ *(ulong *)((long)param_2 + (uVar34 - 8));
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *(ulong *)((long)param_2 + (uVar34 - 0x10)) ^ 0xa4093822299f31d0;
      return SUB168(auVar15 * auVar30,0) ^
             SUB168(auVar14 * auVar29,8) ^ SUB168(auVar15 * auVar30,8) ^ SUB168(auVar14 * auVar29,0)
      ;
    }
    puVar33 = auStack_8;
    if (0x3ff < param_3) {
      register0x00000020 = (BADSPACEBASE *)auStack_20;
      uVar34 = 0x400;
      unaff_RBX = param_3;
      unaff_RBP = puVar33;
      unaff_R14 = param_2;
      goto code_r0x004c0390;
    }
    if (param_3 == 0) {
      return param_1;
    }
    if (param_3 < 9) {
      if (param_3 < 4) {
        if (param_3 != 0) {
          uVar36 = (ulong)*(byte *)((long)param_2 + (param_3 - 1)) | (ulong)(byte)*param_2 << 0x10;
          uVar34 = (ulong)*(byte *)((long)param_2 + (param_3 >> 1)) << 8;
          goto code_r0x004bfc32;
        }
        uVar34 = 0x57;
      }
      else {
        uVar36 = (ulong)(uint)*param_2 << 0x20;
        uVar34 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
code_r0x004bfc32:
        uVar34 = uVar34 | uVar36;
      }
      param_1 = *(ulong *)(_ZN4absl12lts_2026052613hash_internal17kStaticRandomDataE + param_3) ^
                uVar34 ^ param_1;
      uVar34 = 0x79d5f9e0de1e8cf5;
code_r0x004bfc45:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar34;
      auVar31 = auVar1 * auVar16;
      goto code_r0x004bfc48;
    }
    if (param_3 < 0x11) {
      uVar34 = *(ulong *)((long)param_2 + (param_3 - 8)) ^ 0x79d5f9e0de1e8cf5;
      param_1 = *(ulong *)(_ZN4absl12lts_2026052613hash_internal17kStaticRandomDataE + param_3) ^
                *param_2 ^ param_1;
      goto code_r0x004bfc45;
    }
  } while (0x20 < param_3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1] ^
                 param_1 ^ *(ulong *)(_ZN4absl12lts_2026052613hash_internal17kStaticRandomDataE +
                                     param_3);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2 ^ 0x13198a2e03707344;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1 ^ *(ulong *)(_ZN4absl12lts_2026052613hash_internal17kStaticRandomDataE +
                                     param_3) ^ *(ulong *)((long)param_2 + (param_3 - 8));
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *(ulong *)((long)param_2 + (param_3 - 0x10)) ^ 0x82efa98ec4e6c89;
  auVar31._8_8_ =
       SUB168(auVar3 * auVar18,8) ^ SUB168(auVar2 * auVar17,8) ^ SUB168(auVar2 * auVar17,0);
  auVar31._0_8_ = SUB168(auVar3 * auVar18,0);
code_r0x004bfc48:
  return auVar31._8_8_ ^ auVar31._0_8_;
}


