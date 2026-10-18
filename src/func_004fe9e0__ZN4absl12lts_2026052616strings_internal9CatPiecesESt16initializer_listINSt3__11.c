// Function: _ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
// Address: 004fe9e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined1 (*) [16]
_ZN4absl12lts_2026052616strings_internal9CatPiecesESt16initializer_listINSt3__117basic_string_viewIcNS3_11char_traitsIcEEEEE
          (undefined1 (*param_1) [16],undefined8 *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar9 = 0;
  lVar12 = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  if (param_3 == 0) {
    uVar9 = 0;
    bVar2 = (*param_1)[0];
    goto joined_r0x004fea35;
  }
  uVar1 = param_3 * 0x10 - 0x10;
  puVar4 = param_2;
  if (0x3f < uVar1) {
    uVar5 = (uVar1 >> 4) + 1;
    uVar7 = 4;
    if ((uVar5 & 3) != 0) {
      uVar7 = (ulong)((uint)uVar5 & 3);
    }
    lVar6 = uVar5 - uVar7;
    lVar3 = lVar6 * 2;
    plVar8 = param_2 + 5;
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar9 = uVar9 + plVar8[-4];
      lVar12 = lVar12 + plVar8[-2];
      lVar13 = lVar13 + *plVar8;
      lVar14 = lVar14 + plVar8[2];
      plVar8 = plVar8 + 8;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
    uVar9 = lVar14 + lVar12 + lVar13 + uVar9;
    puVar4 = param_2 + lVar3;
  }
  puVar11 = param_2 + param_3 * 2;
  do {
    uVar9 = uVar9 + puVar4[1];
    puVar4 = puVar4 + 2;
  } while (puVar4 != puVar11);
  if (uVar9 != 0) {
    if (uVar9 < 0x17) {
code_r0x004feb1c:
      puVar10 = *param_1 + 1;
      (*param_1)[0] = (char)uVar9 * '\x02';
    }
    else {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,0x16,uVar9 - 0x16,0,0,0,0);
      *(undefined8 *)(*param_1 + 8) = 0;
      if (((*param_1)[0] & 1) == 0) goto code_r0x004feb1c;
      puVar10 = *(undefined1 **)param_1[1];
      *(ulong *)(*param_1 + 8) = uVar9;
    }
    puVar10[uVar9] = 0;
  }
  puVar10 = *param_1 + 1;
  if (((*param_1)[0] & 1) != 0) {
    puVar10 = *(undefined1 **)param_1[1];
  }
  if ((uVar1 & 0x10) == 0) {
    lVar12 = param_2[1];
    if (lVar12 != 0) {
      func_0x0099bda0(puVar10,*param_2,lVar12);
      puVar10 = puVar10 + lVar12;
    }
    param_2 = param_2 + 2;
  }
  if (uVar1 != 0) {
    do {
      lVar12 = param_2[1];
      if (lVar12 != 0) {
        func_0x0099bda0(puVar10,*param_2,lVar12);
        puVar10 = puVar10 + lVar12;
      }
      lVar12 = param_2[3];
      if (lVar12 != 0) {
        func_0x0099bda0(puVar10,param_2[2],lVar12);
        puVar10 = puVar10 + lVar12;
      }
      param_2 = param_2 + 4;
    } while (param_2 != puVar11);
  }
  bVar2 = (*param_1)[0];
joined_r0x004fea35:
  if ((bVar2 & 1) == 0) {
    puVar10 = *param_1 + 1;
    (*param_1)[0] = (char)uVar9 * '\x02';
  }
  else {
    puVar10 = *(undefined1 **)param_1[1];
    *(ulong *)(*param_1 + 8) = uVar9;
  }
  puVar10[uVar9] = 0;
  return param_1;
}


