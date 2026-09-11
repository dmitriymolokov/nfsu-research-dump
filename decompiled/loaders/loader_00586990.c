/* Decompiled from Speed.exe @ 00586990 */
/* Module: Loader */
/* Ghidra DecompileAll */

void __fastcall FUN_00586990(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_2[0x61];
  if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x34) != (undefined4 *)0x0)) {
    **(undefined4 **)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  *param_2 = (undefined4 *)0x006c8584;
  return;
}

