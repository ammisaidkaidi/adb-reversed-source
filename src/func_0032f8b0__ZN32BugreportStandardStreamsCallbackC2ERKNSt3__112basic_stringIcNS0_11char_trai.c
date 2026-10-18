// Function: _ZN32BugreportStandardStreamsCallbackC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_bP9Bugreport
// Address: 0032f8b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN32BugreportStandardStreamsCallbackC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEES8_bP9Bugreport
               (undefined8 *param_1,byte *param_2,byte *param_3,undefined1 param_4,
               undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined1 uStack_35;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0x99e160;
  param_1[1] = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((*param_2 & 1) == 0) {
    param_1[7] = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 6) = uVar4;
    *(undefined4 *)((long)param_1 + 0x34) = uVar5;
  }
  else {
    func_0x00330340(param_1 + 5,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  }
  if ((*param_3 & 1) == 0) {
    param_1[10] = *(undefined8 *)(param_3 + 0x10);
    uVar6 = *(undefined8 *)(param_3 + 8);
    param_1[8] = *(undefined8 *)param_3;
    param_1[9] = uVar6;
  }
  else {
    func_0x00330340(param_1 + 8,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  bStack_40 = 0x14;
  uStack_3f = 0x746172656e6567;
  uStack_38 = 0x69;
  uStack_37 = 0x676e;
  uStack_35 = 0;
  _ZN32BugreportStandardStreamsCallback14SetLineMessageERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,&bStack_40);
  if ((bStack_40 & 1) != 0) {
    _ZdaPvSt11align_val_t(puStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
    param_1 = puStack_30;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_28) {
    return;
  }
  func_0x0099bd00();
  *param_1 = 0x99e160;
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    _ZdaPvSt11align_val_t(param_1[0x14],param_1[0x12] & 0xfffffffffffffffe);
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    lVar8 = param_1[0xf];
    lVar7 = lVar2;
    if (lVar2 != lVar8) {
      do {
        if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
          _ZdaPvSt11align_val_t
                    (*(undefined8 *)(lVar8 + -8),*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe);
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != lVar2);
      lVar7 = param_1[0xe];
    }
    param_1[0xf] = lVar2;
    _ZdaPvSt11align_val_t(lVar7,param_1[0x10] - lVar7);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[0xd],param_1[0xb] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[10],param_1[8] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    _ZdaPvSt11align_val_t(param_1[7],param_1[5] & 0xfffffffffffffffe);
    bVar1 = *(byte *)(param_1 + 2);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  free(param_1[4],param_1[2] & 0xfffffffffffffffe);
  return;
}


