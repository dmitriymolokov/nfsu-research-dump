/* Decompiled from Speed.exe @ 0062c010 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0062c010(int param_1,float param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < DAT_006cc7a4) {
    fVar1 = param_2 + _DAT_006a7eb0;
  }
  else {
    fVar1 = param_2 - _DAT_006a7eb0;
  }
  iVar3 = (int)ROUND(fVar1);
  if (iVar3 < 0) {
    FUN_0062bef0(0,param_3,param_5);
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc) + -1;
  if (iVar2 <= iVar3) {
    FUN_0062bef0(iVar2,param_3,param_5);
    return;
  }
  if ((param_2 - (float)iVar3 != DAT_006cc7a4) && (param_4 != '\0')) {
    FUN_0062bcc0(param_2 - (float)iVar3,iVar3,iVar3 + 1,param_3,param_5);
    return;
  }
  FUN_0062bef0(iVar3,param_3,param_5);
  return;
}

