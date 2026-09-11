/* Decompiled from Speed.exe @ 004164d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004164d0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  iVar4 = DAT_0073578c;
  do {
    uVar1 = *(uint *)(unaff_EBX + 0x1b0 + iVar3 * 4);
    if (uVar1 < 0x8df2a853) {
      if (uVar1 == 0x8df2a852) {
        if (DAT_00701074 == 0) {
          if (iVar4 != 0) {
            FUN_004f5f80(iVar4,0);
            iVar4 = DAT_0073578c;
          }
          if ((((*(int *)(unaff_EBX + 0xc) == 0) ||
               (iVar2 = FUN_004f65d0(), iVar4 = DAT_0073578c, iVar2 == 0)) ||
              (iVar2 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar2 == 0)) && (iVar4 != 0)) {
            uVar5 = 0x8d118bb;
            goto LAB_0041680b;
          }
          goto LAB_004168cc;
        }
      }
      else if (uVar1 < 0x71ad06d6) {
        if (uVar1 == 0x71ad06d5) {
joined_r0x00416839:
          if (DAT_0070105c == 0) {
            if (iVar4 != 0) {
              FUN_004f5f80(iVar4,0);
            }
            goto LAB_00416858;
          }
        }
        else if (uVar1 == 0x9b9cf87) {
          if (DAT_0070106c == 0) {
            if (iVar4 != 0) {
              FUN_004f5f80(iVar4,0);
            }
            goto LAB_00416858;
          }
        }
        else if (uVar1 == 0x40f25307) {
          if (DAT_00701044 == 0) {
            if (iVar4 != 0) {
              FUN_004f5f80(iVar4,0);
            }
            goto LAB_00416858;
          }
        }
        else if ((uVar1 == 0x5d2af1f3) && (DAT_00701060 == 0)) {
          if (iVar4 != 0) {
            FUN_004f5f80(iVar4,0);
          }
LAB_00416858:
          FUN_00415510(0xff404040);
          iVar4 = DAT_0073578c;
        }
      }
      else if (uVar1 == 0x72e05b95) {
        if (DAT_00701040 == 0) {
          if (iVar4 != 0) {
            FUN_004f5f80(iVar4,0);
          }
          FUN_00415510(0xff404040);
          iVar4 = DAT_0073578c;
        }
      }
      else if ((uVar1 == 0x8c99b2fd) && (DAT_00701068 == 0)) {
        if (iVar4 != 0) {
          FUN_004f5f80(iVar4,0);
        }
        FUN_00415510(0xff404040);
        iVar4 = DAT_0073578c;
      }
    }
    else if (uVar1 < 0xd9869c6d) {
      if (uVar1 == 0xd9869c6c) {
        if (DAT_00701070 == 0) {
          if (iVar4 != 0) {
            FUN_004f5f80(iVar4,0);
            iVar4 = DAT_0073578c;
          }
          if ((((*(int *)(unaff_EBX + 0xc) == 0) ||
               (iVar2 = FUN_004f65d0(), iVar4 = DAT_0073578c, iVar2 == 0)) ||
              (iVar2 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar2 == 0)) && (iVar4 != 0)) {
            uVar5 = 0x178ff475;
LAB_0041680b:
            FUN_004ef050(uVar5);
            iVar4 = DAT_0073578c;
          }
LAB_004168cc:
          FUN_004f75b0(0xff404040);
        }
      }
      else if (uVar1 == 0x99278529) {
        if (DAT_00701058 == 0) {
          if (iVar4 != 0) {
            FUN_004f5f80(iVar4,0);
          }
          FUN_00415510(0xff404040);
          iVar4 = DAT_0073578c;
        }
      }
      else if (uVar1 == 0x9e8ca9d6) {
        if (DAT_0070104c == 0) {
          if (iVar4 != 0) {
            FUN_004f5f80(iVar4,0);
          }
          FUN_00415510(0xff404040);
          iVar4 = DAT_0073578c;
        }
      }
      else if ((uVar1 == 0xae5c3f41) && (DAT_00701064 == 0)) {
        if (iVar4 != 0) {
          FUN_004f5f80(iVar4,0);
        }
        FUN_00415510(0xff404040);
        iVar4 = DAT_0073578c;
      }
    }
    else if (uVar1 == 0xdf815d72) {
      if (DAT_00701048 == 0) {
        if (iVar4 != 0) {
          FUN_004f5f80(iVar4,0);
          iVar4 = DAT_0073578c;
        }
        if ((((*(int *)(unaff_EBX + 0xc) == 0) ||
             (iVar2 = FUN_004f65d0(), iVar4 = DAT_0073578c, iVar2 == 0)) ||
            (iVar2 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar2 == 0)) && (iVar4 != 0)) {
          uVar5 = 0xe43d65fb;
          goto LAB_0041680b;
        }
        goto LAB_004168cc;
      }
    }
    else if (uVar1 == 0xff2e6b0d) goto joined_r0x00416839;
    iVar3 = iVar3 + 2;
    if (0x1f < iVar3) {
      return;
    }
  } while( true );
}

