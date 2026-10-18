// Function: _ZNK7android12ResXMLParser17getAttributeValueEmPNS_9Res_valueE
// Address: 0042f410
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK7android12ResXMLParser17getAttributeValueEmPNS_9Res_valueE
          (long *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  
  if ((int)param_1[1] != 0x102) {
    return 0xffffffff80000001;
  }
  lVar1 = param_1[3];
  if (param_2 < *(ushort *)(lVar1 + 0xc)) {
    uVar2 = *(ulong *)(param_2 * *(ushort *)(lVar1 + 10) + 0xc +
                      (ulong)*(ushort *)(lVar1 + 8) + lVar1);
    *param_3 = uVar2;
    plVar3 = *(long **)(*param_1 + 0x28);
    if (plVar3 != (long *)0x0) {
      cVar4 = (char)(uVar2 >> 0x18);
      bVar6 = cVar4 - 1;
      if (bVar6 < 2) {
        if ((*(char *)((long)plVar3 + 0x109) == '\0') && (uVar2 >> 0x38 != 0)) {
          return 8;
        }
      }
      else if (1 < (byte)(cVar4 - 7U)) {
        return 8;
      }
      if ((0xc3U >> (bVar6 & 0x1f) & bVar6 < 8) == 1) {
        iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,(long)param_3 + 4);
        if (iVar5 != 0) {
          return 0xffffffff80000001;
        }
        *(char *)((long)param_3 + 3) = (char)(0x201000000000201 >> ((bVar6 & 7) << 3));
      }
    }
    return 8;
  }
  return 0xffffffff80000001;
}


