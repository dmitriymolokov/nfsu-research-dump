/* Decompiled from Speed.exe @ 0057cfa0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int __fastcall FUN_0057cfa0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[2] < 0x23) {
    do {
      iVar1 = param_2[2] * 0xc90 + DAT_00734588;
      param_2[2] = param_2[2] + 1;
      if (((*(int *)(iVar1 + 0xc54) == *param_2) && (*(char *)(iVar1 + 0x40) != '\0')) &&
         (param_2[1] == -1)) {
        if (*(int *)(iVar1 + 0xc54) == 1) {
          return iVar1;
        }
        if ('\0' < *(char *)(iVar1 + 0xd9)) {
          return iVar1;
        }
      }
    } while (param_2[2] < 0x23);
  }
  return 0;
}

