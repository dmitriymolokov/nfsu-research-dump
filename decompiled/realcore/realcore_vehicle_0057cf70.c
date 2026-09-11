/* Decompiled from Speed.exe @ 0057cf70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_0057cf70(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(DAT_00734588 + 0xd0);
  do {
    if (*piVar2 == param_2) {
      return iVar1 * 0xc90 + DAT_00734588;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x324;
  } while (iVar1 < 0x23);
  return 0;
}

