/* Decompiled from Speed.exe @ 0058df00 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058df00(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar2 = DAT_00737b28;
  if ((unaff_EDI != 0) && (param_1 != 0)) {
    puVar1 = (undefined4 *)FUN_0040a880();
    for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[2] == unaff_EDI) {
        puVar2[4] = puVar2[4] + 1;
        return 1;
      }
    }
    puVar2 = (undefined4 *)FUN_00567160();
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[2] = unaff_EDI;
      puVar2[3] = param_1;
      puVar2[4] = 1;
      *DAT_00737b2c = puVar2;
      puVar1 = puVar2;
      puVar2[1] = DAT_00737b2c;
      DAT_00737b2c = puVar1;
      *puVar2 = &DAT_00737b28;
      DAT_0073131c = DAT_0073131c + 1;
      if (DAT_00731328 < DAT_0073131c) {
        DAT_00731328 = DAT_0073131c;
      }
      return 1;
    }
  }
  return 0;
}

