/* Decompiled from Speed.exe @ 00425030 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_00425030(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

