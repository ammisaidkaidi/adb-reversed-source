// Function: _ZN7android25findParentLocalePackedKeyEPKcj
// Address: 00490ad0
// Size: 1 bytes
// Reconstructed by Ghidra 12.1.4 via REA skill workflow (PyGhidra)


undefined8 _ZN7android25findParentLocalePackedKeyEPKcj(uint *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = *param_1;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if ((int)uVar3 < 0x48616e74) {
    if (uVar3 == 0x41726162) {
      if (0x61724c58 < param_2) {
        if (param_2 == 0x61724c59) {
          return 0x61729420;
        }
        if (param_2 == 0x61724d41) {
          return 0x61729420;
        }
        if (param_2 == 0x6172544e) {
          return 0x61729420;
        }
        return 0;
      }
      if (param_2 == 0x61724145) {
        return 0x61729420;
      }
      if (param_2 == 0x6172445a) {
        return 0x61729420;
      }
      if (param_2 == 0x61724548) {
        return 0x61729420;
      }
      return 0;
    }
    if (uVar3 != 0x44657661) {
      return 0;
    }
    bVar4 = param_2 == 0x68690000;
    uVar2 = 0x656e494e;
  }
  else if (uVar3 == 0x48616e74) {
    bVar4 = param_2 == 0x7a684d4f;
    uVar2 = 0x7a68484b;
  }
  else {
    if (uVar3 == 0x4c61746e) {
      uVar2 = 0x656e8400;
      if (param_2 < 0x656e5047) {
        if (param_2 < 0x656e484b) {
          if (param_2 < 0x656e4445) {
            uVar3 = param_2 + 0x9a91bcbd;
            if (uVar3 < 0x18) {
              if ((0x600501U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e8400;
              }
              if ((0x800020U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e80a1;
              }
            }
            uVar3 = param_2 + 0x9a91bdbe;
            if (uVar3 < 0x19) {
              if ((0x1220801U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e8400;
              }
              if (uVar3 == 3) {
                return 0x656e80a1;
              }
            }
            switch(param_2) {
            case 0x656e4147:
            case 0x656e4149:
            case 0x656e4155:
code_r0x004910dc:
              return uVar2;
            default:
              return 0;
            case 0x656e4154:
              goto code_r0x004910de;
            }
          }
          if (0x656e4741 < param_2) {
            uVar3 = param_2 + 0x9a91b8be;
            if (0x17 < uVar3) {
              return 0;
            }
            if ((0x8208e5U >> (uVar3 & 0x1f) & 1) != 0) {
              return 0x656e8400;
            }
            if (uVar3 == 3) {
              return 0x656e80a1;
            }
            return 0;
          }
          if (0x656e4552 < param_2) {
            uVar3 = param_2 + 0x9a91b9b7;
            if (uVar3 < 10) {
              if ((0x16U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e8400;
              }
              if ((0x201U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e80a1;
              }
            }
            if (param_2 == 0x656e4553) {
              return 0x656e80a1;
            }
            return 0;
          }
          switch(param_2) {
          case 0x656e4445:
          case 0x656e444b:
            goto code_r0x004910de;
          case 0x656e4446:
          case 0x656e4448:
          case 0x656e4449:
          case 0x656e444a:
          case 0x656e444c:
            return 0;
          case 0x656e4447:
          case 0x656e444d:
            goto code_r0x004910dc;
          default:
            if (param_2 == 0x656e4545) {
              return 0x656e80a1;
            }
            if (param_2 == 0x656e4552) {
              return 0x656e8400;
            }
            return 0;
          }
        }
        if (param_2 < 0x656e4d47) {
          if (0x656e4a4c < param_2) {
            uVar3 = param_2 + 0x9a91b3bd;
            if (uVar3 < 0x14) {
              if ((0x18001U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e8400;
              }
              if ((0xa0000U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e80a1;
              }
            }
            if ((param_2 + 0x9a91b4bbU < 0x15) &&
               ((0x100211U >> (param_2 + 0x9a91b4bbU & 0x1f) & 1) != 0)) {
              return uVar2;
            }
            if (param_2 == 0x656e4a4d) {
              return uVar2;
            }
            return 0;
          }
          if (0x656e4943 < param_2) {
            uVar3 = param_2 + 0x9a91b6bc;
            if (uVar3 < 0x11) {
              if ((0xf03U >> (uVar3 & 0x1f) & 1) != 0) {
                return 0x656e8400;
              }
              if (uVar3 == 0x10) {
                return 0x656e80a1;
              }
            }
            if (param_2 == 0x656e4a45) {
              return uVar2;
            }
            return 0;
          }
          if (param_2 == 0x656e484b) {
            return uVar2;
          }
          if (param_2 != 0x656e4855) {
            return 0;
          }
          return 0x656e80a1;
        }
        if ((param_2 + 0x9a91b2b9U < 0x13) &&
           ((0x5f101U >> (param_2 + 0x9a91b2b9U & 0x1f) & 1) != 0)) {
          return 0x656e8400;
        }
        uVar3 = param_2 + 0x9a91b1bf;
        if (0x19 < uVar3) {
          return 0;
        }
        if ((0x2120061U >> (uVar3 & 0x1f) & 1) != 0) {
          return 0x656e8400;
        }
        uVar1 = 0x4800;
      }
      else {
        if (0x656e80a0 < param_2) {
          if (param_2 < 0x65735356) {
            if (param_2 < 0x6573444f) {
              if (param_2 < 0x6573434c) {
                if ((0xb < param_2 + 0x9a8cbdb1U) ||
                   ((0x809U >> (param_2 + 0x9a8cbdb1U & 0x1f) & 1) == 0)) {
                  if (param_2 == 0x656e80a1) {
                    return 0x656e8400;
                  }
                  if (param_2 != 0x65734152) {
                    return 0;
                  }
                }
              }
              else {
                if (9 < param_2 + 0x9a8cbcb4U) {
                  return 0;
                }
                if ((0x249U >> (param_2 + 0x9a8cbcb4U & 0x1f) & 1) == 0) {
                  return 0;
                }
              }
            }
            else {
              if (param_2 < 0x65734d58) {
                if (0x65734753 < param_2) {
                  if (param_2 == 0x65734754) {
                    return 0x6573a424;
                  }
                  if (param_2 == 0x6573484e) {
                    return 0x6573a424;
                  }
                  return 0;
                }
                if (param_2 == 0x6573444f) {
                  return 0x6573a424;
                }
                if (param_2 == 0x65734543) {
                  return 0x6573a424;
                }
                return 0;
              }
              if ((((0x18 < param_2 + 0x9a8cafbfU) ||
                   ((0x1020011U >> (param_2 + 0x9a8cafbfU & 0x1f) & 1) == 0)) &&
                  (param_2 != 0x65734d58)) && (param_2 != 0x65734e49)) {
                return 0;
              }
            }
            return 0x6573a424;
          }
          if (0x70744355 < param_2) {
            if (param_2 < 0x70744d4f) {
              if (param_2 < 0x70744757) {
                if ((param_2 != 0x70744356) && (param_2 != 0x70744751)) {
                  return 0;
                }
                return 0x70745054;
              }
              if (param_2 == 0x70744757) {
                return 0x70745054;
              }
              if (param_2 == 0x70744c55) {
                return 0x70745054;
              }
              return 0;
            }
            if (0x70745353 < param_2) {
              if (param_2 == 0x70745354) {
                return 0x70745054;
              }
              if (param_2 == 0x7074544c) {
                return 0x70745054;
              }
              return 0;
            }
            if (param_2 == 0x70744d4f) {
              return 0x70745054;
            }
            if (param_2 == 0x70744d5a) {
              return 0x70745054;
            }
            return 0;
          }
          if (0x6e61ffff < param_2) {
            if (param_2 < 0x7074414f) {
              if ((param_2 != 0x6e620000) && (param_2 != 0x6e6e0000)) {
                return 0;
              }
              return 0x6e6f0000;
            }
            if (param_2 == 0x7074414f) {
              return 0x70745054;
            }
            if (param_2 == 0x70744348) {
              return 0x70745054;
            }
            return 0;
          }
          if (0x65735558 < param_2) {
            if (param_2 == 0x65735559) {
              return 0x6573a424;
            }
            if (param_2 == 0x65735645) {
              return 0x6573a424;
            }
            return 0;
          }
          if (param_2 == 0x65735356) {
            return 0x6573a424;
          }
          if (param_2 == 0x65735553) {
            return 0x6573a424;
          }
          return 0;
        }
        if (0x656e5442 < param_2) {
          if (0x656e5642 < param_2) {
            if ((param_2 + 0x9a91a9bdU < 0x13) &&
               ((0x40011U >> (param_2 + 0x9a91a9bdU & 0x1f) & 1) != 0)) {
              return 0x656e8400;
            }
            if ((param_2 + 0x9a91a5bfU < 0x17) &&
               ((0x401001U >> (param_2 + 0x9a91a5bfU & 0x1f) & 1) != 0)) {
              return 0x656e8400;
            }
            if (param_2 != 0x656e5753) {
              return 0;
            }
            return 0x656e8400;
          }
          if ((param_2 + 0x9a91abbdU < 0x18) &&
             ((0x8a1101U >> (param_2 + 0x9a91abbdU & 0x1f) & 1) != 0)) {
            return 0x656e8400;
          }
          if (param_2 == 0x656e5541) {
            return 0x656e80a1;
          }
          if (param_2 != 0x656e5547) {
            return 0;
          }
          return 0x656e8400;
        }
        if (param_2 < 0x656e5342) {
          uVar3 = param_2 + 0x9a91afb9;
          if (uVar3 < 0x11) {
            if ((0x10091U >> (uVar3 & 0x1f) & 1) != 0) {
              return 0x656e8400;
            }
            if ((0x2020U >> (uVar3 & 0x1f) & 1) != 0) {
              return 0x656e80a1;
            }
          }
          if (param_2 == 0x656e524f) {
            return 0x656e80a1;
          }
          if (param_2 == 0x656e5257) {
            return 0x656e8400;
          }
          return 0;
        }
        uVar3 = param_2 + 0x9a91acbe;
        if (0x18 < uVar3) {
          return 0;
        }
        if ((0x1420467U >> (uVar3 & 0x1f) & 1) != 0) {
          return 0x656e8400;
        }
        uVar1 = 0x288;
      }
      if ((uVar1 >> (uVar3 & 0x1f) & 1) == 0) {
        return 0;
      }
code_r0x004910de:
      return 0x656e80a1;
    }
    if (uVar3 != 0x7e7e7e42) {
      return 0;
    }
    bVar4 = param_2 == 0x61725842;
    uVar2 = 0x61729420;
  }
  if (!bVar4) {
    uVar2 = 0;
  }
  return uVar2;
}


