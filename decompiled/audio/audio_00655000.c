/* Decompiled from Speed.exe @ 00655000 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 * FUN_00655000(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((-1 < (int)param_1) && (iVar2 = FUN_00650020(param_1 & 0xff), iVar2 != 0)) {
    for (puVar1 = *(undefined4 **)(iVar2 + 0x140);
        (puVar1 != (undefined4 *)0x0 && (puVar1[3] != param_1)); puVar1 = (undefined4 *)*puVar1) {
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

