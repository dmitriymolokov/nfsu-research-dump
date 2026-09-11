/* Decompiled from Speed.exe @ 005d7803 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d7803(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_006a0be4;
  if (puVar1 == (undefined4 *)0x0) goto LAB_005d7828;
  while( true ) {
    (**(code **)*puVar1)(1);
LAB_005d7828:
    if (param_1[3] == 0) break;
    puVar1 = (undefined4 *)param_1[3];
    param_1[3] = puVar1[3];
    puVar1[3] = 0;
  }
  return;
}

