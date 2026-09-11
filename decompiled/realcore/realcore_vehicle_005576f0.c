/* Decompiled from Speed.exe @ 005576f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005576f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0054d590();
  iVar2 = FUN_004f65d0();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0xff;
  }
  puVar3 = &DAT_00735468;
  for (iVar2 = 0x19; iVar1 = DAT_0073578c, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_007354cc = 0;
  if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x18) != 0)) {
    FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
  }
  return;
}

