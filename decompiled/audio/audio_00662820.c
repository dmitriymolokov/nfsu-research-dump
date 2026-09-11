/* Decompiled from Speed.exe @ 00662820 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00662820(undefined2 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 local_4 [2];
  
  puVar1 = param_1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 2;
  FUN_00662730(&param_1,local_4,0,param_2);
  *(char *)((int)puVar1 + 7) = (char)param_1;
  *(char *)(puVar1 + 3) = (char)((uint)param_1 >> 8);
  *(char *)((int)puVar1 + 5) = (char)((uint)param_1 >> 0x10);
  *(char *)(puVar1 + 2) = (char)((uint)param_1 >> 0x18);
  *(char *)(puVar1 + 1) = (char)((ushort)local_4[0] >> 8);
  *(char *)((int)puVar1 + 3) = (char)local_4[0];
  return;
}

