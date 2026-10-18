// Function: _ZN6google8protobuf8internal8TcParser23VerifyHasBitConsistencyEPKNS0_11MessageLiteEPKNS1_16TcParseTableBaseE
// Address: 00500ae0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN6google8protobuf8internal8TcParser23VerifyHasBitConsistencyEPKNS0_11MessageLiteEPKNS1_16TcParseTableBaseE
          (undefined8 *param_1,long param_2,short *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_RDX;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long *plStack_60;
  short **ppsStack_58;
  long lStack_50;
  short *psStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  psStack_48 = param_3;
  lStack_40 = param_2;
  if ((*param_3 != 0) && (param_3[10] != 0)) {
    lVar8 = (ulong)*(uint *)(param_3 + 8) + (long)param_3;
    lVar9 = (ulong)(ushort)param_3[10] * 0xc;
    do {
      uVar1 = *(ushort *)(lVar8 + 10);
      plStack_60 = &lStack_40;
      ppsStack_58 = &psStack_48;
      lStack_50 = lVar8;
      if (((ushort)((uVar1 & 0x30) - 1) < 0x2f) &&
         (uVar6 = *(uint *)(lVar8 + 4), uVar6 != 0xffffffff)) {
        lVar5 = **(long **)(psStack_48 + 0x10);
        lVar4 = lStack_40;
        if ((uVar1 & 8) != 0) {
          uVar7 = (ulong)*(uint *)((ulong)*(uint *)(psStack_48 + 0xc) + 8 + (long)psStack_48);
          lVar5 = *(long *)(lVar5 + uVar7);
          lVar4 = *(long *)(lStack_40 + uVar7);
        }
        uVar6 = 1 << ((byte)uVar6 & 0x1f) & *(uint *)(lStack_40 + (ulong)(uVar6 >> 5) * 4);
        if ((uVar1 & 0x30) != 0x20) {
                    /* WARNING: Could not emulate address calculation at 0x00500bdd */
                    /* WARNING: Treating indirect jump as call */
          puVar3 = (undefined8 *)
                   (*(code *)(&UNK_00204c94 + *(int *)(&UNK_00204c94 + (ulong)((uVar1 & 7) - 1) * 4)
                             ))(uVar6,lVar5);
          return puVar3;
        }
        if ((uVar6 == 0) &&
           (cVar2 = _ZN6google8protobuf8internal8TcParser24RepeatedFieldIsEmptySlowEPKNS0_11MessageLiteEPKNS1_16TcParseTableBaseERKNS6_10FieldEntryEPKvb
                              (0,psStack_48,lVar8,lVar4,(uVar1 & 8) >> 3), cVar2 == '\0')) {
          func_0x00500ec0(param_1,&plStack_60);
          goto code_r0x00500dbc;
        }
      }
      lVar8 = lVar8 + 0xc;
      lVar9 = lVar9 + -0xc;
    } while (lVar9 != 0);
  }
  *param_1 = 1;
code_r0x00500dbc:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
                    /* WARNING: Could not emulate address calculation at 0x00500e12 */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)(&UNK_00204cac +
                       *(int *)(&UNK_00204cac +
                               (ulong)((*(ushort *)(extraout_RDX + 10) & 7) - 1) * 4)))
                       (&UNK_00204cac +
                        *(int *)(&UNK_00204cac +
                                (ulong)((*(ushort *)(extraout_RDX + 10) & 7) - 1) * 4));
    return puVar3;
  }
  return param_1;
}


