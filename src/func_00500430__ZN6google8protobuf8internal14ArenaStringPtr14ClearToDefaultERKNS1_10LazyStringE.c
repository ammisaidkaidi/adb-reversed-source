// Function: _ZN6google8protobuf8internal14ArenaStringPtr14ClearToDefaultERKNS1_10LazyStringEPNS0_5ArenaE
// Address: 00500430
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


ulong * _ZN6google8protobuf8internal14ArenaStringPtr14ClearToDefaultERKNS1_10LazyStringEPNS0_5ArenaE
                  (ulong *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *in_RAX;
  ulong uVar6;
  undefined8 unaff_RBX;
  byte *pbVar7;
  ulong *puVar8;
  ulong uVar9;
  bool bVar10;
  ulong uVar11;
  
  if ((*param_1 & 3) != 0) {
    puVar8 = (ulong *)(*param_1 & 0xfffffffffffffffc);
    in_RAX = *(ulong **)(param_2 + 0x18);
    if (in_RAX == (ulong *)0x0) {
      in_RAX = (ulong *)_ZNK6google8protobuf8internal10LazyString4InitEv(param_2);
    }
    if (in_RAX != puVar8) {
      bVar1 = (byte)*in_RAX;
      if ((*puVar8 & 1) != 0) {
        bVar10 = (bVar1 & 1) != 0;
        pbVar7 = (byte *)((long)in_RAX + 1);
        if (bVar10) {
          pbVar7 = (byte *)in_RAX[2];
        }
        uVar6 = (ulong)(bVar1 >> 1);
        if (bVar10) {
          uVar6 = in_RAX[1];
        }
        uVar4 = *puVar8 & 0xfffffffffffffffe;
        if (uVar6 < uVar4) {
          uVar4 = puVar8[2];
          puVar8[1] = uVar6;
          func_0x0099bd90(uVar4,pbVar7,uVar6);
          *(undefined1 *)(uVar4 + uVar6) = 0;
        }
        else {
          _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (puVar8,uVar4 - 1,(uVar6 - uVar4) + 1,puVar8[1],0,puVar8[1],uVar6,pbVar7,in_RAX,
                     unaff_RBX);
        }
        return puVar8;
      }
      if ((bVar1 & 1) != 0) {
        uVar6 = in_RAX[1];
        uVar4 = in_RAX[2];
        if (uVar6 < 0x17) {
          *(char *)puVar8 = (char)uVar6 * '\x02';
          func_0x0099bd90((byte *)((long)puVar8 + 1),uVar4,uVar6);
          *(byte *)((long)puVar8 + uVar6 + 1) = 0;
        }
        else {
          if (0xfffffffffffffff6 < uVar6) {
            func_0x0032e8f0();
            pcVar3 = (code *)swi(3);
            puVar8 = (ulong *)(*pcVar3)();
            return puVar8;
          }
          uVar11 = (ulong)(byte)*puVar8 << 0x38;
          uVar2 = puVar8[2];
          uVar5 = 0x2c;
          if (0x2c < uVar6) {
            uVar5 = uVar6;
          }
          uVar9 = (uVar5 | 7) + 1;
          uVar5 = _Znwm(uVar9);
          func_0x0099bda0(uVar5,uVar4,uVar6);
          *(undefined1 *)(uVar5 + uVar6) = 0;
          if ((uVar11 & 0x100000000000000) != 0) {
            _ZdaPvSt11align_val_t(uVar2,*puVar8 & 0xfffffffffffffffe);
          }
          *puVar8 = uVar9 | 1;
          puVar8[1] = uVar6;
          puVar8[2] = uVar5;
        }
        return puVar8;
      }
      puVar8[2] = in_RAX[2];
      uVar6 = in_RAX[1];
      *puVar8 = *in_RAX;
      puVar8[1] = uVar6;
    }
  }
  return in_RAX;
}


