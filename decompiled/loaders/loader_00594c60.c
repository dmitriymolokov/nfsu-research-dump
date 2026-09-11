/* Decompiled from Speed.exe @ 00594c60 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_00594c60(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00689608;
  local_c = ExceptionList;
  iVar3 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    do {
      iVar2 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    } while (param_1[iVar2] != '\0');
    if (199 < iVar3) {
      return (undefined4 *)0x0;
    }
  }
  ExceptionList = &local_c;
  if (DAT_00734484 == 0) {
    ExceptionList = &local_c;
    FUN_00594b70();
  }
  iVar3 = FUN_00567160();
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_005944f0(param_1,param_3);
  }
  if ((int)puVar4[1] < 0) {
    if (-1 < (int)puVar4[1]) {
      if (puVar4[4] == 0) {
        FUN_0063c2c0(puVar4[3],100);
      }
      else {
        piVar1 = (int *)(puVar4[4] + 8);
        *piVar1 = *piVar1 + -1;
      }
      puVar4[1] = 0xffffffff;
    }
    iVar2 = DAT_00734484;
    iVar3 = *(int *)(DAT_00734484 + 0x18);
    *puVar4 = *(undefined4 *)(DAT_00734484 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar3 + -1;
    *(undefined4 **)(iVar2 + 0x10) = puVar4;
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return puVar4;
}

