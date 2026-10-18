// Function: _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendB8nn220000IPKcTnNS_9enable_ifIXsr31__has_forward_iterator_categoryIT_EE5valueEiE4typeELi0EEERS5_SA_SA_
// Address: 0033cd20
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendB8nn220000IPKcTnNS_9enable_ifIXsr31__has_forward_iterator_categoryIT_EE5valueEiE4typeELi0EEERS5_SA_SA_
                  (ulong *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *param_1;
  uVar8 = param_1[1];
  lVar10 = (uVar2 & 0xfffffffffffffffe) - 1;
  bVar14 = ((byte)*param_1 & 1) != 0;
  uVar13 = (ulong)(byte)((byte)*param_1 >> 1);
  if (bVar14) {
    uVar13 = uVar8;
  }
  lVar4 = 0x16;
  if (bVar14) {
    lVar4 = lVar10;
  }
  uVar9 = param_3 - (long)param_2;
  if (uVar9 != 0) {
    pbVar1 = (byte *)((long)param_1 + 1);
    uVar7 = (ulong)((uint)(uVar2 >> 1) & 0x7f);
    bVar11 = (byte)uVar2;
    pbVar5 = (byte *)param_1[2];
    if ((uVar2 & 1) != 0) {
      uVar7 = uVar8;
      pbVar1 = pbVar5;
    }
    if ((param_2 < pbVar1) || (pbVar1 + uVar7 + 1 <= param_2)) {
      uVar2 = uVar13 + uVar9;
      if (lVar4 - uVar13 < uVar9) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,lVar4,uVar2 - lVar4,uVar13,uVar13,0,0);
        param_1[1] = uVar13;
        bVar11 = (byte)*param_1;
        pbVar5 = (byte *)param_1[2];
      }
      if ((bVar11 & 1) == 0) {
        pbVar5 = (byte *)((long)param_1 + 1);
      }
      func_0x0099bd90(pbVar5 + uVar13,param_2,uVar9);
      (pbVar5 + uVar13)[uVar9] = 0;
      if ((*param_1 & 1) == 0) {
        *(char *)param_1 = (char)uVar2 * '\x02';
      }
      else {
        param_1[1] = uVar2;
      }
    }
    else {
      uStack_58 = 0;
      uStack_50 = 0;
      lStack_48 = 0;
      if (0xfffffffffffffff6 < uVar9) goto code_r0x0033cfad;
      lVar4 = (long)&uStack_58 + 1;
      if (uVar9 < 0x17) {
        uStack_58 = (ulong)(byte)((char)uVar9 * '\x02');
      }
      else {
        lVar12 = 0x1a;
        if ((uVar9 | 7) != 0x17) {
          lVar12 = (uVar9 | 7) + 1;
        }
        lVar4 = _Znwm(lVar12);
        uStack_58 = lVar12 + 1;
        uStack_50 = uVar9;
        lStack_48 = lVar4;
      }
      func_0x0099bda0(lVar4,param_2,uVar9);
      *(undefined1 *)(lVar4 + uVar9) = 0;
      bVar11 = (byte)uStack_58 & 1;
      uVar13 = (ulong)((byte)uStack_58 >> 1);
      lVar4 = (long)&uStack_58 + 1;
      if ((uStack_58 & 1) != 0) {
        uVar13 = uStack_50;
        lVar4 = lStack_48;
      }
      if ((uVar2 & 1) == 0) {
        lVar10 = 0x16;
      }
      if ((uVar2 & 1) == 0) {
        uVar8 = (ulong)((uint)(uVar2 >> 1) & 0x7f);
      }
      if (lVar10 - uVar8 < uVar13) {
        _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (param_1,lVar10,(uVar13 - lVar10) + uVar8,uVar8,uVar8,0,uVar13,lVar4);
        bVar11 = (byte)uStack_58 & 1;
      }
      else if (uVar13 != 0) {
        if ((uVar2 & 1) == 0) {
          pbVar5 = (byte *)((long)param_1 + 1);
        }
        func_0x0099bd90(pbVar5 + uVar8,lVar4,uVar13);
        uVar8 = uVar8 + uVar13;
        if ((*param_1 & 1) == 0) {
          *(char *)param_1 = (char)uVar8 * '\x02';
        }
        else {
          param_1[1] = uVar8;
        }
        pbVar5[uVar8] = 0;
      }
      if (bVar11 != 0) {
        _ZdaPvSt11align_val_t(lStack_48,uStack_58 & 0xfffffffffffffffe);
      }
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return param_1;
  }
  func_0x0099bd00();
code_r0x0033cfad:
  func_0x0032e8f0();
  pcVar3 = (code *)swi(3);
  puVar6 = (ulong *)(*pcVar3)();
  return puVar6;
}


