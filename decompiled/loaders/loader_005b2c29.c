/* Decompiled from Speed.exe @ 005b2c29 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005b2c29(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (param_1 != (char *)0x0) {
    local_8 = param_1;
    do {
      cVar1 = *local_8;
      local_8 = local_8 + 1;
    } while (cVar1 != '\0');
    local_8 = local_8 + (1 - (int)(param_1 + 1));
  }
  iVar2 = FUN_005b2b74(&local_8,4,param_2);
  if ((-1 < iVar2) && (param_1 != (char *)0x0)) {
    FUN_005b2b74(param_1,local_8,0);
  }
  return;
}

