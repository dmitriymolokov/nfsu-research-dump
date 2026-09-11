/* Decompiled from Speed.exe @ 0061269b */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __fastcall FUN_0061269b(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      *(uint *)(param_1 + 0x94) = uVar3;
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + uVar3 * 4);
      *(int *)(param_1 + 0x98) = iVar1;
      iVar1 = *(int *)(iVar1 + 0x34);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xc)) {
        *(int *)(param_1 + 0x9c) = iVar1 + 0x30;
      }
      iVar1 = FUN_00612628();
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar2 = **(uint **)(param_1 + 0x98) & 0xff000000;
      if (uVar2 < 0x25000001) {
        if (uVar2 == 0x25000000) {
          iVar1 = FUN_0061b2ea();
        }
        else if (uVar2 < 0x15000001) {
          if (uVar2 == 0x15000000) {
            iVar1 = FUN_006118de();
          }
          else if (uVar2 == 0) {
            iVar1 = FUN_0067ef25();
          }
          else if (uVar2 == 0x10000000) {
            iVar1 = FUN_0061b0f2();
          }
          else if (uVar2 == 0x11000000) {
            iVar1 = FUN_0061a926();
          }
          else if (uVar2 == 0x12000000) {
            iVar1 = FUN_0061b1e6();
          }
          else if (uVar2 == 0x13000000) {
            iVar1 = FUN_0061141a();
          }
          else {
            if (uVar2 != 0x14000000) goto LAB_006128dd;
            iVar1 = FUN_006116da();
          }
        }
        else if (uVar2 == 0x16000000) {
          iVar1 = FUN_0061b248();
        }
        else if (uVar2 == 0x20000000) {
          iVar1 = FUN_0061b2c2();
        }
        else if (uVar2 == 0x21000000) {
          iVar1 = FUN_0061b2ca();
        }
        else if (uVar2 == 0x22000000) {
          iVar1 = FUN_0061b2d2();
        }
        else if (uVar2 == 0x23000000) {
          iVar1 = FUN_0061b2da();
        }
        else {
          if (uVar2 != 0x24000000) goto LAB_006128dd;
          iVar1 = FUN_0061b2e2();
        }
      }
      else if (uVar2 < 0xf4000001) {
        if (uVar2 == 0xf4000000) {
LAB_0061284c:
          iVar1 = FUN_0061b3b4();
        }
        else if (uVar2 == 0x30000000) {
          iVar1 = FUN_0061b2fa();
        }
        else if (uVar2 == 0x33000000) {
          iVar1 = FUN_0061b39c();
        }
        else if (uVar2 == 0xf0000000) {
          iVar1 = FUN_0061b3ac();
        }
        else if (uVar2 == 0xf1000000) {
          iVar1 = FUN_0061aa11();
        }
        else {
          if (uVar2 != 0xf2000000) {
            if (uVar2 != 0xf3000000) goto LAB_006128dd;
            goto LAB_0061284c;
          }
          iVar1 = FUN_0061ab23();
        }
      }
      else if ((uVar2 == 0xf5000000) || (uVar2 == 0xf6000000)) {
        iVar1 = FUN_0061abc1();
      }
      else if (((uVar2 == 0xf7000000) || (uVar2 == 0xf8000000)) || (uVar2 == 0xf9000000)) {
        iVar1 = FUN_0061acf6();
      }
      else {
        if (uVar2 != 0xfb000000) goto LAB_006128dd;
        iVar1 = FUN_0061b2f2();
      }
      if (iVar1 == -0x7fffbfff) {
LAB_006128dd:
        FUN_005fbec8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34),0x11b4,
                     "cannot map expression to vertex shader instruction set");
        return -0x7fffbfff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

