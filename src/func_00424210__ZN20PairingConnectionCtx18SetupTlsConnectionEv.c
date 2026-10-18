// Function: _ZN20PairingConnectionCtx18SetupTlsConnectionEv
// Address: 00424210
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long ***** _ZN20PairingConnectionCtx18SetupTlsConnectionEv(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long ****pppplVar6;
  undefined8 uVar7;
  long *extraout_RDX;
  int iVar8;
  undefined *puVar9;
  long *****ppppplVar10;
  undefined4 uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined1 auStack_90 [8];
  long ****pppplStack_88;
  long ****pppplStack_80;
  undefined8 uStack_78;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)(in_FS_OFFSET + 0x28);
  _ZN3adb3tls13TlsConnection6CreateENS1_4RoleENSt3__117basic_string_viewIcNS3_11char_traitsIcEEEES7_N7android4base11borrowed_fdE
            (&pppplStack_88,*(int *)(param_1 + 0xc) != 1,*(long *)(param_1 + 0x2028),
             *(long *)(param_1 + 0x2030) - *(long *)(param_1 + 0x2028),*(long *)(param_1 + 0x2040),
             *(long *)(param_1 + 0x2048) - *(long *)(param_1 + 0x2040),
             *(undefined4 *)(param_1 + 0x4078));
  pppplVar6 = pppplStack_88;
  pppplStack_88 = (long ****)0x0;
  plVar1 = *(long **)(param_1 + 0x4068);
  *(long *****)(param_1 + 0x4068) = pppplVar6;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    pppplVar6 = pppplStack_88;
    pppplStack_88 = (long ****)0x0;
    if ((long *****)pppplVar6 != (long *****)0x0) {
      (*(code *)(*pppplVar6)[1])();
    }
    pppplVar6 = *(long *****)(param_1 + 0x4068);
  }
  if (pppplVar6 == (long ****)0x0) {
    uVar12 = 0;
    ppppplVar10 = (long *****)0x4;
    iVar8 = 0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar2 == '\0') goto code_r0x004244f5;
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar11 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppplStack_88,&UNK_00161570,0xb0,4,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(&pppplStack_88);
    puVar9 = &UNK_0017257e;
    uVar7 = 0x31;
  }
  else {
    apuStack_68[0] = &UNK_0099f760;
    ppuStack_48 = apuStack_68;
    (*(code *)(*pppplVar6)[3])();
    if (ppuStack_48 == apuStack_68) {
      lVar3 = 0x20;
code_r0x00424351:
      (**(code **)(*ppuStack_48 + lVar3))();
    }
    else {
      lVar3 = 0x28;
      if (ppuStack_48 != (undefined **)0x0) goto code_r0x00424351;
    }
    cVar2 = (**(code **)(**(long **)(param_1 + 0x4068) + 0x40))();
    if (cVar2 == '\0') {
      pppplStack_88 = (long ****)0x0;
      pppplStack_80 = (long ****)0x0;
      uStack_78 = 0;
      (**(code **)(**(long **)(param_1 + 0x4068) + 0x30))
                (&pppplStack_88,*(long **)(param_1 + 0x4068),0x40);
      uVar12 = CONCAT71((int7)((ulong)apuStack_68 >> 8),pppplStack_88 != pppplStack_80);
      if (pppplStack_88 == pppplStack_80) {
        iVar8 = 0;
        cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(4);
        if (cVar2 != '\0') {
          puVar4 = (undefined4 *)func_0x0099bce0();
          uVar11 = *puVar4;
          _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
                    (auStack_90,&UNK_00161570,0xc2,4,0,0xffffffff);
          uVar5 = _ZN7android4base10LogMessage6streamEv(auStack_90);
          iVar8 = 0x17d8bb;
          func_0x0032eb30(uVar5,&UNK_0017d8bb,0x1d);
          _ZN7android4base10LogMessageD2Ev(auStack_90);
          *puVar4 = uVar11;
        }
      }
      else {
        _ZNSt3__16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8nn220000INS_13move_iteratorINS_11__wrap_iterIPhEEEES9_EES8_NS6_IPKhEET_T0_l
                  (param_1 + 0x10,*(undefined8 *)(param_1 + 0x18),pppplStack_88,pppplStack_80,
                   (long)pppplStack_80 - (long)pppplStack_88);
        iVar8 = (int)*(undefined8 *)(param_1 + 0x18) - (int)*(undefined8 *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0xc) == 0) {
          uVar5 = pairing_auth_client_new();
        }
        else {
          uVar5 = pairing_auth_server_new();
        }
        lVar3 = *(long *)(param_1 + 0x4070);
        *(undefined8 *)(param_1 + 0x4070) = uVar5;
        if (lVar3 != 0) {
          pairing_auth_destroy();
        }
      }
      ppppplVar10 = (long *****)pppplStack_88;
      if ((long *****)pppplStack_88 != (long *****)0x0) {
        pppplStack_80 = pppplStack_88;
        iVar8 = (int)uStack_78 - (int)pppplStack_88;
        _ZdaPvSt11align_val_t();
      }
      goto code_r0x004244f5;
    }
    uVar12 = 0;
    ppppplVar10 = (long *****)0x4;
    iVar8 = 0;
    cVar2 = _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc();
    if (cVar2 == '\0') goto code_r0x004244f5;
    puVar4 = (undefined4 *)func_0x0099bce0();
    uVar11 = *puVar4;
    _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i
              (&pppplStack_88,&UNK_00161570,0xba,4,0,0xffffffff);
    uVar5 = _ZN7android4base10LogMessage6streamEv(&pppplStack_88);
    puVar9 = &UNK_0016ee6d;
    uVar7 = 0x25;
  }
  uVar12 = 0;
  ppppplVar10 = &pppplStack_88;
  uVar5 = func_0x0032eb30(uVar5,puVar9,uVar7);
  iVar8 = *(int *)(param_1 + 0x4078);
  _ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar5);
  _ZN7android4base10LogMessageD2Ev();
  *puVar4 = uVar11;
code_r0x004244f5:
  if (*(long *)(in_FS_OFFSET + 0x28) != lStack_38) {
    func_0x0099bd00();
    if (iVar8 == 0) {
      pppplVar6 = (long ****)pairing_auth_client_new(*extraout_RDX,extraout_RDX[1] - *extraout_RDX);
    }
    else {
      pppplVar6 = (long ****)pairing_auth_server_new();
    }
    *ppppplVar10 = pppplVar6;
    return ppppplVar10;
  }
  return (long *****)(uVar12 & 0xffffffff);
}


