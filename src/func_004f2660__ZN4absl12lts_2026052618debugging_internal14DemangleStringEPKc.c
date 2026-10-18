// Function: _ZN4absl12lts_2026052618debugging_internal14DemangleStringEPKc
// Address: 004f2660
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN4absl12lts_2026052618debugging_internal14DemangleStringEPKc(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  long in_FS_OFFSET;
  int iStack_24;
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iStack_24 = 0;
  pbVar4 = (byte *)__cxa_demangle(param_2,0,0,&iStack_24);
  if (pbVar4 == (byte *)0x0 || iStack_24 != 0) {
    pbVar4 = param_1;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  }
  else {
    param_2 = pbVar4;
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
    func_0x0099c1f0();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_20) {
    pbVar5 = (byte *)func_0x0099bd00();
    if (-1 < *(int *)(pbVar4 + 0x28)) {
      return pbVar5;
    }
    if (*param_2 == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar5 = (byte *)func_0x0099bcf0(param_2 + 1);
      pbVar7 = pbVar5 + 1;
    }
    if ((pbVar7 != (byte *)0x0) && (*(int *)(pbVar4 + 0x28) < 0)) {
      if (*param_2 == 0x3c) {
        iVar2 = *(int *)(pbVar4 + 0x20);
        lVar6 = (long)iVar2;
        if (((0 < lVar6) && (uVar3 = *(uint *)(pbVar4 + 0x10), iVar2 < (int)uVar3)) &&
           (*(char *)(*(long *)(pbVar4 + 8) + -1 + lVar6) == '<')) {
          if (iVar2 + 1U < uVar3) {
            *(uint *)(pbVar4 + 0x20) = iVar2 + 1U;
            *(undefined1 *)(*(long *)(pbVar4 + 8) + lVar6) = 0x20;
            if (*(int *)(pbVar4 + 0x20) < *(int *)(pbVar4 + 0x10)) {
              *(undefined1 *)(*(long *)(pbVar4 + 8) + (long)*(int *)(pbVar4 + 0x20)) = 0;
            }
          }
          else {
            *(uint *)(pbVar4 + 0x20) = uVar3 + 1;
          }
        }
      }
      if ((*(int *)(pbVar4 + 0x20) < *(int *)(pbVar4 + 0x10)) &&
         ((*param_2 == 0x5f || ((byte)((*param_2 & 0xdf) + 0xbf) < 0x1a)))) {
        *(int *)(pbVar4 + 0x24) = *(int *)(pbVar4 + 0x20);
        *(short *)(pbVar4 + 0x28) = (short)pbVar7;
      }
      pbVar5 = (byte *)0x0;
      do {
        iVar2 = *(int *)(pbVar4 + 0x20);
        iVar8 = iVar2 + 1;
        if (*(int *)(pbVar4 + 0x10) <= iVar8) {
          *(int *)(pbVar4 + 0x20) = *(int *)(pbVar4 + 0x10) + 1;
          return pbVar5;
        }
        bVar1 = param_2[(long)pbVar5];
        *(int *)(pbVar4 + 0x20) = iVar8;
        *(byte *)(*(long *)(pbVar4 + 8) + (long)iVar2) = bVar1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar7 != pbVar5);
      pbVar5 = (byte *)(long)*(int *)(pbVar4 + 0x20);
      if (*(int *)(pbVar4 + 0x20) < *(int *)(pbVar4 + 0x10)) {
        pbVar5[*(long *)(pbVar4 + 8)] = 0;
      }
    }
    return pbVar5;
  }
  return param_1;
}


