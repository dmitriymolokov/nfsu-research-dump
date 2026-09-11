/* Decompiled from Speed.exe @ 004c7360 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c7360(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  piVar1 = &DAT_006fad60;
  do {
    if (*piVar1 == *(int *)(*(int *)(param_2 + 0x40) + 8)) {
      puVar3 = &DAT_006fad60 + iVar2 * 4;
      goto LAB_004c7381;
    }
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6fadf0);
  puVar3 = (undefined4 *)0x0;
LAB_004c7381:
  *(undefined4 *)(&DAT_0075f204 + puVar3[1] * 4) = 1;
  *(undefined1 *)(param_2 + 0x88) = 1;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x12121212,0,0,*(int *)(iVar2 + 0x18));
  }
  return;
}

