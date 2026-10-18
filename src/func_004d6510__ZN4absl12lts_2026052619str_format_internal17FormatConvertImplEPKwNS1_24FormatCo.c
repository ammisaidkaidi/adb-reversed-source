// Function: _ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEPKwNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
// Address: 004d6510
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8
_ZN4absl12lts_2026052619str_format_internal17FormatConvertImplEPKwNS1_24FormatConversionSpecImplEPNS1_14FormatSinkImplE
          (byte *param_1,undefined *param_2,uint param_3,long *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong extraout_RDX;
  undefined *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)param_2 == '\x11') {
    if (param_1 == (byte *)0x0) {
      param_4[2] = param_4[2] + 5;
      puVar2 = (undefined4 *)param_4[3];
      if ((ulong)((long)param_4 + (0x420 - (long)puVar2)) < 6) {
        plVar1 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,plVar1,(long)puVar2 - (long)plVar1);
        param_4[3] = (long)plVar1;
        param_1 = (byte *)*param_4;
        puVar8 = &UNK_00181ead;
        (*(code *)param_4[1])(param_1,&UNK_00181ead,5);
        uVar5 = 1;
      }
      else {
        *(undefined1 *)(puVar2 + 1) = 0x29;
        *puVar2 = 0x6c696e28;
        param_4[3] = param_4[3] + 5;
        uVar5 = 1;
        puVar8 = param_2;
      }
    }
    else {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      lStack_78 = 0;
      lStack_70 = 0;
      lVar7 = (long)&uStack_40 + 5;
      do {
        lVar6 = lVar7;
        *(undefined2 *)(lVar6 + -3) =
             *(undefined2 *)
              (_ZN4absl12lts_2026052616numbers_internal9kHexTableE + ((ulong)param_1 & 0xff) * 2);
        bVar10 = (byte *)0xff < param_1;
        lVar7 = lVar6 + -2;
        param_1 = (byte *)((ulong)param_1 >> 8);
      } while (bVar10);
      lStack_78 = lVar6 + -3;
      if (*(char *)(lVar6 + -3) == '0') {
        lStack_78 = lVar6 + -2;
      }
      lStack_70 = (long)&uStack_40 + (4 - lStack_78);
      param_1 = (byte *)&lStack_78;
      func_0x004d5b70(param_1,param_2,param_3,param_4);
      uVar5 = 1;
      puVar8 = param_2;
    }
  }
  else {
    if (param_1 == (byte *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else if ((int)param_3 < 0) {
      puVar8 = (undefined *)func_0x0099c610();
    }
    else {
      pbVar3 = (byte *)func_0x0099c1c0(param_1,0);
      pbVar4 = param_1 + (ulong)param_3 * 4;
      if (pbVar3 != (byte *)0x0) {
        pbVar4 = pbVar3;
      }
      puVar8 = (undefined *)((long)pbVar4 - (long)param_1 >> 2);
    }
    uVar5 = func_0x004d67a0(param_1,puVar8,param_2,param_3,param_4);
  }
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 == lStack_38) {
    return uVar5;
  }
  func_0x0099bd00();
  bVar10 = (*param_1 & 1) != 0;
  pbVar4 = param_1 + 4;
  if (bVar10) {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  uVar9 = (ulong)(*param_1 >> 1);
  if (bVar10) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  uVar5 = func_0x004d67a0(pbVar4,uVar9,puVar8,extraout_RDX & 0xffffffff,lVar7,uVar9,
                          &stack0xfffffffffffffff8);
  return uVar5;
}


