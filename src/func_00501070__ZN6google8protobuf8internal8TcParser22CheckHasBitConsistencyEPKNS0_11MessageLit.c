// Function: _ZN6google8protobuf8internal8TcParser22CheckHasBitConsistencyEPKNS0_11MessageLiteEPKNS1_16TcParseTableBaseE
// Address: 00501070
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN6google8protobuf8internal8TcParser22CheckHasBitConsistencyEPKNS0_11MessageLiteEPKNS1_16TcParseTableBaseE
               (ushort *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  long unaff_R14;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong auStack_30 [2];
  long lStack_20;
  
  lStack_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = auStack_30;
  _ZN6google8protobuf8internal8TcParser23VerifyHasBitConsistencyEPKNS0_11MessageLiteEPKNS1_16TcParseTableBaseE
            (puVar7,param_1,param_2);
  if (auStack_30[0] == 1) {
    puVar4 = (ulong *)0x1;
    if (*(long *)(in_FS_OFFSET + 0x28) == lStack_20) {
      return;
    }
  }
  else {
    unaff_R14 = _ZN4absl12lts_2026052615status_internal19MakeCheckFailStringEPKNS0_6StatusEPKc
                          (auStack_30,&UNK_00178f15);
    if ((auStack_30[0] & 1) == 0) {
      _ZNK4absl12lts_2026052615status_internal9StatusRep5UnrefEv(auStack_30[0]);
    }
    param_1 = (ushort *)&UNK_0015e5f1;
    puVar4 = auStack_30;
    param_4 = unaff_R14;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalC1EPKciS4_(puVar4,&UNK_0015e5f1,0xf0);
    _ZN4absl12lts_2026052612log_internal10LogMessage5FlushEv(puVar4);
    puVar7 = puVar4;
    _ZN4absl12lts_2026052612log_internal15LogMessageFatalD1Ev(puVar4);
  }
  auVar8 = func_0x0099bd00();
  puVar3 = auVar8._8_8_;
  uVar9 = auVar8._0_8_;
  while( true ) {
    if ((ushort *)*puVar3 <= param_1) {
      iVar5 = (int)param_1 - *(int *)(puVar3 + 1);
      if (*(int *)((long)puVar3 + 0x1c) == iVar5) {
        puVar2 = (ushort *)0x0;
        if (puVar3[2] != 0) {
          puVar2 = param_1;
        }
        if (0 < iVar5) {
          param_1 = puVar2;
        }
        bVar1 = *(byte *)(param_4 + 9);
        goto joined_r0x005011b6;
      }
      auVar8 = _ZN6google8protobuf8internal18EpsCopyInputStream12DoneFallbackILb1EEENSt3__14pairIPKcbEEii
                         (puVar3,iVar5,*(undefined4 *)((long)puVar3 + 0x5c));
      param_1 = auVar8._0_8_;
      if ((auVar8._8_8_ & 1) != 0) goto code_r0x0050118e;
    }
    uVar6 = (ulong)((uint)*(byte *)(param_4 + 8) & (uint)*param_1 & 0xfffffff8);
    param_1 = (ushort *)
              (**(code **)(param_4 + 0x38 + uVar6 * 2))
                        (puVar7,param_1,puVar3,
                         *(ulong *)(param_4 + 0x40 + uVar6 * 2) ^ (ulong)*param_1,param_4,0,uVar9,
                         puVar4,unaff_R14);
    if (param_1 == (ushort *)0x0) break;
    if (*(int *)(puVar3 + 10) != 0) {
code_r0x0050118e:
      bVar1 = *(byte *)(param_4 + 9);
joined_r0x005011b6:
      if ((bVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005011cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_4 + 0x28))(puVar7,param_1,puVar3,*(code **)(param_4 + 0x28));
        return;
      }
      return;
    }
  }
  param_1 = (ushort *)0x0;
  goto code_r0x0050118e;
}


