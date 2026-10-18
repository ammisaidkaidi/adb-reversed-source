// Function: BrotliEncoderCreateInstance
// Address: 00375350
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * BrotliEncoderCreateInstance(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)func_0x003bd140(0x1b40,param_1,param_2,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x003bd0d0(puVar1 + 0xaf,param_1,param_2,param_3);
    *puVar1 = 0xb00000000;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 1) = 0x16;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined8 *)((long)puVar1 + 0x14) = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    func_0x003bb550(puVar1 + 10);
    puVar1[7] = 0;
    puVar1[8] = 0x4000000040;
    puVar1[9] = 0x3fffffc;
    puVar1[0xb2] = 0;
    *(undefined2 *)((long)puVar1 + 0x64c) = 0;
    *(undefined8 *)((long)puVar1 + 0x1b34) = 0;
    *(undefined4 *)((long)puVar1 + 0x1b3c) = 0;
    puVar1[0xb5] = 0;
    puVar1[0xb6] = 0;
    puVar1[0xb7] = 0;
    puVar1[0xb8] = 0;
    puVar1[0xb9] = 0;
    puVar1[0xba] = 0;
    puVar1[0xbb] = 0;
    puVar1[0xbc] = 0;
    puVar1[0xbd] = 0;
    puVar1[0xbe] = 0;
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 0;
    puVar1[0xce] = 0;
    puVar1[0xcf] = 0;
    *(undefined4 *)(puVar1 + 0xd0) = 0;
    puVar1[0x35a] = 0;
    puVar1[0x35b] = 0;
    puVar1[0x35c] = 0;
    puVar1[0x35d] = 0;
    puVar1[0x35e] = 0;
    puVar1[0x35f] = 0;
    puVar1[0x360] = 0;
    puVar1[0x361] = 0;
    puVar1[0x362] = 0;
    puVar1[0x363] = 0;
    puVar1[0xbf] = 0xb00000004;
    puVar1[0xc0] = 0x100000000f;
    puVar1[199] = puVar1[0xbf];
    puVar1[200] = puVar1[0xc0];
  }
  return puVar1;
}


