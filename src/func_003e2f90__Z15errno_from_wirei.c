// Function: _Z15errno_from_wirei
// Address: 003e2f90
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z15errno_from_wirei(uint param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  lStack_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = plRam0000000000a006b8[1];
  if ((uVar5 != 0) && (plRam0000000000a006b8[3] != 0)) {
    uVar8 = (ulong)(int)param_1;
    uVar1 = uVar5 - 1;
    if ((uVar5 & uVar1) == 0) {
      uVar9 = uVar1 & uVar8;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        if ((uVar8 | uVar5) >> 0x20 == 0) {
          uVar9 = (ulong)param_1 % (uVar5 & 0xffffffff);
        }
        else {
          uVar9 = uVar8 % uVar5;
        }
      }
    }
    puVar11 = *(undefined8 **)(*plRam0000000000a006b8 + uVar9 * 8);
    if (puVar11 != (undefined8 *)0x0) {
      for (puVar11 = (undefined8 *)*puVar11; puVar11 != (undefined8 *)0x0;
          puVar11 = (undefined8 *)*puVar11) {
        uVar10 = puVar11[1];
        if (uVar10 == uVar8) {
          if (*(uint *)(puVar11 + 2) == param_1) {
            uVar5 = (ulong)*(uint *)((long)puVar11 + 0x14);
            goto code_r0x003e308c;
          }
        }
        else {
          if ((uVar5 & uVar1) == 0) {
            uVar10 = uVar10 & uVar1;
          }
          else if (uVar5 <= uVar10) {
            if ((uVar10 | uVar5) >> 0x20 == 0) {
              if ((uVar10 & 0xffffffff) % (uVar5 & 0xffffffff) == uVar9) goto code_r0x003e302a;
              break;
            }
            uVar10 = uVar10 % uVar5;
          }
          if (uVar10 != uVar9) break;
        }
code_r0x003e302a:
      }
    }
  }
  cVar4 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4,0);
  uVar5 = 5;
  if (cVar4 != '\0') {
    puVar6 = (undefined4 *)func_0x0099bce0();
    uVar2 = *puVar6;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (auStack_38,&UNK_00181b5b,0x5c,4,0,0xffffffff);
    uVar7 = _ZN7android4base10LogMessage6streamEv(auStack_38);
    uVar7 = func_0x0032eb30(uVar7,&UNK_0015c878,0x18);
    uVar7 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar7,param_1);
    func_0x0032eb30(uVar7,&UNK_00169620,10);
    _ZN7android4base10LogMessageD2Ev(auStack_38);
    uVar5 = 5;
    *puVar6 = uVar2;
  }
code_r0x003e308c:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_30) {
    func_0x0099bd00();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  return uVar5;
}


