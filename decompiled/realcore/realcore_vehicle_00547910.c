/* Decompiled from Speed.exe @ 00547910 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00547910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_0073ddc0;
  do {
    iVar2 = puVar3[1];
    if ((iVar2 != -1) && (puVar3 != (undefined4 *)0x0)) {
      FUN_004388d0(param_3);
      uVar1 = FUN_006497c0();
      iVar2 = FUN_0054e480(iVar2,uVar1);
      if (iVar2 != 0) {
        if (2 < DAT_006f3d88) {
          FUN_004388d0();
          FUN_006497c0();
        }
        FUN_004388d0(param_3);
        FUN_00548d70(param_1);
      }
    }
    puVar3 = puVar3 + 8;
  } while ((int)puVar3 < 0x73de20);
  return;
}

