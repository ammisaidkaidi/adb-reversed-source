// Function: _ZNK7android8ResTable11print_valueEPKNS0_7PackageERKNS_9Res_valueE
// Address: 0043c4a0
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

void _ZNK7android8ResTable11print_valueEPKNS0_7PackageERKNS_9Res_valueE
               (double param_1,undefined8 *param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  byte bStack_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined2 uStack_5a;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  int iStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)(param_4 + 3);
  switch(bVar1) {
  case 0:
    if (*(int *)(param_4 + 4) == 1) {
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        puVar3 = &UNK_00170a1b;
        goto code_r0x0043c7d8;
      }
    }
    else if (*(int *)(param_4 + 4) == 0) {
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        puVar3 = &UNK_0018b202;
        goto code_r0x0043c7d8;
      }
    }
    else if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_0015999c;
      goto code_r0x0099be10;
    }
    break;
  case 1:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_00175983;
      goto code_r0x0099be10;
    }
    break;
  case 2:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_001599ab;
      goto code_r0x0099be10;
    }
    break;
  case 3:
    _ZNK7android13ResStringPool9string8AtEm
              (&uStack_58,*(long *)(param_3 + 8) + 0x38,*(undefined4 *)(param_4 + 4));
    if ((iStack_40 == 0) && (pbStack_50 != (byte *)0x0)) {
      uStack_58 = 0;
      param_1 = (double)_ZN7android7String8C2Ev(&uStack_58);
      bStack_68 = 0;
      uStack_67 = 0;
      do {
        bVar1 = *pbStack_50;
        if (bVar1 < 0x22) {
          if (bVar1 == 10) {
            pbVar4 = &UNK_00187c1e;
          }
          else {
            if (bVar1 == 0) goto code_r0x0043c93a;
code_r0x0043c7b6:
            pbVar4 = &bStack_68;
            bStack_68 = bVar1;
          }
        }
        else if (bVar1 == 0x22) {
          pbVar4 = &UNK_0017227c;
        }
        else {
          pbVar4 = &UNK_00165dd0;
          if (bVar1 != 0x5c) goto code_r0x0043c7b6;
        }
        param_1 = (double)_ZN7android7String86appendEPKc(&uStack_58,pbVar4);
        pbStack_50 = pbStack_50 + 1;
      } while( true );
    }
    param_2 = &uStack_58;
    _ZNK7android13ResStringPool8stringAtEm
              (param_2,*(long *)(param_3 + 8) + 0x38,*(undefined4 *)(param_4 + 4));
    if ((iStack_40 == 0) && (pbStack_50 != (byte *)0x0)) {
      _ZN7android7String8C2EPKDsm(&bStack_68,pbStack_50,uStack_48);
      pbVar4 = (byte *)CONCAT62(uStack_66,CONCAT11(uStack_67,bStack_68));
      uStack_58 = 0;
      param_1 = (double)_ZN7android7String8C2Ev(&uStack_58);
      uStack_5a = 0;
      do {
        bVar1 = *pbVar4;
        if (bVar1 < 0x22) {
          if (bVar1 == 10) {
            puVar2 = (undefined2 *)&UNK_00187c1e;
          }
          else {
            if (bVar1 == 0) goto code_r0x0043c952;
code_r0x0043c8f2:
            uStack_5a = CONCAT11(uStack_5a._1_1_,bVar1);
            puVar2 = &uStack_5a;
          }
        }
        else if (bVar1 == 0x22) {
          puVar2 = (undefined2 *)&UNK_0017227c;
        }
        else {
          puVar2 = (undefined2 *)&UNK_00165dd0;
          if (bVar1 != 0x5c) goto code_r0x0043c8f2;
        }
        param_1 = (double)_ZN7android7String86appendEPKc(&uStack_58,puVar2);
        pbVar4 = pbVar4 + 1;
      } while( true );
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_0016efc2;
code_r0x0043c7d8:
      puts(puVar3);
      return;
    }
    break;
  case 4:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      param_1 = (double)*(float *)(param_4 + 4);
      puVar3 = &UNK_001838a9;
      goto code_r0x0099be10;
    }
    break;
  case 5:
    puVar3 = &UNK_0016ef91;
    goto code_r0x0099be10;
  case 6:
    puVar3 = &UNK_0015b556;
    goto code_r0x0099be10;
  case 7:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_0017f114;
      goto code_r0x0099be10;
    }
    break;
  case 8:
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_0015b53a;
      goto code_r0x0099be10;
    }
    break;
  default:
    if ((bVar1 & 0xfc) == 0x1c) {
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        puVar3 = &UNK_001699aa;
        goto code_r0x0099be10;
      }
    }
    else if (bVar1 == 0x12) {
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        puVar3 = &UNK_0016177c;
        goto code_r0x0099be10;
      }
    }
    else if ((bVar1 & 0xf0) == 0x10) {
      if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
        puVar3 = &UNK_0017f130;
        goto code_r0x0099be10;
      }
    }
    else if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
      puVar3 = &UNK_0018b19d;
      goto code_r0x0099be10;
    }
  }
  func_0x0099bd00();
  param_1 = (double)((float)((uint)param_2 & 0xffffff00) *
                    *(float *)(&UNK_00155ef0 + ((uint)((ulong)param_2 >> 2) & 0xc)));
  puVar3 = &UNK_00159a1b;
  goto code_r0x0099be10;
code_r0x0043c93a:
  puVar3 = &UNK_001869f2;
  goto code_r0x0099be10;
code_r0x0043c952:
  puVar3 = &UNK_001599bf;
code_r0x0099be10:
  printf(param_1,puVar3);
  return;
}


