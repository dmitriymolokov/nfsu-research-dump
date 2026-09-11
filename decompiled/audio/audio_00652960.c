/* Decompiled from Speed.exe @ 00652960 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00652960(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (DAT_00713c7a != '\0') {
    DAT_00713c79 = DAT_00713c79 + '\x01';
    return;
  }
  DAT_00713c7a = 0;
  puVar2 = DAT_00713c70;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    (*(code *)puVar2[2])(puVar2[3]);
    puVar2 = puVar1;
  }
  return;
}

