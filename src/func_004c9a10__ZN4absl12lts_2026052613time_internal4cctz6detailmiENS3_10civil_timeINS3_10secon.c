// Function: _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEEl
// Address: 004c9a10
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4absl12lts_2026052613time_internal4cctz6detailmiENS3_10civil_timeINS3_10second_tagEEEl
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined1 auVar7 [16];
  
  lVar3 = (long)(char)param_2;
  lVar2 = (long)(char)((ulong)param_2 >> 8);
  lVar1 = (long)(char)((ulong)param_2 >> 0x10);
  lVar4 = (long)(char)((ulong)param_2 >> 0x18);
  cVar6 = (char)((ulong)param_2 >> 0x20);
  if (SBORROW8(0,param_3)) {
    auVar7 = _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
                       (param_1,lVar3,lVar2,lVar1,lVar4 + 0x222222222222222,(long)cVar6 + 7);
    param_1 = auVar7._0_8_;
    lVar3 = (long)auVar7[8];
    lVar2 = (long)auVar7[9];
    lVar1 = (long)auVar7[10];
    lVar4 = (long)auVar7[0xb];
    lVar5 = (long)auVar7[0xc] + 1;
  }
  else {
    lVar5 = SUB168(SEXT816(param_3) * SEXT816(0x7777777777777777),8) - param_3;
    lVar4 = lVar4 + ((lVar5 >> 5) - (lVar5 >> 0x3f));
    lVar5 = ((param_3 / 0x3c) * 0x3c - param_3) + (long)cVar6;
  }
  _ZN4absl12lts_2026052613time_internal4cctz6detail4impl5n_secEllllll
            (param_1,lVar3,lVar2,lVar1,lVar4,lVar5);
  return;
}


