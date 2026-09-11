/* Decompiled from Speed.exe @ 0058dff0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0058dff0(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_00567160();
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    puVar2[2] = 0;
    puVar2[3] = param_1;
    puVar1 = PTR_DAT_006f03f8;
    puVar3 = *(undefined4 **)(PTR_DAT_006f03f8 + 4);
    *puVar3 = puVar2;
    *(undefined4 **)(puVar1 + 4) = puVar2;
    *puVar2 = puVar1;
    puVar2[1] = puVar3;
    _DAT_00731318 = _DAT_00731318 + 1;
    puVar3 = puVar2;
  }
  return puVar3;
}

