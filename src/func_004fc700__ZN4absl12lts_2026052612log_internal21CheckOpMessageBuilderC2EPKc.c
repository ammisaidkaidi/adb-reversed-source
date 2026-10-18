// Function: _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc
// Address: 004fc700
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004fc7e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004fc7e9) */

long * _ZN4absl12lts_2026052612log_internal21CheckOpMessageBuilderC2EPKc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  undefined *puStack_40;
  
  param_1[0x14] = 0;
  param_1[0xe] = 0x9ba420;
  *param_1 = 0x9ba390;
  param_1[0xe] = 0x9ba3b8;
  lVar7 = *(long *)(*param_1 + -0x18);
  puStack_40 = &UNK_004fc75c;
  _ZNSt3__18ios_base4initEPv((long)param_1 + lVar7,param_1 + 1);
  *(undefined8 *)((long)param_1 + lVar7 + 0x88) = 0;
  *(undefined4 *)((long)param_1 + lVar7 + 0x90) = 0xffffffff;
  *param_1 = 0x9ba3f8;
  param_1[0xe] = 0x9ba420;
  param_1[1] = 0x9b9bf8;
  puStack_40 = &UNK_004fc797;
  _ZNSt3__16localeC2Ev(param_1 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0x9b9f28;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x10;
  puStack_40 = &UNK_004fc7d3;
  func_0x00348610(param_1 + 1);
  puStack_40 = &UNK_004fc7db;
  lVar8 = func_0x0099bcf0(param_2);
  puStack_40 = &UNK_004fc7e9;
  uStack_60 = 0x9ba420;
  uStack_68 = 0x9ba3f8;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_70 = param_2;
  plStack_58 = param_1;
  lStack_50 = lVar7;
  puStack_48 = &stack0xfffffffffffffff8;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(&uStack_98,param_1);
  if ((char)uStack_98 == '\x01') {
    lVar1 = *(long *)(*param_1 + -0x18);
    lVar7 = (long)param_1 + lVar1;
    uVar2 = *(undefined8 *)((long)param_1 + lVar1 + 0x28);
    lVar9 = param_2;
    if ((*(uint *)((long)param_1 + lVar1 + 8) & 0xb0) == 0x20) {
      lVar9 = lVar8 + param_2;
    }
    iVar5 = *(int *)((long)param_1 + lVar1 + 0x90);
    if (iVar5 == -1) {
      _ZNKSt3__18ios_base6getlocEv(auStack_80,lVar7);
      plVar6 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_80,_ZNSt3__15ctypeIcE2idE);
      cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      _ZNSt3__16localeD2Ev(auStack_80);
      iVar5 = (int)cVar4;
      *(int *)(lVar7 + 0x90) = iVar5;
    }
    lVar7 = func_0x0032ec60(uVar2,param_2,lVar9,lVar8 + param_2,lVar7,(int)(char)iVar5);
    if (lVar7 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)param_1 + *(long *)(*param_1 + -0x18),
                 *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) | 5);
    }
  }
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(&uStack_98);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_78) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar3 = (code *)swi(3);
  plVar6 = (long *)(*pcVar3)();
  return plVar6;
}


