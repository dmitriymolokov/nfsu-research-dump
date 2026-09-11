/* Decompiled from Speed.exe @ 004399a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_004399a0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) | param_2;
  iVar2 = FUN_00439930(param_2);
  piVar1 = (int *)(param_1 + 0x18c + iVar2 * 4);
  *piVar1 = *piVar1 + 1;
  return;
}

