// Function: _ZN8IOVector10drop_frontEm
// Address: 003f2620
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN8IOVector10drop_frontEm(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = param_1;
  if (param_2 != 0) {
    uVar8 = *param_1 - param_1[1];
    if (param_2 == uVar8) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar10 = param_1[3];
      lVar7 = param_1[4];
      if (lVar10 == lVar7) {
        lVar5 = 0;
        if (lVar10 != lVar7) goto code_r0x003f27b9;
      }
      else {
        lVar5 = *(long *)(lVar7 + -0x20);
        *(undefined8 *)(lVar7 + -0x20) = 0;
        *(undefined8 *)(lVar7 + -0x18) = 0;
        *(undefined8 *)(lVar7 + -0x10) = 0;
        lVar10 = param_1[3];
        lVar7 = param_1[4];
        if (lVar10 != lVar7) {
code_r0x003f27b9:
          do {
            plVar6 = *(long **)(lVar7 + -0x20);
            *(undefined8 *)(lVar7 + -0x20) = 0;
            if (plVar6 != (long *)0x0) {
              _ZdaPvSt11align_val_t();
            }
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != lVar10);
        }
      }
      param_1[4] = lVar10;
      if (lVar5 != 0) {
        if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
          free(lVar5);
          return;
        }
        goto code_r0x003f2905;
      }
    }
    else {
      if (uVar8 <= param_2) {
        do {
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_40,&UNK_0015b1c1,0x31,6,0,0xffffffff);
          uVar1 = _ZN7android4base10LogMessage6streamEv(auStack_40);
          uVar1 = func_0x0032eb30(uVar1,&UNK_00165d45,0xe);
          uVar1 = func_0x0032eb30(uVar1,&UNK_001596b0,3);
          uVar1 = func_0x0032eb30(uVar1,&UNK_0015ae05,1);
          uVar1 = func_0x0032eb30(uVar1,&UNK_0016af8a,1);
          uVar1 = func_0x0032eb30(uVar1,&UNK_0015ae05,1);
          uVar1 = func_0x0032eb30(uVar1,&UNK_00167ba2,6);
          uVar1 = func_0x0032eb30(uVar1,&UNK_00181bbd,6);
          uVar1 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar1,param_2);
          uVar1 = func_0x0032eb30(uVar1,&UNK_00187e37,9);
          uVar1 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar1,uVar8);
          func_0x0032eb30(uVar1,&UNK_0017b788,2);
          _ZN7android4base10LogMessageD2Ev(auStack_40);
        } while( true );
      }
      uVar8 = param_1[2];
      uVar3 = 0;
      do {
        lVar10 = *(long *)(param_1[3] + 0x10 + uVar8 * 0x20);
        uVar4 = (lVar10 - param_1[1]) + uVar3;
        if (param_2 < uVar4) {
          param_1[1] = (param_2 - uVar3) + param_1[1];
          break;
        }
        puVar9 = (undefined8 *)(param_1[3] + uVar8 * 0x20);
        *param_1 = *param_1 - lVar10;
        param_1[1] = 0;
        plVar6 = (long *)*puVar9;
        *puVar9 = 0;
        if (plVar6 != (long *)0x0) {
          _ZdaPvSt11align_val_t();
        }
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        lVar10 = param_1[3];
        uVar8 = param_1[2] + 1;
        param_1[2] = uVar8;
        uVar3 = (ulong)(param_1[4] - lVar10 >> 5) >> 1;
        if (uVar3 < 5) {
          uVar3 = 4;
        }
        if (uVar3 < uVar8) {
          plVar6 = param_1 + 3;
          func_0x003f3580(plVar6,lVar10,uVar8 * 0x20 + lVar10);
          param_1[2] = 0;
          uVar8 = 0;
        }
        uVar3 = uVar4 & 0xffffffff;
      } while (uVar3 < param_2);
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return;
  }
code_r0x003f2905:
  func_0x0099bd00();
  lVar7 = plVar6[3];
  lVar2 = plVar6[2] * 0x20;
  lVar10 = lVar7 + lVar2;
  *plVar6 = *plVar6 - *(long *)(lVar7 + 0x10 + lVar2);
  plVar6[1] = 0;
  lVar5 = *(long *)(lVar7 + lVar2);
  *(undefined8 *)(lVar7 + lVar2) = 0;
  if (lVar5 != 0) {
    _ZdaPvSt11align_val_t();
  }
  *(undefined8 *)(lVar10 + 8) = 0;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  lVar10 = plVar6[3];
  uVar4 = plVar6[2] + 1;
  plVar6[2] = uVar4;
  uVar3 = (ulong)(plVar6[4] - lVar10 >> 5) >> 1;
  uVar8 = 4;
  if (4 < uVar3) {
    uVar8 = uVar3;
  }
  if (uVar8 < uVar4) {
    func_0x003f3580(plVar6 + 3,lVar10,uVar4 * 0x20 + lVar10);
    plVar6[2] = 0;
  }
  return;
}


