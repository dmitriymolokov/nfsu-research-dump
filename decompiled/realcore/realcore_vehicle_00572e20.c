/* Decompiled from Speed.exe @ 00572e20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00572e20(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  iVar4 = param_1;
  FUN_00571ea0(0,"ReplayManager");
  FUN_00571c20(unaff_ESI,param_1 + 0x50,4,4,1);
  FUN_00571c20(unaff_ESI,param_1 + 0x54,4,4,1);
  piVar1 = (int *)(param_1 + 0xa8);
  FUN_00571c20(unaff_ESI,piVar1,4,4,1);
  if (0 < *piVar1) {
    param_1 = param_1 + 0xb0;
    iVar3 = 0;
    do {
      FUN_00571c20(unaff_ESI,param_1,4,4,1);
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < *piVar1);
  }
  piVar1 = (int *)(iVar4 + 0x40b0);
  FUN_00571c20(unaff_ESI,piVar1,4,4,1);
  iVar3 = 0;
  if (0 < *piVar1) {
    iVar4 = iVar4 + 0x40b8;
    do {
      FUN_00571c20(unaff_ESI,iVar4,0x10,0xffffffff,0);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *piVar1);
  }
  iVar4 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar4 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar4 + 0x58 + unaff_ESI);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

