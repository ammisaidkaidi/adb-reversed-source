// Function: _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
// Address: 0042ceb0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
          (undefined8 ****param_1,undefined8 ****param_2,char param_3)

{
  undefined8 ***pppuVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  ulong uVar10;
  undefined8 ****ppppuVar11;
  uint uVar12;
  undefined *puVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined8 ****in_stack_00000008;
  undefined8 ***in_stack_00000010;
  undefined8 ***in_stack_00000018;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined8 ***pppuStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppppuVar14 = param_1;
  if (param_2 != (undefined8 ****)0x0 && in_stack_00000008 != (undefined8 ****)0x0) {
    _ZN7android13ResStringPool6uninitEv(param_1);
    if ((undefined8 ****)0x1b < param_2) {
      pppuStack_50 = in_stack_00000008;
      ppuStack_48 = in_stack_00000010;
      ppuStack_40 = in_stack_00000018;
      uStack_68 = (undefined4)((long)in_stack_00000008 + (long)param_2);
      uStack_60 = SUB84(in_stack_00000010,0);
      ppppuVar14 = &pppuStack_50;
      pppuVar9 = in_stack_00000018;
      iVar5 = func_0x0042d730(ppppuVar14,0x1c,&UNK_00161641);
      if (iVar5 == 0) {
        if (param_3 != '\0') {
          ppppuVar14 = param_2;
          ppppuVar7 = (undefined8 ****)func_0x0099c1e0();
          param_1[2] = ppppuVar7;
          if (ppppuVar7 == (undefined8 ****)0x0) {
            uVar6 = 0xfffffff4;
            goto code_r0x0042d065;
          }
          ppppuVar14 = ppppuVar7;
          func_0x0099bda0(ppppuVar7,in_stack_00000008,param_2);
          in_stack_00000018 = (undefined8 ***)0x0;
          in_stack_00000010 = (undefined8 ***)0x0;
          in_stack_00000008 = ppppuVar7;
        }
        param_1[3] = in_stack_00000008;
        param_1[4] = in_stack_00000010;
        param_1[5] = in_stack_00000018;
        uVar3 = *(uint *)((long)in_stack_00000008 + 4);
        ppppuVar7 = (undefined8 ****)(ulong)uVar3;
        if ((uVar3 < *(ushort *)((long)in_stack_00000008 + 2)) || (param_2 < ppppuVar7)) {
          ppppuVar14 = (undefined8 ****)0x5;
          __android_log_print(5,&UNK_0015b3df,&UNK_00188104,*(ushort *)((long)in_stack_00000008 + 2)
                              ,ppppuVar7,(ulong)param_2 & 0xffffffff,uStack_68,uStack_60,pppuVar9);
        }
        else {
          param_1[6] = ppppuVar7;
          uVar4 = *(uint *)((long)in_stack_00000008 + 0x14);
          if (uVar3 < uVar4) {
            puVar13 = &UNK_0017417a;
code_r0x0042d054:
            uVar10 = (ulong)uVar4;
          }
          else {
            uVar4 = *(uint *)(in_stack_00000008 + 3);
            if (uVar3 < uVar4) {
              puVar13 = &UNK_00161656;
              goto code_r0x0042d054;
            }
            uVar2 = *(ushort *)((long)in_stack_00000008 + 2);
            pppuVar1 = (undefined8 ***)((long)in_stack_00000008 + (ulong)uVar2);
            param_1[0xc] = pppuVar1;
            param_1[0xd] = in_stack_00000010;
            param_1[0xe] = in_stack_00000018;
            uVar3 = *(uint *)(in_stack_00000008 + 1);
            if ((ulong)uVar3 == 0) {
              *(undefined4 *)(param_1 + 0x16) = 0;
              param_1[0x12] = (undefined8 ***)0x0;
              param_1[0x13] = (undefined8 ***)0x0;
              param_1[0x14] = (undefined8 ***)0x0;
              goto code_r0x0042d0f4;
            }
            ppppuVar14 = (undefined8 ****)
                         ((ulong)*(ushort *)((long)in_stack_00000008 + 2) + (ulong)uVar3 * 4);
            if (param_2 < ppppuVar14) {
              uVar10 = (ulong)((uint)*(ushort *)((long)in_stack_00000008 + 2) + uVar3 * 4);
              puVar13 = &UNK_0015b3ec;
              ppppuVar7 = (undefined8 ****)((ulong)param_2 & 0xffffffff);
            }
            else {
              bVar16 = (*(byte *)((long)in_stack_00000008 + 0x11) & 1) == 0;
              ppppuVar14 = (undefined8 ****)CONCAT71((int7)((ulong)ppppuVar14 >> 8),bVar16);
              uVar3 = *(uint *)((long)in_stack_00000008 + 0x14);
              if ((ulong)uVar3 < (long)ppppuVar7 - 2U) {
                pppuVar8 = (undefined8 ***)((ulong)uVar3 + (long)in_stack_00000008);
                param_1[0x12] = pppuVar8;
                param_1[0x13] = in_stack_00000010;
                param_1[0x14] = in_stack_00000018;
                if (*(int *)((long)in_stack_00000008 + 0xc) == 0) {
                  uVar10 = (ulong)*(uint *)((long)in_stack_00000008 + 0x14);
                  uVar15 = (long)ppppuVar7 - uVar10;
code_r0x0042d2e4:
                  uVar15 = uVar15 >> bVar16;
                  iVar5 = (int)uVar15;
                  *(int *)(param_1 + 0x16) = iVar5;
                  if (iVar5 == 0) {
                    ppppuVar14 = (undefined8 ****)0x5;
                    __android_log_print(5,&UNK_0015b3df,&UNK_001708cc,
                                        *(undefined4 *)(in_stack_00000008 + 1),uVar15,uVar10,
                                        uStack_68,uStack_60,pppuVar9);
                    goto code_r0x0042d060;
                  }
                  if ((*(byte *)((long)in_stack_00000008 + 0x11) & 1) == 0) {
                    if (*(short *)((long)pppuVar8 + (ulong)(iVar5 - 1) * 2) != 0)
                    goto code_r0x0042d396;
code_r0x0042d0f4:
                    if (*(int *)((long)in_stack_00000008 + 0xc) == 0) {
                      param_1[0xf] = (undefined8 ***)0x0;
                      param_1[0x10] = (undefined8 ***)0x0;
                      param_1[0x11] = (undefined8 ***)0x0;
                      param_1[0x17] = (undefined8 ***)0x0;
                      param_1[0x18] = (undefined8 ***)0x0;
                      *(undefined8 *)((long)param_1 + 0xc4) = 0;
                      *(undefined8 *)((long)param_1 + 0xcc) = 0;
code_r0x0042d21f:
                      uVar6 = 0;
                      if (*(char *)(param_1 + 0x25) == '\x01') {
                        if ((*(byte *)((long)in_stack_00000008 + 0x11) & 1) == 0) {
                          ppppuVar14 = param_1 + 0x20;
                          func_0x0043fbb0(ppppuVar14,*(undefined4 *)(in_stack_00000008 + 1));
                        }
                        else {
                          ppppuVar14 = param_1 + 0x1b;
                          func_0x0043fbb0(ppppuVar14,*(undefined4 *)(in_stack_00000008 + 1));
                        }
                        uVar6 = 0;
                      }
                      goto code_r0x0042d065;
                    }
                    ppppuVar14 = (undefined8 ****)(ulong)*(uint *)(in_stack_00000008 + 1);
                    param_1[0xf] = (undefined8 ***)((long)pppuVar1 + (long)ppppuVar14 * 4);
                    param_1[0x10] = in_stack_00000010;
                    param_1[0x11] = in_stack_00000018;
                    uVar10 = (ulong)*(uint *)((long)in_stack_00000008 + 0xc);
                    ppppuVar7 = (undefined8 ****)(uVar10 * 4);
                    if ((param_2 < ppppuVar7) ||
                       (uVar15 = (ulong)uVar2 + (long)ppppuVar14 * 4,
                       (long)param_2 + uVar10 * -4 < uVar15)) {
                      ppppuVar14 = (undefined8 ****)0x5;
                      __android_log_print(5,&UNK_0015b3df,&UNK_0015fe4e,uVar10,param_2);
                      goto code_r0x0042d060;
                    }
                    ppppuVar11 = (undefined8 ****)
                                 (*(uint *)((long)in_stack_00000008 + 0x14) - uVar15);
                    if ((ppppuVar7 < ppppuVar11 || (long)ppppuVar7 - (long)ppppuVar11 == 0) &&
                        uVar15 <= *(uint *)((long)in_stack_00000008 + 0x14)) {
                      pppuVar9 = (undefined8 ***)
                                 ((ulong)*(uint *)(in_stack_00000008 + 3) + (long)in_stack_00000008)
                      ;
                      param_1[0x17] = pppuVar9;
                      param_1[0x18] = in_stack_00000010;
                      param_1[0x19] = in_stack_00000018;
                      uVar3 = *(uint *)((long)in_stack_00000008 + 4);
                      ppppuVar7 = (undefined8 ****)(ulong)uVar3;
                      uVar4 = *(uint *)(in_stack_00000008 + 3);
                      uVar10 = (ulong)uVar4;
                      uVar12 = uVar3 - uVar4;
                      if (uVar3 < uVar4 || uVar12 == 0) {
                        puVar13 = &UNK_0017bce8;
                        goto code_r0x0042d059;
                      }
                      *(uint *)(param_1 + 0x1a) = uVar12 >> 2;
                      if (*(int *)((long)pppuVar9 + ((ulong)(uVar12 & 0xfffffffc) - 4)) == -1 &&
                          *(long *)((long)pppuVar9 + ((ulong)(uVar12 & 0xfffffffc) - 0xc)) == -1)
                      goto code_r0x0042d21f;
                      puVar13 = &UNK_00159851;
                    }
                    else {
                      puVar13 = &UNK_00157b24;
                    }
                  }
                  else {
                    if (*(char *)((long)pppuVar8 + (ulong)(iVar5 - 1)) == '\0')
                    goto code_r0x0042d0f4;
code_r0x0042d396:
                    puVar13 = &UNK_00167f40;
                  }
                  ppppuVar14 = (undefined8 ****)0x5;
                  __android_log_print(5,&UNK_0015b3df,puVar13);
                  goto code_r0x0042d060;
                }
                uVar3 = *(uint *)(in_stack_00000008 + 3);
                uVar10 = (ulong)uVar3;
                if (uVar10 < (long)ppppuVar7 - 2U) {
                  uVar4 = *(uint *)((long)in_stack_00000008 + 0x14);
                  uVar15 = (ulong)(uVar3 - uVar4);
                  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) goto code_r0x0042d2e4;
                  puVar13 = &UNK_001772f4;
                  ppppuVar7 = (undefined8 ****)(ulong)uVar4;
                }
                else {
                  ppppuVar7 = (undefined8 ****)(ulong)*(uint *)((long)in_stack_00000008 + 4);
                  puVar13 = &UNK_0015ca97;
                }
              }
              else {
                ppppuVar7 = (undefined8 ****)(ulong)*(uint *)((long)in_stack_00000008 + 4);
                puVar13 = &UNK_0015fe0d;
                uVar10 = (ulong)uVar3;
              }
            }
          }
code_r0x0042d059:
          ppppuVar14 = (undefined8 ****)0x5;
          __android_log_print(5,&UNK_0015b3df,puVar13,uVar10,ppppuVar7);
        }
code_r0x0042d060:
        uVar6 = 0x80000001;
      }
      else {
        ppppuVar14 = (undefined8 ****)0x5;
        __android_log_print(5,&UNK_0015b3df,&UNK_0015e31b);
        uVar6 = 0x80000001;
      }
code_r0x0042d065:
      *(int *)(param_1 + 1) = (int)uVar6;
      goto code_r0x0042d068;
    }
    ppppuVar14 = (undefined8 ****)0x5;
    __android_log_print(5,&UNK_0015b3df,&UNK_0016eefe,param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0x80000001;
  uVar6 = 0x80000001;
code_r0x0042d068:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    *ppppuVar14 = (undefined8 ***)0x99f820;
    _ZN7android13ResStringPool6uninitEv();
    func_0x0043d990(ppppuVar14 + 0x1b);
    uVar6 = pthread_mutex_destroy(ppppuVar14 + 7);
    return uVar6;
  }
  return uVar6;
}


