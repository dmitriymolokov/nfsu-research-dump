/* Decompiled from Speed.exe @ 00666d60 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_00666d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00549460(0x44);
  puVar3 = puVar1;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar1 = param_1;
  FUN_00666c30();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return puVar1;
}

