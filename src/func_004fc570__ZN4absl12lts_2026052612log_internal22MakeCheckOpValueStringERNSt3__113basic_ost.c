// Function: _ZN4absl12lts_2026052612log_internal22MakeCheckOpValueStringERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEEc
// Address: 004fc570
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x004fc5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fc5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fc650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fc674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fc69d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x004fc5ed: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004fc6a2) */
/* WARNING: Removing unreachable block (ram,0x004fc6b1) */
/* WARNING: Removing unreachable block (ram,0x004fc679) */
/* WARNING: Removing unreachable block (ram,0x004fc6c4) */
/* WARNING: Removing unreachable block (ram,0x004fc6df) */
/* WARNING: Removing unreachable block (ram,0x004fc6d9) */
/* WARNING: Removing unreachable block (ram,0x008bd030) */
/* WARNING: Removing unreachable block (ram,0x008bd040) */
/* WARNING: Removing unreachable block (ram,0x008bd06c) */
/* WARNING: Removing unreachable block (ram,0x008bd0b4) */
/* WARNING: Removing unreachable block (ram,0x008bd0f7) */
/* WARNING: Removing unreachable block (ram,0x008bd10f) */
/* WARNING: Removing unreachable block (ram,0x008bd126) */
/* WARNING: Removing unreachable block (ram,0x004fc688) */
/* WARNING: Removing unreachable block (ram,0x004fc655) */
/* WARNING: Removing unreachable block (ram,0x004fc5c9) */
/* WARNING: Removing unreachable block (ram,0x004fc5d8) */
/* WARNING: Removing unreachable block (ram,0x004fc5a5) */
/* WARNING: Removing unreachable block (ram,0x004fc5f2) */
/* WARNING: Removing unreachable block (ram,0x004fc614) */
/* WARNING: Removing unreachable block (ram,0x004fc691) */
/* WARNING: Removing unreachable block (ram,0x004fc641) */
/* WARNING: Removing unreachable block (ram,0x004fc601) */
/* WARNING: Removing unreachable block (ram,0x008bc440) */
/* WARNING: Removing unreachable block (ram,0x008bc450) */
/* WARNING: Removing unreachable block (ram,0x008bc47b) */
/* WARNING: Removing unreachable block (ram,0x008bc4db) */
/* WARNING: Removing unreachable block (ram,0x008bc4cf) */
/* WARNING: Removing unreachable block (ram,0x008bc532) */
/* WARNING: Removing unreachable block (ram,0x008bc53d) */
/* WARNING: Removing unreachable block (ram,0x008bc4d9) */
/* WARNING: Removing unreachable block (ram,0x008bc538) */
/* WARNING: Removing unreachable block (ram,0x008bc540) */
/* WARNING: Removing unreachable block (ram,0x008bc555) */
/* WARNING: Removing unreachable block (ram,0x008bc56c) */

long * _ZN4absl12lts_2026052612log_internal22MakeCheckOpValueStringERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEEc
                 (long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long in_FS_OFFSET;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  long lStack_68;
  ulong uStack_60;
  
  uStack_60 = param_2 & 0xffffffff;
  if ((byte)((char)param_2 - 0x20U) < 0x5f) {
    puVar9 = &UNK_00162c6d;
    lVar8 = 1;
  }
  else {
    puVar9 = &UNK_001664ea;
    lVar8 = 0xb;
  }
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_88 = 0;
  uStack_80 = 0;
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(&uStack_88,param_1);
  if ((char)uStack_88 == '\x01') {
    lVar2 = *(long *)(*param_1 + -0x18);
    lVar1 = (long)param_1 + lVar2;
    uVar3 = *(undefined8 *)((long)param_1 + lVar2 + 0x28);
    puVar10 = puVar9;
    if ((*(uint *)((long)param_1 + lVar2 + 8) & 0xb0) == 0x20) {
      puVar10 = puVar9 + lVar8;
    }
    iVar6 = *(int *)((long)param_1 + lVar2 + 0x90);
    if (iVar6 == -1) {
      _ZNKSt3__18ios_base6getlocEv(auStack_70,lVar1);
      plVar7 = (long *)_ZNKSt3__16locale9use_facetERNS0_2idE(auStack_70,_ZNSt3__15ctypeIcE2idE);
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
      _ZNSt3__16localeD2Ev(auStack_70);
      iVar6 = (int)cVar5;
      *(int *)(lVar1 + 0x90) = iVar6;
    }
    lVar8 = func_0x0032ec60(uVar3,puVar9,puVar10,puVar9 + lVar8,lVar1,(int)(char)iVar6);
    if (lVar8 == 0) {
      _ZNSt3__18ios_base5clearEj
                ((long)param_1 + *(long *)(*param_1 + -0x18),
                 *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) | 5);
    }
  }
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(&uStack_88);
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_68) {
    return param_1;
  }
  func_0x0099bd00();
  pcVar4 = (code *)swi(3);
  plVar7 = (long *)(*pcVar4)();
  return plVar7;
}


