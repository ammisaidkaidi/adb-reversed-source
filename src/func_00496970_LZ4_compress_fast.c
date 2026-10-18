// Function: LZ4_compress_fast
// Address: 00496970
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong LZ4_compress_fast(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4,
                       undefined4 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_80c0 [16416];
  long lStack_40a0;
  undefined1 *puStack_4098;
  undefined8 uStack_4090;
  undefined8 uStack_4088;
  ulong uStack_4080;
  ulong uStack_4078;
  undefined *puStack_4070;
  undefined4 uStack_405c;
  undefined1 auStack_4058 [16416];
  ulong uStack_38;
  
  uStack_38 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack_4070 = &UNK_004969ba;
  uStack_405c = param_5;
  func_0x0099bdb0(auStack_4058,0,0x4020);
  puStack_4070 = &UNK_004969d5;
  uVar3 = param_1;
  puVar4 = auStack_4058;
  uVar1 = LZ4_compress_fast_extState
                    (auStack_4058,param_1,param_2,(ulong)param_3,param_4 & 0xffffffff,uStack_405c);
  uVar2 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar2 == uStack_38) {
    return uVar1;
  }
  puStack_4070 = &UNK_004969fb;
  func_0x0099bd00();
  lStack_40a0 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = auStack_80c0;
  puStack_4098 = auStack_4058;
  uStack_4090 = param_2;
  uStack_4088 = param_1;
  uStack_4080 = param_4 & 0xffffffff;
  uStack_4078 = (ulong)param_3;
  puStack_4070 = &stack0xfffffffffffffff8;
  func_0x0099bdb0(puVar5,0,0x4020);
  uVar2 = LZ4_compress_fast_extState(puVar5,puVar4,uVar3,extraout_EDX,uVar2 & 0xffffffff,1);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_40a0) {
    return uVar2;
  }
  func_0x0099bd00();
  uVar2 = func_0x00496ad0();
  if (((ulong)puVar5 & 7) == 0 && puVar5 != (undefined1 *)0x0) {
    uVar2 = uVar2 & 0xffffffff;
    func_0x0099bdb0(puVar5,0,0x4020);
  }
  return uVar2;
}


