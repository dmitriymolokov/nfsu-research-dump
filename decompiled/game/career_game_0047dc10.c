/* Decompiled from Speed.exe @ 0047dc10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0047dc10(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_006c8118;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  iVar1 = param_1[1];
  piVar2 = (int *)param_1[2];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

