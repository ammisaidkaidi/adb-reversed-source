// Function: _ZN7android8ResTable11addInternalEPKvmS2_mbibb
// Address: 00434610
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


/* WARNING: Possible PIC construction at 0x00434b05: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00434b0a) */

ulong _ZN7android8ResTable11addInternalEPKvmS2_mbibb
                (short **param_1,short *param_2,short **param_3,long param_4,short *param_5,
                undefined1 param_6,undefined4 param_7,char param_8,undefined1 param_9)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  short *psVar5;
  short **ppsVar6;
  undefined *puVar7;
  short **ppsVar8;
  short **ppsVar9;
  short **ppsVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  short *psStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  short **ppsStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  ppsVar8 = param_1;
  if (param_2 == (short *)0x0) {
code_r0x004348a8:
    uVar4 = 0;
  }
  else {
    if (param_3 < (short **)0xc) {
      ppsVar8 = (short **)0x6;
      __android_log_print(6,&UNK_0015b3df,&UNK_001898bf,(ulong)param_3 & 0xffffffff,0xc);
      uVar4 = 0x80000000;
      goto code_r0x004348aa;
    }
    ppsVar8 = (short **)_Znwm(0x178);
    *ppsVar8 = (short *)param_1;
    ppsVar8[1] = (short *)0x0;
    ppsVar8[2] = (short *)0x0;
    _ZN7android13ResStringPoolC1Ev(ppsVar8 + 7);
    ppsVar8[0x2d] = (short *)0x0;
    ppsVar8[0x2e] = (short *)0x0;
    ppsVar8[5] = param_1[0x15];
    *(undefined4 *)(ppsVar8 + 6) = param_7;
    ppsStack_40 = ppsVar8;
    if (param_4 != 0) {
      psVar5 = (short *)func_0x0099c1e0(param_5);
      ppsVar8[0x2d] = psVar5;
      if (psVar5 == (short *)0x0) {
        _ZN7android13ResStringPoolD1Ev(ppsVar8 + 7);
        _ZdaPvSt11align_val_t(ppsVar8,0x178);
        *(undefined4 *)(param_1 + 10) = 0xfffffff4;
        uVar4 = 0xfffffff4;
        goto code_r0x004348aa;
      }
      func_0x0099bda0(psVar5,param_4,param_5);
      ppsVar8[0x2e] = param_5;
    }
    _ZN7android10VectorImpl3addEPKv(param_1 + 0x13,&ppsStack_40);
    ppsVar10 = ppsStack_40;
    if (param_8 != '\0') {
      ppsVar8 = param_3;
      psVar5 = (short *)func_0x0099c1e0();
      ppsVar10[1] = psVar5;
      if (psVar5 == (short *)0x0) {
        *(undefined4 *)(param_1 + 10) = 0xfffffff4;
        uVar4 = 0xfffffff4;
        goto code_r0x004348aa;
      }
      func_0x0099bda0(psVar5,param_2,param_3);
      param_2 = psVar5;
    }
    ppsVar10[2] = param_2;
    uVar2 = *(uint *)(param_2 + 2);
    ppsVar9 = (short **)(ulong)uVar2;
    ppsVar10[3] = (short *)ppsVar9;
    ppsVar6 = (short **)(ulong)(ushort)param_2[1];
    if (param_3 < ppsVar9 || ppsVar9 < ppsVar6) {
      ppsVar8 = (short **)0x5;
      __android_log_print(5,&UNK_0015b3df,&UNK_001616cb,ppsVar6,ppsVar9,(ulong)param_3 & 0xffffffff)
      ;
    }
    else {
      if ((((ushort)param_2[1] | uVar2) & 3) == 0) {
        ppsVar10[4] = (short *)((long)param_2 + (long)ppsVar9);
        uVar4 = (ulong)(ushort)param_2[1];
        ppsVar8 = ppsVar9 + -1;
        if ((long)ppsVar8 < (long)uVar4) {
          uVar11 = 0;
        }
        else {
          ppsVar8 = (short **)(ulong)*(uint *)((long)param_2 + uVar4 + 4);
          if ((long)ppsVar9 - (long)ppsVar8 < (long)uVar4) {
            uVar11 = 0;
          }
          else {
            param_2 = (short *)((long)param_2 + uVar4);
            uVar11 = 0;
            do {
              uStack_50 = 0;
              uStack_48 = 0;
              ppsVar8 = &psStack_58;
              psStack_58 = param_2;
              uVar4 = func_0x0042d730(&psStack_58,8,&UNK_001741cc);
              if ((int)uVar4 != 0) {
code_r0x00434a4f:
                *(int *)(param_1 + 10) = (int)uVar4;
                goto code_r0x004348aa;
              }
              uVar2 = *(uint *)(param_2 + 2);
              sVar1 = *param_2;
              if (sVar1 == 0x200) {
                if (*(uint *)(ppsStack_40[2] + 4) <= uVar11) {
                  ppsVar8 = (short **)0x5;
                  __android_log_print(5,&UNK_0015b3df,&UNK_00167f94);
                  *(undefined4 *)(param_1 + 10) = 0x80000001;
                  goto code_r0x00434874;
                }
                ppsVar8 = param_1;
                iVar3 = _ZN7android8ResTable12parsePackageEPKNS_16ResTable_packageEPKNS0_6HeaderEbb
                                  (param_1,param_2,ppsStack_40,param_6,param_9);
                if (iVar3 != 0) {
                  uVar4 = (ulong)*(uint *)(param_1 + 10);
                  goto code_r0x004348aa;
                }
                uVar11 = uVar11 + 1;
              }
              else if (sVar1 == 1) {
                if (*(int *)(ppsStack_40 + 8) == 0) {
                  ppsVar8 = (short **)0x5;
                  __android_log_print(5,&UNK_0015b3df,&UNK_0018b109);
                }
                else {
                  ppsVar8 = ppsStack_40 + 7;
                  uVar4 = _ZN7android13ResStringPool5setToENS_5incfs7map_ptrIvLb0EEEmb
                                    (ppsVar8,(ulong)uVar2,0);
                  if ((int)uVar4 != 0) goto code_r0x00434a4f;
                }
              }
              else {
                ppsVar8 = (short **)0x5;
                __android_log_print(5,&UNK_0015b3df,&UNK_0017a448,sVar1,
                                    (long)param_2 - (long)ppsStack_40[2]);
              }
              param_2 = (short *)((long)param_2 + (ulong)uVar2);
              ppsVar10 = ppsStack_40;
            } while ((param_2 <= ppsStack_40[4] + -4) &&
                    (param_2 <= (short *)((long)ppsStack_40[4] - (ulong)*(uint *)(param_2 + 2))));
          }
          param_2 = ppsVar10[2];
        }
        if (*(uint *)(param_2 + 4) <= uVar11) {
          iVar3 = *(int *)(ppsVar10 + 8);
          *(int *)(param_1 + 10) = iVar3;
          if (iVar3 != 0) {
            ppsVar8 = (short **)0x5;
            __android_log_print(5,&UNK_0015b3df,&UNK_001741d5);
            uVar4 = (ulong)*(uint *)(param_1 + 10);
            goto code_r0x004348aa;
          }
          goto code_r0x004348a8;
        }
        puVar7 = &UNK_001898fd;
        ppsVar6 = (short **)(uVar11 & 0xffffffff);
      }
      else {
        puVar7 = &UNK_00169883;
      }
      ppsVar8 = (short **)0x5;
      __android_log_print(5,&UNK_0015b3df,puVar7,ppsVar6);
    }
    *(undefined4 *)(param_1 + 10) = 0x80000001;
code_r0x00434874:
    uVar4 = 0x80000001;
  }
code_r0x004348aa:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    _ZN7android8ResTable6uninitEv();
    ppsVar8[0x18] = (short *)0x99fa00;
    _ZN7android10VectorImpl13finish_vectorEv(ppsVar8 + 0x18);
    _ZN7android16SortedVectorImplD1Ev(ppsVar8 + 0x18);
    ppsVar8[0x13] = (short *)0x99fa00;
    _ZN7android10VectorImpl13finish_vectorEv(ppsVar8 + 0x13);
    _ZN7android16SortedVectorImplD1Ev(ppsVar8 + 0x13);
    uVar4 = pthread_mutex_destroy(ppsVar8 + 5);
    return uVar4;
  }
  return uVar4;
}


