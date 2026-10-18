// Function: LZ4F_compressFrame_usingCDict
// Address: 004a5180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4F_compressFrame_usingCDict
                (long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                undefined8 param_6,uint *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  undefined8 *puVar11;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 == (uint *)0x0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_48 = 0;
    uStack_58 = 0x100000000;
    uVar1 = 0;
    bVar10 = true;
    uVar4 = 4;
code_r0x004a5257:
    uVar5 = *(ulong *)(&UNK_001fe7d0 + (ulong)uVar4 * 8);
  }
  else {
    uVar4 = *param_7;
    uStack_70 = *(ulong *)(param_7 + 2);
    uStack_60 = param_7[6];
    uStack_5c = param_7[7];
    uStack_50 = *(undefined8 *)(param_7 + 10);
    uStack_48 = *(undefined8 *)(param_7 + 0xc);
    uStack_68 = 0;
    if (*(long *)(param_7 + 4) != 0) {
      uStack_68 = param_5;
    }
    uVar1 = uVar4;
    if (4 < uVar4) {
      uVar3 = 4;
      uVar5 = 0x10000;
      do {
        uVar1 = uVar3;
        if (param_5 <= uVar5) break;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 << 2;
        uVar1 = uVar4;
      } while (uVar4 != uVar3);
    }
    uStack_78 = CONCAT44(param_7[1],uVar1);
    uStack_58 = CONCAT44(1,param_7[8]);
    bVar10 = uVar1 == 0;
    uVar4 = 4;
    if (!bVar10) {
      uVar4 = uVar1;
    }
    uVar5 = 0xfffffffffffffffe;
    if ((uVar4 & 0xfffffffc) == 4) goto code_r0x004a5257;
  }
  if (param_5 <= uVar5) {
    uStack_78 = CONCAT44(1,(undefined4)uStack_78);
  }
  uStack_7c = 0;
  uStack_84 = 0;
  uStack_88 = 1;
  uVar5 = 4;
  if (bVar10) {
code_r0x004a52ac:
    uVar6 = *(ulong *)(&UNK_001fe7d0 + uVar5 * 8);
  }
  else {
    uVar6 = 0xfffffffffffffffe;
    uVar5 = (ulong)uVar1;
    if ((uVar1 & 0xfffffffc) == 4) goto code_r0x004a52ac;
  }
  if ((param_5 | uVar6) >> 0x20 == 0) {
    uVar1 = (uint)((param_5 & 0xffffffff) / (uVar6 & 0xffffffff));
  }
  else {
    uVar1 = (uint)(param_5 / uVar6);
  }
  uVar7 = uVar6 - 1 & param_5;
  uVar5 = 0xfffffffffffffff5;
  if ((ulong)((uVar1 + 1) - (uint)(uVar7 == 0)) * ((ulong)uStack_5c * 4 + 4) +
      (uStack_70 & 0xffffffff) * 4 + uVar7 + uVar1 * uVar6 + 0x17 <= param_3) {
    puVar11 = &uStack_78;
    uVar6 = LZ4F_compressBegin_internal(param_1,param_2,param_3,0,0,param_6,puVar11);
    uVar5 = uVar6;
    if (uVar6 < 0xffffffffffffffe9) {
      uVar5 = func_0x004a60c0(param_1,param_2 + uVar6,param_3 - uVar6,param_4,param_5,&uStack_88,
                              (ulong)puVar11 & 0xffffffff00000000);
      if (uVar5 < 0xffffffffffffffe9) {
        lVar8 = param_2 + uVar6 + uVar5;
        lVar9 = param_3 - (uVar6 + uVar5);
        uVar6 = LZ4F_flush(param_1,lVar8,lVar9);
        uVar5 = uVar6;
        if (uVar6 < 0xffffffffffffffe9) {
          uVar7 = lVar9 - uVar6;
          if (uVar7 < 4) {
            uVar5 = 0xfffffffffffffff5;
          }
          else {
            *(undefined4 *)(lVar8 + uVar6) = 0;
            if (*(int *)(param_1 + 0x28) == 1) {
              uVar2 = XXH32_digest(param_1 + 0x98);
              uVar5 = 0xfffffffffffffff5;
              if (uVar7 < 8) goto code_r0x004a5438;
              *(undefined4 *)(uVar6 + lVar8 + 4) = uVar2;
              lVar9 = uVar6 + lVar8 + 8;
            }
            else {
              lVar9 = uVar6 + lVar8 + 4;
            }
            *(undefined4 *)(param_1 + 0x5c) = 0;
            if (((*(long *)(param_1 + 0x30) == 0) ||
                (uVar5 = 0xfffffffffffffff2, *(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x90))
                ) && (uVar5 = lVar9 - lVar8, (ulong)(lVar9 - lVar8) < 0xffffffffffffffe9)) {
              uVar5 = lVar9 - param_2;
            }
          }
        }
      }
    }
  }
code_r0x004a5438:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    uVar5 = LZ4F_compressBegin_internal();
    return uVar5;
  }
  return uVar5;
}


