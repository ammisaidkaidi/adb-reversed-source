// Function: _Z35find_emulator_transport_by_adb_porti
// Address: 0040c060
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _Z35find_emulator_transport_by_adb_porti(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar2 = uRam0000000000a00850;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00850);
  uVar7 = 0;
  if ((uRam0000000000a00860 != 0) && (lRam0000000000a00870 != 0)) {
    uVar3 = (ulong)(int)param_1;
    uVar1 = uRam0000000000a00860 - 1;
    if ((uRam0000000000a00860 & uVar1) == 0) {
      uVar4 = uVar1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (uRam0000000000a00860 <= uVar3) {
        if ((uVar3 | uRam0000000000a00860) >> 0x20 == 0) {
          uVar4 = (ulong)param_1 % (uRam0000000000a00860 & 0xffffffff);
        }
        else {
          uVar4 = uVar3 % uRam0000000000a00860;
        }
      }
    }
    puVar6 = *(undefined8 **)(lRam0000000000a00858 + uVar4 * 8);
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      for (puVar6 = (undefined8 *)*puVar6; uVar7 = 0, puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        uVar5 = puVar6[1];
        if (uVar5 == uVar3) {
          if (*(uint *)(puVar6 + 2) == param_1) {
            uVar7 = puVar6[3];
            break;
          }
        }
        else {
          if ((uRam0000000000a00860 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (uRam0000000000a00860 <= uVar5) {
            if ((uVar5 | uRam0000000000a00860) >> 0x20 == 0) {
              uVar5 = (uVar5 & 0xffffffff) % (uRam0000000000a00860 & 0xffffffff);
            }
            else {
              uVar5 = uVar5 % uRam0000000000a00860;
            }
          }
          uVar7 = 0;
          if (uVar5 != uVar4) break;
        }
      }
    }
  }
  _ZNSt3__115recursive_mutex6unlockEv(uVar2);
  return uVar7;
}


