// Function: _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
// Address: 005006e0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052616strings_internal25ResizeUninitializedTraitsINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvE6ResizeEPS9_m
               (ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  bVar1 = (byte)*param_1;
  uVar2 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar2 = param_1[1];
  }
  uVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || uVar6 == 0) {
    if ((bVar1 & 1) == 0) {
      *(char *)param_1 = (char)param_2 * '\x02';
      pbVar5 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar5 = (byte *)param_1[2];
      param_1[1] = param_2;
    }
    pbVar5[param_2] = 0;
  }
  else {
    uVar2 = *param_1;
    lVar4 = 0x16;
    if ((bVar1 & 1) != 0) {
      lVar4 = (uVar2 & 0xfffffffffffffffe) - 1;
    }
    uVar3 = param_1[1];
    if ((uVar2 & 1) == 0) {
      uVar3 = (ulong)((uint)(uVar2 >> 1) & 0x7f);
    }
    if (lVar4 - uVar3 < uVar6) {
      _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar4,(uVar6 - lVar4) + uVar3,uVar3,uVar3,0,0);
      param_1[1] = uVar3;
      uVar2 = (ulong)(byte)*param_1;
    }
    uVar3 = uVar3 + uVar6;
    if ((uVar2 & 1) == 0) {
      *(char *)param_1 = (char)uVar3 * '\x02';
      *(byte *)((long)param_1 + uVar3 + 1) = 0;
    }
    else {
      param_1[1] = uVar3;
      *(undefined1 *)(param_1[2] + uVar3) = 0;
    }
  }
  return;
}


