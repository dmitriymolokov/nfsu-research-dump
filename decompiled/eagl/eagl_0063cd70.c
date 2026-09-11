/* Decompiled from Speed.exe @ 0063cd70 */
/* Module: EAGL */
/* Ghidra DecompileAll */


bool FUN_0063cd70(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  
  puVar1 = param_2;
  cVar2 = FUN_0063c200(*param_2,6,param_1,&param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_0063c290(param_2,0,puVar1[1],puVar1[2],param_1 + -1);
    FUN_0063c2c0(param_2,param_1 + -1);
    return iVar3 == puVar1[2];
  }
  return false;
}

