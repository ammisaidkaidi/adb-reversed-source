// Function: _ZNK7android13ResStringPool7styleAtERKNS_17ResStringPool_refE
// Address: 0042e040
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK7android13ResStringPool7styleAtERKNS_17ResStringPool_refE
               (long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((*(int *)(param_2 + 8) == 0) &&
     (uVar1 = *param_3, uVar1 < *(uint *)(*(long *)(param_2 + 0x18) + 0xc))) {
    if (*(long *)(param_2 + 0x78) == 0) {
      *(undefined8 *)(param_1 + 8) = 0x1ffffffff;
      goto code_r0x0042e0cd;
    }
    uVar2 = *(uint *)(*(long *)(param_2 + 0x78) + (ulong)uVar1 * 4);
    uVar4 = uVar2 >> 2;
    if (uVar4 < *(uint *)(param_2 + 0xd0)) {
      *(ulong *)(param_1 + 8) = (ulong)(uVar4 << 2) + *(long *)(param_2 + 0xb8);
      uVar3 = *(undefined8 *)(param_2 + 200);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return;
    }
    __android_log_print(5,&UNK_0015b3df,&UNK_0018818f,(ulong)uVar1,uVar2 & 0xfffffffc,
                        *(uint *)(param_2 + 0xd0) << 2,param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
code_r0x0042e0cd:
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}


