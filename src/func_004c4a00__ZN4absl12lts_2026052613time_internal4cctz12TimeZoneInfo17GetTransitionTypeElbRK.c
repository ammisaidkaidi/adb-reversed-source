// Function: _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17GetTransitionTypeElbRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPh
// Address: 004c4a00
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_2026052613time_internal4cctz12TimeZoneInfo17GetTransitionTypeElbRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPh
               (long param_1,long param_2,byte param_3,byte *param_4,undefined1 *param_5)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  byte extraout_DL;
  long lVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbStack_58;
  ulong uStack_38;
  
  bVar9 = *(byte *)(param_1 + 0x40);
  if ((bVar9 & 1) == 0) {
    uStack_38 = (ulong)(bVar9 >> 1);
  }
  else {
    uStack_38 = *(ulong *)(param_1 + 0x48);
  }
  lVar8 = *(long *)(param_1 + 0x28);
  lVar14 = lVar8 - *(long *)(param_1 + 0x20);
  if (lVar14 == 0) {
    uVar15 = 0;
  }
  else {
    if ((bVar9 & 1) == 0) {
      lVar4 = param_1 + 0x41;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x50);
    }
    if ((*param_4 & 1) == 0) {
      pbStack_58 = param_4 + 1;
      uVar7 = (ulong)(*param_4 >> 1);
    }
    else {
      pbStack_58 = *(byte **)(param_4 + 0x10);
      uVar7 = *(ulong *)(param_4 + 8);
    }
    uVar15 = (lVar14 >> 4) * -0x5555555555555555;
    pbVar16 = (byte *)(*(long *)(param_1 + 0x20) + 0x29);
    uVar12 = 0;
    lVar14 = param_2;
    do {
      uVar13 = (ulong)*pbVar16;
      lVar10 = lVar4 + uVar13;
      lVar11 = lVar10;
      uVar5 = func_0x0099bcf0();
      bVar9 = (byte)lVar14;
      if (uVar5 == uVar7) {
        if (uVar5 == 0xffffffffffffffff) {
          func_0x0032fc60();
          bVar2 = true;
          if (bVar9 != extraout_DL) {
            lVar8 = *(long *)(lVar11 + 0x20);
            if (*(int *)(lVar8 + (ulong)((uint)bVar9 * 0x30)) ==
                *(int *)(lVar8 + (ulong)((uint)extraout_DL * 0x30))) {
              lVar14 = (ulong)((uint)bVar9 * 0x30) + lVar8;
              lVar8 = (ulong)((uint)extraout_DL * 0x30) + lVar8;
              if (*(char *)(lVar14 + 0x28) == *(char *)(lVar8 + 0x28)) {
                return *(char *)(lVar14 + 0x29) == *(char *)(lVar8 + 0x29);
              }
            }
            bVar2 = false;
          }
          return bVar2;
        }
        iVar3 = func_0x0099bf90(pbStack_58,lVar10,uVar5);
        lVar14 = lVar10;
        if (iVar3 == 0) {
          uStack_38 = uVar13;
        }
      }
      if (((param_2 == *(int *)(pbVar16 + -0x29)) && (pbVar16[-1] == param_3)) &&
         (uStack_38 == uVar13)) {
        uVar15 = uVar12;
        if (0xff < uVar12) {
          return false;
        }
        goto code_r0x004c4c4e;
      }
      uVar12 = uVar12 + 1;
      pbVar16 = pbVar16 + 0x30;
    } while (uVar15 - uVar12 != 0);
  }
  bVar2 = false;
  if ((uVar15 < 0x100) && (uStack_38 < 0x100)) {
    puVar6 = (undefined4 *)
             _ZNSt3__16vectorIN4absl12lts_2026052613time_internal4cctz14TransitionTypeENS_9allocatorIS5_EEE7emplaceIJEEENS_11__wrap_iterIPS5_EENSA_IPKS5_EEDpOT_
                       (param_1 + 0x20,lVar8);
    *puVar6 = (int)param_2;
    *(byte *)(puVar6 + 10) = param_3;
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      uVar7 = (ulong)(*(byte *)(param_1 + 0x40) >> 1);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x48);
    }
    if (uStack_38 == uVar7) {
      pcVar1 = (char *)(param_1 + 0x40);
      func_0x0032e820(pcVar1,param_4);
      uVar7 = *(ulong *)(param_1 + 0x40);
      uVar12 = 0x16;
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
        uVar12 = (uVar7 & 0xfffffffffffffffe) - 1;
      }
      bVar9 = (byte)uVar7;
      if ((uVar7 & 1) == 0) {
        uVar7 = (ulong)((uint)uVar7 >> 1 & 0x7f);
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x48);
      }
      if (uVar12 == uVar7) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (pcVar1,uVar12,1,uVar12,uVar12,0,0);
        *(ulong *)(param_1 + 0x48) = uVar12;
        bVar9 = *(byte *)(param_1 + 0x40);
      }
      if ((bVar9 & 1) == 0) {
        lVar8 = param_1 + 0x41;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x50);
      }
      *(undefined1 *)(lVar8 + uVar7) = 0;
      lVar14 = uVar7 + 1;
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
        *pcVar1 = (char)lVar14 * '\x02';
      }
      else {
        *(long *)(param_1 + 0x48) = lVar14;
      }
      *(undefined1 *)(lVar8 + lVar14) = 0;
    }
    *(char *)((long)puVar6 + 0x29) = (char)uStack_38;
code_r0x004c4c4e:
    *param_5 = (char)uVar15;
    bVar2 = true;
  }
  return bVar2;
}


