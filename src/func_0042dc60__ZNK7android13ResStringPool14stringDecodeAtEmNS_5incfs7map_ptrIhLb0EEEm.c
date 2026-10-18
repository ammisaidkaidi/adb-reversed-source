// Function: _ZNK7android13ResStringPool14stringDecodeAtEmNS_5incfs7map_ptrIhLb0EEEm
// Address: 0042dc60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZNK7android13ResStringPool14stringDecodeAtEmNS_5incfs7map_ptrIhLb0EEEm
               (long param_1,long param_2,undefined4 param_3,ulong param_4,undefined8 param_5,
               undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar2 = (int)*(undefined8 *)(param_2 + 0x90);
  if ((uint)((int)(char *)(param_7 + param_4) - iVar2) < *(uint *)(param_2 + 0xb0)) {
    if (param_7 != 0) {
      if (*(char *)(param_7 + param_4) != '\0') {
        uVar4 = 0x8000;
        lVar3 = 0;
        do {
          uVar5 = uVar4 | param_4;
          if (*(uint *)(param_2 + 0xb0) <= (uint)((int)(char *)(param_7 + uVar5) - iVar2))
          goto code_r0x0042dcfb;
          lVar3 = lVar3 + -1;
          uVar4 = uVar4 + 0x8000;
        } while (*(char *)(param_7 + uVar5) != '\0');
        param_4 = uVar5;
        if (lVar3 != 0) {
          __android_log_print(5,&UNK_0015b3df,&UNK_0015cad7,param_3,uVar5 & 0xffffffff);
        }
      }
      *(long *)(param_1 + 8) = param_7;
      *(ulong *)(param_1 + 0x10) = param_4;
      uVar1 = 0;
      goto code_r0x0042dd32;
    }
    *(undefined8 *)(param_1 + 8) = 0x1ffffffff;
  }
  else {
code_r0x0042dcfb:
    __android_log_print(5,&UNK_0015b3df,&UNK_0015988c,param_3);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  uVar1 = 1;
code_r0x0042dd32:
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return param_1;
}


