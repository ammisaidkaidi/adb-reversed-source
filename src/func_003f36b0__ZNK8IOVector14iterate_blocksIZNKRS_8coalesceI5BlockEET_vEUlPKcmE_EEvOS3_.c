// Function: _ZNK8IOVector14iterate_blocksIZNKRS_8coalesceI5BlockEET_vEUlPKcmE_EEvOS3_
// Address: 003f36b0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZNK8IOVector14iterate_blocksIZNKRS_8coalesceI5BlockEET_vEUlPKcmE_EEvOS3_
               (long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != param_1[1]) {
    uVar8 = param_1[2];
    lVar3 = param_1[3];
    if (uVar8 < (ulong)(param_1[4] - lVar3 >> 5)) {
      uVar5 = uVar8 << 5 | 0x10;
      do {
        lVar6 = *(long *)(lVar3 + -0x10 + uVar5);
        uVar7 = *(ulong *)(lVar3 + uVar5);
        if (uVar8 == param_1[2]) {
          uVar1 = param_1[1];
          if (uVar7 < uVar1) {
            do {
              _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                        (auStack_40,&UNK_00180212,0xed,6,0,0xffffffff);
              uVar4 = _ZN7android4base10LogMessage6streamEv(auStack_40);
              uVar4 = func_0x0032eb30(uVar4,&UNK_00165d45,0xe);
              uVar4 = func_0x0032eb30(uVar4,&UNK_00161431,0xc);
              uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
              uVar4 = func_0x0032eb30(uVar4,&UNK_00181913,2);
              uVar4 = func_0x0032eb30(uVar4,&UNK_0015ae05,1);
              uVar4 = func_0x0032eb30(uVar4,&UNK_00181bcb,0xd);
              uVar4 = func_0x0032eb30(uVar4,&UNK_001866e1,0xf);
              uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,uVar7);
              uVar4 = func_0x0032eb30(uVar4,&UNK_0018352a,0x10);
              uVar4 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar4,uVar1);
              func_0x0032eb30(uVar4,&UNK_0017b788,2);
              _ZN7android4base10LogMessageD2Ev(auStack_40);
            } while( true );
          }
          lVar6 = lVar6 + uVar1;
          uVar7 = uVar7 - uVar1;
        }
        func_0x0099bda0(*(long *)param_2[1] + *(long *)*param_2,lVar6,uVar7);
        *(long *)*param_2 = *(long *)*param_2 + uVar7;
        uVar8 = uVar8 + 1;
        lVar3 = param_1[3];
        uVar5 = uVar5 + 0x20;
      } while (uVar8 < (ulong)(param_1[4] - lVar3 >> 5));
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


