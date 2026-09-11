/* Decompiled from Speed.exe @ 0066f2a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066f2a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00662ce0(*param_1);
    iVar1 = param_1[0xc];
    while (iVar1 != 0) {
      puVar2 = (undefined4 *)param_1[0xc];
      param_1[0xc] = *puVar2;
      FUN_00447030(puVar2);
      iVar1 = param_1[0xc];
    }
    FUN_00668cf0(param_1 + 3);
    FUN_00447030(param_1);
  }
  return;
}

