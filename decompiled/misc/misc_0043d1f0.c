/* Decompiled from Speed.exe @ 0043d1f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043d1f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

