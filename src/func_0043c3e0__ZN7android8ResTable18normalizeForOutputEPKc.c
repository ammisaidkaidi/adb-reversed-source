// Function: _ZN7android8ResTable18normalizeForOutputEPKc
// Address: 0043c3e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x0043ca19: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0043c63b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0043c68e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0043c61b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0043c95f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0043c947: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0043c964) */
/* WARNING: Removing unreachable block (ram,0x0043c620) */
/* WARNING: Removing unreachable block (ram,0x0043c693) */
/* WARNING: Removing unreachable block (ram,0x0043c640) */
/* WARNING: Removing unreachable block (ram,0x0043c7eb) */
/* WARNING: Removing unreachable block (ram,0x0043c681) */
/* WARNING: Removing unreachable block (ram,0x0043c823) */
/* WARNING: Removing unreachable block (ram,0x0043c82a) */
/* WARNING: Removing unreachable block (ram,0x0043c831) */
/* WARNING: Removing unreachable block (ram,0x0043c844) */
/* WARNING: Removing unreachable block (ram,0x0043c689) */
/* WARNING: Removing unreachable block (ram,0x0043ca1e) */
/* WARNING: Removing unreachable block (ram,0x0043ca3d) */
/* WARNING: Removing unreachable block (ram,0x0043ca42) */
/* WARNING: Removing unreachable block (ram,0x0043ca93) */
/* WARNING: Removing unreachable block (ram,0x0043ca6f) */
/* WARNING: Removing unreachable block (ram,0x0043ca81) */
/* WARNING: Removing unreachable block (ram,0x0043ca78) */
/* WARNING: Removing unreachable block (ram,0x0043ca8a) */
/* WARNING: Removing unreachable block (ram,0x0043ca54) */
/* WARNING: Removing unreachable block (ram,0x0043ca26) */
/* WARNING: Removing unreachable block (ram,0x0043ca66) */
/* WARNING: Removing unreachable block (ram,0x0043ca2b) */
/* WARNING: Removing unreachable block (ram,0x0043ca5d) */
/* WARNING: Removing unreachable block (ram,0x0043ca9a) */
/* WARNING: Removing unreachable block (ram,0x0043ca2f) */
/* WARNING: Removing unreachable block (ram,0x0099c040) */
/* WARNING: Removing unreachable block (ram,0x0043c94c) */
/* WARNING: Removing unreachable block (ram,0x0043c971) */
/* WARNING: Removing unreachable block (ram,0x0043c985) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * _ZN7android8ResTable18normalizeForOutputEPKc(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long extraout_RDX;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  double dVar6;
  byte bStack_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  undefined2 uStack_a2;
  undefined8 uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  int iStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  byte abStack_3a [2];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  pcStack_50 = (code *)&UNK_0043c410;
  pbVar3 = param_2;
  puVar2 = param_1;
  _ZN7android7String8C2Ev();
  abStack_3a[0] = 0;
  abStack_3a[1] = 0;
  pbStack_68 = abStack_3a;
  do {
    bVar1 = *param_2;
    if (bVar1 < 0x22) {
      if (bVar1 == 10) {
        pbVar3 = &UNK_00187c1e;
      }
      else {
        if (bVar1 == 0) goto code_r0x0043c47a;
code_r0x0043c472:
        abStack_3a[0] = bVar1;
        pbVar3 = pbStack_68;
      }
    }
    else if (bVar1 == 0x22) {
      pbVar3 = &UNK_0017227c;
    }
    else {
      pbVar3 = &UNK_00165dd0;
      if (bVar1 != 0x5c) goto code_r0x0043c472;
    }
    pcStack_50 = (code *)&UNK_0043c43b;
    puVar2 = param_1;
    _ZN7android7String86appendEPKc();
    param_2 = param_2 + 1;
  } while( true );
code_r0x0043c93a:
  puVar5 = &UNK_001869f2;
  goto code_r0x0099be10;
code_r0x0043c952:
  puVar5 = &UNK_001599bf;
  goto code_r0x0099be10;
code_r0x0043c47a:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  pcStack_50 = _ZNK7android8ResTable11print_valueEPKNS0_7PackageERKNS_9Res_valueE;
  dVar6 = (double)func_0x0099bd00();
  puStack_58 = &UNK_00165dd0;
  puStack_70 = &UNK_0017227c;
  lStack_80 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(extraout_RDX + 3);
  puStack_78 = param_1;
  pbStack_60 = param_2;
  switch(bVar1) {
  case 0:
    if (*(int *)(extraout_RDX + 4) == 1) {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_00170a1b;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0043c7d8;
      }
    }
    else if (*(int *)(extraout_RDX + 4) == 0) {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_0018b202;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0043c7d8;
      }
    }
    else {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_0015999c;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0099be10;
      }
    }
    break;
  case 1:
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      puVar5 = &UNK_00175983;
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      goto code_r0x0099be10;
    }
    break;
  case 2:
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      puVar5 = &UNK_001599ab;
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      goto code_r0x0099be10;
    }
    break;
  case 3:
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    _ZNK7android13ResStringPool9string8AtEm
              (&uStack_a0,*(long *)(pbVar3 + 8) + 0x38,*(undefined4 *)(extraout_RDX + 4));
    if ((iStack_88 == 0) && (pbStack_98 != (byte *)0x0)) {
      uStack_a0 = 0;
      dVar6 = (double)_ZN7android7String8C2Ev(&uStack_a0);
      bStack_b0 = 0;
      uStack_af = 0;
      do {
        bVar1 = *pbStack_98;
        if (bVar1 < 0x22) {
          if (bVar1 == 10) {
            pbVar3 = &UNK_00187c1e;
          }
          else {
            if (bVar1 == 0) goto code_r0x0043c93a;
code_r0x0043c7b6:
            pbVar3 = &bStack_b0;
            bStack_b0 = bVar1;
          }
        }
        else if (bVar1 == 0x22) {
          pbVar3 = &UNK_0017227c;
        }
        else {
          pbVar3 = &UNK_00165dd0;
          if (bVar1 != 0x5c) goto code_r0x0043c7b6;
        }
        dVar6 = (double)_ZN7android7String86appendEPKc(&uStack_a0,pbVar3);
        pbStack_98 = pbStack_98 + 1;
      } while( true );
    }
    puVar2 = &uStack_a0;
    _ZNK7android13ResStringPool8stringAtEm
              (puVar2,*(long *)(pbVar3 + 8) + 0x38,*(undefined4 *)(extraout_RDX + 4));
    if ((iStack_88 == 0) && (pbStack_98 != (byte *)0x0)) {
      _ZN7android7String8C2EPKDsm(&bStack_b0,pbStack_98,uStack_90);
      pbVar3 = (byte *)CONCAT62(uStack_ae,CONCAT11(uStack_af,bStack_b0));
      uStack_a0 = 0;
      dVar6 = (double)_ZN7android7String8C2Ev(&uStack_a0);
      uStack_a2 = 0;
      do {
        bVar1 = *pbVar3;
        if (bVar1 < 0x22) {
          if (bVar1 == 10) {
            puVar4 = (undefined2 *)&UNK_00187c1e;
          }
          else {
            if (bVar1 == 0) goto code_r0x0043c952;
code_r0x0043c8f2:
            uStack_a2 = CONCAT11(uStack_a2._1_1_,bVar1);
            puVar4 = &uStack_a2;
          }
        }
        else if (bVar1 == 0x22) {
          puVar4 = (undefined2 *)&UNK_0017227c;
        }
        else {
          puVar4 = (undefined2 *)&UNK_00165dd0;
          if (bVar1 != 0x5c) goto code_r0x0043c8f2;
        }
        dVar6 = (double)_ZN7android7String86appendEPKc(&uStack_a0,puVar4);
        pbVar3 = pbVar3 + 1;
      } while( true );
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      puVar5 = &UNK_0016efc2;
code_r0x0043c7d8:
      puVar2 = (undefined8 *)puts(puVar5);
      return puVar2;
    }
    break;
  case 4:
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      dVar6 = (double)*(float *)(extraout_RDX + 4);
      puVar5 = &UNK_001838a9;
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      goto code_r0x0099be10;
    }
    break;
  case 5:
    puVar5 = &UNK_0016ef91;
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    goto code_r0x0099be10;
  case 6:
    puVar5 = &UNK_0015b556;
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    goto code_r0x0099be10;
  case 7:
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      puVar5 = &UNK_0017f114;
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      goto code_r0x0099be10;
    }
    break;
  case 8:
    pcStack_50 = (code *)&stack0xfffffffffffffff8;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
      puVar5 = &UNK_0015b53a;
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      goto code_r0x0099be10;
    }
    break;
  default:
    if ((bVar1 & 0xfc) == 0x1c) {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_001699aa;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0099be10;
      }
    }
    else if (bVar1 == 0x12) {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_0016177c;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0099be10;
      }
    }
    else if ((bVar1 & 0xf0) == 0x10) {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_0017f130;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0099be10;
      }
    }
    else {
      pcStack_50 = (code *)&stack0xfffffffffffffff8;
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_80) {
        puVar5 = &UNK_0018b19d;
        pcStack_50 = (code *)&stack0xfffffffffffffff8;
        goto code_r0x0099be10;
      }
    }
  }
  func_0x0099bd00();
  dVar6 = (double)((float)((uint)puVar2 & 0xffffff00) *
                  *(float *)(&UNK_00155ef0 + ((uint)((ulong)puVar2 >> 2) & 0xc)));
  puVar5 = &UNK_00159a1b;
code_r0x0099be10:
  puVar2 = (undefined8 *)printf(dVar6,puVar5);
  return puVar2;
}


