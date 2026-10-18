// Function: _ZN7android8ResTable13collectStringEPNS_8String16EPKDsmbPPKcb
// Address: 0043a180
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong _ZN7android8ResTable13collectStringEPNS_8String16EPKDsmbPPKcb
                (undefined8 param_1,ushort *param_2,long param_3,char param_4,undefined8 *param_5,
                char param_6)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  char cVar11;
  ushort uVar12;
  long in_FS_OFFSET;
  ushort *puStack_58;
  ushort uStack_4a;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = 0;
  _ZN7android8String16C2Ev(&uStack_40);
  if (param_3 == 0) {
    lVar4 = _ZNK7android8String164sizeEv(&uStack_40);
    puVar7 = (undefined1 *)0x0;
    if (lVar4 == 0) {
      param_3 = 0;
      goto code_r0x0043a679;
    }
  }
  else {
    puVar10 = param_2 + param_3;
    uVar12 = 0;
    puStack_58 = param_2;
    do {
      while( true ) {
        uVar1 = *param_2;
        uVar8 = (ulong)uVar1;
        cVar11 = (char)uVar12;
        if (uVar8 == 0x5c) break;
        if (param_4 == '\0') {
          if ((cVar11 == '\0') && (uVar1 < 0x80)) {
            plVar3 = (long *)func_0x0099be00();
            if ((*(byte *)(*plVar3 + 1 + uVar8 * 2) & 0x20) != 0) {
              if ((uVar1 != 0x20) ||
                 (((ulong)param_2[1] < 0x80 &&
                  ((*(byte *)(*plVar3 + 1 + (ulong)param_2[1] * 2) & 0x20) != 0)))) break;
              goto code_r0x0043a200;
            }
          }
          if (uVar8 != 0x27) {
            if ((uVar1 == 0x22) && ((cVar11 == '\0' || ((uVar12 & 0xff) == 0x22)))) break;
            goto code_r0x0043a200;
          }
          if ((cVar11 != '\'') && ((uVar12 & 0xff) != 0)) goto code_r0x0043a200;
          if (param_5 == (undefined8 *)0x0) {
code_r0x0043a6cc:
            uVar8 = 0;
          }
          else {
            *param_5 = &UNK_0017f0f7;
            uVar8 = 0;
          }
          goto code_r0x0043a6ce;
        }
code_r0x0043a200:
        param_2 = param_2 + 1;
        if (puVar10 <= param_2) break;
      }
      if (param_2 < puVar10) {
        if (puStack_58 <= param_2 && (long)param_2 - (long)puStack_58 != 0) {
          _ZN7android8String16C2EPKDsm(auStack_48,puStack_58,(long)param_2 - (long)puStack_58 >> 1);
          _ZN7android8String166appendERKS0_(&uStack_40,auStack_48);
          _ZN7android8String16D2Ev(auStack_48);
        }
        uVar1 = *param_2;
        puVar6 = param_2;
        if (param_4 == '\0') {
          if (((ulong)uVar1 == 0x27) || (uVar1 == 0x22)) {
            uVar12 = uVar1;
            if (cVar11 != '\0') {
              uVar12 = 0;
            }
            puVar6 = param_2 + 1;
          }
          else if (uVar1 < 0x80) {
            plVar3 = (long *)func_0x0099be00();
            if ((*(byte *)(*plVar3 + 1 + (ulong)uVar1 * 2) & 0x20) == 0) goto code_r0x0043a2c2;
            _ZN7android8String16C2EPKc(auStack_48,&UNK_0015ae05);
            _ZN7android8String166appendERKS0_(&uStack_40,auStack_48);
            _ZN7android8String16D2Ev(auStack_48);
            do {
              param_2 = param_2 + 1;
              puVar6 = param_2;
              if ((puVar10 <= param_2) || (0x7f < (ulong)*param_2)) break;
            } while ((*(byte *)(*plVar3 + 1 + (ulong)*param_2 * 2) & 0x20) != 0);
          }
        }
        else {
code_r0x0043a2c2:
          if ((uVar1 != 0x5c) || (puVar6 = param_2 + 1, puVar10 <= puVar6)) goto code_r0x0043a3d8;
          switch(*puVar6) {
          case 0x22:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_0017bd89);
            break;
          case 0x23:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_00164869);
            break;
          default:
            goto code_r0x0043a5c9;
          case 0x27:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_00162c6d);
            break;
          case 0x3f:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_0015cb65);
            break;
          case 0x40:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_0017081b);
            break;
          case 0x5c:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_001631a5);
            break;
          case 0x6e:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_0017a0d6);
            break;
          case 0x74:
            _ZN7android8String16C2EPKc(auStack_48,&UNK_00170961);
            break;
          case 0x75:
            uVar1 = param_2[2];
            if (uVar1 == 0) {
              uStack_4a = 0;
            }
            else {
              uVar2 = uVar1 - 0x30;
              if (9 < uVar2) {
                if ((ushort)(uVar1 - 0x61) < 6) {
                  uVar2 = uVar1 - 0x57;
                  goto code_r0x0043a4ce;
                }
                if ((ushort)(uVar1 - 0x41) < 6) {
                  uVar2 = uVar1 - 0x37;
                  goto code_r0x0043a4ce;
                }
code_r0x0043a6b9:
                if (param_5 != (undefined8 *)0x0) {
                  *param_5 = &UNK_00184d06;
                }
                goto code_r0x0043a6cc;
              }
code_r0x0043a4ce:
              uVar1 = param_2[3];
              if (uVar1 == 0) {
                puVar6 = param_2 + 2;
                uStack_4a = uVar2;
              }
              else {
                uVar5 = uVar1 - 0x30;
                if (9 < uVar5) {
                  if ((ushort)(uVar1 - 0x61) < 6) {
                    uVar5 = uVar1 - 0x57;
                  }
                  else {
                    if (5 < (ushort)(uVar1 - 0x41)) goto code_r0x0043a6b9;
                    uVar5 = uVar1 - 0x37;
                  }
                }
                uVar5 = uVar5 | uVar2 << 4;
                uVar1 = param_2[4];
                if (uVar1 == 0) {
                  puVar6 = param_2 + 3;
                  uStack_4a = uVar5;
                }
                else {
                  uVar2 = uVar1 - 0x30;
                  if (9 < uVar2) {
                    if ((ushort)(uVar1 - 0x61) < 6) {
                      uVar2 = uVar1 - 0x57;
                    }
                    else {
                      if (5 < (ushort)(uVar1 - 0x41)) goto code_r0x0043a6b9;
                      uVar2 = uVar1 - 0x37;
                    }
                  }
                  uVar2 = uVar2 | uVar5 << 4;
                  uVar1 = param_2[5];
                  if (uVar1 == 0) {
                    puVar6 = param_2 + 4;
                    uStack_4a = uVar2;
                  }
                  else {
                    uVar5 = uVar1 - 0x30;
                    if (9 < uVar5) {
                      if ((ushort)(uVar1 - 0x61) < 6) {
                        uVar5 = uVar1 - 0x57;
                      }
                      else {
                        if (5 < (ushort)(uVar1 - 0x41)) goto code_r0x0043a6b9;
                        uVar5 = uVar1 - 0x37;
                      }
                    }
                    puVar6 = param_2 + 5;
                    uStack_4a = uVar5 | uVar2 << 4;
                  }
                }
              }
            }
            _ZN7android8String16C2EPKDsm(auStack_48,&uStack_4a,1);
          }
          _ZN7android8String166appendERKS0_(&uStack_40,auStack_48);
          _ZN7android8String16D2Ev(auStack_48);
code_r0x0043a5c9:
          puVar6 = puVar6 + 1;
        }
code_r0x0043a3d8:
        param_3 = param_3 - ((long)puVar6 - (long)puStack_58 >> 1);
        puStack_58 = puVar6;
        param_2 = puVar6;
      }
      puVar10 = puStack_58 + param_3;
    } while (param_2 < puVar10);
    lVar4 = _ZNK7android8String164sizeEv(&uStack_40);
    param_2 = puStack_58;
    if (lVar4 == 0) {
code_r0x0043a679:
      puVar7 = auStack_48;
      if (param_6 == '\0') {
        _ZN7android8String16C2EPKDsm(puVar7,param_2,param_3);
        _ZN7android8String16aSEOS0_(param_1,puVar7);
      }
      else {
        _ZN7android8String16C2EPKDsm(puVar7,param_2,param_3);
        _ZN7android8String166appendERKS0_(param_1,puVar7);
      }
      _ZN7android8String16D2Ev(puVar7);
      goto code_r0x0043a6b5;
    }
    puVar7 = (undefined1 *)0x0;
    if (param_3 != 0) {
      puVar7 = auStack_48;
      _ZN7android8String16C2EPKDsm(puVar7,puStack_58,param_3);
      _ZN7android8String166appendERKS0_(&uStack_40,puVar7);
      _ZN7android8String16D2Ev(puVar7);
    }
  }
  if (param_6 == '\0') {
    _ZN7android8String165setToERKS0_(param_1,&uStack_40);
  }
  else {
    _ZN7android8String166appendERKS0_();
  }
code_r0x0043a6b5:
  uVar8 = CONCAT71((int7)((ulong)puVar7 >> 8),1);
code_r0x0043a6ce:
  puVar9 = &uStack_40;
  _ZN7android8String16D2Ev();
  if (*(long *)(in_FS_OFFSET + 0x28) == lStack_38) {
    return uVar8 & 0xffffffff;
  }
  func_0x0099bd00();
  if (*(int *)(puVar9 + 10) == 0) {
    return puVar9[0x1a];
  }
  return 0;
}


