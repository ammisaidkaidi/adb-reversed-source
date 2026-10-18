// Function: _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
// Address: 0043df60
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE10editItemAtEm
          (long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xff < param_2) {
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_40,&UNK_0017d9ed,0x51,6,&UNK_0015b3df,0xffffffff);
    uVar3 = _ZN7android4base10LogMessage6streamEv(auStack_40);
    uVar3 = func_0x0032eb30(uVar3,&UNK_0017a474,0x1c);
    uVar3 = func_0x0032eb30(uVar3,&UNK_0015ae05,1);
    uVar3 = func_0x0032eb30(uVar3,&UNK_00172733,0x21);
    uVar3 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,param_2);
    uVar3 = func_0x0032eb30(uVar3,&UNK_00186a7c,0xc);
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar3,0x100);
    _ZN7android4base10LogMessageD2Ev(auStack_40);
  }
  uVar5 = (ulong)((uint)(param_2 >> 4) & 0xf);
  puVar4 = *(undefined8 **)(param_1 + uVar5 * 8);
  if (puVar4 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)_Znam(0x288);
    *puVar2 = 0x10;
    puVar4 = puVar2 + 1;
    _ZN7android10VectorImplC2Emj(puVar4,8,7);
    puVar2[1] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 6,8,7);
    puVar2[6] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0xb,8,7);
    puVar2[0xb] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x10,8,7);
    puVar2[0x10] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x15,8,7);
    puVar2[0x15] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x1a,8,7);
    puVar2[0x1a] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x1f,8,7);
    puVar2[0x1f] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x24,8,7);
    puVar2[0x24] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x29,8,7);
    puVar2[0x29] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x2e,8,7);
    puVar2[0x2e] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x33,8,7);
    puVar2[0x33] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x38,8,7);
    puVar2[0x38] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x3d,8,7);
    puVar2[0x3d] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x42,8,7);
    puVar2[0x42] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x47,8,7);
    puVar2[0x47] = 0x99fa00;
    _ZN7android10VectorImplC2Emj(puVar2 + 0x4c,8,7);
    puVar2[0x4c] = 0x99fa00;
    *(undefined8 **)(param_1 + uVar5 * 8) = puVar4;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar4 + (ulong)((uint)param_2 & 0xf) * 5;
  }
  func_0x0099bd00();
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}


