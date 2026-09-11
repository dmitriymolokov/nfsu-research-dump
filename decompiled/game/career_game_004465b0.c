/* Decompiled from Speed.exe @ 004465b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004465b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_100 [128];
  
  iVar2 = FUN_00446400(param_1,local_100,0x80,param_2);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (((-1 < local_100[iVar3]) &&
          (iVar1 = *(int *)(&DAT_0072a008 + local_100[iVar3] * 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x28) != 0)) {
        FUN_00446140(iVar1,param_2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

