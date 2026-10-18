// Function: _ZN10atransport19IsReverseConfiguredERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// Address: 003ed970
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZN10atransport19IsReverseConfiguredERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
          (undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  long *plVar11;
  long in_FS_OFFSET;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar9 = param_2;
  puVar10 = param_1;
  lVar3 = _Z19fdevent_get_ambientv();
  if (*(char *)(lVar3 + 0x10) == '\x01') {
    lVar3 = _Z19fdevent_get_ambientv();
    lVar4 = _ZN7android4base11GetThreadIdEv();
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != lVar4) {
      do {
        _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                  (auStack_40,&UNK_0017a1e0,0x6dd,6,0,0xffffffff);
        uVar6 = _ZN7android4base10LogMessage6streamEv(auStack_40);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165d45,0xe);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00162e7f,0x29);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015aef8,2);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0015ae05,1);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00183451,0x1c);
        uVar6 = func_0x0032eb30(uVar6,&UNK_0017ed76,0x2c);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar3);
        uVar6 = func_0x0032eb30(uVar6,&UNK_00165f20,0x1f);
        uVar6 = _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(uVar6,lVar4);
        func_0x0032eb30(uVar6,&UNK_0017b788,2);
        _ZN7android4base10LogMessageD2Ev(auStack_40);
      } while( true );
    }
  }
  plVar11 = (long *)param_1[0x3c];
  if (plVar11 != (long *)0x0) {
    if ((*param_2 & 1) == 0) {
      uVar8 = (ulong)(*param_2 >> 1);
      param_2 = param_2 + 1;
    }
    else {
      uVar8 = *(ulong *)(param_2 + 8);
      param_2 = *(byte **)(param_2 + 0x10);
    }
    do {
      bVar1 = *(byte *)(plVar11 + 5);
      if ((bVar1 & 1) == 0) {
        uVar7 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar7 = plVar11[6];
      }
      if (uVar7 == uVar8) {
        if ((bVar1 & 1) == 0) {
          puVar10 = (undefined8 *)((long)plVar11 + 0x29);
        }
        else {
          puVar10 = (undefined8 *)plVar11[7];
        }
        pbVar9 = param_2;
        iVar2 = func_0x0099bf90(puVar10,param_2,uVar8);
        if (iVar2 == 0) {
          puVar5 = (undefined8 *)0x1;
          goto code_r0x003eda29;
        }
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  puVar5 = (undefined8 *)0x0;
code_r0x003eda29:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return puVar5;
  }
  func_0x0099bd00();
  if (*(long *)(pbVar9 + 0x140) != 0) {
    lVar3 = *(long *)(*(long *)(pbVar9 + 0x120) + (*(ulong *)(pbVar9 + 0x138) >> 8) * 8);
    uVar8 = (ulong)(((uint)*(ulong *)(pbVar9 + 0x138) & 0xff) << 4);
    lVar4 = *(long *)(lVar3 + 8 + uVar8);
    puVar5 = (undefined8 *)(lVar3 + uVar8);
    uVar6 = puVar5[1];
    *puVar10 = *puVar5;
    puVar10[1] = uVar6;
    if (lVar4 != 0) {
      LOCK();
      plVar11 = (long *)(lVar4 + 8);
      *plVar11 = *plVar11 + 1;
      UNLOCK();
    }
    return puVar10;
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  return puVar10;
}


