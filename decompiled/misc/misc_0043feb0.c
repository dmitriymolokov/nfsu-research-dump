/* Decompiled from Speed.exe @ 0043feb0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_0043feb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_0077b190;
  iVar3 = 0;
  puVar2 = (undefined4 *)FUN_0040a880();
  for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[2] == param_1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

