// Function: _ZN10ApkArchive20GetSignatureLocationEl
// Address: 003c79a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c79ff: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003c7b46: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003c7a04) */
/* WARNING: Removing unreachable block (ram,0x003c7a16) */
/* WARNING: Removing unreachable block (ram,0x003c7a22) */
/* WARNING: Removing unreachable block (ram,0x003c7a1c) */
/* WARNING: Removing unreachable block (ram,0x003c7a0c) */
/* WARNING: Removing unreachable block (ram,0x003c7a26) */
/* WARNING: Removing unreachable block (ram,0x003c7a6d) */
/* WARNING: Removing unreachable block (ram,0x003c7a3f) */
/* WARNING: Removing unreachable block (ram,0x003c7a88) */
/* WARNING: Removing unreachable block (ram,0x003c7aa1) */
/* WARNING: Removing unreachable block (ram,0x003c7a45) */
/* WARNING: Removing unreachable block (ram,0x003c7a49) */
/* WARNING: Removing unreachable block (ram,0x003c7a52) */
/* WARNING: Removing unreachable block (ram,0x003c7b4b) */
/* WARNING: Removing unreachable block (ram,0x003c7b61) */
/* WARNING: Removing unreachable block (ram,0x003c7b70) */
/* WARNING: Removing unreachable block (ram,0x003c7b75) */
/* WARNING: Removing unreachable block (ram,0x003c7b53) */
/* WARNING: Removing unreachable block (ram,0x003c7b7a) */
/* WARNING: Removing unreachable block (ram,0x003c7b87) */
/* WARNING: Removing unreachable block (ram,0x003c7ba0) */
/* WARNING: Removing unreachable block (ram,0x003c7bf8) */
/* WARNING: Removing unreachable block (ram,0x003c7c01) */
/* WARNING: Removing unreachable block (ram,0x003c7ba8) */
/* WARNING: Removing unreachable block (ram,0x003c7bb3) */
/* WARNING: Removing unreachable block (ram,0x003c7bb9) */
/* WARNING: Removing unreachable block (ram,0x003c7bce) */
/* WARNING: Removing unreachable block (ram,0x003c7bd2) */
/* WARNING: Removing unreachable block (ram,0x003c7bdb) */
/* WARNING: Removing unreachable block (ram,0x003c7c03) */
/* WARNING: Removing unreachable block (ram,0x003c7bea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
_ZN10ApkArchive20GetSignatureLocationEl
          (undefined1 (*param_1) [16],byte *param_2,undefined1 (*param_3) [16])

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  int *piVar5;
  undefined1 (*pauVar6) [16];
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 unaff_R12;
  undefined1 *puVar11;
  undefined8 unaff_R13;
  undefined1 (*unaff_R15) [16];
  long in_FS_OFFSET;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char acStack_a8 [40];
  undefined8 uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined *puStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  long lStack_20;
  
  ppuVar9 = (undefined **)&stack0xfffffffffffffff8;
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  if ((long)param_3 < 0x18) {
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      puStack_60 = &UNK_003c7adb;
      func_0x0099bd30(_stderr,&UNK_0015fb22,param_2);
      return param_1;
    }
    puStack_60 = &UNK_003c7ae2;
    lVar4 = _stderr;
    func_0x0099bd00();
    ppuVar9 = &puStack_60;
    uStack_80 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    unaff_R15 = *(undefined1 (**) [16])(lVar4 + 0x18);
    pauVar6 = (undefined1 (*) [16])0x10015;
    if ((long)unaff_R15 < 0x10015) {
      pauVar6 = unaff_R15;
    }
    puVar7 = (undefined1 *)((long)unaff_R15 - (long)pauVar6);
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    uStack_b0 = 0;
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    uStack_c0 = 0;
    uStack_b8 = 0;
    acStack_a8[0x18] = '\0';
    acStack_a8[0x19] = '\0';
    acStack_a8[0x1a] = '\0';
    acStack_a8[0x1b] = '\0';
    acStack_a8[0x1c] = '\0';
    acStack_a8[0x1d] = '\0';
    acStack_a8[0x1e] = '\0';
    acStack_a8[0x1f] = '\0';
    uVar2 = *(undefined4 *)(lVar4 + 0x20);
    puVar10 = &uStack_c0;
    ppuVar8 = &puStack_c8;
    puStack_c8 = &UNK_003c7b4b;
    param_3 = pauVar6;
    pauStack_78 = param_1;
    puStack_60 = &stack0xfffffffffffffff8;
  }
  else {
    puVar7 = param_3[-2] + 8;
    auStack_38 = (undefined1  [16])0x0;
    auStack_48 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    uStack_28 = 0;
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    puVar10 = (undefined8 *)auStack_58;
    pauVar6 = (undefined1 (*) [16])0x18;
    ppuVar8 = &puStack_60;
    puStack_60 = &UNK_003c7a04;
  }
  *(undefined ***)((long)ppuVar8 + -8) = ppuVar9;
  *(undefined1 (**) [16])((long)ppuVar8 + -0x10) = unaff_R15;
  *(undefined1 (**) [16])((long)ppuVar8 + -0x18) = param_3;
  *(undefined8 *)((long)ppuVar8 + -0x20) = unaff_R13;
  *(undefined8 *)((long)ppuVar8 + -0x28) = unaff_R12;
  *(undefined1 (**) [16])((long)ppuVar8 + -0x30) = param_1;
  *(undefined **)((long)ppuVar8 + -0x50) = &UNK_003c7c38;
  pauVar3 = (undefined1 (*) [16])_ZN7android4base10MappedFile6CreateEilmi();
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  if (*(char *)(puVar10 + 3) == '\0') {
    *(undefined8 **)((long)ppuVar8 + -0x40) = puVar10 + 4;
    *(undefined **)((long)ppuVar8 + -0x50) = &UNK_003c7c5f;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(puVar10 + 4,pauVar6,0)
    ;
    puVar11 = (undefined1 *)((long)puVar10 + 0x21);
    bVar1 = *(byte *)(puVar10 + 4);
    *(undefined1 **)((long)ppuVar8 + -0x38) = puVar11;
    if ((bVar1 & 1) != 0) {
      puVar11 = (undefined1 *)puVar10[6];
    }
    *(undefined8 **)((long)ppuVar8 + -0x48) = puVar10;
    do {
      *(undefined **)((long)ppuVar8 + -0x50) = &UNK_003c7c91;
      lVar4 = func_0x0099c1b0(uVar2,puVar11,pauVar6,puVar7);
      if (lVar4 != -1) break;
      *(undefined **)((long)ppuVar8 + -0x50) = &UNK_003c7c9f;
      piVar5 = (int *)func_0x0099bce0();
    } while (*piVar5 == 4);
    pauVar3 = (undefined1 (*) [16])(long)(int)lVar4;
    lVar4 = *(long *)((long)ppuVar8 + -0x48);
    if (pauVar6 != pauVar3) {
      *(undefined **)((long)ppuVar8 + -0x50) = &UNK_003c7cdd;
      func_0x0099bd30(_stderr,&UNK_0015955a,pauVar6,puVar7);
      pauVar3 = *(undefined1 (**) [16])((long)ppuVar8 + -0x40);
      if (((*pauVar3)[0] & 1) == 0) {
        **(undefined1 **)((long)ppuVar8 + -0x38) = 0;
        (*pauVar3)[0] = 0;
      }
      else {
        pauVar3 = *(undefined1 (**) [16])(lVar4 + 0x30);
        (*pauVar3)[0] = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
      }
    }
  }
  return pauVar3;
}


