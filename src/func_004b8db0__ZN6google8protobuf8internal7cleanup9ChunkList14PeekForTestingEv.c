// Function: _ZN6google8protobuf8internal7cleanup9ChunkList14PeekForTestingEv
// Address: 004b8db0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZN6google8protobuf8internal7cleanup9ChunkList14PeekForTestingEv(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *unaff_RBX;
  undefined8 unaff_RBP;
  long lVar3;
  long *unaff_R12;
  long *unaff_R13;
  long *plVar4;
  long unaff_R14;
  long *plVar5;
  long *unaff_R15;
  
code_r0x004b8db0:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(long *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (long *)*param_2;
  if (plVar2 == (long *)0x0) {
    return param_1;
  }
  unaff_R12 = (long *)(param_2[1] + -0x10);
  lVar1 = 0;
  plVar4 = unaff_R13;
  plVar5 = (long *)0x0;
  do {
    unaff_RBX = plVar2 + 2;
    unaff_R13 = plVar4;
    plVar4 = plVar5;
    for (; unaff_RBX <= unaff_R12; unaff_R12 = unaff_R12 + -2) {
      lVar3 = 0x1fffffffffffffff;
      unaff_R15 = (long *)param_1[2];
      if (unaff_R15 <= plVar4) {
        unaff_R14 = (long)plVar4 - lVar1;
        plVar4 = (long *)((unaff_R14 >> 3) + 1);
        if ((ulong)plVar4 >> 0x3d == 0) {
          *(long *)((long)register0x00000020 + -0x38) = unaff_R14 >> 3;
          *(long **)((long)register0x00000020 + -0x50) = plVar2;
          *(long **)((long)register0x00000020 + -0x40) = param_1;
          unaff_R15 = (long *)((long)unaff_R15 - lVar1);
          unaff_R13 = (long *)((long)unaff_R15 >> 2);
          if ((long *)((long)unaff_R15 >> 2) <= plVar4) {
            unaff_R13 = plVar4;
          }
          if ((long *)0x7ffffffffffffff7 < unaff_R15) {
            unaff_R13 = (long *)0x1fffffffffffffff;
          }
          *(long *)((long)register0x00000020 + -0x48) = lVar1;
          if (unaff_R13 < (long *)0x2000000000000000) {
            *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004b8eb2;
            lVar1 = _Znwm((long)unaff_R13 * 8);
            *(long *)((long)register0x00000020 + -0x58) = lVar1 + (long)unaff_R13 * 8;
            *(long *)(lVar1 + unaff_R14) = *unaff_R12;
            unaff_R13 = (long *)(lVar1 + unaff_R14 + 8);
            lVar1 = lVar1 + unaff_R14 + *(long *)((long)register0x00000020 + -0x38) * -8;
            *(long *)((long)register0x00000020 + -0x38) = lVar1;
            *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004b8ee9;
            func_0x0099bda0(lVar1,*(undefined8 *)((long)register0x00000020 + -0x48),unaff_R14);
            param_1 = *(long **)((long)register0x00000020 + -0x40);
            param_1[1] = (long)unaff_R13;
            param_1[2] = *(long *)((long)register0x00000020 + -0x58);
            if (*(long *)((long)register0x00000020 + -0x48) != 0) {
              *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004b8f0d;
              _ZdaPvSt11align_val_t(*(long *)((long)register0x00000020 + -0x48),unaff_R15);
              param_1 = *(long **)((long)register0x00000020 + -0x40);
            }
            lVar1 = *(long *)((long)register0x00000020 + -0x38);
            plVar2 = *(long **)((long)register0x00000020 + -0x50);
            goto code_r0x004b8e47;
          }
          **(undefined8 **)((long)register0x00000020 + -0x40) =
               *(undefined8 *)((long)register0x00000020 + -0x48);
          *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004b8f54;
          func_0x0032fc40();
        }
        *param_1 = lVar1;
        *(undefined **)((long)register0x00000020 + -0x60) = &UNK_004b8f5c;
        func_0x00330ca0();
        *(undefined1 **)((long)register0x00000020 + -0x60) =
             (undefined1 *)((long)register0x00000020 + -8);
        param_2 = (long *)(lVar3 + 0x50);
        unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x60);
        register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
        goto code_r0x004b8db0;
      }
      *plVar4 = *unaff_R12;
      unaff_R13 = plVar4 + 1;
code_r0x004b8e47:
      param_1[1] = (long)unaff_R13;
      plVar4 = unaff_R13;
    }
    *param_1 = lVar1;
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return param_1;
    }
    unaff_R12 = (long *)((plVar2[1] - 0x10U & 0xfffffffffffffff0) + (long)plVar2);
    plVar5 = plVar4;
  } while( true );
}


