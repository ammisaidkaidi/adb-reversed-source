// Function: _ZNK7android8ResTable5Theme12getAttributeEjPNS_9Res_valueEPj
// Address: 00433e40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZNK7android8ResTable5Theme12getAttributeEjPNS_9Res_valueEPj
          (long *param_1,uint param_2,undefined8 *param_3,uint *param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  bVar4 = *(byte *)(*param_1 + 0xe8 + (ulong)(param_2 >> 0x18));
  uVar2 = 0xffffffffffffffb5;
  if (bVar4 != 0) {
    iVar3 = -0x15;
    do {
      lVar1 = param_1[bVar4];
      if (lVar1 == 0) {
        return uVar2;
      }
      uVar6 = (param_2 >> 0x10 & 0xff) - 1;
      if (0xff < uVar6) {
        return uVar2;
      }
      lVar7 = (ulong)uVar6 * 0x10;
      if (*(ulong *)(lVar1 + lVar7) <= (ulong)(param_2 & 0xffff)) {
        return uVar2;
      }
      puVar5 = (undefined8 *)((ulong)((param_2 & 0xffff) * 0x18) + *(long *)(lVar1 + lVar7 + 8));
      if (param_4 != (uint *)0x0) {
        *param_4 = *param_4 | *(uint *)(puVar5 + 1);
      }
      if (*(char *)((long)puVar5 + 0xf) != '\x02') {
        if ((*(char *)((long)puVar5 + 0xf) == '\0') && (*(int *)(puVar5 + 2) != 1)) {
          return uVar2;
        }
        *param_3 = *(undefined8 *)((long)puVar5 + 0xc);
        return *puVar5;
      }
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        __android_log_print(5,&UNK_0015b3df,&UNK_00177356,param_2);
        return 0xffffffffffffffb5;
      }
      param_2 = *(uint *)(puVar5 + 2);
      bVar4 = *(byte *)(*param_1 + 0xe8 + (ulong)(param_2 >> 0x18));
    } while (bVar4 != 0);
  }
  return uVar2;
}


