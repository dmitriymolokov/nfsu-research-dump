/* Decompiled from Speed.exe @ 0047b220 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0047b220(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_0047cda0(param_2,&local_4,&local_8);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00627d60(local_8);
    *(int **)(unaff_ESI + 0x38 + unaff_EDI * 4) = piVar2;
    (**(code **)(*piVar2 + 0x10))(unaff_ESI + 0x60);
    if (*(int *)(unaff_ESI + 0x38 + unaff_EDI * 4) != 0) {
      *(undefined4 *)(unaff_ESI + 0x78) = 1;
    }
    *(undefined4 *)(unaff_ESI + 0x78) = 1;
    return 1;
  }
  return 0;
}

