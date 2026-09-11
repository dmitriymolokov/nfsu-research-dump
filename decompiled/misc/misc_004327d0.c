/* Decompiled from Speed.exe @ 004327d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_004327d0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 300)) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x128) + 1);
    do {
      if (unaff_EDI == *pcVar2) {
        return iVar1 * 0x750 + *(int *)(param_1 + 0x128);
      }
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + 0x750;
    } while (iVar1 < *(int *)(param_1 + 300));
  }
  return 0;
}

