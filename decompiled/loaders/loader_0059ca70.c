/* Decompiled from Speed.exe @ 0059ca70 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0059ca70(int param_1,int param_2)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  FUN_00571ea0(0,"QuickSpline");
  puVar1 = (ushort *)(param_1 + 0x1e);
  FUN_00571c20(unaff_ESI,puVar1,2,2,0);
  if (*(char *)(unaff_ESI + 0x3d) != '\0' || *(char *)(unaff_ESI + 0x3c) != '\0') {
    FUN_0059cb20();
  }
  iVar3 = 0;
  if (*puVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_00571c20(unaff_ESI,*(int *)(param_1 + 0x24) + iVar4,param_2 * 4,0xffffffff,0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < (int)(uint)*puVar1);
  }
  iVar3 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar3 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar3 + 0x58 + unaff_ESI);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

