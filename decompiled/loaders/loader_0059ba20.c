/* Decompiled from Speed.exe @ 0059ba20 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0059ba20(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"DrivingLocation");
  FUN_00442c20(&DAT_0077af20);
  FUN_00442c80(&DAT_0077af20);
  FUN_00571c20(param_2,param_1 + 8,1,4,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10;
  *(int *)(iVar1 + param_2 + 0x58) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0x58 + param_2);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

