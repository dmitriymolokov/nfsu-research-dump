/* Decompiled from Speed.exe @ 0044ab50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0044ab50(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3;
  iVar2 = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (**(int **)(param_1 + 0x3d8) == 0) {
      *(undefined1 *)(param_1 + 0x3ec) = 0xff;
    }
    else {
      *(undefined1 *)(param_1 + 0x3ec) = *(undefined1 *)(**(int **)(param_1 + 0x3d8) + 10);
    }
    param_2 = 0;
    if (param_4 < 0) {
      FUN_0044baf0(param_1,iVar2,param_3,&param_2,0);
      param_4 = param_2;
    }
    piVar1 = *(int **)(param_1 + 0x3d8);
    *piVar1 = iVar2;
    piVar1[1] = iVar3;
    piVar1[2] = param_4;
  }
  return;
}

