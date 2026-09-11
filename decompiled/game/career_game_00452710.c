/* Decompiled from Speed.exe @ 00452710 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00452710(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2 + 0xe6;
  if (*piVar1 != 1) {
    *piVar1 = 1;
    param_2[0xe7] = 0;
    *(undefined1 *)(param_2 + 0xe9) = 0;
    param_2[0xe8] = 0;
  }
  FUN_0045ae10(piVar1,param_1 + 0x20,param_2,0,2);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  if ((_DAT_006b76b4 <= (float)(DAT_0073ad34 - *(int *)(param_1 + 0x200)) * _DAT_006cca38) &&
     (*(char *)(param_1 + 0x204) == '\0')) {
    if ((DAT_0078a368 == 0) || (*(int *)(*(int *)(*param_2 + 0x14) + 4) != 2)) {
      *(undefined4 *)(*param_2 + 0x87c) = 1;
    }
    *(undefined1 *)(param_1 + 0x204) = 1;
  }
  return;
}

