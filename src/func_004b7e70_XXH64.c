// Function: XXH64
// Address: 004b7e70
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong XXH64(uint *param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  
  if (param_2 < 0x20) {
    lVar10 = param_3 + 0x27d4eb2f165667c5;
  }
  else {
    puVar9 = (uint *)((long)param_1 + (param_2 - 0x20));
    lVar10 = param_3 + 0x60ea27eeadc0b5d6;
    uVar4 = param_3 + 0xc2b2ae3d27d4eb4f;
    uVar8 = param_3 + 0x61c8864e7a143579;
    do {
      uVar6 = *(long *)param_1 * -0x3d4d51c2d82b14b1 + lVar10;
      uVar7 = uVar6 * 0x80000000 | uVar6 >> 0x21;
      lVar10 = uVar7 * -0x61c8864e7a143579;
      uVar4 = *(long *)(param_1 + 2) * -0x3d4d51c2d82b14b1 + uVar4;
      uVar5 = uVar4 * 0x80000000 | uVar4 >> 0x21;
      param_3 = *(long *)(param_1 + 4) * -0x3d4d51c2d82b14b1 + param_3;
      uVar3 = param_3 * 0x80000000 | param_3 >> 0x21;
      uVar4 = uVar5 * -0x61c8864e7a143579;
      param_3 = uVar3 * -0x61c8864e7a143579;
      uVar8 = *(long *)(param_1 + 6) * -0x3d4d51c2d82b14b1 + uVar8;
      uVar6 = uVar8 * 0x80000000 | uVar8 >> 0x21;
      uVar8 = uVar6 * -0x61c8864e7a143579;
      param_1 = param_1 + 8;
    } while (param_1 <= puVar9);
    lVar10 = ((uVar6 * -0x784349ab80000000 | uVar6 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579 ^
             ((uVar3 * -0x784349ab80000000 | uVar3 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579 ^
             ((uVar5 * -0x784349ab80000000 | uVar5 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579 ^
             ((uVar7 * -0x784349ab80000000 | uVar7 * -0x210ca4fef0869357 >> 0x21) *
              -0x61c8864e7a143579 ^
             (uVar6 * -0x1939e850d5e40000 | uVar8 >> 0x2e) +
             (uVar3 * 0x779b185ebca87000 | param_3 >> 0x34) +
             (uVar5 * 0x1bbcd8c2f5e54380 | uVar4 >> 0x39) +
             (uVar7 * 0x3c6ef3630bd7950e | (ulong)(lVar10 < 0))) * -0x61c8864e7a143579 +
             0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 +
             0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  uVar4 = lVar10 + param_2;
  switch((uint)param_2 & 0x1f) {
  case 0x18:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x10:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 8:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    break;
  case 0x19:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x11:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 9:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    uVar8 = (ulong)(byte)param_1[2];
    goto code_r0x004b897c;
  case 0x1a:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x12:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 10:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (ulong)(byte)param_1[2] * 0x27d4eb2f165667c5 ^
            (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    uVar4 = uVar4 << 0xb | uVar4 >> 0x35;
    bVar1 = *(byte *)((long)param_1 + 9);
code_r0x004b8a05:
    uVar4 = (ulong)bVar1 * 0x27d4eb2f165667c5 ^ uVar4 * -0x61c8864e7a143579;
    goto code_r0x004b8a0c;
  case 0x1b:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x13:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xb:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (ulong)(byte)param_1[2] * 0x27d4eb2f165667c5 ^
            (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    uVar4 = (ulong)*(byte *)((long)param_1 + 9) * 0x27d4eb2f165667c5 ^
            (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
    uVar4 = (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
    uVar8 = (ulong)*(byte *)((long)param_1 + 10);
code_r0x004b897c:
    uVar4 = uVar8 * 0x27d4eb2f165667c5 ^ uVar4;
code_r0x004b8a0c:
    uVar4 = (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
    break;
  case 0x1c:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x14:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xc:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 4:
    uVar4 = (ulong)*param_1 * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (uVar4 << 0x17 | uVar4 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    break;
  case 0x1d:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x15:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xd:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 5:
    uVar4 = (ulong)*param_1 * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (uVar4 << 0x17 | uVar4 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    uVar8 = (ulong)(byte)param_1[1];
    goto code_r0x004b897c;
  case 0x1e:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x16:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xe:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 6:
    uVar4 = (ulong)*param_1 * -0x61c8864e7a143579 ^ uVar4;
    uVar4 = (ulong)(byte)param_1[1] * 0x27d4eb2f165667c5 ^
            (uVar4 << 0x17 | uVar4 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    uVar4 = uVar4 << 0xb | uVar4 >> 0x35;
    bVar1 = *(byte *)((long)param_1 + 5);
    goto code_r0x004b8a05;
  case 0x1f:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x17:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xf:
    uVar4 = (*(long *)param_1 * -0x6c158a5880000000 |
            (ulong)(*(long *)param_1 * -0x3d4d51c2d82b14b1) >> 0x21) * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 2;
    uVar4 = (uVar4 << 0x1b | uVar4 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 7:
    uVar4 = (ulong)*param_1 * -0x61c8864e7a143579 ^ uVar4;
    param_1 = param_1 + 1;
    uVar4 = (uVar4 << 0x17 | uVar4 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
  case 3:
    uVar2 = *param_1;
    param_1 = (uint *)((long)param_1 + 1);
    uVar4 = (ulong)(byte)uVar2 * 0x27d4eb2f165667c5 ^ uVar4;
    uVar4 = (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
  case 2:
    uVar2 = *param_1;
    param_1 = (uint *)((long)param_1 + 1);
    uVar4 = (ulong)(byte)uVar2 * 0x27d4eb2f165667c5 ^ uVar4;
    uVar4 = (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
  case 1:
    uVar4 = (ulong)(byte)*param_1 * 0x27d4eb2f165667c5 ^ uVar4;
    uVar4 = (uVar4 << 0xb | uVar4 >> 0x35) * -0x61c8864e7a143579;
  }
  uVar4 = (uVar4 >> 0x21 ^ uVar4) * -0x3d4d51c2d82b14b1;
  uVar4 = (uVar4 >> 0x1d ^ uVar4) * 0x165667b19e3779f9;
  return uVar4 >> 0x20 ^ uVar4;
}


