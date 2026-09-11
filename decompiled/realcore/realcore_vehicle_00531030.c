/* Decompiled from Speed.exe @ 00531030 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00531030(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x351) == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x10) =
         *(undefined4 *)(*(int *)(param_1 + 0x21c) + 0x40);
    FUN_00532840();
    if (*(char *)(*(int *)(param_1 + 0x2fc) + 0x18) != '\0') {
      FUN_00532840();
    }
    uVar1 = FUN_00674898();
    *(undefined4 *)(param_1 + 0x24c) = uVar1;
  }
  return;
}

