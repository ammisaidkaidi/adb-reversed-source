// Function: _Z21enable_server_socketsv
// Address: 003d1a80
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


void _Z21enable_server_socketsv(void)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = uRam0000000000a00618;
  _ZNSt3__15mutex4lockEv(uRam0000000000a00618);
  lVar5 = lRam0000000000a00620;
  lVar2 = *(long *)(lRam0000000000a00620 + 8);
  do {
    if (lVar2 == lVar5) {
      pthread_mutex_unlock(uVar4);
      return;
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    bVar1 = *(byte *)(puVar3 + 5);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0xd) goto code_r0x003d1b0d;
    }
    else if (puVar3[6] == 0xd) {
code_r0x003d1b0d:
      if ((bVar1 & 1) == 0) {
        plVar6 = (long *)((long)puVar3 + 0x29);
      }
      else {
        plVar6 = (long *)puVar3[7];
      }
      if (*(long *)((long)plVar6 + 5) == 0x2a74656b636f7374 && *plVar6 == 0x6f737472616d732a) {
        _Z11fdevent_setP7fdeventj(*puVar3,1);
      }
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}


