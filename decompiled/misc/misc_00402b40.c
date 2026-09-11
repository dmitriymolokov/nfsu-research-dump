/* Decompiled from Speed.exe @ 00402b40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00402b40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = DAT_0078e974;
  if (unaff_EDI != 0) {
    puVar2 = (undefined4 *)FUN_0040a880();
    for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == unaff_EDI) {
        *(undefined4 **)(param_1 + 0x1c) = puVar1;
        return 1;
      }
    }
  }
  return 0;
}

