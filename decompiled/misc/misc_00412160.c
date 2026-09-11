/* Decompiled from Speed.exe @ 00412160 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412160(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x6c)) {
    do {
      piVar1 = *(int **)(param_1 + 0x68);
      if (*piVar1 == -1) {
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
      }
      else {
        if (*piVar1 != -2) break;
        *(int *)(param_1 + 0x68) = piVar1[1] + (int)piVar1;
      }
    } while (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x6c));
  }
  FUN_0063f190(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x74);
  iVar8 = *(int *)(iVar3 + 0xc);
  while ((iVar8 != 0 && (iVar8 = *(int *)(iVar3 + 0xc), *(int *)(iVar8 + 4) != 1))) {
    uVar4 = *(uint *)(param_1 + 0x68);
    uVar7 = *(int *)(iVar8 + 0x124) - 1;
    if (*(uint *)(param_1 + 0x70) < uVar4) {
      if (uVar4 <= uVar7) break;
LAB_004121d5:
      if (uVar7 < *(uint *)(param_1 + 0x70)) break;
    }
    else if (uVar4 <= uVar7) goto LAB_004121d5;
    if (iVar3 == *(int *)(param_1 + 0x74)) {
      *(int *)(param_1 + 0x74) = iVar8;
    }
    else {
      *(int *)(*(int *)(iVar3 + 8) + 0xc) = iVar8;
    }
    if (iVar3 == *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar3 + 8);
    }
    else {
      *(undefined4 *)(*(int *)(iVar3 + 0xc) + 8) = *(undefined4 *)(iVar3 + 8);
    }
    if (iVar3 == *(int *)(param_1 + 0x78)) {
      iVar8 = *(int *)(iVar3 + 0xc);
      if (iVar8 == 0) {
        iVar8 = *(int *)(iVar3 + 8);
      }
      *(int *)(param_1 + 0x78) = iVar8;
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar3;
    iVar3 = *(int *)(param_1 + 0x74);
    iVar8 = *(int *)(iVar3 + 0xc);
  }
  FUN_0063f1a0(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x68);
  uVar7 = *(uint *)(param_1 + 0x70);
  if (uVar7 < uVar4) {
    iVar3 = (uVar4 - uVar7) + -0x41;
  }
  else {
    iVar3 = (*(int *)(param_1 + 0x40) - uVar7) + -0x40;
    if (iVar3 < *(int *)(param_1 + 0x198)) {
      uVar7 = uVar7 - *(int *)(param_1 + 0x6c);
      iVar3 = *(int *)(*(int *)(param_1 + 0x78) + 0x10);
      if (iVar3 == 1) {
        if ((int)(uVar4 - *(int *)(param_1 + 0x3c)) < (int)(uVar7 + 1)) {
          *(undefined4 *)(param_1 + 0x48) = 2;
          return;
        }
      }
      else if ((int)((uVar4 - *(int *)(param_1 + 0x3c)) + -0x40) < (int)(uVar7 + 1))
      goto LAB_0041232a;
      uVar4 = uVar7 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      if ((uVar4 == 0) || (iVar3 == 1)) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      }
      else {
        *(uint *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x38) - uVar4) + 0x40;
      }
      FUN_0063f1b0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x6c),uVar7);
      puVar2 = *(undefined4 **)(param_1 + 0x6c);
      *puVar2 = 0xffffffff;
      puVar2[1] = 8;
      iVar8 = *(int *)(param_1 + 0x3c);
      iVar3 = iVar8 + uVar7;
      *(int *)(param_1 + 0x6c) = iVar8;
      *(int *)(param_1 + 0x70) = iVar3;
      if (**(int **)(param_1 + 0x68) == -1) {
        *(int *)(param_1 + 0x68) = iVar8;
        iVar3 = (*(int *)(param_1 + 0x40) - iVar3) + -0x40;
      }
      else {
        iVar3 = (int)*(int **)(param_1 + 0x68) + (-1 - iVar3);
      }
    }
  }
  if (((*(int *)(param_1 + 0x60) == 0) && (param_2 != *(int *)(param_1 + 0x50))) &&
     (DAT_0077aadc != '\0')) {
    DAT_00736362 = 1;
  }
  else {
    DAT_00736362 = 0;
    if ((*(int *)(param_1 + 0x60) == 0) || (DAT_0077aadc == '\0')) {
      DAT_00736361 = 0;
    }
    else {
      if (iVar3 < *(int *)(param_1 + 0x58)) goto LAB_0041232a;
      FUN_005648c0();
      FUN_005648c0();
      _DAT_0073635c = FUN_005648c0();
      DAT_00736361 = 1;
    }
    if (*(int *)(param_1 + 0x58) <= iVar3) {
      iVar8 = *(int *)(param_1 + 0x78);
      if (*(int *)(iVar8 + 0x10) == 1) {
        if (*(int *)(iVar8 + 0x11c) < *(int *)(param_1 + 0x18c) + iVar3) {
          *(int *)(param_1 + 0x194) = *(int *)(iVar8 + 0x11c) - *(int *)(param_1 + 0x18c);
        }
        else {
          *(int *)(param_1 + 0x194) = iVar3;
        }
        FUN_0063f1b0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(iVar8 + 0x118),
                     *(undefined4 *)(param_1 + 0x194));
        *(int *)(iVar8 + 0x118) = *(int *)(iVar8 + 0x118) + *(int *)(param_1 + 0x194);
        FUN_00411f40(0,0,param_1);
        return;
      }
      if (iVar3 < 0x20001) {
        iVar8 = *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x194) = iVar3;
        if (iVar3 == *(int *)(param_1 + 0x1a4)) {
          *(int *)(param_1 + 0x194) = iVar3;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x198) * (iVar3 / *(int *)(param_1 + 0x198));
          if ((iVar9 < iVar3) &&
             (iVar5 = iVar8 * (iVar3 / iVar8), iVar9 - iVar5 != 0 && iVar5 <= iVar9)) {
            *(int *)(param_1 + 0x194) = iVar9;
          }
          else {
            *(int *)(param_1 + 0x194) = iVar8 * (iVar3 / iVar8);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x194) = 0x20000;
      }
      iVar3 = FUN_0063a700(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c),
                           *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x194),param_2,
                           param_1);
      *(int *)(param_1 + 400) = iVar3;
      if (iVar3 != 0) {
        if (DAT_0071b7c8 < 1) {
          DAT_0071b7c8 = 0;
        }
        else {
          FUN_005648c0();
          DAT_0071b7c8 = DAT_0071b7c8 + -1;
        }
        FUN_005648c0();
        _DAT_00736358 = FUN_005648c0();
        uVar6 = FUN_005648c0();
        *(undefined4 *)(param_1 + 0x1a8) = uVar6;
        DAT_00736360 = 1;
        FUN_00639f20(*(undefined4 *)(param_1 + 400),FUN_00411f40);
      }
      return;
    }
  }
LAB_0041232a:
  *(undefined4 *)(param_1 + 0x48) = 2;
  return;
}

