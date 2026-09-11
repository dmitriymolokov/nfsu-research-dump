/* Decompiled from Speed.exe @ 005e8a64 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005e8a64(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_2;
  iVar2 = param_1;
  piVar4 = param_3;
  if (param_3 == (int *)0x0) {
    piVar4 = &param_1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 8) {
    iVar2 = *(int *)(param_1 + 0x10);
    piVar5 = piVar4;
    if ((iVar2 == 1) || (iVar2 == 0)) {
      *param_2 = 1;
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    else {
      if (iVar2 != 2) {
        return -0x7fffbffb;
      }
      *param_2 = *(int *)(param_1 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x18);
    }
  }
  else {
    if (iVar1 != 7) {
      if (iVar1 != 1) {
        return -0x7fffbffb;
      }
      *param_2 = 0;
      *piVar4 = 0;
      do {
        iVar1 = FUN_005e8a64(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 8) + 0x18) + 0x20),&param_3,
                             &param_2);
        if (iVar1 < 0) {
          return iVar1;
        }
        *piVar5 = *piVar5 + (int)param_3;
        piVar3 = (int *)*piVar4;
        if ((int *)*piVar4 < param_2) {
          piVar3 = param_2;
        }
        *piVar4 = (int)piVar3;
        iVar2 = *(int *)(iVar2 + 0xc);
      } while (iVar2 != 0);
      return 0;
    }
    iVar1 = FUN_005e8a64(*(undefined4 *)(param_1 + 0x10),param_2,piVar4);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar2 = *(int *)(iVar2 + 0x14) * *piVar5;
  }
  *piVar5 = iVar2;
  return 0;
}

