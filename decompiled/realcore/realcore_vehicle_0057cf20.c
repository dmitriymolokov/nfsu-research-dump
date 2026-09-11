/* Decompiled from Speed.exe @ 0057cf20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_0057cf20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EDI;
  
  iVar2 = 0;
  for (iVar1 = FUN_0057ce10(param_2,param_3,param_4,0,unaff_EDI); iVar1 != 0;
      iVar1 = FUN_0057ce10(param_2,param_3,param_4,iVar1,unaff_EDI)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

