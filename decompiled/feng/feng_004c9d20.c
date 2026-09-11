/* Decompiled from Speed.exe @ 004c9d20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c9d20(int param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int extraout_EDX;
  int iVar8;
  int local_48;
  int local_44;
  byte local_40;
  byte local_3f [31];
  byte local_20;
  byte local_1f [31];
  
  if (param_2 == '\0') {
    FUN_004f68c0(0x20,&DAT_006c5c64);
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_004f8ec0(*(int *)(param_1 + 0xa4));
    }
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    FUN_004f68c0(0x20,&DAT_006c515c);
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004ef050(0x65d269c2);
      goto LAB_004c9daf;
    }
  }
  else {
LAB_004c9daf:
    if (iVar4 != 0) {
      for (iVar8 = *(int *)(iVar4 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar5 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar5) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar4 + 0x54)) {
              *(int *)(iVar4 + 0x54) = iVar8;
              FUN_004ff030(iVar4);
              *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004ef050(0x31042d5);
      goto LAB_004c9e2c;
    }
  }
  else {
LAB_004c9e2c:
    if (iVar4 != 0) {
      for (iVar8 = *(int *)(iVar4 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar5 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar5) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar4 + 0x54)) {
              *(int *)(iVar4 + 0x54) = iVar8;
              FUN_004ff030(iVar4);
              *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004ef050(0xfd9bc293);
      goto LAB_004c9eac;
    }
  }
  else {
LAB_004c9eac:
    if (iVar4 != 0) {
      for (iVar8 = *(int *)(iVar4 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar5 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar5) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar4 + 0x54)) {
              *(int *)(iVar4 + 0x54) = iVar8;
              FUN_004ff030(iVar4);
              *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004ef050(0xfbcca3da);
      goto LAB_004c9f2c;
    }
  }
  else {
LAB_004c9f2c:
    if (iVar4 != 0) {
      for (iVar8 = *(int *)(iVar4 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar5 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar5) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar4 + 0x54)) {
              *(int *)(iVar4 + 0x54) = iVar8;
              FUN_004ff030(iVar4);
              *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) goto LAB_004c9ff2;
    iVar4 = FUN_004ef050(0xdfe06fad);
  }
  if (iVar4 != 0) {
    for (iVar8 = *(int *)(iVar4 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
      iVar5 = FUN_004fd230();
      if (*(int *)(iVar8 + 0x30) == iVar5) {
        if (iVar8 != 0) {
          if (iVar8 != *(int *)(iVar4 + 0x54)) {
            *(int *)(iVar4 + 0x54) = iVar8;
            FUN_004ff030(iVar4);
            *(undefined4 *)(*(int *)(iVar4 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar8 + 0x10) = 0;
        }
        break;
      }
    }
  }
LAB_004c9ff2:
  local_48 = 1;
  local_44 = 5;
  do {
    FUN_004f68c0(0x20,"Player_DATA_0%d",local_48);
    iVar4 = -1;
    pbVar6 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    iVar8 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ca0b7:
      if (iVar8 != 0) {
        iVar5 = FUN_004ef050(iVar4);
LAB_004ca0c6:
        if (iVar5 != 0) {
          iVar4 = -1;
          pbVar6 = &local_40;
          bVar3 = local_40;
          while (bVar3 != 0) {
            if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
              bVar3 = bVar3 - 0x20;
            }
            iVar4 = iVar4 * 0x21 + (uint)bVar3;
            pbVar1 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            bVar3 = *pbVar1;
          }
          for (iVar8 = *(int *)(iVar5 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
            if (*(int *)(iVar8 + 0x30) == iVar4) {
              if (iVar8 != 0) {
                if (iVar8 != *(int *)(iVar5 + 0x54)) {
                  *(int *)(iVar5 + 0x54) = iVar8;
                  FUN_004ff030(iVar5);
                  *(undefined4 *)(*(int *)(iVar5 + 0x54) + 0x10) = 0;
                }
                *(undefined4 *)(iVar8 + 0x10) = 0;
              }
              break;
            }
          }
        }
      }
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      iVar8 = DAT_0073578c;
      if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004ca0a0:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar8 = DAT_0073578c, iVar5 == 0))
        goto LAB_004ca0b7;
        goto LAB_004ca0c6;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
            (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_004ca0b7;
        goto LAB_004ca0a0;
      }
    }
    FUN_004f68c0(0x20,"HighLight0%d",local_48);
    iVar4 = -1;
    pbVar6 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    iVar8 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004ca1e7:
      if (iVar8 != 0) {
        iVar5 = FUN_004ef050(iVar4);
        goto LAB_004ca1f6;
      }
LAB_004ca23f:
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004f3f90(&DAT_00746104);
      iVar8 = DAT_0073578c;
      if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_004ca1e7;
          goto LAB_004ca1d0;
        }
        goto LAB_004ca23f;
      }
LAB_004ca1d0:
      if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar8 = DAT_0073578c, iVar5 == 0))
      goto LAB_004ca1e7;
LAB_004ca1f6:
      if (iVar5 != 0) {
        iVar4 = -1;
        pbVar6 = &local_40;
        bVar3 = local_40;
        while (bVar3 != 0) {
          if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
            bVar3 = bVar3 - 0x20;
          }
          iVar4 = iVar4 * 0x21 + (uint)bVar3;
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar3 = *pbVar1;
        }
        for (iVar8 = *(int *)(iVar5 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
          if (*(int *)(iVar8 + 0x30) == iVar4) {
            if (iVar8 != 0) {
              if (iVar8 != *(int *)(iVar5 + 0x54)) {
                *(int *)(iVar5 + 0x54) = iVar8;
                FUN_004ff030(iVar5);
                *(undefined4 *)(*(int *)(iVar5 + 0x54) + 0x10) = 0;
              }
              *(undefined4 *)(iVar8 + 0x10) = 0;
            }
            break;
          }
        }
      }
    }
    if (param_2 == '\0') {
      FUN_004f6910(iVar5);
    }
    else if ((iVar5 != 0) &&
            (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
            *(int *)(iVar5 + 0x18) == 5)) {
      uVar7 = *(undefined4 *)(iVar5 + 0x60);
      iVar4 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar4) {
        do {
          FUN_004f6970(uVar7);
          uVar7 = *(undefined4 *)(extraout_EDX + 4);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    local_48 = local_48 + 1;
    local_44 = local_44 + -1;
    if (local_44 == 0) {
      return;
    }
  } while( true );
}

