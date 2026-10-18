// Function: _Z11perror_exitPKcz
// Address: 0032e780
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z11perror_exitPKcz(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  code *pcVar1;
  char in_AL;
  undefined4 *puVar2;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  
  if (in_AL != '\0') {
    uStack_a8 = param_1;
    uStack_98 = param_2;
    uStack_88 = param_3;
    uStack_78 = param_4;
    uStack_68 = param_5;
    uStack_58 = param_6;
    uStack_48 = param_7;
    uStack_38 = param_8;
  }
  puStack_18 = auStack_d8;
  uStack_28 = 0x3000000008;
  puStack_20 = &stack0x00000008;
  uStack_d0 = param_10;
  uStack_c8 = param_11;
  uStack_c0 = param_12;
  uStack_b8 = param_13;
  uStack_b0 = param_14;
  puVar2 = (undefined4 *)func_0x0099bce0();
  func_0x0032e670(*puVar2,param_9,&uStack_28);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


