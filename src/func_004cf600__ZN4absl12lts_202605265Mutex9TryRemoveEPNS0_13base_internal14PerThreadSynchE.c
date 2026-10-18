// Function: _ZN4absl12lts_202605265Mutex9TryRemoveEPNS0_13base_internal14PerThreadSynchE
// Address: 004cf600
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN4absl12lts_202605265Mutex9TryRemoveEPNS0_13base_internal14PerThreadSynchE
                (ulong *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar9 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
  if (lVar9 != 0) {
    *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + 1;
  }
  uVar2 = *param_1;
  uVar8 = (uint)uVar2 & 0x4d;
  uVar11 = (ulong)uVar8;
  if (uVar8 != 4) goto code_r0x004cf805;
  LOCK();
  uVar11 = *param_1;
  bVar16 = uVar2 == uVar11;
  if (bVar16) {
    *param_1 = uVar2 | 0x48;
    uVar11 = uVar2;
  }
  UNLOCK();
  if (!bVar16) goto code_r0x004cf805;
  plVar12 = (long *)(uVar2 & 0xffffffffffffff00);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar10 = (long *)*plVar12;
    plVar14 = plVar12;
    if (plVar10 != param_2) {
      do {
        plVar14 = plVar10;
        if ((*(long *)param_2[4] == *(long *)plVar10[4]) && ((int)param_2[3] == (int)plVar10[3])) {
          pauVar3 = (undefined1 (*) [16])((long *)param_2[4])[1];
          pauVar4 = (undefined1 (*) [16])((long *)plVar10[4])[1];
          if ((pauVar3 != (undefined1 (*) [16])0x0) && (pauVar4 != (undefined1 (*) [16])0x0)) {
            if ((*(long *)pauVar3[1] == *(long *)pauVar4[1]) &&
               (*(long *)(pauVar3[1] + 8) == *(long *)(pauVar4[1] + 8))) {
              auVar1 = *pauVar3;
              auVar17[0] = -((*pauVar4)[0] == auVar1[0]);
              auVar17[1] = -((*pauVar4)[1] == auVar1[1]);
              auVar17[2] = -((*pauVar4)[2] == auVar1[2]);
              auVar17[3] = -((*pauVar4)[3] == auVar1[3]);
              auVar17[4] = -((*pauVar4)[4] == auVar1[4]);
              auVar17[5] = -((*pauVar4)[5] == auVar1[5]);
              auVar17[6] = -((*pauVar4)[6] == auVar1[6]);
              auVar17[7] = -((*pauVar4)[7] == auVar1[7]);
              auVar17[8] = -((*pauVar4)[8] == auVar1[8]);
              auVar17[9] = -((*pauVar4)[9] == auVar1[9]);
              auVar17[10] = -((*pauVar4)[10] == auVar1[10]);
              auVar17[0xb] = -((*pauVar4)[0xb] == auVar1[0xb]);
              auVar17[0xc] = -((*pauVar4)[0xc] == auVar1[0xc]);
              auVar17[0xd] = -((*pauVar4)[0xd] == auVar1[0xd]);
              auVar17[0xe] = -((*pauVar4)[0xe] == auVar1[0xe]);
              auVar17[0xf] = -((*pauVar4)[0xf] == auVar1[0xf]);
              if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x004cf6b9;
            }
            goto code_r0x004cf6e0;
          }
          if (pauVar3 != pauVar4) goto code_r0x004cf6e0;
code_r0x004cf6b9:
          if ((long *)plVar10[1] == param_2) {
            plVar13 = (long *)param_2[1];
            if ((plVar13 == (long *)0x0) && (plVar13 = (long *)*plVar10, plVar13 == param_2)) {
              plVar13 = (long *)0x0;
            }
            plVar10[1] = (long)plVar13;
          }
        }
        else {
code_r0x004cf6e0:
          plVar13 = (long *)plVar10[1];
          if (plVar13 != (long *)0x0) {
            plVar7 = plVar10;
            for (plVar6 = (long *)plVar13[1]; plVar14 = plVar13, plVar6 != (long *)0x0;
                plVar6 = (long *)plVar6[1]) {
              plVar7[1] = (long)plVar6;
              plVar13 = plVar6;
              plVar7 = plVar14;
            }
            plVar10[1] = (long)plVar14;
          }
        }
        plVar10 = (long *)*plVar14;
      } while ((plVar14 != plVar12) && (plVar10 != param_2));
      if (plVar10 != param_2) goto code_r0x004cf7d6;
    }
    lVar5 = *plVar10;
    *plVar14 = lVar5;
    if (plVar10 == plVar12) {
      bVar16 = plVar14 != plVar12;
      plVar12 = (long *)0x0;
      if (bVar16) {
        plVar12 = plVar14;
      }
    }
    else if (plVar14 != plVar12) {
      if ((*(long *)plVar14[4] == **(long **)(lVar5 + 0x20)) &&
         ((int)plVar14[3] == *(int *)(lVar5 + 0x18))) {
        pauVar3 = (undefined1 (*) [16])((long *)plVar14[4])[1];
        pauVar4 = (undefined1 (*) [16])(*(long **)(lVar5 + 0x20))[1];
        if ((pauVar3 == (undefined1 (*) [16])0x0) || (pauVar4 == (undefined1 (*) [16])0x0)) {
          if (pauVar3 == pauVar4) {
code_r0x004cf81c:
            if (*(long *)(lVar5 + 8) == 0) {
              plVar14[1] = lVar5;
            }
            else {
              plVar14[1] = *(long *)(lVar5 + 8);
            }
          }
        }
        else if ((*(long *)pauVar3[1] == *(long *)pauVar4[1]) &&
                (*(long *)(pauVar3[1] + 8) == *(long *)(pauVar4[1] + 8))) {
          auVar1 = *pauVar3;
          auVar18[0] = -((*pauVar4)[0] == auVar1[0]);
          auVar18[1] = -((*pauVar4)[1] == auVar1[1]);
          auVar18[2] = -((*pauVar4)[2] == auVar1[2]);
          auVar18[3] = -((*pauVar4)[3] == auVar1[3]);
          auVar18[4] = -((*pauVar4)[4] == auVar1[4]);
          auVar18[5] = -((*pauVar4)[5] == auVar1[5]);
          auVar18[6] = -((*pauVar4)[6] == auVar1[6]);
          auVar18[7] = -((*pauVar4)[7] == auVar1[7]);
          auVar18[8] = -((*pauVar4)[8] == auVar1[8]);
          auVar18[9] = -((*pauVar4)[9] == auVar1[9]);
          auVar18[10] = -((*pauVar4)[10] == auVar1[10]);
          auVar18[0xb] = -((*pauVar4)[0xb] == auVar1[0xb]);
          auVar18[0xc] = -((*pauVar4)[0xc] == auVar1[0xc]);
          auVar18[0xd] = -((*pauVar4)[0xd] == auVar1[0xd]);
          auVar18[0xe] = -((*pauVar4)[0xe] == auVar1[0xe]);
          auVar18[0xf] = -((*pauVar4)[0xf] == auVar1[0xf]);
          if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) goto code_r0x004cf81c;
        }
      }
    }
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0x1c) = 0;
  }
code_r0x004cf7d6:
  do {
    uVar2 = *param_1;
    uVar15 = (ulong)((uint)uVar2 & 0x12);
    if (plVar12 != (long *)0x0) {
      uVar15 = uVar15 | (ulong)plVar12 | 4;
      plVar12[5] = 0;
      *(undefined1 *)((long)plVar12 + 0x13) = 0;
    }
    LOCK();
    uVar11 = *param_1;
    bVar16 = uVar2 == uVar11;
    if (bVar16) {
      *param_1 = uVar15;
      uVar11 = uVar2;
    }
    UNLOCK();
  } while (!bVar16);
code_r0x004cf805:
  if (lVar9 != 0) {
    uVar11 = _ZN4absl12lts_2026052613base_internal30CurrentThreadIdentityIfPresentEv();
    *(int *)(uVar11 + 0x4c) = *(int *)(uVar11 + 0x4c) + -1;
  }
  return uVar11;
}


