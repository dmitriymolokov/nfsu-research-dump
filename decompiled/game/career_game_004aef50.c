/* Decompiled from Speed.exe @ 004aef50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004aef50(undefined4 param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int extraout_EDX;
  undefined1 local_4 [4];
  
  FUN_004f6970(*(undefined4 *)(param_2 + 0xc));
  if (*(int *)(extraout_EDX + 0xc) != 0) {
    fVar2 = param_3 * *(float *)(extraout_EDX + 0x10);
    fVar1 = *(float *)(extraout_EDX + 4);
    FUN_004f7260(local_4,&param_3);
    FUN_004f7140(fVar2 + fVar1,param_3);
  }
  return;
}

