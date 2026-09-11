/* Decompiled from Speed.exe @ 006230a0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_006230a0(void)

{
  int iVar1;
  
  for (iVar1 = DAT_0070a4a8; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (*(int *)(iVar1 + 4) != 0) {
      (**(code **)(*DAT_00709d80 + 0x15c))(DAT_00709d80,*(int *)(iVar1 + 4),iVar1);
    }
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

