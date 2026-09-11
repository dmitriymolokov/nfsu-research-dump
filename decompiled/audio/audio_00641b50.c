/* Decompiled from Speed.exe @ 00641b50 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00641b50(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_ESI;
  
  uVar3 = 0;
  if ((unaff_ESI != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    piVar4 = (int *)param_1[2];
    if (unaff_ESI == piVar4) {
      *param_1 = iVar1 + -1;
      if (unaff_ESI != (int *)param_1[3]) {
        param_1[2] = *unaff_ESI;
        *unaff_ESI = 0;
        param_1[1] = param_1[1] | 1;
        return 1;
      }
      param_1[2] = 0;
      param_1[3] = 0;
      *unaff_ESI = 0;
      param_1[1] = param_1[1] | 1;
      return 1;
    }
    if (*piVar4 != 0) {
      do {
        piVar2 = (int *)*piVar4;
        if (piVar2 == unaff_ESI) break;
        piVar4 = piVar2;
      } while (*piVar2 != 0);
      if (((int *)*piVar4 != (int *)0x0) && ((int *)*piVar4 == unaff_ESI)) {
        *param_1 = iVar1 + -1;
        *piVar4 = *unaff_ESI;
        uVar3 = 1;
        if (unaff_ESI == (int *)param_1[3]) {
          param_1[3] = (int)piVar4;
        }
        *unaff_ESI = 0;
        param_1[1] = param_1[1] | 1;
      }
    }
  }
  return uVar3;
}

