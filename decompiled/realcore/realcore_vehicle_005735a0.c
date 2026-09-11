/* Decompiled from Speed.exe @ 005735a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005735a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar4 = DAT_007345d0;
  while( true ) {
    piVar5 = (int *)FUN_00572b50("DEMO_MODE_SNAPSHOT",0);
    if (piVar5 == (int *)0x0) break;
    iVar1 = *piVar5;
    piVar2 = (int *)piVar5[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    puVar3 = *(undefined4 **)(iVar4 + 0x6c);
    *puVar3 = piVar5;
    *(int **)(iVar4 + 0x6c) = piVar5;
    piVar5[1] = (int)puVar3;
    *piVar5 = iVar4 + 0x68;
  }
  piVar5 = (int *)FUN_00572b50("REPLAY_MANAGER_STATE",0);
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    piVar2 = (int *)piVar5[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    puVar3 = *(undefined4 **)(iVar4 + 0x6c);
    *puVar3 = piVar5;
    *(int **)(iVar4 + 0x6c) = piVar5;
    piVar5[1] = (int)puVar3;
    *piVar5 = iVar4 + 0x68;
  }
  *(undefined1 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  return;
}

