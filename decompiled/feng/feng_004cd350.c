/* Decompiled from Speed.exe @ 004cd350 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004cd350(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_006c41f4;
  if ((DAT_00745e40 == 1) || (DAT_00777b4c == 1)) {
    piVar2 = &DAT_00746a8c;
    do {
      if (*piVar2 == param_1[2]) goto LAB_004cd3ae;
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x746a94);
    cVar1 = FUN_004cd460();
    if (((cVar1 != '\0') && (DAT_006f1dd8 != 0)) && (*(int **)(DAT_007356a8 + 0xc0) != (int *)0x0))
    {
      (**(code **)(**(int **)(DAT_007356a8 + 0xc0) + 0x14))(0xb);
    }
  }
LAB_004cd3ae:
  if (((*(char *)(param_1 + 1) != '\0') && (*(int *)(DAT_007356a8 + 0x104) != 0)) &&
     (piVar2 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24), piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004cd3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0xa0))();
    return;
  }
  return;
}

