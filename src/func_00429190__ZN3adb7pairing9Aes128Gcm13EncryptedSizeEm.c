// Function: _ZN3adb7pairing9Aes128Gcm13EncryptedSizeEm
// Address: 00429190
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


long _ZN3adb7pairing9Aes128Gcm13EncryptedSizeEm(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = EVP_AEAD_CTX_aead();
  lVar2 = EVP_AEAD_max_overhead(uVar1);
  return lVar2 + param_2;
}


