/* Decompiled from Speed.exe @ 00443560 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00443560(undefined4 param_1)

{
  short sVar1;
  int unaff_ESI;
  int *unaff_EDI;
  int local_4;
  
  if (*unaff_EDI == 0) {
    local_4 = -1;
  }
  else {
    local_4 = (*unaff_EDI - *(int *)(unaff_ESI + 0x14)) / 0x14;
  }
  FUN_00571c20(param_1,&local_4,2,2,1);
  sVar1 = (short)local_4;
  if (sVar1 == -1) {
    *unaff_EDI = 0;
    return;
  }
  if (sVar1 < 0) {
    *unaff_EDI = 0;
    return;
  }
  *unaff_EDI = *(int *)(unaff_ESI + 0x14) + sVar1 * 0x14;
  return;
}

