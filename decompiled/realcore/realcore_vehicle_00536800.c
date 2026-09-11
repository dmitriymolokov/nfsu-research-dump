/* Decompiled from Speed.exe @ 00536800 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00536800(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 4;
  do {
    iVar2 = 0xb;
    do {
      FUN_00536450(param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  do {
    FUN_00536450(param_2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((DAT_0073619c != (int *)0x0) && (*param_1 != *DAT_0073619c)) {
    *param_1 = *DAT_0073619c;
  }
  return;
}

