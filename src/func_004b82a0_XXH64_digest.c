// Function: XXH64_digest
// Address: 004b82a0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong XXH64_digest(ulong *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar5 = *param_1;
  if (uVar5 < 0x20) {
    lVar7 = param_1[3] + 0x27d4eb2f165667c5;
  }
  else {
    uVar8 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[4];
    lVar7 = ((uVar4 * -0x6c158a5880000000 | uVar4 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            ((uVar3 * -0x6c158a5880000000 | uVar3 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            ((uVar2 * -0x6c158a5880000000 | uVar2 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            ((uVar8 * -0x6c158a5880000000 | uVar8 * -0x3d4d51c2d82b14b1 >> 0x21) *
             -0x61c8864e7a143579 ^
            (uVar4 << 0x12 | uVar4 >> 0x2e) + (uVar3 << 0xc | uVar3 >> 0x34) +
            (uVar2 << 7 | uVar2 >> 0x39) + (uVar8 << 1 | (ulong)((long)uVar8 < 0))) *
            -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) *
            -0x61c8864e7a143579 + 0x85ebca77c2b2ae63) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
  }
  uVar8 = lVar7 + uVar5;
  puVar6 = param_1 + 5;
  switch((uint)uVar5 & 0x1f) {
  case 0x18:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x10:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 8:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    break;
  case 0x19:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x11:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 9:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    uVar5 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    uVar8 = (ulong)(byte)puVar6[1];
    goto code_r0x004b897c;
  case 0x1a:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x12:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 10:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    uVar5 = (ulong)(byte)puVar6[1] * 0x27d4eb2f165667c5 ^
            (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    uVar5 = uVar5 << 0xb | uVar5 >> 0x35;
    bVar1 = *(byte *)((long)puVar6 + 9);
code_r0x004b8a05:
    uVar5 = (ulong)bVar1 * 0x27d4eb2f165667c5 ^ uVar5 * -0x61c8864e7a143579;
    goto code_r0x004b8a0c;
  case 0x1b:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x13:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xb:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    uVar5 = (ulong)(byte)puVar6[1] * 0x27d4eb2f165667c5 ^
            (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
    uVar5 = (ulong)*(byte *)((long)puVar6 + 9) * 0x27d4eb2f165667c5 ^
            (uVar5 << 0xb | uVar5 >> 0x35) * -0x61c8864e7a143579;
    uVar5 = (uVar5 << 0xb | uVar5 >> 0x35) * -0x61c8864e7a143579;
    uVar8 = (ulong)*(byte *)((long)puVar6 + 10);
code_r0x004b897c:
    uVar5 = uVar8 * 0x27d4eb2f165667c5 ^ uVar5;
code_r0x004b8a0c:
    uVar8 = (uVar5 << 0xb | uVar5 >> 0x35) * -0x61c8864e7a143579;
    break;
  case 0x1c:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x14:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xc:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 4:
    uVar8 = (ulong)(uint)*puVar6 * -0x61c8864e7a143579 ^ uVar8;
    uVar8 = (uVar8 << 0x17 | uVar8 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    break;
  case 0x1d:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x15:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xd:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 5:
    uVar8 = (ulong)(uint)*puVar6 * -0x61c8864e7a143579 ^ uVar8;
    uVar5 = (uVar8 << 0x17 | uVar8 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    uVar8 = (ulong)*(byte *)((long)puVar6 + 4);
    goto code_r0x004b897c;
  case 0x1e:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x16:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xe:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 6:
    uVar8 = (ulong)(uint)*puVar6 * -0x61c8864e7a143579 ^ uVar8;
    uVar5 = (ulong)*(byte *)((long)puVar6 + 4) * 0x27d4eb2f165667c5 ^
            (uVar8 << 0x17 | uVar8 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    uVar5 = uVar5 << 0xb | uVar5 >> 0x35;
    bVar1 = *(byte *)((long)puVar6 + 5);
    goto code_r0x004b8a05;
  case 0x1f:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = param_1 + 6;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0x17:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 0xf:
    uVar8 = (*puVar6 * -0x6c158a5880000000 | *puVar6 * -0x3d4d51c2d82b14b1 >> 0x21) *
            -0x61c8864e7a143579 ^ uVar8;
    puVar6 = puVar6 + 1;
    uVar8 = (uVar8 << 0x1b | uVar8 >> 0x25) * -0x61c8864e7a143579 + 0x85ebca77c2b2ae63;
  case 7:
    uVar8 = (ulong)(uint)*puVar6 * -0x61c8864e7a143579 ^ uVar8;
    puVar6 = (ulong *)((long)puVar6 + 4);
    uVar8 = (uVar8 << 0x17 | uVar8 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
  case 3:
    uVar5 = *puVar6;
    puVar6 = (ulong *)((long)puVar6 + 1);
    uVar8 = (ulong)(byte)uVar5 * 0x27d4eb2f165667c5 ^ uVar8;
    uVar8 = (uVar8 << 0xb | uVar8 >> 0x35) * -0x61c8864e7a143579;
  case 2:
    uVar5 = *puVar6;
    puVar6 = (ulong *)((long)puVar6 + 1);
    uVar8 = (ulong)(byte)uVar5 * 0x27d4eb2f165667c5 ^ uVar8;
    uVar8 = (uVar8 << 0xb | uVar8 >> 0x35) * -0x61c8864e7a143579;
  case 1:
    uVar8 = (ulong)(byte)*puVar6 * 0x27d4eb2f165667c5 ^ uVar8;
    uVar8 = (uVar8 << 0xb | uVar8 >> 0x35) * -0x61c8864e7a143579;
  }
  uVar5 = (uVar8 >> 0x21 ^ uVar8) * -0x3d4d51c2d82b14b1;
  uVar5 = (uVar5 >> 0x1d ^ uVar5) * 0x165667b19e3779f9;
  return uVar5 >> 0x20 ^ uVar5;
}


