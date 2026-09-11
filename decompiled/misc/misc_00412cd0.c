/* Decompiled from Speed.exe @ 00412cd0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00412cd0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) &&
     (iVar1 = param_1[0x1f], iVar1 != 0)) {
    while ((*(int *)(iVar1 + 4) == 1 || (*(int *)(iVar1 + 4) == 2))) {
      FUN_00412aa0();
      iVar1 = param_1[0x1f];
    }
    if (param_1[0x1d] != param_1[0x1e]) {
      do {
        iVar1 = param_1[0x1d];
        if (iVar1 == param_1[0x1d]) {
          param_1[0x1d] = *(int *)(iVar1 + 0xc);
        }
        else {
          *(int *)(*(int *)(iVar1 + 8) + 0xc) = *(int *)(iVar1 + 0xc);
        }
        if (iVar1 == param_1[0x1f]) {
          param_1[0x1f] = *(int *)(iVar1 + 8);
        }
        else {
          *(int *)(*(int *)(iVar1 + 0xc) + 8) = *(int *)(iVar1 + 8);
        }
        if (iVar1 == param_1[0x1e]) {
          iVar3 = *(int *)(iVar1 + 0xc);
          if (iVar3 == 0) {
            iVar3 = *(int *)(iVar1 + 8);
          }
          param_1[0x1e] = iVar3;
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        *(int *)(iVar1 + 0xc) = param_1[0x20];
        param_1[0x20] = iVar1;
      } while (param_1[0x1d] != param_1[0x1e]);
    }
    *(undefined4 *)(param_1[0x1e] + 4) = 4;
    iVar1 = 0;
    if (0 < param_1[0xd]) {
      iVar3 = 0;
      do {
        *(undefined4 *)(param_1[0xc] + 8 + iVar3) = 0;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar1 < param_1[0xd]);
    }
    FUN_00411b70(param_1[0x19]);
    piVar2 = (int *)param_1[0x1a];
    if (piVar2 != (int *)param_1[0x1b]) {
      do {
        if (*piVar2 == -1) {
          piVar2 = (int *)param_1[0xf];
        }
        else {
          uVar4 = piVar2[1] & 0xffffff;
          *piVar2 = -2;
          piVar2[1] = uVar4;
          piVar2 = (int *)((int)piVar2 + uVar4);
        }
      } while (piVar2 != (int *)param_1[0x1b]);
    }
    if (param_1[0x12] == 2) {
      if (piVar2 == (int *)param_1[0xf]) {
        param_1[0x1b] = param_1[0xe];
        param_1[0xf] = param_1[0xe];
        param_1[0x12] = 0;
        return;
      }
      iVar1 = 0x40 - (param_1[0x1b] & 0x3fU);
      if (iVar1 == 0x40) {
        iVar1 = 0;
      }
      *(uint *)((param_1[0x1b] - uVar4) + 4) = iVar1 + uVar4;
      param_1[0x1b] = param_1[0x1b] + iVar1;
      param_1[0x12] = 0;
    }
  }
  return;
}

