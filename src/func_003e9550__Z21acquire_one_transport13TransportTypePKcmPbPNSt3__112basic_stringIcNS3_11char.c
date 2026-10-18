// Function: _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
// Address: 003e9550
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _Z21acquire_one_transport13TransportTypePKcmPbPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEb
                (int param_1,ulong *param_2,ulong *param_3,undefined1 *param_4,ulong *param_5,
                char param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong *puVar14;
  long lVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  bool bVar17;
  ulong uStack_68;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (ulong *)0x0) {
    if (param_2 != (ulong *)0x0) {
      puVar13 = &UNK_0018adc4;
      puVar11 = param_2;
      goto code_r0x003e95ae;
    }
    if (param_1 == 2) {
      func_0x0032ea60(param_5,&UNK_00173fdf);
    }
    else if (param_1 == 1) {
      if ((*param_5 & 1) == 0) {
        *(byte *)param_5 = 0x24;
        pbVar16 = (byte *)((long)param_5 + 1);
      }
      else {
        param_5[1] = 0x12;
        pbVar16 = (byte *)param_5[2];
      }
      pbVar16[0] = 0x6e;
      pbVar16[1] = 0x6f;
      pbVar16[2] = 0x20;
      pbVar16[3] = 0x65;
      pbVar16[4] = 0x6d;
      pbVar16[5] = 0x75;
      pbVar16[6] = 0x6c;
      pbVar16[7] = 0x61;
      pbVar16[8] = 0x74;
      pbVar16[9] = 0x6f;
      pbVar16[10] = 0x72;
      pbVar16[0xb] = 0x73;
      pbVar16[0xc] = 0x20;
      pbVar16[0xd] = 0x66;
      pbVar16[0xe] = 0x6f;
      pbVar16[0xf] = 0x75;
      pbVar16[0x10] = 0x6e;
      pbVar16[0x11] = 100;
      pbVar16[0x12] = 0;
    }
    else {
      if ((*param_5 & 1) == 0) {
        *(byte *)param_5 = 0x20;
        pbVar16 = (byte *)((long)param_5 + 1);
      }
      else {
        param_5[1] = 0x10;
        pbVar16 = (byte *)param_5[2];
      }
      pbVar16[0] = 0x6e;
      pbVar16[1] = 0x6f;
      pbVar16[2] = 0x20;
      pbVar16[3] = 100;
      pbVar16[4] = 0x65;
      pbVar16[5] = 0x76;
      pbVar16[6] = 0x69;
      pbVar16[7] = 99;
      pbVar16[8] = 0x65;
      pbVar16[9] = 0x73;
      pbVar16[10] = 0x20;
      pbVar16[0xb] = 0x66;
      pbVar16[0xc] = 0x6f;
      pbVar16[0xd] = 0x75;
      pbVar16[0xe] = 0x6e;
      pbVar16[0xf] = 100;
      pbVar16[0x10] = 0;
    }
  }
  else {
    puVar13 = &UNK_00169653;
    puVar11 = param_3;
code_r0x003e95ae:
    _ZN7android4base12StringPrintfEPKcz(auStack_50,puVar13,puVar11);
    if ((*param_5 & 1) != 0) {
      _ZdaPvSt11align_val_t(param_5[2],*param_5 & 0xfffffffffffffffe);
    }
    param_5[2] = (ulong)puStack_40;
    *(undefined1 (*) [4])param_5 = auStack_50;
    *(undefined4 *)((long)param_5 + 4) = uStack_4c;
    *(undefined4 *)(param_5 + 1) = (undefined4)uStack_48;
    *(undefined4 *)((long)param_5 + 0xc) = uStack_48._4_4_;
  }
  puVar11 = puRam0000000000a006c8;
  _ZNSt3__115recursive_mutex4lockEv(puRam0000000000a006c8);
  lVar6 = lRam0000000000a006d8;
  lVar12 = *(long *)(lRam0000000000a006d8 + 8);
  if (lVar12 == lRam0000000000a006d8) {
code_r0x003e9827:
    _ZNSt3__115recursive_mutex6unlockEv();
    puVar14 = puVar11;
    goto code_r0x003e99c2;
  }
  uStack_68 = 0;
  do {
    if (*(int *)(*(long *)(lVar12 + 0x10) + 0x110) == 3) {
      _Z28UsbNoPermissionsLongHelpTextv(auStack_50);
      if ((*param_5 & 1) != 0) {
        _ZdaPvSt11align_val_t(param_5[2],*param_5 & 0xfffffffffffffffe);
      }
      param_5[2] = (ulong)puStack_40;
      *(undefined1 (*) [4])param_5 = auStack_50;
      *(undefined4 *)((long)param_5 + 4) = uStack_4c;
      *(undefined4 *)(param_5 + 1) = (undefined4)uStack_48;
      *(undefined4 *)((long)param_5 + 0xc) = uStack_48._4_4_;
    }
    else if (param_3 == (ulong *)0x0) {
      if (param_2 == (ulong *)0x0) {
        if (param_1 == 2) {
          if (uStack_68 != 0) {
            puVar13 = &UNK_00173ffa;
code_r0x003e9b00:
            func_0x0032ea60(param_5,puVar13);
            goto joined_r0x003e9b13;
          }
code_r0x003e97db:
          uStack_68 = *(ulong *)(lVar12 + 0x10);
        }
        else if (param_1 == 1) {
          if ((*(int *)(*(ulong *)(lVar12 + 0x10) + 0x24) == 1) &&
             (bVar17 = uStack_68 != 0, uStack_68 = *(ulong *)(lVar12 + 0x10), bVar17)) {
            if ((*param_5 & 1) == 0) {
              *(byte *)param_5 = 0x2c;
              pbVar16 = (byte *)((long)param_5 + 1);
            }
            else {
              param_5[1] = 0x16;
              pbVar16 = (byte *)param_5[2];
            }
            pbVar16[0] = 0x6d;
            pbVar16[1] = 0x6f;
            pbVar16[2] = 0x72;
            pbVar16[3] = 0x65;
            pbVar16[4] = 0x20;
            pbVar16[5] = 0x74;
            pbVar16[6] = 0x68;
            pbVar16[7] = 0x61;
            pbVar16[8] = 0x6e;
            pbVar16[9] = 0x20;
            pbVar16[10] = 0x6f;
            pbVar16[0xb] = 0x6e;
            pbVar16[0xc] = 0x65;
            pbVar16[0xd] = 0x20;
            pbVar16[0xe] = 0x65;
            pbVar16[0xf] = 0x6d;
            pbVar16[0xe] = 0x65;
            pbVar16[0xf] = 0x6d;
            pbVar16[0x10] = 0x75;
            pbVar16[0x11] = 0x6c;
            pbVar16[0x12] = 0x61;
            pbVar16[0x13] = 0x74;
            pbVar16[0x14] = 0x6f;
            pbVar16[0x15] = 0x72;
            pbVar16[0x16] = 0;
            goto joined_r0x003e9b13;
          }
        }
        else if (((param_1 == 0) && (*(int *)(*(ulong *)(lVar12 + 0x10) + 0x24) == 0)) &&
                (bVar17 = uStack_68 != 0, uStack_68 = *(ulong *)(lVar12 + 0x10), bVar17)) {
          puVar13 = &UNK_0018668c;
          goto code_r0x003e9b00;
        }
      }
      else {
        uVar1 = *(undefined8 *)(lVar12 + 0x10);
        puVar14 = param_2;
        uVar8 = func_0x0099bcf0();
        if (0xfffffffffffffff6 < uVar8) {
          func_0x0032e8f0();
          goto code_r0x003e9b63;
        }
        if (uVar8 < 0x17) {
          _auStack_50 = CONCAT71(stack0xffffffffffffffb1,(char)uVar8 * '\x02');
          puVar10 = (undefined8 *)(auStack_50 + 1);
        }
        else {
          lVar15 = (uVar8 | 7) + 1;
          if ((uVar8 | 7) == 0x17) {
            lVar15 = 0x1a;
          }
          puVar10 = (undefined8 *)_Znwm(lVar15);
          _auStack_50 = lVar15 + 1;
          uStack_48 = uVar8;
          puStack_40 = puVar10;
        }
        func_0x0099bda0(puVar10,param_2,uVar8);
        *(undefined1 *)((long)puVar10 + uVar8) = 0;
        cVar7 = _ZNK10atransport13MatchesTargetERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar1,auStack_50);
        if ((_auStack_50 & 1) != 0) {
          _ZdaPvSt11align_val_t(puStack_40,_auStack_50 & 0xfffffffffffffffe);
        }
        if (cVar7 != '\0') {
          if (uStack_68 == 0) goto code_r0x003e97db;
          puStack_40 = (undefined8 *)_Znwm(0x28);
          _auStack_50 = 0x29;
          uStack_48 = 0x21;
          *puStack_40 = 0x6168742065726f6d;
          puStack_40[1] = 0x656420656e6f206e;
          *(undefined4 *)(puStack_40 + 2) = 0x65636976;
          *(undefined4 *)((long)puStack_40 + 0x14) = 0x74697720;
          *(undefined4 *)(puStack_40 + 3) = 0x65732068;
          *(undefined4 *)((long)puStack_40 + 0x1c) = 0x6c616972;
          *(undefined2 *)(puStack_40 + 4) = 0x20;
          puVar10 = (undefined8 *)
                    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                              (auStack_50,param_2);
          uVar2 = *(undefined4 *)puVar10;
          uVar3 = *(undefined4 *)((long)puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
          uVar8 = puVar10[2];
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          if ((*param_5 & 1) != 0) {
            _ZdaPvSt11align_val_t(param_5[2],*param_5 & 0xfffffffffffffffe);
          }
          *(undefined4 *)param_5 = uVar2;
          *(undefined4 *)((long)param_5 + 4) = uVar3;
          *(undefined4 *)(param_5 + 1) = uVar4;
          *(undefined4 *)((long)param_5 + 0xc) = uVar5;
          param_5[2] = uVar8;
          if ((_auStack_50 & 1) != 0) {
            _ZdaPvSt11align_val_t(puStack_40,_auStack_50 & 0xfffffffffffffffe);
          }
joined_r0x003e9b13:
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = 1;
          }
          goto code_r0x003e9827;
        }
      }
    }
    else {
      uVar8 = *(ulong *)(lVar12 + 0x10);
      if (*(ulong **)(uVar8 + 0x18) == param_3) break;
    }
    lVar12 = *(long *)(lVar12 + 8);
    uVar8 = uStack_68;
  } while (lVar12 != lVar6);
  _ZNSt3__115recursive_mutex6unlockEv();
  puVar14 = puVar11;
  if ((param_6 != '\0') || (uVar8 == 0)) {
    if (uVar8 != 0) goto code_r0x003e983a;
    goto code_r0x003e99c2;
  }
  switch(*(undefined4 *)(uVar8 + 0x110)) {
  case 0:
    puVar13 = &UNK_00165fe9;
    goto code_r0x003e98b8;
  case 1:
    puVar13 = &UNK_00178a6f;
code_r0x003e98b8:
    func_0x0032ea60(param_5,puVar13);
    puVar14 = param_5;
    break;
  case 2:
    if ((*param_5 & 1) == 0) {
      *(byte *)param_5 = 0x2a;
      pbVar16 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5[1] = 0x15;
      pbVar16 = (byte *)param_5[2];
    }
    pbVar16[0] = 100;
    pbVar16[1] = 0x65;
    pbVar16[2] = 0x76;
    pbVar16[3] = 0x69;
    pbVar16[4] = 99;
    pbVar16[5] = 0x65;
    pbVar16[6] = 0x20;
    pbVar16[7] = 0x75;
    pbVar16[8] = 0x6e;
    pbVar16[9] = 0x61;
    pbVar16[10] = 0x75;
    pbVar16[0xb] = 0x74;
    pbVar16[0xc] = 0x68;
    pbVar16[0xd] = 0x6f;
    pbVar16[0xe] = 0x72;
    pbVar16[0xf] = 0x69;
    pbVar16[0xd] = 0x6f;
    pbVar16[0xe] = 0x72;
    pbVar16[0xf] = 0x69;
    pbVar16[0x10] = 0x7a;
    pbVar16[0x11] = 0x65;
    pbVar16[0x12] = 100;
    pbVar16[0x13] = 0x2e;
    pbVar16[0x14] = 10;
    pbVar16[0x15] = 0;
    puVar9 = (undefined *)func_0x0099be70(&UNK_0015c891);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_5,&UNK_00172346);
    puVar13 = &UNK_0015b171;
    if (puVar9 != (undefined *)0x0) {
      puVar13 = puVar9;
    }
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_5,puVar13);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_5,&UNK_0017a0d6);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_5,&UNK_00174018);
    _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_5,&UNK_0016af39);
    puVar14 = param_5;
    break;
  default:
code_r0x003e983a:
    if ((*param_5 & 1) == 0) {
      *(byte *)param_5 = 0xe;
      pbVar16 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5[1] = 7;
      pbVar16 = (byte *)param_5[2];
    }
    pbVar16[3] = 99;
    pbVar16[4] = 0x65;
    pbVar16[5] = 0x73;
    pbVar16[6] = 0x73;
    pbVar16[0] = 0x73;
    pbVar16[1] = 0x75;
    pbVar16[2] = 99;
    pbVar16[3] = 99;
    pbVar16[7] = 0;
    goto code_r0x003e99c5;
  case 5:
    if ((*param_5 & 1) == 0) {
      *(byte *)param_5 = 0x1c;
      pbVar16 = (byte *)((long)param_5 + 1);
    }
    else {
      param_5[1] = 0xe;
      pbVar16 = (byte *)param_5[2];
    }
    pbVar16[6] = 0x20;
    pbVar16[7] = 0x6f;
    pbVar16[8] = 0x66;
    pbVar16[9] = 0x66;
    pbVar16[10] = 0x6c;
    pbVar16[0xb] = 0x69;
    pbVar16[0xc] = 0x6e;
    pbVar16[0xd] = 0x65;
    pbVar16[0] = 100;
    pbVar16[1] = 0x65;
    pbVar16[2] = 0x76;
    pbVar16[3] = 0x69;
    pbVar16[4] = 99;
    pbVar16[5] = 0x65;
    pbVar16[6] = 0x20;
    pbVar16[7] = 0x6f;
    pbVar16[0xe] = 0;
  }
code_r0x003e99c2:
  uVar8 = 0;
code_r0x003e99c5:
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar8;
  }
code_r0x003e9b63:
  func_0x0099bd00();
  return (ulong)(uint)puVar14[0x22];
}


