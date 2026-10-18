// Function: _ZN4absl12lts_202605267CondVar9SignalAllEv
// Address: 004d1260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004d048d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004d0492) */

ulong _ZN4absl12lts_202605267CondVar9SignalAllEv(ulong *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong in_RAX;
  ulong uVar8;
  int iVar9;
  undefined8 unaff_RBX;
  undefined8 *puVar10;
  undefined1 *unaff_RBP;
  ulong uVar11;
  undefined *puVar12;
  undefined *unaff_R12;
  ulong uVar13;
  ulong unaff_R13;
  ulong *unaff_R14;
  undefined8 *puVar14;
  ulong unaff_R15;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  
  uVar11 = *param_1;
  if (uVar11 != 0) {
    uVar7 = 0;
    do {
      if ((uVar11 & 1) == 0) {
        uVar13 = (ulong)((uint)uVar11 & 2);
        LOCK();
        uVar8 = *param_1;
        bVar16 = uVar11 == uVar8;
        if (bVar16) {
          *param_1 = uVar13;
          uVar8 = uVar11;
        }
        UNLOCK();
        if (bVar16) {
          puVar14 = (undefined8 *)(uVar11 & 0xfffffffffffffffc);
          if (puVar14 != (undefined8 *)0x0) {
            puVar15 = (undefined8 *)*puVar14;
            do {
              puVar3 = (undefined8 *)*puVar15;
              _ZN4absl12lts_202605265Mutex3FerEPNS0_13base_internal14PerThreadSynchE
                        (*(undefined8 *)(puVar15[4] + 0x18),puVar15);
              bVar16 = puVar15 != puVar14;
              puVar15 = puVar3;
            } while (bVar16);
            uVar8 = (*pcRam00000000009fb830)(&UNK_00159a7a,param_1);
          }
          if (uVar13 == 0) {
            return uVar8;
          }
          uVar11 = 0xd;
          do {
            *(undefined1 **)((long)register0x00000020 + -8) = unaff_RBP;
            *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
            *(ulong **)((long)register0x00000020 + -0x18) = unaff_R14;
            *(ulong *)((long)register0x00000020 + -0x20) = unaff_R13;
            *(undefined **)((long)register0x00000020 + -0x28) = unaff_R12;
            *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
            *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28)
            ;
            *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d026c;
            puVar6 = (ulong *)func_0x004d0da0();
            if ((puVar6 == (ulong *)0x0) ||
               (unaff_R14 = param_1, unaff_R15 = uVar11, (char)puVar6[5] != '\0')) {
              *(int *)((long)register0x00000020 + -0x53c) = (int)uVar11;
              *(ulong **)((long)register0x00000020 + -0x548) = param_1;
              *(ulong **)((long)register0x00000020 + -0x550) = puVar6;
              *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d02a9;
              func_0x0099bdb0((undefined1 *)((long)register0x00000020 + -0x178),0,0x140);
              *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d02bb;
              uVar4 = _ZN4absl12lts_2026052613GetStackTraceEPPvii
                                ((undefined1 *)((long)register0x00000020 + -0x178),0x28,1);
              unaff_R12 = (undefined *)(ulong)uVar4;
              *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d02d1;
              func_0x0099bdb0((undefined1 *)((long)register0x00000020 + -0x535),0,0x3bd);
              *(undefined2 *)((long)register0x00000020 + -0x538) = 0x4020;
              *(undefined1 *)((long)register0x00000020 + -0x536) = 0;
              if (uVar4 != 0) {
                param_1 = (ulong *)0x2;
                unaff_R12 = &UNK_001806e0;
                uVar11 = 0;
                do {
                  unaff_R13 = 0x3c0 - (long)param_1;
                  uVar1 = *(undefined8 *)((long)register0x00000020 + uVar11 * 8 + -0x178);
                  *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d032c;
                  uVar5 = func_0x0099c030((undefined1 *)((long)param_1 + (long)register0x00000020) +
                                          -0x538,unaff_R13,&UNK_001806e0,uVar1);
                  if (((int)uVar5 < 0) || (unaff_R13 <= uVar5)) break;
                  param_1 = (ulong *)(ulong)((int)param_1 + uVar5);
                  uVar11 = uVar11 + 1;
                } while (uVar4 != uVar11);
              }
              uVar4 = *(uint *)((long)register0x00000020 + -0x53c);
              puVar6 = *(ulong **)((long)register0x00000020 + -0x550);
              uVar1 = *(undefined8 *)(&UNK_009a0068 + (ulong)uVar4 * 0x10);
              puVar12 = &UNK_00162ac9;
              if (puVar6 != (ulong *)0x0) {
                puVar12 = (undefined *)((long)puVar6 + 0x29);
              }
              *(undefined1 **)((long)register0x00000020 + -0x560) =
                   (undefined1 *)((long)register0x00000020 + -0x538);
              *(undefined **)((long)register0x00000020 + -0x568) = puVar12;
              *(undefined **)((long)register0x00000020 + -0x570) = &UNK_004d03a3;
              _ZN4absl12lts_2026052616raw_log_internal6RawLogENS0_11LogSeverityEPKciS4_z
                        (0,&UNK_00174346,0x1c4,&UNK_0015cc8c,uVar1,
                         *(undefined8 *)((long)register0x00000020 + -0x548));
              unaff_R14 = param_1;
              unaff_R15 = (ulong)uVar4;
            }
            if (((puVar6 != (ulong *)0x0) && ((1L << ((byte)unaff_R15 & 0x3f) & 0x3a5U) != 0)) &&
               (pcVar2 = (code *)puVar6[3], pcVar2 != (code *)0x0)) {
              uVar11 = puVar6[4];
              *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d03d2;
              (*pcVar2)(uVar11);
            }
            *(undefined **)((long)register0x00000020 + -0x560) = &UNK_004d03da;
            param_1 = puVar6;
            func_0x004cf4a0();
            if (*(ulong *)(in_FS_OFFSET + 0x28) == *(ulong *)((long)register0x00000020 + -0x38)) {
              return *(ulong *)(in_FS_OFFSET + 0x28);
            }
            *(code **)((long)register0x00000020 + -0x560) =
                 _ZN4absl12lts_202605265Mutex15try_lock_sharedEv;
            func_0x0099bd00();
            *(undefined1 **)((long)register0x00000020 + -0x560) =
                 (undefined1 *)((long)register0x00000020 + -8);
            uVar11 = *param_1;
            if ((uVar11 & 0x1c) == 0) {
              iVar9 = -4;
              uVar7 = uVar11;
              do {
                uVar8 = (uVar7 | 1) + 0x100;
                LOCK();
                uVar11 = *param_1;
                bVar16 = uVar7 == uVar11;
                if (bVar16) {
                  *param_1 = uVar8;
                  uVar11 = uVar7;
                }
                UNLOCK();
                uVar7 = CONCAT71((int7)(uVar8 >> 8),1);
                if (bVar16) goto code_r0x004d043d;
              } while ((iVar9 != 0) && (iVar9 = iVar9 + 1, uVar7 = uVar11, (uVar11 & 0x1c) == 0));
            }
            if ((uVar11 & 0x10) == 0) {
              uVar7 = 0;
code_r0x004d043d:
              return uVar7 & 0xffffffff;
            }
            unaff_RBP = (undefined1 *)((long)register0x00000020 + -0x560);
            *(undefined8 *)((long)register0x00000020 + -0x560) =
                 *(undefined8 *)((long)register0x00000020 + -0x560);
            *(ulong **)((long)register0x00000020 + -0x568) = puVar6;
            *(ulong *)((long)register0x00000020 + -0x570) = uVar11;
            iVar9 = -5;
            uVar11 = *param_1;
            do {
              uVar7 = uVar11;
              if ((uVar11 & 0xc) == 0) {
                LOCK();
                uVar7 = *param_1;
                bVar16 = uVar11 == uVar7;
                if (bVar16) {
                  *param_1 = (uVar11 | 1) + 0x100;
                  uVar7 = uVar11;
                }
                UNLOCK();
                if (bVar16) {
                  unaff_RBX = CONCAT71((int7)((ulong)puVar6 >> 8),1);
                  uVar11 = 2;
                  goto code_r0x004d048d;
                }
              }
              iVar9 = iVar9 + 1;
              uVar11 = uVar7;
            } while (iVar9 != 0);
            unaff_RBX = 0;
            uVar11 = 3;
code_r0x004d048d:
            puVar10 = (undefined8 *)((long)register0x00000020 + -0x578);
            register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x578);
            *puVar10 = &UNK_004d0492;
          } while( true );
        }
      }
      in_RAX = _ZN4absl12lts_2026052624synchronization_internal10MutexDelayEii(uVar7,1);
      uVar7 = in_RAX & 0xffffffff;
      uVar11 = *param_1;
    } while (uVar11 != 0);
  }
  return in_RAX;
}


