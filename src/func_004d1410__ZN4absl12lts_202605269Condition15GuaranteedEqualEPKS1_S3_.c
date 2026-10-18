// Function: _ZN4absl12lts_202605269Condition15GuaranteedEqualEPKS1_S3_
// Address: 004d1410
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


bool _ZN4absl12lts_202605269Condition15GuaranteedEqualEPKS1_S3_(char *param_1,char *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    bVar1 = param_1 == param_2;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) ||
       (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18))) {
      return false;
    }
    auVar2[0] = -(*param_2 == *param_1);
    auVar2[1] = -(param_2[1] == param_1[1]);
    auVar2[2] = -(param_2[2] == param_1[2]);
    auVar2[3] = -(param_2[3] == param_1[3]);
    auVar2[4] = -(param_2[4] == param_1[4]);
    auVar2[5] = -(param_2[5] == param_1[5]);
    auVar2[6] = -(param_2[6] == param_1[6]);
    auVar2[7] = -(param_2[7] == param_1[7]);
    auVar2[8] = -(param_2[8] == param_1[8]);
    auVar2[9] = -(param_2[9] == param_1[9]);
    auVar2[10] = -(param_2[10] == param_1[10]);
    auVar2[0xb] = -(param_2[0xb] == param_1[0xb]);
    auVar2[0xc] = -(param_2[0xc] == param_1[0xc]);
    auVar2[0xd] = -(param_2[0xd] == param_1[0xd]);
    auVar2[0xe] = -(param_2[0xe] == param_1[0xe]);
    auVar2[0xf] = -(param_2[0xf] == param_1[0xf]);
    bVar1 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar2[0xf] >> 7) << 0xf) == 0xffff;
  }
  return bVar1;
}


