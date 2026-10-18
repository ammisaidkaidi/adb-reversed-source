// Function: _ZNK7android15ResTable_config8toStringEv
// Address: 004324c0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 * _ZNK7android15ResTable_config8toStringEv(undefined8 *param_1,long param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  
  *param_1 = 0;
  _ZN7android7String8C2Ev();
  if (*(short *)(param_2 + 4) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_001598c0,*(undefined2 *)(param_2 + 4));
  }
  if (*(short *)(param_2 + 6) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_00169877,*(undefined2 *)(param_2 + 6));
  }
  _ZNK7android15ResTable_config15appendDirLocaleERNS_7String8E(param_2,param_1);
  if ((*(byte *)(param_2 + 0x13) & 3) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    switch(*(byte *)(param_2 + 0x13) & 3) {
    case 0:
      goto code_r0x004325b4;
    case 1:
      puVar6 = &UNK_0017f0f0;
      break;
    case 2:
      puVar6 = &UNK_00170904;
      break;
    case 3:
      puVar6 = &UNK_00177335;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x004325b4:
  if (*(byte *)(param_2 + 0x1c) < 0x40) {
code_r0x00432608:
    sVar2 = *(short *)(param_2 + 0x1e);
  }
  else {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x1c) & 0xc0;
    if (bVar5 == 0x80) {
      puVar6 = &UNK_001898a0;
code_r0x00432600:
      _ZN7android7String86appendEPKc(param_1,puVar6);
      goto code_r0x00432608;
    }
    if (bVar5 == 0x40) {
      puVar6 = &UNK_0015b49c;
      goto code_r0x00432600;
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_00164803);
    sVar2 = *(short *)(param_2 + 0x1e);
  }
  if (sVar2 != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_00180644,*(undefined2 *)(param_2 + 0x1e));
  }
  if (*(short *)(param_2 + 0x20) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_001898a6,*(undefined2 *)(param_2 + 0x20));
  }
  if (*(short *)(param_2 + 0x22) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0017d99c,*(undefined2 *)(param_2 + 0x22));
  }
  if ((*(byte *)(param_2 + 0x1c) & 0xf) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    switch(*(byte *)(param_2 + 0x1c) & 0xf) {
    case 1:
      puVar6 = &UNK_00167f73;
      break;
    case 2:
      puVar6 = &UNK_00181d2f;
      break;
    case 3:
      puVar6 = &UNK_0017090d;
      break;
    case 4:
      puVar6 = &UNK_00167f79;
      break;
    default:
      _ZN7android7String812appendFormatEPKcz(param_1,&UNK_001881cb);
      bVar5 = *(byte *)(param_2 + 0x1c);
      goto joined_r0x004329bb;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
  bVar5 = *(byte *)(param_2 + 0x1c);
joined_r0x004329bb:
  if ((bVar5 & 0x30) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x1c) & 0x30;
    if (bVar5 == 0x20) {
      puVar6 = &UNK_001598c6;
    }
    else {
      if (bVar5 != 0x10) {
        _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0018380f);
        goto code_r0x004327ad;
      }
      puVar6 = &UNK_00183807;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x004327ad:
  if ((*(byte *)(param_2 + 0x30) & 3) == 0) {
code_r0x004327fa:
    bVar5 = *(byte *)(param_2 + 0x31);
  }
  else {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x30) & 3;
    if (bVar5 == 2) {
      puVar6 = &UNK_00161696;
code_r0x004327f2:
      _ZN7android7String86appendEPKc(param_1,puVar6);
      goto code_r0x004327fa;
    }
    if (bVar5 == 1) {
      puVar6 = &UNK_0018b0c9;
      goto code_r0x004327f2;
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0017a42d);
    bVar5 = *(byte *)(param_2 + 0x31);
  }
  if ((bVar5 & 3) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x31) & 3;
    if (bVar5 == 2) {
      puVar6 = &UNK_001662a3;
    }
    else {
      if (bVar5 != 1) {
        _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0018064b);
        goto code_r0x00432874;
      }
      puVar6 = &UNK_001898ac;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x00432874:
  if ((*(byte *)(param_2 + 0x31) & 0xc) == 0) {
code_r0x004328c1:
    if (*(char *)(param_2 + 0xc) == '\0') goto code_r0x00432937;
code_r0x004328c8:
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    cVar1 = *(char *)(param_2 + 0xc);
    if (cVar1 == '\x03') {
      puVar6 = &UNK_001741bb;
code_r0x0043292f:
      _ZN7android7String86appendEPKc(param_1,puVar6);
      goto code_r0x00432937;
    }
    if (cVar1 == '\x02') {
      puVar6 = &UNK_0016b1af;
      goto code_r0x0043292f;
    }
    if (cVar1 == '\x01') {
      puVar6 = &UNK_0017590d;
      goto code_r0x0043292f;
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_00184c7d);
    if ((*(byte *)(param_2 + 0x1d) & 0xf) != 0) goto code_r0x00432942;
  }
  else {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x31) & 0xc;
    if (bVar5 == 8) {
      puVar6 = &UNK_00184c76;
code_r0x004328b9:
      _ZN7android7String86appendEPKc(param_1,puVar6);
      goto code_r0x004328c1;
    }
    if (bVar5 == 4) {
      puVar6 = &UNK_0015e3b6;
      goto code_r0x004328b9;
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0017bd25);
    if (*(char *)(param_2 + 0xc) != '\0') goto code_r0x004328c8;
code_r0x00432937:
    if ((*(byte *)(param_2 + 0x1d) & 0xf) == 0) goto code_r0x004329f9;
code_r0x00432942:
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    switch(*(byte *)(param_2 + 0x1d) & 0xf) {
    case 2:
      puVar6 = &UNK_0016ef40;
      break;
    case 3:
      puVar6 = &UNK_001881df;
      break;
    case 4:
      puVar6 = &UNK_0015cb19;
      break;
    case 5:
      puVar6 = &UNK_0015e3bc;
      break;
    case 6:
      puVar6 = &UNK_0016987d;
      break;
    case 7:
      puVar6 = &UNK_001898b5;
      break;
    default:
      _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0017733f,*(byte *)(param_2 + 0x1c) & 0xf);
      bVar5 = *(byte *)(param_2 + 0x1d);
      goto joined_r0x00432b43;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x004329f9:
  bVar5 = *(byte *)(param_2 + 0x1d);
joined_r0x00432b43:
  if ((bVar5 & 0x30) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x1d) & 0x30;
    if (bVar5 == 0x20) {
      puVar6 = &UNK_0015cb24;
    }
    else {
      if (bVar5 != 0x10) {
        _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0015e3c6);
        goto code_r0x00432a59;
      }
      puVar6 = &UNK_00175912;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x00432a59:
  if (*(short *)(param_2 + 0xe) == 0) {
code_r0x00432b81:
    cVar1 = *(char *)(param_2 + 0xd);
  }
  else {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    uVar3 = *(ushort *)(param_2 + 0xe);
    if (0x13f < uVar3) {
      if (uVar3 < 0x280) {
        if (uVar3 == 0x140) {
          puVar6 = &UNK_00157b6d;
        }
        else {
          if (uVar3 != 0x1e0) goto code_r0x00432e43;
          puVar6 = &UNK_0017a43c;
        }
      }
      else if (uVar3 == 0x280) {
        puVar6 = &UNK_0017bd2c;
      }
      else if (uVar3 == 0xfffe) {
        puVar6 = &UNK_00181d3c;
      }
      else {
        if (uVar3 != 0xffff) goto code_r0x00432e43;
        puVar6 = &UNK_0018065d;
      }
code_r0x00432b79:
      _ZN7android7String86appendEPKc(param_1,puVar6);
      goto code_r0x00432b81;
    }
    if (0xd4 < uVar3) {
      if (uVar3 == 0xd5) {
        puVar6 = &UNK_00181d36;
      }
      else {
        if (uVar3 != 0xf0) goto code_r0x00432e43;
        puVar6 = &UNK_0016169c;
      }
      goto code_r0x00432b79;
    }
    if (uVar3 == 0x78) {
      puVar6 = &UNK_001598cb;
      goto code_r0x00432b79;
    }
    if (uVar3 == 0xa0) {
      puVar6 = &UNK_0015b4a2;
      goto code_r0x00432b79;
    }
code_r0x00432e43:
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0016ef45);
    cVar1 = *(char *)(param_2 + 0xd);
  }
  if (cVar1 != '\0') {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    cVar1 = *(char *)(param_2 + 0xd);
    if (cVar1 == '\x03') {
      puVar6 = &UNK_00172638;
    }
    else if (cVar1 == '\x02') {
      puVar6 = &UNK_0017bd34;
    }
    else {
      if (cVar1 != '\x01') {
        _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0015e3d5);
        goto code_r0x00432bec;
      }
      puVar6 = &UNK_0017d9a2;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x00432bec:
  if ((*(byte *)(param_2 + 0x12) & 3) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    switch(*(byte *)(param_2 + 0x12) & 3) {
    case 0:
      goto code_r0x00432c48;
    case 1:
      puVar6 = &UNK_001881e3;
      break;
    case 2:
      puVar6 = &UNK_0015e3e4;
      break;
    case 3:
      puVar6 = &UNK_0017734d;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x00432c48:
  if (*(char *)(param_2 + 0x10) == '\0') {
code_r0x00432ca4:
    bVar5 = *(byte *)(param_2 + 0x12);
  }
  else {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    cVar1 = *(char *)(param_2 + 0x10);
    if (cVar1 == '\x03') {
      puVar6 = &UNK_00184c93;
code_r0x00432c9c:
      _ZN7android7String86appendEPKc(param_1,puVar6);
      goto code_r0x00432ca4;
    }
    if (cVar1 == '\x02') {
      puVar6 = &UNK_00157b73;
      goto code_r0x00432c9c;
    }
    if (cVar1 == '\x01') {
      puVar6 = &UNK_00184c8c;
      goto code_r0x00432c9c;
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0015fe8f);
    bVar5 = *(byte *)(param_2 + 0x12);
  }
  if ((bVar5 & 0xc) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    bVar5 = *(byte *)(param_2 + 0x12) & 0xc;
    if (bVar5 == 8) {
      puVar6 = &UNK_001741c2;
    }
    else {
      if (bVar5 != 4) {
        _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0015e3ef);
        goto code_r0x00432d1e;
      }
      puVar6 = &UNK_00164810;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
code_r0x00432d1e:
  if (*(char *)(param_2 + 0x11) != '\0') {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    switch(*(undefined1 *)(param_2 + 0x11)) {
    case 1:
      puVar6 = &UNK_0015e406;
      break;
    case 2:
      puVar6 = &UNK_0017a443;
      break;
    case 3:
      puVar6 = &UNK_0016481b;
      break;
    case 4:
      puVar6 = &UNK_0015e40c;
      break;
    default:
      _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0018b0d2);
      if (*(int *)(param_2 + 0x14) == 0) goto code_r0x00432dca;
      goto code_r0x00432d93;
    }
    _ZN7android7String86appendEPKc(param_1,puVar6);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
code_r0x00432d93:
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz
              (param_1,&UNK_0015b4a7,*(undefined2 *)(param_2 + 0x14),*(undefined2 *)(param_2 + 0x16)
              );
  }
code_r0x00432dca:
  if (*(int *)(param_2 + 0x18) != 0) {
    lVar4 = _ZNK7android7String86lengthEv(param_1);
    if (lVar4 != 0) {
      _ZN7android7String86appendEPKc(param_1,&UNK_001801f1);
    }
    _ZN7android7String812appendFormatEPKcz(param_1,&UNK_0016315e,*(undefined2 *)(param_2 + 0x18));
    if (*(short *)(param_2 + 0x1a) != 0) {
      _ZN7android7String812appendFormatEPKcz(param_1,&UNK_00175686);
    }
  }
  return param_1;
}


