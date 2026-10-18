// Function: _ZNK10ApkArchive17FindEndOfCDRecordEv
// Address: 003c7af0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x003c7b46: Changing call to branch */
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

void _ZNK10ApkArchive17FindEndOfCDRecordEv(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined1 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar6 = 0x10015;
  if (lVar2 < 0x10015) {
    lVar6 = lVar2;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (undefined1 *)0x0;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  _ZN7android4base10MappedFile6CreateEilmi();
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_38 = (undefined1 *)0x0;
  _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(&uStack_48,lVar6,0);
  puVar5 = (undefined1 *)((long)&uStack_48 + 1);
  if ((uStack_48 & 1) != 0) {
    puVar5 = puStack_38;
  }
  do {
    lVar3 = func_0x0099c1b0(uVar1,puVar5,lVar6,lVar2 - lVar6);
    if (lVar3 != -1) break;
    piVar4 = (int *)func_0x0099bce0();
  } while (*piVar4 == 4);
  if ((lVar6 != (int)lVar3) &&
     (func_0x0099bd30(_stderr,&UNK_0015955a,lVar6,lVar2 - lVar6), (uStack_48 & 1) != 0)) {
    *puStack_38 = 0;
  }
  return;
}


