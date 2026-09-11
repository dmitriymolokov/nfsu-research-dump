/* Decompiled from Speed.exe @ 00459ac0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00459ac0(char *param_1,int param_2)

{
  char in_AL;
  int iVar1;
  undefined1 local_20 [28];
  
  if (((in_AL == '\0') || ((DAT_006fbf14 == 0 && (*(short *)(param_2 + 10) == DAT_006fbf18)))) &&
     (iVar1 = 0, '\0' < *param_1)) {
    do {
      if (param_2 != 0) {
        FUN_004650d0(local_20);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  return;
}

