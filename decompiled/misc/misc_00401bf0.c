/* Decompiled from Speed.exe @ 00401bf0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_00401bf0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_2;
      (puVar1 != param_2 && (iVar2 = iVar2 + 1, puVar1 != (undefined4 *)0x0));
      puVar1 = (undefined4 *)*puVar1) {
  }
  return iVar2;
}

