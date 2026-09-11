/* Decompiled from Speed.exe @ 005478d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005478d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0073ddc0;
  do {
    iVar1 = puVar2[1];
    if (((iVar1 != -1) && (puVar2 != (undefined4 *)0x0)) && (iVar1 != param_1)) {
      FUN_005479e0(iVar1,param_2);
    }
    puVar2 = puVar2 + 8;
  } while ((int)puVar2 < 0x73de20);
  return;
}

