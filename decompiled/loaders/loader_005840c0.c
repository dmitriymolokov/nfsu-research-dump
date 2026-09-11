/* Decompiled from Speed.exe @ 005840c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005840c0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  int *unaff_EDI;
  
  FUN_00571ea0(0,"Average");
  FUN_00571c20(unaff_ESI,unaff_EDI + 1,1,1,0);
  FUN_00571c20(unaff_ESI,(byte *)((int)unaff_EDI + 5),1,1,0);
  FUN_00571c20(unaff_ESI,(int)unaff_EDI + 6,1,1,0);
  FUN_00571c20(unaff_ESI,(int)unaff_EDI + 7,1,1,0);
  FUN_00571c20(unaff_ESI,param_1,
               (uint)*(byte *)((int)unaff_EDI + 5) * (uint)*(byte *)(unaff_EDI + 1),0xffffffff,0);
  if ((*(char *)(unaff_ESI + 0x3d) != '\0') || (*(char *)(unaff_ESI + 0x3c) != '\0')) {
    (**(code **)(*unaff_EDI + 4))();
  }
  iVar1 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar1 + 0x58 + unaff_ESI);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

