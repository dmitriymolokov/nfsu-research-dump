/* Decompiled from Speed.exe @ 004e77c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e77c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(DAT_0073578c + 8) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_0073578c + 8) + 0xe4), iVar1 != 0)) {
    do {
      if (*(int *)(iVar1 + 0x1c) != 0) {
        iVar2 = iVar1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    if (iVar2 != 0) {
      if (param_2 == -0xd2f2779) {
        iVar2 = FUN_004f3f90(&DAT_00746104);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) &&
           (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
          (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0xf2d0d887,0,0,*(int *)(iVar2 + 0x18));
          return;
        }
      }
      else {
        iVar2 = FUN_004f3f90(&DAT_00746104);
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) &&
           (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
          (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x911ab364,0,0,*(int *)(iVar2 + 0x18));
        }
      }
    }
  }
  return;
}

