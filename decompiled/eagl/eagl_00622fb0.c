/* Decompiled from Speed.exe @ 00622fb0 */
/* Module: EAGL */
/* Ghidra DecompileModule */


void FUN_00622fb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (puVar2 = DAT_0070a4a4; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[5]) {
    if (*(char *)(puVar2 + 3) == '\0') {
      piVar1 = puVar2 + 4;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_00709d80 + 0x138))(DAT_00709d80,*puVar2);
      }
      *puVar2 = 0;
    }
  }
  return;
}

