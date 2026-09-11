/* Decompiled from Speed.exe @ 00642540 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00642540(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_retaddr;
  
  puVar3 = &DAT_0070ff34;
  do {
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
  } while (0x70fe37 < (int)puVar3);
  FUN_006720ea(0);
  piVar1 = &DAT_0070fe38;
  do {
    if (*piVar1 == unaff_retaddr) {
      return;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x70ff38);
  iVar2 = 0;
  do {
    if ((&DAT_0070fe38)[iVar2] == 0) {
      (&DAT_0070fe38)[iVar2] = unaff_retaddr;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  return;
}

