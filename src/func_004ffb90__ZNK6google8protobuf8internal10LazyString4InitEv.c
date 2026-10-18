// Function: _ZNK6google8protobuf8internal10LazyString4InitEv
// Address: 004ffb90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNK6google8protobuf8internal10LazyString4InitEv(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong extraout_RDX;
  ulong *extraout_RDX_00;
  long extraout_RDX_01;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  bool bVar18;
  ulong uVar19;
  
  if (cRam0000000000a030f0 == '\0') {
    iVar4 = __cxa_guard_acquire(0xa030f0);
    if (iVar4 != 0) {
      __cxa_guard_release(0xa030f0);
    }
  }
  puVar13 = (ulong *)0xa030e8;
  _ZN4absl12lts_202605265Mutex4lockEv();
  puVar14 = (ulong *)param_1[3];
  if ((ulong *)param_1[3] == (ulong *)0x0) {
    uVar10 = param_1[1];
    if (0xfffffffffffffff6 < uVar10) {
      func_0x0032e8f0();
      pbVar8 = (byte *)(*puVar13 & 0xfffffffffffffffc);
      bVar1 = *pbVar8;
      puVar14 = (ulong *)(ulong)bVar1;
      bVar18 = (bVar1 & 1) != 0;
      pbVar17 = pbVar8 + 1;
      if (bVar18) {
        pbVar17 = *(byte **)(pbVar8 + 0x10);
      }
      uVar11 = (ulong)(bVar1 >> 1);
      if (bVar18) {
        uVar11 = *(ulong *)(pbVar8 + 8);
      }
      if (param_2 == (ulong *)0x0) {
        puVar13 = (ulong *)0x18;
        plVar9 = (long *)_Znwm();
        if (uVar11 < 0xfffffffffffffff7) {
          if (uVar11 < 0x17) {
            *(char *)plVar9 = (char)uVar11 * '\x02';
            pcVar7 = (char *)((long)plVar9 + 1);
          }
          else {
            lVar15 = 0x1a;
            if ((uVar11 | 7) != 0x17) {
              lVar15 = (uVar11 | 7) + 1;
            }
            pcVar7 = (char *)_Znwm(lVar15);
            *plVar9 = lVar15 + 1;
            plVar9[1] = uVar11;
            plVar9[2] = (long)pcVar7;
          }
          func_0x0099bda0(pcVar7,pbVar17,uVar11);
          uVar10 = 2;
          goto code_r0x004ffd92;
        }
      }
      else {
        puVar13 = param_2;
        plVar9 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
        if (uVar11 < 0xfffffffffffffff7) {
          if (uVar11 < 0x17) {
            *(char *)plVar9 = (char)uVar11 * '\x02';
            pcVar7 = (char *)((long)plVar9 + 1);
          }
          else {
            lVar15 = 0x1a;
            if ((uVar11 | 7) != 0x17) {
              lVar15 = (uVar11 | 7) + 1;
            }
            pcVar7 = (char *)_Znwm(lVar15);
            *plVar9 = lVar15 + 1;
            plVar9[1] = uVar11;
            plVar9[2] = (long)pcVar7;
          }
          func_0x0099bd90(pcVar7,pbVar17,uVar11);
          uVar10 = 3;
code_r0x004ffd92:
          pcVar7[uVar11] = '\0';
          return (ulong *)((ulong)plVar9 | uVar10);
        }
      }
      func_0x0032e8f0();
      cVar3 = (char)extraout_RDX;
      if ((*puVar13 & 3) != 0) {
        puVar14 = (ulong *)(*puVar13 & 0xfffffffffffffffc);
        uVar10 = *puVar14;
        uVar11 = 0x16;
        if ((*puVar14 & 1) != 0) {
          uVar11 = (uVar10 & 0xfffffffffffffffe) - 1;
        }
        if (extraout_RDX < uVar11 || extraout_RDX - uVar11 == 0) {
          if ((uVar10 & 1) == 0) {
            pbVar17 = (byte *)((long)puVar14 + 1);
          }
          else {
            pbVar17 = (byte *)puVar14[2];
          }
          func_0x0099bd90(pbVar17);
          if ((*puVar14 & 1) == 0) {
            *(char *)puVar14 = cVar3 * '\x02';
          }
          else {
            puVar14[1] = extraout_RDX;
          }
          pbVar17[extraout_RDX] = 0;
        }
        else {
          if ((uVar10 & 1) == 0) {
            uVar10 = (ulong)((uint)(uVar10 >> 1) & 0x7f);
          }
          else {
            uVar10 = puVar14[1];
          }
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (puVar14,uVar11,extraout_RDX - uVar11,uVar10,0,uVar10);
        }
        return puVar14;
      }
      puVar12 = param_2;
      if (puVar14 == (ulong *)0x0) {
        puVar14 = (ulong *)0x18;
        plVar9 = (long *)_Znwm();
        if (extraout_RDX < 0xfffffffffffffff7) {
          if (extraout_RDX < 0x17) {
            *(char *)plVar9 = cVar3 * '\x02';
            pcVar7 = (char *)((long)plVar9 + 1);
          }
          else {
            lVar15 = 0x1a;
            if ((extraout_RDX | 7) != 0x17) {
              lVar15 = (extraout_RDX | 7) + 1;
            }
            pcVar7 = (char *)_Znwm(lVar15);
            *plVar9 = lVar15 + 1;
            plVar9[1] = extraout_RDX;
            plVar9[2] = (long)pcVar7;
          }
          func_0x0099bda0(pcVar7,param_2,extraout_RDX);
          uVar10 = 2;
          goto code_r0x004ffee3;
        }
      }
      else {
        plVar9 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv();
        if (extraout_RDX < 0xfffffffffffffff7) {
          if (extraout_RDX < 0x17) {
            *(char *)plVar9 = cVar3 * '\x02';
            pcVar7 = (char *)((long)plVar9 + 1);
          }
          else {
            lVar15 = 0x1a;
            if ((extraout_RDX | 7) != 0x17) {
              lVar15 = (extraout_RDX | 7) + 1;
            }
            pcVar7 = (char *)_Znwm(lVar15);
            *plVar9 = lVar15 + 1;
            plVar9[1] = extraout_RDX;
            plVar9[2] = (long)pcVar7;
          }
          func_0x0099bd90(pcVar7,param_2,extraout_RDX);
          uVar10 = 3;
code_r0x004ffee3:
          pcVar7[extraout_RDX] = '\0';
          *puVar13 = (ulong)plVar9 | uVar10;
          return puVar13;
        }
      }
      func_0x0032e8f0();
      if ((*puVar14 & 3) == 0) {
        bVar18 = ((byte)*puVar12 & 1) != 0;
        pbVar17 = (byte *)((long)puVar12 + 1);
        if (bVar18) {
          pbVar17 = (byte *)puVar12[2];
        }
        uVar10 = (ulong)(byte)((byte)*puVar12 >> 1);
        if (bVar18) {
          uVar10 = puVar12[1];
        }
        if (extraout_RDX_00 == (ulong *)0x0) {
          puVar13 = (ulong *)0x18;
          plVar9 = (long *)_Znwm();
          if (0xfffffffffffffff6 < uVar10) goto code_r0x005000c5;
          if (uVar10 < 0x17) {
            *(char *)plVar9 = (char)uVar10 * '\x02';
            pcVar7 = (char *)((long)plVar9 + 1);
          }
          else {
            lVar15 = 0x1a;
            if ((uVar10 | 7) != 0x17) {
              lVar15 = (uVar10 | 7) + 1;
            }
            pcVar7 = (char *)_Znwm(lVar15);
            *plVar9 = lVar15 + 1;
            plVar9[1] = uVar10;
            plVar9[2] = (long)pcVar7;
          }
          func_0x0099bda0(pcVar7,pbVar17,uVar10);
          uVar11 = 2;
        }
        else {
          puVar13 = extraout_RDX_00;
          plVar9 = (long *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                     ();
          if (0xfffffffffffffff6 < uVar10) {
code_r0x005000c5:
            func_0x0032e8f0();
            if ((*puVar13 & 3) == 0) {
              if (extraout_RDX_01 == 0) {
                puVar14 = (ulong *)_Znwm(0x18);
                uVar10 = 2;
              }
              else {
                puVar14 = (ulong *)_ZN6google8protobuf8internal15ThreadSafeArena23AllocateFromStringBlockEv
                                             (extraout_RDX_01);
                uVar10 = 3;
              }
              puVar14[2] = puVar12[2];
              uVar11 = puVar12[1];
              *puVar14 = *puVar12;
              puVar14[1] = uVar11;
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar13 = uVar10 | (ulong)puVar14;
            }
            else {
              puVar13 = (ulong *)(*puVar13 & 0xfffffffffffffffc);
              if ((*puVar13 & 1) != 0) {
                _ZdaPvSt11align_val_t(puVar13[2],*puVar13 & 0xfffffffffffffffe);
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13[2] = 0;
              }
              puVar14 = (ulong *)puVar12[2];
              puVar13[2] = (ulong)puVar14;
              uVar10 = puVar12[1];
              *puVar13 = *puVar12;
              puVar13[1] = uVar10;
              *(undefined2 *)puVar12 = 0;
            }
            return puVar14;
          }
          if (uVar10 < 0x17) {
            *(char *)plVar9 = (char)uVar10 * '\x02';
            pcVar7 = (char *)((long)plVar9 + 1);
          }
          else {
            lVar15 = 0x1a;
            if ((uVar10 | 7) != 0x17) {
              lVar15 = (uVar10 | 7) + 1;
            }
            pcVar7 = (char *)_Znwm(lVar15);
            *plVar9 = lVar15 + 1;
            plVar9[1] = uVar10;
            plVar9[2] = (long)pcVar7;
          }
          func_0x0099bd90(pcVar7,pbVar17,uVar10);
          uVar11 = 3;
        }
        pcVar7[uVar10] = '\0';
        *puVar14 = (ulong)plVar9 | uVar11;
      }
      else {
        puVar13 = (ulong *)(*puVar14 & 0xfffffffffffffffc);
        if (puVar12 != puVar13) {
          bVar1 = (byte)*puVar12;
          if ((*puVar13 & 1) != 0) {
            bVar18 = (bVar1 & 1) != 0;
            pbVar8 = (byte *)((long)puVar12 + 1);
            if (bVar18) {
              pbVar8 = (byte *)puVar12[2];
            }
            uVar11 = (ulong)(bVar1 >> 1);
            if (bVar18) {
              uVar11 = puVar12[1];
            }
            uVar5 = *puVar13 & 0xfffffffffffffffe;
            if (uVar11 < uVar5) {
              uVar10 = puVar13[2];
              puVar13[1] = uVar11;
              func_0x0099bd90(uVar10,pbVar8,uVar11);
              *(undefined1 *)(uVar10 + uVar11) = 0;
            }
            else {
              _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                        (puVar13,uVar5 - 1,(uVar11 - uVar5) + 1,puVar13[1],0,puVar13[1],uVar11,
                         pbVar8,pbVar8,extraout_RDX,uVar10,pbVar17);
            }
            return puVar13;
          }
          if ((bVar1 & 1) != 0) {
            uVar10 = puVar12[1];
            uVar11 = puVar12[2];
            if (uVar10 < 0x17) {
              *(char *)puVar13 = (char)uVar10 * '\x02';
              func_0x0099bd90((byte *)((long)puVar13 + 1),uVar11,uVar10);
              *(byte *)((long)puVar13 + uVar10 + 1) = 0;
            }
            else {
              if (0xfffffffffffffff6 < uVar10) {
                func_0x0032e8f0();
                pcVar2 = (code *)swi(3);
                puVar14 = (ulong *)(*pcVar2)();
                return puVar14;
              }
              uVar19 = (ulong)(byte)*puVar13 << 0x38;
              uVar5 = puVar13[2];
              uVar6 = 0x2c;
              if (0x2c < uVar10) {
                uVar6 = uVar10;
              }
              uVar16 = (uVar6 | 7) + 1;
              uVar6 = _Znwm(uVar16);
              func_0x0099bda0(uVar6,uVar11,uVar10);
              *(undefined1 *)(uVar6 + uVar10) = 0;
              if ((uVar19 & 0x100000000000000) != 0) {
                _ZdaPvSt11align_val_t(uVar5,*puVar13 & 0xfffffffffffffffe);
              }
              *puVar13 = uVar16 | 1;
              puVar13[1] = uVar10;
              puVar13[2] = uVar6;
            }
            return puVar13;
          }
          puVar14 = (ulong *)puVar12[2];
          puVar13[2] = (ulong)puVar14;
          uVar10 = puVar12[1];
          *puVar13 = *puVar12;
          puVar13[1] = uVar10;
        }
      }
      return puVar14;
    }
    uVar11 = *param_1;
    if (uVar10 < 0x17) {
      *(char *)param_1 = (char)uVar10 * '\x02';
      pcVar7 = (char *)((long)param_1 + 1);
    }
    else {
      lVar15 = 0x1a;
      if ((uVar10 | 7) != 0x17) {
        lVar15 = (uVar10 | 7) + 1;
      }
      pcVar7 = (char *)_Znwm(lVar15);
      *param_1 = lVar15 + 1;
      param_1[2] = (ulong)pcVar7;
    }
    func_0x0099bd90(pcVar7,uVar11,uVar10);
    pcVar7[uVar10] = '\0';
    param_1[3] = (ulong)param_1;
    puVar14 = param_1;
  }
  _ZN4absl12lts_202605265Mutex6unlockEv(0xa030e8);
  return puVar14;
}


