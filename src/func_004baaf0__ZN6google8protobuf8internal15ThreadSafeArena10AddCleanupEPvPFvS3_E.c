// Function: _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
// Address: 004baaf0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal15ThreadSafeArena10AddCleanupEPvPFvS3_E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *in_FS_OFFSET;
  
  if (*(long *)(*in_FS_OFFSET + -0x118) == *param_1) {
    lVar3 = *(long *)(*in_FS_OFFSET + -0x110);
  }
  else {
    lVar3 = _ZN6google8protobuf8internal15ThreadSafeArena22GetSerialArenaFallbackEm(param_1,0x10);
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x58);
  if (puVar1 < *(undefined8 **)(lVar3 + 0x60)) {
    *(undefined8 **)(lVar3 + 0x58) = puVar1 + 2;
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  else {
    _ZN6google8protobuf8internal7cleanup9ChunkList11AddFallbackEPvPFvS4_ERNS1_11SerialArenaE
              (lVar3 + 0x50,param_2,param_3,lVar3);
  }
  uVar4 = *(ulong *)(lVar3 + 0x58);
  uVar2 = *(ulong *)(lVar3 + 0x68);
  if (((long)(uVar2 - uVar4) < 0x181) && (uVar5 = *(ulong *)(lVar3 + 0x60), uVar2 < uVar5)) {
    if (uVar4 < uVar2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4;
    if (uVar4 + 0x180 < uVar5) {
      uVar5 = uVar4 + 0x180;
    }
    for (; uVar2 < uVar5; uVar2 = uVar2 + 0x40) {
    }
  }
  *(ulong *)(lVar3 + 0x68) = uVar2;
  return;
}


