// Function: _ZNK7android13ResStringPool8stringAtEm
// Address: 0042d800
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ushort * _ZNK7android13ResStringPool8stringAtEm
                   (ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ushort *unaff_RBX;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *unaff_R14;
  ulong unaff_R15;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined4 in_stack_ffffffffffffff50;
  undefined4 uStack_ac;
  undefined8 uVar20;
  undefined4 uStack_70;
  ushort auStack_58 [4];
  ushort *puStack_50;
  ushort *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = unaff_RBX;
  if ((*(int *)(param_2 + 4) == 0) &&
     (param_4 = *(ushort **)(param_2 + 0xc), param_3 < (ushort *)(ulong)*(uint *)(param_4 + 4))) {
    uVar6 = in_stack_ffffffffffffff50;
    if (*(long *)(param_2 + 0x30) == 0) goto code_r0x0042dc3b;
    puVar1 = (uint *)(param_4 + 8);
    uVar15 = *(uint *)(*(long *)(param_2 + 0x30) + (long)param_3 * 4) >>
             ((byte)((*puVar1 & 0x100) >> 8) ^ 1);
    uVar17 = *(uint *)(param_2 + 0x58);
    param_4 = (ushort *)(ulong)(uVar17 - 1);
    if (uVar17 - 1 <= uVar15) {
      uVar16 = (ulong)(uVar15 * 2);
      uVar17 = uVar17 * 2;
      puVar8 = &UNK_0015b42b;
code_r0x0042d92b:
      param_2 = (ushort *)&UNK_0015b3df;
      __android_log_print(5,&UNK_0015b3df,puVar8,param_3,uVar16,uVar17);
      param_4 = param_3;
      puVar10 = param_1;
      goto code_r0x0042d935;
    }
    if ((*puVar1 & 0x100) == 0) {
      puVar11 = *(ushort **)(param_2 + 0x48);
      param_2 = puVar11;
      if (puVar11 == (ushort *)0x0) goto code_r0x0042dc3b;
      param_4 = puVar11 + uVar15;
      uVar4 = *param_4;
      uVar7 = (ulong)uVar4;
      if ((short)uVar4 < 0) {
        puVar10 = param_4 + 1;
        param_4 = param_4 + 1;
        uVar7 = (ulong)((uVar4 & 0x7fff) << 0x10) | (ulong)*puVar10;
      }
      uVar16 = (ulong)((long)(param_4 + uVar7 + 1) - (long)puVar11) >> 1;
      if (uVar17 <= (uint)uVar16) {
        puVar8 = &UNK_00188153;
        goto code_r0x0042d92b;
      }
      uVar16 = unaff_R15;
      if (param_4[uVar7 + 1] == 0) {
        param_4 = param_4 + 1;
        *(ushort **)(param_1 + 4) = param_4;
        *(ulong *)(param_1 + 8) = uVar7;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      else {
        puVar11 = (ushort *)&UNK_0015b3df;
        __android_log_print(5,&UNK_0015b3df,&UNK_0015988c);
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[0xc] = 1;
        param_1[0xd] = 0;
        param_4 = param_3;
        unaff_RBX = param_1;
        uVar6 = in_stack_ffffffffffffff50;
      }
      goto code_r0x0042d943;
    }
    lVar9 = *(long *)(param_2 + 0x48);
    if (lVar9 == 0) {
code_r0x0042dc3b:
      param_1[4] = 0xffff;
      param_1[5] = 0xffff;
      param_1[6] = 1;
      param_1[7] = 0;
      puVar11 = param_2;
      goto code_r0x0042d93c;
    }
    puVar10 = (ushort *)((ulong)uVar15 + lVar9);
    bVar3 = (byte)*puVar10;
    unaff_R15 = (ulong)bVar3;
    if ((char)bVar3 < '\0') {
      pbVar2 = (byte *)((long)puVar10 + 1);
      puVar10 = (ushort *)((long)puVar10 + 1);
      unaff_R15 = (ulong)((bVar3 & 0x7f) << 8) | (ulong)*pbVar2;
    }
    bVar3 = *(byte *)((long)puVar10 + 1);
    puVar18 = (ushort *)(ulong)bVar3;
    lVar14 = 1;
    if ((char)bVar3 < '\0') {
      puVar18 = (ushort *)((ulong)((bVar3 & 0x7f) << 8) | (ulong)(byte)puVar10[1]);
      lVar14 = 2;
    }
    param_4 = (ushort *)((long)puVar10 + lVar14);
    if (uVar17 <= (uint)(((int)puVar18 + (int)param_4 + 1) - (int)lVar9)) {
      param_2 = (ushort *)&UNK_0015b3df;
      param_4 = param_3;
      __android_log_print(5,&UNK_0015b3df,&UNK_00169835);
      unaff_R14 = param_3;
      goto code_r0x0042d935;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x4c);
    uVar5 = *(undefined4 *)(param_2 + 0x4e);
    uVar20 = *(undefined8 *)(param_2 + 0x50);
    puVar13 = param_2 + 0x1c;
    func_0x0099c500();
    uVar16 = unaff_R15;
    if ((*(long *)(param_2 + 0x54) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_2 + 0x54) + (long)param_3 * 8), lVar9 != 0)) {
      *(long *)(param_1 + 4) = lVar9;
      *(ulong *)(param_1 + 8) = unaff_R15;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      unaff_RBX = puVar10;
      puVar11 = param_2;
      uVar6 = in_stack_ffffffffffffff50;
code_r0x0042dbfd:
      param_3 = param_1;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        func_0x0099c510(param_2 + 0x1c);
        return param_1;
      }
      goto code_r0x0042dc4e;
    }
    puStack_48 = (ushort *)0x0;
    uStack_40 = 0;
    auStack_58[0] = 0;
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    puStack_50 = (ushort *)0x0;
    uStack_70 = SUB84((byte *)((long)puVar10 + lVar14 + 1),0);
    puVar13 = auStack_58;
    puVar12 = param_2;
    _ZNK7android13ResStringPool14stringDecodeAtEmNS_5incfs7map_ptrIhLb0EEEm();
    puVar11 = puStack_48;
    unaff_RBX = puStack_50;
    uStack_ac = uVar5;
    if ((int)uStack_40 == 0) {
      lVar9 = utf8_to_utf16_length(puStack_50,puStack_48,0);
      if ((lVar9 < 0) || (((uint)lVar9 & 0x7fff) != (uint)unaff_R15)) {
        puVar11 = (ushort *)&UNK_0015b3df;
        puVar13 = (ushort *)0x5;
        __android_log_print(5,&UNK_0015b3df,&UNK_001805f9,param_3,lVar9,unaff_R15,uStack_70,uVar6,
                            uVar20);
code_r0x0042dbe8:
        param_1[6] = 0;
        param_1[7] = 0;
        param_4 = param_3;
        uVar16 = unaff_R15;
        goto code_r0x0042dbf4;
      }
      uVar16 = func_0x0099c4d0(lVar9 + 1,2);
      if (uVar16 == 0) {
        puVar8 = &UNK_0017f0b1;
        param_3 = (ushort *)((ulong)param_3 & 0xffffffff);
code_r0x0042dbe1:
        puVar13 = (ushort *)0x5;
        puVar11 = (ushort *)&UNK_0015b3df;
        __android_log_print(5,&UNK_0015b3df,puVar8);
        goto code_r0x0042dbe8;
      }
      puVar13 = unaff_RBX;
      utf8_to_utf16(unaff_RBX,puVar11,uVar16,lVar9 + 1);
      lVar14 = *(long *)(param_2 + 0x54);
      param_4 = param_2;
      if (lVar14 == 0) {
        unaff_RBX = *(ushort **)(param_2 + 0xc);
        puVar13 = (ushort *)(ulong)*(uint *)(unaff_RBX + 4);
        puVar11 = (ushort *)0x8;
        lVar14 = func_0x0099c4d0();
        *(long *)(param_2 + 0x54) = lVar14;
        if (lVar14 == 0) {
          param_3 = (ushort *)(ulong)(uint)(*(int *)(unaff_RBX + 4) << 3);
          puVar8 = &UNK_001647b6;
          unaff_R15 = uVar16;
          goto code_r0x0042dbe1;
        }
      }
      *(ulong *)(lVar14 + (long)param_3 * 8) = uVar16;
      *(ulong *)(param_1 + 4) = uVar16;
      *(long *)(param_1 + 8) = lVar9;
      uVar5 = 0;
code_r0x0042dbf9:
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      goto code_r0x0042dbfd;
    }
    if ((int)uStack_40 == 1) {
      *(ushort **)(param_1 + 4) = puStack_50;
      param_4 = puVar18;
      unaff_RBX = puVar10;
      puVar11 = puVar12;
code_r0x0042dbf4:
      uVar5 = 1;
      goto code_r0x0042dbf9;
    }
  }
  else {
code_r0x0042d935:
    param_1[6] = 0;
    param_1[7] = 0;
    unaff_RBX = puVar10;
    puVar11 = param_2;
    uVar6 = in_stack_ffffffffffffff50;
code_r0x0042d93c:
    param_1[0xc] = 1;
    param_1[0xd] = 0;
    uVar16 = unaff_R15;
code_r0x0042d943:
    puVar13 = param_1;
    param_3 = unaff_R14;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      return param_1;
    }
code_r0x0042dc4e:
    func_0x0099bd00();
    puVar18 = param_4;
    puVar10 = unaff_RBX;
    puVar12 = puVar11;
    unaff_R15 = uVar16;
  }
  auVar19 = func_0x0043f2f0();
  lVar9 = CONCAT44(uStack_ac,uVar6);
  if ((uint)((int)(byte *)(lVar9 + (long)puVar18) - (int)*(undefined8 *)(puVar12 + 0x48)) <
      *(uint *)(puVar12 + 0x58)) {
    if (lVar9 != 0) {
      if (*(byte *)(lVar9 + (long)puVar18) != 0) {
        uVar16 = 0x8000;
        lVar14 = 0;
        do {
          puVar11 = (ushort *)(uVar16 | (ulong)puVar18);
          pbVar2 = (byte *)(lVar9 + (long)puVar11);
          if (*(uint *)(puVar12 + 0x58) <=
              (uint)((int)pbVar2 - (int)*(undefined8 *)(puVar12 + 0x48))) goto code_r0x0042dcfb;
          lVar14 = lVar14 + -1;
          uVar16 = uVar16 + 0x8000;
        } while (*pbVar2 != 0);
        puVar18 = puVar11;
        if (lVar14 != 0) {
          __android_log_print(5,&UNK_0015b3df,&UNK_0015cad7,auVar19._8_8_ & 0xffffffff,
                              (ulong)puVar11 & 0xffffffff,pbVar2,auVar19._0_8_,puVar10,param_3,
                              unaff_R15,&stack0xfffffffffffffff8);
        }
      }
      *(long *)(puVar13 + 4) = lVar9;
      *(ushort **)(puVar13 + 8) = puVar18;
      uVar6 = 0;
      goto code_r0x0042dd32;
    }
    puVar13[4] = 0xffff;
    puVar13[5] = 0xffff;
    puVar13[6] = 1;
    puVar13[7] = 0;
  }
  else {
code_r0x0042dcfb:
    __android_log_print(5,&UNK_0015b3df,&UNK_0015988c,auVar19._8_8_ & 0xffffffff);
    puVar13[6] = 0;
    puVar13[7] = 0;
  }
  uVar6 = 1;
code_r0x0042dd32:
  *(undefined4 *)(puVar13 + 0xc) = uVar6;
  return puVar13;
}


