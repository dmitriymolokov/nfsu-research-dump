/* Decompiled from Speed.exe @ 0063c200 */
/* Module: EAGL */
/* Ghidra DecompileAll */


char FUN_0063c200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0063a5d0(param_1,param_2,param_3,0);
  if (iVar1 != 0) {
    FUN_00639d70(iVar1);
    iVar2 = FUN_006398f0(iVar1);
    uVar3 = FUN_00639c00(iVar1);
    *param_4 = uVar3;
    return '\x01' - (iVar2 != 1);
  }
  *param_4 = 0;
  return '\0';
}

