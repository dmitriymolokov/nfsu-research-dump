/* Decompiled from Speed.exe @ 00651490 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00651490(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x8c + DAT_00713f48;
  iVar1 = FUN_00654e20(param_1,*(undefined2 *)(iVar2 + 0x24));
  *(short *)(iVar2 + 0x62 + param_1 * 2) =
       (short)((int)*(char *)(iVar2 + 0x61 + param_1) * (int)*(char *)(iVar2 + 0x60 + param_1) *
               (int)*(char *)(iVar1 + 2) >> 6);
  return;
}

