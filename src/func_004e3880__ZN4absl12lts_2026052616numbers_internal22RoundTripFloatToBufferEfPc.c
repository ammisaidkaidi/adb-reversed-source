// Function: _ZN4absl12lts_2026052616numbers_internal22RoundTripFloatToBufferEfPc
// Address: 004e3880
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined4 *
_ZN4absl12lts_2026052616numbers_internal22RoundTripFloatToBufferEfPc
          (float param_1,undefined4 *param_2)

{
  double dVar1;
  double *pdVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  undefined4 *puVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  
  if (NAN(param_1)) {
    *param_2 = 0x6e616e;
    return param_2;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    if (-1 < (int)param_1) {
      *(undefined2 *)param_2 = 0x30;
      return param_2;
    }
    *(undefined1 *)((long)param_2 + 2) = 0;
    *(undefined2 *)param_2 = 0x302d;
    return param_2;
  }
  puVar9 = param_2;
  if (param_1 < 0.0) {
    *(undefined1 *)param_2 = 0x2d;
    param_1 = -param_1;
    puVar9 = (undefined4 *)((long)param_2 + 1);
  }
  if (3.4028235e+38 < param_1) {
    *puVar9 = 0x666e69;
    return param_2;
  }
  fVar11 = (float)func_0x0099c7a0();
  dVar14 = (double)param_1;
  dVar1 = ((double)fVar11 + dVar14) * 0.5;
  dVar13 = (dVar14 - dVar1) + dVar14;
  if (1.0 <= param_1) {
    if (param_1 < 1e+08) {
      puVar3 = (undefined1 *)
               _ZN4absl12lts_2026052616numbers_internal15FastIntToBufferEiPc((int)param_1,puVar9);
      dVar14 = (double)(int)param_1;
      if ((dVar1 < dVar14) && (dVar14 < dVar13)) {
        return param_2;
      }
      puVar9 = (undefined4 *)(puVar3 + 1);
      *puVar3 = 0x2e;
      uVar12 = SUB84((dVar1 - dVar14) * 100000000000.0,0);
      dVar13 = (dVar13 - dVar14) * 100000000000.0;
      goto code_r0x004e3b51;
    }
    pdVar2 = (double *)&UNK_001fff40;
    uVar8 = 0x20;
    do {
      uVar5 = uVar8 >> 1;
      uVar6 = uVar5;
      if (pdVar2[uVar5 * 3] <= dVar14 && dVar14 != pdVar2[uVar5 * 3]) {
        uVar6 = ~uVar5 + uVar8;
        pdVar2 = pdVar2 + uVar5 * 3 + 3;
      }
      uVar8 = uVar6;
    } while (uVar6 != 0);
    bVar10 = pdVar2 == (double *)_ZN4absl12lts_2026052616numbers_internal8kHexCharE;
    pdVar7 = (double *)&UNK_00200228;
  }
  else {
    if (0.0001 <= param_1) {
      *(undefined2 *)puVar9 = 0x2e30;
      if (0.1 <= param_1) {
        puVar9 = (undefined4 *)((long)puVar9 + 2);
        dVar14 = 100000000000.0;
      }
      else {
        *(undefined1 *)((long)puVar9 + 2) = 0x30;
        if (0.01 <= param_1) {
          puVar9 = (undefined4 *)((long)puVar9 + 3);
          dVar14 = 1000000000000.0;
        }
        else {
          *(undefined1 *)((long)puVar9 + 3) = 0x30;
          if (0.001 <= param_1) {
            puVar9 = puVar9 + 1;
            dVar14 = 10000000000000.0;
          }
          else {
            *(undefined1 *)(puVar9 + 1) = 0x30;
            puVar9 = (undefined4 *)((long)puVar9 + 5);
            dVar14 = 100000000000000.0;
          }
        }
      }
      uVar12 = SUB84(dVar1 * dVar14,0);
      dVar13 = dVar13 * dVar14;
code_r0x004e3b51:
      func_0x004e3b70(uVar12,dVar13,puVar9);
      return param_2;
    }
    pdVar2 = (double *)&UNK_001ffb50;
    uVar8 = 0x2a;
    do {
      uVar5 = uVar8 >> 1;
      uVar6 = uVar5;
      if (pdVar2[uVar5 * 3] <= dVar14 && dVar14 != pdVar2[uVar5 * 3]) {
        uVar6 = ~uVar5 + uVar8;
        pdVar2 = pdVar2 + uVar5 * 3 + 3;
      }
      uVar8 = uVar6;
    } while (uVar6 != 0);
    bVar10 = pdVar2 == (double *)&UNK_001fff40;
    pdVar7 = (double *)&UNK_001fff28;
  }
  if (!bVar10) {
    pdVar7 = pdVar2;
  }
  pdVar2 = pdVar7 + -3;
  if (*pdVar7 <= dVar14) {
    pdVar2 = pdVar7;
  }
  puVar4 = (undefined2 *)
           func_0x004e3b70(SUB84(dVar1 * pdVar2[1],0),dVar13 * pdVar2[1],
                           (undefined1 *)((long)puVar9 + 1));
  *(undefined1 *)puVar9 = *(undefined1 *)((long)puVar9 + 1);
  *(undefined1 *)((long)puVar9 + 1) = 0x2e;
  uVar8 = (ulong)(puVar4 == (undefined2 *)((long)puVar9 + 2));
  *(undefined4 *)((long)puVar4 - uVar8) = *(undefined4 *)(pdVar2 + 2);
  *(undefined1 *)((long)puVar4 + (4 - uVar8)) = 0;
  return param_2;
}


