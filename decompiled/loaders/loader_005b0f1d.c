/* Decompiled from Speed.exe @ 005b0f1d */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b0f1d(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint local_c;
  int local_8;
  
  piVar5 = param_1;
  local_8 = 0;
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  param_1 = (int *)0x1;
  if (piVar1[4] != 0) {
    param_1 = (int *)piVar1[4];
  }
  if (-1 < iVar3) {
    if (iVar3 < 4) {
      if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) {
        *param_2 = *param_2 + piVar1[6] * piVar1[5] * (int)param_1 * 4;
        *piVar5 = *piVar5 + 0x1c;
        return 0;
      }
    }
    else if (iVar3 == 4) {
      if ((3 < iVar2) && ((iVar2 < 10 || ((0xe < iVar2 && (iVar2 < 0x11)))))) {
        for (; param_1 != (int *)0x0; param_1 = (int *)((int)param_1 + -1)) {
          *(undefined4 *)*param_3 = *(undefined4 *)*param_2;
          *param_3 = *param_3 + 4;
          *param_2 = *param_2 + 4;
        }
        *piVar5 = *piVar5 + 0x14;
        return 0;
      }
    }
    else if (iVar3 == 5) {
      uVar4 = piVar1[5];
      *piVar5 = (int)(piVar1 + 6);
      do {
        if (param_1 == (int *)0x0) {
          return local_8;
        }
        local_c = 0;
        *piVar5 = (int)(piVar1 + 6);
        if (uVar4 != 0) {
          do {
            local_8 = FUN_005b0f1d(piVar5,param_2,param_3);
            if (local_8 < 0) {
              return local_8;
            }
            local_c = local_c + 1;
          } while (local_c < uVar4);
        }
        param_1 = (int *)((int)param_1 + -1);
      } while( true );
    }
  }
  return -0x7fffbffb;
}

