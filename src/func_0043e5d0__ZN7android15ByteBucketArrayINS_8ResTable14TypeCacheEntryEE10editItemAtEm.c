// Function: _ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE10editItemAtEm
// Address: 0043e5d0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE10editItemAtEm
               (undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  puVar9 = param_1;
  if (0xff < param_2) {
    puVar9 = &uStack_40;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (puVar9,&UNK_0017d9ed,0x51,6,&UNK_0015b3df,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(puVar9);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0017a474,0x1c);
    uVar5 = func_0x0032eb30(uVar5,&UNK_0015ae05,1);
    uVar5 = func_0x0032eb30(uVar5,&UNK_00172733,0x21);
    uVar5 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,param_2);
    uVar5 = func_0x0032eb30(uVar5,&UNK_00186a7c,0xc);
    _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar5,0x100);
    _ZN7android4base10LogMessageD2Ev();
  }
  uVar10 = (uint)(param_2 >> 4) & 0xf;
  puVar4 = (undefined8 *)param_1[uVar10];
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)_Znam(0x308);
    *puVar3 = 0x10;
    puVar3[1] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 2,0x10,0);
    puVar3[2] = 0x99fb38;
    puVar3[7] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 8,0x10,0);
    puVar3[8] = 0x99fb38;
    puVar3[0xd] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0xe,0x10,0);
    puVar3[0xe] = 0x99fb38;
    puVar3[0x13] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x14,0x10,0);
    puVar3[0x14] = 0x99fb38;
    puVar3[0x19] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x1a,0x10,0);
    puVar3[0x1a] = 0x99fb38;
    puVar3[0x1f] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x20,0x10,0);
    puVar3[0x20] = 0x99fb38;
    puVar3[0x25] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x26,0x10,0);
    puVar3[0x26] = 0x99fb38;
    puVar3[0x2b] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x2c,0x10,0);
    puVar3[0x2c] = 0x99fb38;
    puVar3[0x31] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x32,0x10,0);
    puVar3[0x32] = 0x99fb38;
    puVar3[0x37] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x38,0x10,0);
    puVar3[0x38] = 0x99fb38;
    puVar3[0x3d] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x3e,0x10,0);
    puVar3[0x3e] = 0x99fb38;
    puVar3[0x43] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x44,0x10,0);
    puVar3[0x44] = 0x99fb38;
    puVar3[0x49] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x4a,0x10,0);
    puVar3[0x4a] = 0x99fb38;
    puVar3[0x4f] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x50,0x10,0);
    puVar3[0x50] = 0x99fb38;
    puVar3[0x55] = 0;
    _ZN7android10VectorImplC2Emj(puVar3 + 0x56,0x10,0);
    puVar3[0x56] = 0x99fb38;
    puVar3[0x5b] = 0;
    puVar9 = puVar3 + 0x5c;
    _ZN7android10VectorImplC2Emj(puVar9,0x10,0);
    puVar4 = puVar3 + 1;
    puVar3[0x5c] = 0x99fb38;
    param_1[uVar10] = puVar4;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    uVar12 = 0;
    do {
      lVar7 = puVar9[(uVar12 >> 4) + 8];
      if (lVar7 == 0) {
        puVar8 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E;
        lVar1 = _ZN7android15ByteBucketArrayINS_6VectorIPNS_8ResTable4TypeEEEE8default_E._16_8_;
      }
      else {
        puVar8 = (undefined1 *)(lVar7 + (ulong)((uint)uVar12 & 0xf) * 0x28);
        lVar1 = *(long *)(puVar8 + 0x10);
      }
      if (lVar1 != 0) {
        plVar6 = (long *)_ZN7android15ByteBucketArrayINS_8ResTable14TypeCacheEntryEE10editItemAtEm
                                   (puVar9 + 0x19,uVar12);
        lVar7 = _ZN7android10VectorImpl5clearEv(plVar6 + 1);
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          lVar7 = *(long *)(**(long **)(puVar8 + 8) + 0x10);
          if (lVar7 != 0) {
            lVar11 = 0;
            do {
              lVar2 = *(long *)(lVar1 + lVar11 * 8);
              if ((lVar2 != 0) && (lVar2 != 0xffffffff)) {
                func_0x0099c1f0();
              }
              lVar11 = lVar11 + 1;
            } while (lVar7 != lVar11);
          }
          lVar7 = func_0x0099c1f0(lVar1);
          *plVar6 = 0;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x100);
    return lVar7;
  }
  return (long)puVar4 + (ulong)(((uint)param_2 & 0xf) * 0x30);
}


