/* Decompiled from Speed.exe @ 004aeee0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004aeee0(float param_1)

{
  undefined4 uVar1;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  FUN_00496040(param_1 * *(float *)(unaff_EDI + 0x10));
  uVar1 = *(undefined4 *)(unaff_EDI + 4);
  FUN_004f6d10(local_4,&param_1);
  FUN_004f7000(uVar1,param_1);
  FUN_004f7350(&param_1,local_4);
  *(float *)(unaff_EDI + 0x14) = param_1;
  return;
}

