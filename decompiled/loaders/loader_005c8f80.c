/* Decompiled from Speed.exe @ 005c8f80 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005c8f80(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  if ((piVar1 != (int *)0x0) &&
     ((iVar2 = *param_1, iVar2 == 4 ||
      ((4 < iVar2 && (((iVar2 < 10 || (iVar2 == 0xf)) || (iVar2 == 0x10)))))))) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  if (param_1[6] != 0) {
    FUN_005c8f42(1);
    param_1[6] = 0;
  }
  return;
}

