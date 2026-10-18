// Function: _ZNK7android13ResStringPool9string8AtEm
// Address: 0042dd60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android13ResStringPool9string8AtEm(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  
  if (((*(int *)(param_2 + 8) == 0) && (param_3 < *(uint *)(*(long *)(param_2 + 0x18) + 8))) &&
     ((*(byte *)(*(long *)(param_2 + 0x18) + 0x11) & 1) != 0)) {
    if (*(long *)(param_2 + 0x60) != 0) {
      uVar10 = *(uint *)(*(long *)(param_2 + 0x60) + param_3 * 4);
      uVar11 = *(uint *)(param_2 + 0xb0);
      if (uVar10 < uVar11 - 1) {
        lVar2 = *(long *)(param_2 + 0x90);
        if (lVar2 == 0) goto code_r0x0042df1b;
        lVar12 = lVar2 + (ulong)uVar10;
        uVar8 = (ulong)(*(byte *)(lVar2 + (ulong)uVar10) >> 7);
        lVar4 = lVar12 + uVar8;
        bVar1 = *(byte *)(uVar8 + 1 + lVar12);
        uVar8 = (ulong)bVar1;
        lVar12 = 1;
        if ((char)bVar1 < '\0') {
          uVar8 = (ulong)((bVar1 & 0x7f) << 8) | (ulong)*(byte *)(lVar4 + 2);
          lVar12 = 2;
        }
        pcVar13 = (char *)(uVar8 + lVar4 + lVar12 + 1);
        uVar10 = (int)pcVar13 - (int)lVar2;
        if (uVar10 < uVar11) {
          lVar12 = lVar4 + lVar12 + 1;
          uVar7 = uVar8;
          if (*pcVar13 != '\0') {
            lVar4 = 0;
            uVar3 = 0x8000;
            do {
              uVar9 = uVar3;
              uVar7 = uVar9 | uVar8;
              pcVar13 = (char *)(lVar12 + uVar7);
              if (uVar11 <= (uint)((int)pcVar13 - (int)lVar2)) {
                __android_log_print(5,&UNK_0015b3df,&UNK_0015988c);
                *(undefined4 *)(param_1 + 0xc) = 0;
                goto code_r0x0042ded2;
              }
              lVar4 = lVar4 + -1;
              uVar3 = uVar9 + 0x8000;
            } while (*pcVar13 != '\0');
            if (lVar4 != 0) {
              __android_log_print(5,&UNK_0015b3df,&UNK_0015cad7,param_3,uVar9 & 0xffffffff | uVar8);
            }
          }
          *(long *)(param_1 + 8) = lVar12;
          *(ulong *)(param_1 + 0x10) = uVar7;
          uVar5 = 0;
          goto code_r0x0042ded7;
        }
        puVar6 = &UNK_00188153;
      }
      else {
        uVar10 = uVar10 * 2;
        uVar11 = uVar11 * 2;
        puVar6 = &UNK_0015b42b;
      }
      __android_log_print(5,&UNK_0015b3df,puVar6,param_3,uVar10,uVar11);
      goto code_r0x0042decb;
    }
code_r0x0042df1b:
    *(undefined8 *)(param_1 + 8) = 0x1ffffffff;
  }
  else {
code_r0x0042decb:
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
code_r0x0042ded2:
  uVar5 = 1;
code_r0x0042ded7:
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  return;
}


