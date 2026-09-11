/* Decompiled from Speed.exe @ 00577290 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00577290(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_1 + 8;
  *param_1 = &PTR_FUN_006ba6d8;
  iVar4 = DAT_007306cc;
  piVar1 = (int *)*piVar5;
  while (piVar1 != piVar5) {
    piVar1 = (int *)*piVar5;
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1[3] != 0) {
      *(undefined2 *)(piVar1[3] + 6) = 0xffff;
    }
    iVar2 = *(int *)(iVar4 + 0x18);
    *piVar1 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*piVar5;
  }
  iVar4 = param_1[1];
  piVar5 = (int *)param_1[2];
  *piVar5 = iVar4;
  *(int **)(iVar4 + 4) = piVar5;
  FUN_00441fa0();
  return;
}

