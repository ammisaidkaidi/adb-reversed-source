// Function: _ZN20DeployPatchGenerator16APKMetaDataToLogERKN3com7android10fastdeploy11APKMetaDataE
// Address: 003c4490
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _ZN20DeployPatchGenerator16APKMetaDataToLogERKN3com7android10fastdeploy11APKMetaDataE
               (char *param_1,long param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 == '\x01') {
    pbVar2 = (byte *)(*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc);
    if ((*pbVar2 & 1) == 0) {
      pbVar2 = pbVar2 + 1;
    }
    else {
      pbVar2 = *(byte **)(pbVar2 + 0x10);
    }
    _ZN20DeployPatchGenerator3LogEPKcz(param_1,&UNK_0018ac66,pbVar2);
    if (0 < *(int *)(param_2 + 0x20)) {
      lVar3 = 8;
      lVar4 = 0;
      do {
        puVar1 = (undefined8 *)((*(ulong *)(param_2 + 0x18) - 1) + lVar3);
        if ((*(ulong *)(param_2 + 0x18) & 1) == 0) {
          puVar1 = (undefined8 *)(param_2 + 0x18);
        }
        _ZN20DeployPatchGenerator13APKEntryToLogERKN3com7android10fastdeploy8APKEntryE
                  (param_1,*puVar1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < *(int *)(param_2 + 0x20));
    }
  }
  return;
}


