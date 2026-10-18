// Function: _ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi1EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
// Address: 0036c890
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


byte * _ZN6google8protobuf8internal14WireFormatLite26WriteInt64ToArrayWithFieldILi1EEEPhPNS0_2io19EpsCopyOutputStreamElS4_
                 (undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)
              _ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh(param_1,param_3);
  }
  *param_3 = 8;
  pbVar2 = param_3 + 1;
  uVar3 = param_2;
  if (0x7f < param_2) {
    do {
      *pbVar2 = (byte)uVar3 | 0x80;
      param_2 = uVar3 >> 7;
      pbVar2 = pbVar2 + 1;
      bVar1 = 0x3fff < uVar3;
      uVar3 = param_2;
    } while (bVar1);
  }
  *pbVar2 = (byte)param_2;
  return pbVar2 + 1;
}


