// Function: _ZNK10ApkArchive12ReadMetadataENS_8LocationE
// Address: 003c7840
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c7887: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x003c788c) */
/* WARNING: Removing unreachable block (ram,0x003c78bf) */
/* WARNING: Removing unreachable block (ram,0x003c7976) */
/* WARNING: Removing unreachable block (ram,0x003c78ce) */
/* WARNING: Removing unreachable block (ram,0x003c7895) */
/* WARNING: Removing unreachable block (ram,0x003c7988) */
/* WARNING: Removing unreachable block (ram,0x003c78ab) */
/* WARNING: Removing unreachable block (ram,0x003c78db) */
/* WARNING: Removing unreachable block (ram,0x003c78f6) */
/* WARNING: Removing unreachable block (ram,0x003c78fa) */
/* WARNING: Removing unreachable block (ram,0x003c78b1) */
/* WARNING: Removing unreachable block (ram,0x003c791a) */
/* WARNING: Removing unreachable block (ram,0x003c7933) */
/* WARNING: Removing unreachable block (ram,0x003c7948) */
/* WARNING: Removing unreachable block (ram,0x003c794c) */
/* WARNING: Removing unreachable block (ram,0x003c7955) */
/* WARNING: Removing unreachable block (ram,0x003c798d) */
/* WARNING: Removing unreachable block (ram,0x003c7aa3) */
/* WARNING: Removing unreachable block (ram,0x003c7ab5) */
/* WARNING: Removing unreachable block (ram,0x003c7aaf) */
/* WARNING: Removing unreachable block (ram,0x003c7ab8) */
/* WARNING: Removing unreachable block (ram,0x003c7add) */
/* WARNING: Removing unreachable block (ram,0x003c7b1b) */
/* WARNING: Removing unreachable block (ram,0x003c7b1f) */
/* WARNING: Removing unreachable block (ram,0x003c7aca) */
/* WARNING: Removing unreachable block (ram,0x003c7a61) */
/* WARNING: Removing unreachable block (ram,0x003c79d5) */
/* WARNING: Removing unreachable block (ram,0x003c7964) */
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
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _ZNK10ApkArchive12ReadMetadataENS_8LocationE(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_48 = (undefined1 *)0x0;
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  _ZN7android4base10MappedFile6CreateEilmi();
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_48 = (undefined1 *)0x0;
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
            (&uStack_58,in_stack_00000010,0);
  puVar4 = (undefined1 *)((long)&uStack_58 + 1);
  if ((uStack_58 & 1) != 0) {
    puVar4 = puStack_48;
  }
  do {
    lVar2 = func_0x0099c1b0(uVar1,puVar4,in_stack_00000010,in_stack_00000008);
    if (lVar2 != -1) break;
    piVar3 = (int *)func_0x0099bce0();
  } while (*piVar3 == 4);
  if ((in_stack_00000010 != (int)lVar2) &&
     (func_0x0099bd30(_stderr,&UNK_0015955a,in_stack_00000010,in_stack_00000008),
     (uStack_58 & 1) != 0)) {
    *puStack_48 = 0;
  }
  return;
}


