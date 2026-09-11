/* Decompiled from Speed.exe @ 00578c70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00578c70(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_006ba644;
  piVar3 = piVar1 + 0x36;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    if (piVar1[0x38] != 0) {
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      piVar1[0x38] = 0;
      FUN_00579140();
    }
    *DAT_0073b0e0 = (int)piVar1;
    piVar3 = piVar1;
    piVar1[1] = (int)DAT_0073b0e0;
    DAT_0073b0e0 = piVar3;
    *piVar1 = (int)&DAT_0073b0dc;
  }
  return;
}

