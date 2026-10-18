// Function: _ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
// Address: 00501110
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal8TcParser21ParseLoopPreserveNoneEPNS0_11MessageLiteEPKcPNS1_12ParseContextEPKNS1_16TcParseTableBaseE
               (undefined8 param_1,ushort *param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  while( true ) {
    if ((ushort *)*param_3 <= param_2) {
      iVar3 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar3) {
        puVar2 = (ushort *)0x0;
        if (param_3[2] != 0) {
          puVar2 = param_2;
        }
        if (0 < iVar3) {
          param_2 = puVar2;
        }
        bVar1 = *(byte *)(param_4 + 9);
        goto joined_r0x005011b6;
      }
      auVar5 = _ZN6google8protobuf8internal18EpsCopyInputStream12DoneFallbackILb1EEENSt3__14pairIPKcbEEii
                         (param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar5._0_8_;
      if ((auVar5._8_8_ & 1) != 0) goto code_r0x0050118e;
    }
    uVar4 = (ulong)((uint)*(byte *)(param_4 + 8) & (uint)*param_2 & 0xfffffff8);
    param_2 = (ushort *)
              (**(code **)(param_4 + 0x38 + uVar4 * 2))
                        (param_1,param_2,param_3,
                         *(ulong *)(param_4 + 0x40 + uVar4 * 2) ^ (ulong)*param_2,param_4,0);
    if (param_2 == (ushort *)0x0) break;
    if (*(int *)(param_3 + 10) != 0) {
code_r0x0050118e:
      bVar1 = *(byte *)(param_4 + 9);
joined_r0x005011b6:
      if ((bVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005011cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_4 + 0x28))(param_1,param_2,param_3,*(code **)(param_4 + 0x28));
        return;
      }
      return;
    }
  }
  param_2 = (ushort *)0x0;
  goto code_r0x0050118e;
}


