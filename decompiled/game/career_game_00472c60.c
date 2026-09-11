/* Decompiled from Speed.exe @ 00472c60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_00472c60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = DAT_00779bd8;
  puVar2 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar2) {
      return (undefined4 *)0x0;
    }
    if (puVar1[6] == unaff_EDI) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if ((param_1 != 0) && (*(char *)((int)puVar1 + 0x3e) == '\0')) {
    FUN_00472e40();
  }
  return puVar1;
}

