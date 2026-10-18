// Function: _ZN6google8protobuf8internal14ArenaStringPtr7ReleaseEv
// Address: 00500260
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN6google8protobuf8internal14ArenaStringPtr7ReleaseEv(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & 3) == 0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar4 = (byte *)(uVar1 & 0xfffffffffffffffc);
    if ((uVar1 & 1) != 0) {
      pbVar3 = (byte *)_Znwm(0x18);
      if ((uVar1 & 2) == 0) {
        if ((*pbVar4 & 1) == 0) {
          *(undefined8 *)(pbVar3 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
          uVar2 = *(undefined8 *)(pbVar4 + 8);
          *(undefined8 *)pbVar3 = *(undefined8 *)pbVar4;
          *(undefined8 *)(pbVar3 + 8) = uVar2;
          pbVar4 = pbVar3;
        }
        else {
          func_0x00330340(pbVar3,*(undefined8 *)(pbVar4 + 0x10),*(undefined8 *)(pbVar4 + 8));
          pbVar4 = pbVar3;
        }
      }
      else {
        *(undefined8 *)(pbVar3 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
        uVar2 = *(undefined8 *)(pbVar4 + 8);
        *(undefined8 *)pbVar3 = *(undefined8 *)pbVar4;
        *(undefined8 *)(pbVar3 + 8) = uVar2;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        pbVar4[0x10] = 0;
        pbVar4[0x11] = 0;
        pbVar4[0x12] = 0;
        pbVar4[0x13] = 0;
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0;
        pbVar4[0x17] = 0;
        pbVar4 = pbVar3;
      }
    }
    *param_1 = (ulong)_ZN6google8protobuf8internal26fixed_address_empty_stringE;
  }
  return pbVar4;
}


