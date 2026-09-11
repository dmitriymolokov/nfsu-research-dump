/* Decompiled from Speed.exe @ 0051be80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0051be80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00744368;
  while (((piVar1[-1] != param_1 && (*piVar1 != param_1)) && (piVar1[1] != param_1))) {
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + 1;
    if (0x7449c7 < (int)piVar1) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(iVar2 * 0x18 + 0x744360);
}

