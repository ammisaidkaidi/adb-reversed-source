// Function: _Z16format_listenersv
// Address: 003d1730
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _Z16format_listenersv(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  uVar4 = uRam0000000000a00618;
  _ZNSt3__15mutex4lockEv();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = lRam0000000000a00620;
  lVar3 = *(long *)(lRam0000000000a00620 + 8);
  do {
    if (lVar3 == lVar5) {
      _ZNSt3__115recursive_mutex6unlockEv(uVar4);
      return param_1;
    }
    lVar10 = *(long *)(lVar3 + 0x10);
    bVar1 = *(byte *)(lVar10 + 0x28);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0xd) goto code_r0x003d17dd;
code_r0x003d181a:
      lVar6 = *(long *)(lVar10 + 0x40);
      bVar2 = *(byte *)(lVar6 + 0x28);
      if ((bVar2 & 1) == 0) {
        uVar9 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar9 = *(ulong *)(lVar6 + 0x30);
      }
      puVar8 = &UNK_001755c2;
      if (uVar9 == 0) {
code_r0x003d1846:
        if ((*(byte *)(lVar10 + 0x10) & 1) != 0) goto code_r0x003d184d;
code_r0x003d186e:
        lVar6 = lVar10 + 0x11;
        if ((bVar1 & 1) != 0) goto code_r0x003d1790;
code_r0x003d187a:
        lVar10 = lVar10 + 0x29;
      }
      else {
        if ((bVar2 & 1) != 0) {
          puVar8 = *(undefined **)(lVar6 + 0x38);
          goto code_r0x003d1846;
        }
        puVar8 = (undefined *)(lVar6 + 0x29);
        if ((*(byte *)(lVar10 + 0x10) & 1) == 0) goto code_r0x003d186e;
code_r0x003d184d:
        lVar6 = *(long *)(lVar10 + 0x20);
        if ((bVar1 & 1) == 0) goto code_r0x003d187a;
code_r0x003d1790:
        lVar10 = *(long *)(lVar10 + 0x38);
      }
      _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz
                (param_1,&UNK_0017ba3d,puVar8,lVar6,lVar10);
    }
    else {
      if (*(long *)(lVar10 + 0x30) != 0xd) goto code_r0x003d181a;
code_r0x003d17dd:
      if ((bVar1 & 1) == 0) {
        plVar7 = (long *)(lVar10 + 0x29);
      }
      else {
        plVar7 = *(long **)(lVar10 + 0x38);
      }
      if (*(long *)((long)plVar7 + 5) != 0x2a74656b636f7374 || *plVar7 != 0x6f737472616d732a)
      goto code_r0x003d181a;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


