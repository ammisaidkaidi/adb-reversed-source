// Function: _ZNKSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE4findIS1_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS1_PvEEEERKT_
// Address: 00402ab0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 *
_ZNKSt3__112__hash_tableI11IPv6Address15IPv6AddressHashNS_8equal_toIS1_EENS_9allocatorIS1_EEE4findIS1_EENS_21__hash_const_iteratorIPNS_11__hash_nodeIS1_PvEEEERKT_
          (long *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = _ZNSt3__113__hash_memoryEPKvm(param_2,0x10);
    uVar1 = uVar2 - 1;
    if ((uVar2 & uVar1) == 0) {
      uVar6 = uVar3 & uVar1;
    }
    else {
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        if ((uVar3 | uVar2) >> 0x20 == 0) {
          uVar6 = (uVar3 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar6 = uVar3 % uVar2;
        }
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + uVar6 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (puVar5 = (undefined8 *)*puVar5; puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        uVar4 = puVar5[1];
        if (uVar3 == uVar4) {
          auVar7[0] = -(*param_2 == *(char *)(puVar5 + 2));
          auVar7[1] = -(param_2[1] == *(char *)((long)puVar5 + 0x11));
          auVar7[2] = -(param_2[2] == *(char *)((long)puVar5 + 0x12));
          auVar7[3] = -(param_2[3] == *(char *)((long)puVar5 + 0x13));
          auVar7[4] = -(param_2[4] == *(char *)((long)puVar5 + 0x14));
          auVar7[5] = -(param_2[5] == *(char *)((long)puVar5 + 0x15));
          auVar7[6] = -(param_2[6] == *(char *)((long)puVar5 + 0x16));
          auVar7[7] = -(param_2[7] == *(char *)((long)puVar5 + 0x17));
          auVar7[8] = -(param_2[8] == *(char *)(puVar5 + 3));
          auVar7[9] = -(param_2[9] == *(char *)((long)puVar5 + 0x19));
          auVar7[10] = -(param_2[10] == *(char *)((long)puVar5 + 0x1a));
          auVar7[0xb] = -(param_2[0xb] == *(char *)((long)puVar5 + 0x1b));
          auVar7[0xc] = -(param_2[0xc] == *(char *)((long)puVar5 + 0x1c));
          auVar7[0xd] = -(param_2[0xd] == *(char *)((long)puVar5 + 0x1d));
          auVar7[0xe] = -(param_2[0xe] == *(char *)((long)puVar5 + 0x1e));
          auVar7[0xf] = -(param_2[0xf] == *(char *)((long)puVar5 + 0x1f));
          if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
            return puVar5;
          }
        }
        else {
          if ((uVar2 & uVar1) == 0) {
            uVar4 = uVar4 & uVar1;
          }
          else if (uVar2 <= uVar4) {
            if ((uVar4 | uVar2) >> 0x20 == 0) {
              if ((uVar4 & 0xffffffff) % (uVar2 & 0xffffffff) != uVar6) {
                return (undefined8 *)0x0;
              }
              goto code_r0x00402b58;
            }
            uVar4 = uVar4 % uVar2;
          }
          if (uVar4 != uVar6) {
            return (undefined8 *)0x0;
          }
        }
code_r0x00402b58:
      }
    }
  }
  return (undefined8 *)0x0;
}


