/* Decompiled from Speed.exe @ 0065fc80 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065fc80(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x60 + DAT_0071666c;
  puVar1 = (undefined4 *)FUN_00650fd0(param_3[1]);
  (*(code *)param_3[3])(puVar1,*param_3,param_2);
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(param_3 + 2);
  *puVar1 = param_3[4];
  puVar1[1] = param_3[5];
  *(undefined1 *)((int)puVar1 + 0x1a) = 0;
  FUN_006577e0(iVar2 + 0x40,puVar1);
  return;
}

