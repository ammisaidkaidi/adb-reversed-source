// Function: _ZNK7android8ResTable5Theme25resolveAttributeReferenceEPNS_9Res_valueElPjS4_PNS_15ResTable_configE
// Address: 00433f40
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long * _ZNK7android8ResTable5Theme25resolveAttributeReferenceEPNS_9Res_valueElPjS4_PNS_15ResTable_configE
                 (long *param_1,uint *param_2,long *param_3,uint *param_4,uint *param_5,
                 undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  uint *puVar5;
  int iVar6;
  long *extraout_RDX;
  long *unaff_RBX;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  ulong unaff_R15;
  long in_FS_OFFSET;
  uint uStack_94;
  long lStack_90;
  long *plStack_88;
  uint *puStack_80;
  long *plStack_78;
  uint *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint *puStack_48;
  uint uStack_3c;
  uint *puStack_38;
  
  puStack_38 = *(uint **)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)*param_1;
  plVar8 = param_1;
  puVar12 = param_5;
  uStack_50 = param_6;
  puStack_48 = param_4;
  if (*(char *)((long)param_2 + 3) == '\x02') {
    uVar13 = param_2[1];
    bVar1 = *(byte *)((long)plVar4 + (ulong)(uVar13 >> 0x18) + 0xe8);
    puVar7 = (uint *)(ulong)bVar1;
    param_3 = (long *)0xffffffffffffffb5;
    unaff_R15 = 0;
    if (bVar1 != 0) {
      iVar6 = -0x15;
      do {
        puVar7 = (uint *)param_1[(long)puVar7];
        if (puVar7 == (uint *)0x0) goto joined_r0x0043413e;
        plVar8 = (long *)(ulong)(uVar13 >> 0x10);
        uVar10 = (uVar13 >> 0x10 & 0xff) - 1;
        puVar12 = (uint *)(ulong)uVar10;
        if (0xff < uVar10) goto joined_r0x0043413e;
        plVar8 = (long *)((ulong)uVar13 & 0xffff);
        uVar11 = (ulong)uVar10;
        puVar12 = (uint *)(uVar11 * 0x10);
        if (*(long **)(puVar7 + uVar11 * 4) <= plVar8) goto joined_r0x0043413e;
        puVar12 = *(uint **)(puVar7 + uVar11 * 4 + 2);
        puVar7 = puVar12 + (long)plVar8 * 6;
        unaff_R15 = (ulong)((uint)unaff_R15 | puVar12[(long)plVar8 * 6 + 2]);
        bVar1 = *(byte *)((long)puVar12 + (long)plVar8 * 0x18 + 0xf);
        plVar8 = (long *)(ulong)bVar1;
        if (bVar1 != 2) {
          if ((bVar1 != 0) || (puVar7[4] == 1)) {
            *(undefined8 *)param_2 = *(undefined8 *)(puVar7 + 3);
            param_3 = *(long **)puVar7;
          }
          goto joined_r0x0043413e;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == 0) {
          puVar7 = (uint *)&UNK_0015b3df;
          plVar8 = (long *)0x5;
          puStack_60 = &UNK_00434130;
          __android_log_print(5,&UNK_0015b3df,&UNK_00177356);
          param_3 = (long *)0xffffffffffffffb5;
          param_4 = puStack_48;
          goto joined_r0x0043413e;
        }
        uVar13 = puVar7[4];
        bVar1 = *(byte *)((long)plVar4 + (ulong)(uVar13 >> 0x18) + 0xe8);
        puVar7 = (uint *)(ulong)bVar1;
      } while (bVar1 != 0);
      puVar7 = (uint *)0x0;
    }
joined_r0x0043413e:
    if (param_5 != (uint *)0x0) {
      *param_5 = *param_5 | (uint)unaff_R15;
    }
    unaff_RBX = param_1;
    puStack_48 = param_4;
    if ((long)param_3 < 0) goto code_r0x004340f8;
    plVar4 = (long *)*param_1;
    cVar2 = *(char *)((long)param_2 + 3);
  }
  else {
    puVar7 = param_2;
    if ((long)param_3 < 0) goto code_r0x004340f8;
    cVar2 = *(char *)((long)param_2 + 3);
  }
  puStack_48 = param_4;
  if (cVar2 == '\x01') {
    unaff_R15 = 0;
    unaff_RBX = param_3;
    while( true ) {
      uVar13 = param_2[1];
      puVar7 = (uint *)(ulong)uVar13;
      param_3 = unaff_RBX;
      param_4 = puStack_48;
      if ((uVar13 == 0) || (0x13 < (uint)unaff_R15)) goto code_r0x004340f8;
      if (puStack_48 != (uint *)0x0) {
        *puStack_48 = uVar13;
        puVar7 = (uint *)(ulong)param_2[1];
      }
      uStack_3c = 0;
      uStack_58 = uStack_50;
      puVar12 = (uint *)0x0;
      param_4 = &uStack_3c;
      puStack_60 = &UNK_004340c2;
      plVar8 = plVar4;
      plVar3 = (long *)_ZNK7android8ResTable11getResourceEjPNS_9Res_valueEbtPjPNS_15ResTable_configE
                                 (plVar4,puVar7,param_2,1);
      if (plVar3 == (long *)0xffffffffffffffb5) break;
      if (param_5 != (uint *)0x0) {
        *param_5 = *param_5 | uStack_3c;
      }
      param_4 = puStack_48;
      if (((long)plVar3 < 0) ||
         (unaff_R15 = (ulong)((uint)unaff_R15 + 1), param_3 = plVar3, unaff_RBX = plVar3,
         *(char *)((long)param_2 + 3) != '\x01')) goto code_r0x004340f8;
    }
    param_3 = (long *)0xffffffffffffffb5;
  }
code_r0x004340f8:
  puVar5 = *(uint **)(in_FS_OFFSET + 0x28);
  if (puVar5 == puStack_38) {
    return param_3;
  }
  puStack_60 = &UNK_0043414e;
  func_0x0099bd00();
  lStack_90 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = extraout_RDX;
  plVar9 = plVar8;
  plStack_88 = unaff_RBX;
  puStack_80 = param_2;
  plStack_78 = plVar4;
  puStack_70 = param_5;
  uStack_68 = unaff_R15;
  puStack_60 = &stack0xfffffffffffffff8;
  if ((-1 < (long)extraout_RDX) &&
     (plVar3 = extraout_RDX, puStack_60 = &stack0xfffffffffffffff8,
     *(char *)((long)puVar7 + 3) == '\x01')) {
    uVar13 = 0;
    plVar3 = extraout_RDX;
    puStack_60 = &stack0xfffffffffffffff8;
    while( true ) {
      uVar10 = puVar7[1];
      if ((uVar10 == 0) || (0x13 < uVar13)) goto code_r0x004341fa;
      if (puVar5 != (uint *)0x0) {
        *puVar5 = uVar10;
        uVar10 = puVar7[1];
      }
      uStack_94 = 0;
      plVar9 = plVar8;
      plVar4 = (long *)_ZNK7android8ResTable11getResourceEjPNS_9Res_valueEbtPjPNS_15ResTable_configE
                                 (plVar8,uVar10,puVar7,1,0,&uStack_94,param_4);
      if (plVar4 == (long *)0xffffffffffffffb5) break;
      if (puVar12 != (uint *)0x0) {
        *puVar12 = *puVar12 | uStack_94;
      }
      if (((long)plVar4 < 0) ||
         (uVar13 = uVar13 + 1, plVar3 = plVar4, *(char *)((long)puVar7 + 3) != '\x01'))
      goto code_r0x004341fa;
    }
    plVar3 = (long *)0xffffffffffffffb5;
  }
code_r0x004341fa:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_90) {
    return plVar3;
  }
  func_0x0099bd00();
  return (long *)(ulong)*(uint *)(plVar9 + 0x100);
}


