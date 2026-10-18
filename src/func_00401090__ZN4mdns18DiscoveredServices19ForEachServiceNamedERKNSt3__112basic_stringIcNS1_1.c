// Function: _ZN4mdns18DiscoveredServices19ForEachServiceNamedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_8functionIFvRK11ServiceInfoEEE
// Address: 00401090
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN4mdns18DiscoveredServices19ForEachServiceNamedERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_8functionIFvRK11ServiceInfoEEE
               (long *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  _ZNSt3__15mutex4lockEv();
  plVar11 = (long *)param_1[7];
  if (plVar11 != (long *)0x0) {
    do {
      bVar1 = *(byte *)(plVar11 + 8);
      if ((bVar1 & 1) == 0) {
        uVar6 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar6 = plVar11[9];
      }
      bVar2 = *param_2;
      if ((bVar2 & 1) == 0) {
        uVar8 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar8 = *(ulong *)(param_2 + 8);
      }
      if (uVar6 == uVar8) {
        if ((bVar1 & 1) == 0) {
          lVar9 = (long)plVar11 + 0x41;
        }
        else {
          lVar9 = plVar11[10];
        }
        pbVar7 = param_2 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar7 = *(byte **)(param_2 + 0x10);
        }
        iVar5 = func_0x0099bf90(lVar9);
        if (iVar5 == 0) {
          plVar10 = *(long **)(param_3 + 0x20);
          if (plVar10 == (long *)0x0) {
            func_0x00343f00();
            _ZNSt3__15mutex4lockEv();
            for (puVar3 = (undefined8 *)plVar10[7]; param_1 = plVar10, puVar3 != (undefined8 *)0x0;
                puVar3 = (undefined8 *)*puVar3) {
              plVar11 = *(long **)(pbVar7 + 0x20);
              if (plVar11 == (long *)0x0) {
                func_0x00343f00();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              (**(code **)(*plVar11 + 0x30))(plVar11,puVar3 + 5);
            }
            break;
          }
          (**(code **)(*plVar10 + 0x30))(plVar10,plVar11 + 5);
        }
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  pthread_mutex_unlock(param_1);
  return;
}


