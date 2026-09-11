/* Decompiled from Speed.exe @ 00642150 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_00642150(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0063f190(param_1 + 0x18);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      puVar2 = (undefined4 *)*puVar2;
      while ((puVar2 != (undefined4 *)0x0 && (param_2 = param_2 + -1, param_2 != 0))) {
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    if ((puVar2 == (undefined4 *)0x0) || (iVar1 = FUN_00641b50(), iVar1 != 0)) goto LAB_006421a0;
  }
  puVar2 = (undefined4 *)0x0;
LAB_006421a0:
  FUN_0063f1a0(param_1 + 0x18);
  return puVar2;
}

