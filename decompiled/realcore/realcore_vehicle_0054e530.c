/* Decompiled from Speed.exe @ 0054e530 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0054e530(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  piVar1 = &DAT_0073d82c;
  do {
    if (*piVar1 == param_2) {
      puVar3 = &DAT_0073d828 + iVar2 * 5;
      goto LAB_0054e549;
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x73d868);
  puVar3 = (undefined4 *)0x0;
LAB_0054e549:
  puVar3[1] = 0xffffffff;
  *puVar3 = 0;
  puVar3[4] = 0;
  if (puVar3[3] != 0) {
    FUN_006640b0(puVar3[3]);
  }
  if (puVar3[2] != 0) {
    FUN_00663960(puVar3[2]);
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  DAT_0073017c = DAT_0073017c + -1;
  return;
}

