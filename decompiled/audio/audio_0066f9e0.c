/* Decompiled from Speed.exe @ 0066f9e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void __fastcall FUN_0066f9e0(int param_1,int *param_2)

{
  int iVar1;
  int iStack00000004;
  
  if ((*param_2 == 0) && (param_2[3] == *(int *)(param_1 + 0xc0))) {
    iVar1 = param_2[2];
    if (iVar1 == 1) {
      param_2[2] = 2;
      iStack00000004 = param_1;
      FUN_0066f830();
      return;
    }
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0xbc) == 2) {
        *(undefined4 *)(param_1 + 0xbc) = 4;
        return;
      }
    }
    else if ((iVar1 == 3) && (*(int *)(param_1 + 0xbc) == 4)) {
      *(undefined4 *)(param_1 + 0xbc) = 7;
    }
  }
  return;
}

