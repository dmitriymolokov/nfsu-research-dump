/* Decompiled from Speed.exe @ 00589270 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00589270(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *unaff_ESI;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  uVar2 = FUN_00674898();
  uVar3 = FUN_00674898();
  uVar4 = FUN_00674898();
  uVar1 = *param_1;
  unaff_ESI[1] = (float)extraout_ST1;
  unaff_ESI[2] = (float)extraout_ST0;
  *(undefined1 *)(unaff_ESI + 3) = uVar2;
  *unaff_ESI = uVar1;
  *(undefined1 *)((int)unaff_ESI + 0xd) = uVar3;
  *(undefined1 *)((int)unaff_ESI + 0xe) = uVar4;
  return;
}

