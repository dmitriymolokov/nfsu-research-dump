/* Decompiled from Speed.exe @ 00546d10 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00546d10(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00549060(param_1);
  uVar2 = FUN_00546cb0();
  *puVar1 = uVar2;
  FUN_005472f0();
  FUN_00547870(param_1);
  puVar1 = &DAT_0073ddc0;
  do {
    if (((puVar1[1] != -1) && (puVar1 != (undefined4 *)0x0)) && (2 < (int)puVar1[4])) {
      FUN_00547870(param_1);
    }
    puVar1 = puVar1 + 8;
  } while ((int)puVar1 < 0x73de20);
  return;
}

