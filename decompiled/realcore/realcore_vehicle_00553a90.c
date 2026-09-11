/* Decompiled from Speed.exe @ 00553a90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00553a90(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  int unaff_EDI;
  
  if (((*(char *)(unaff_EDI + 5) != '\0') && (*(char *)(unaff_EDI + 0x1b8) == '\0')) &&
     (*(int *)(unaff_EDI + 0x1c0) == 0)) {
    *(undefined1 *)(unaff_EDI + 0x1b8) = 1;
    pvVar1 = _malloc(0x21);
    *(void **)(unaff_EDI + 0x1c0) = pvVar1;
    FUN_004f68c0(0x20,"/tell %s ",param_1);
    FUN_00411750(0);
    DAT_007363b3 = 1;
    iVar2 = FUN_004f65d0();
    *(undefined4 *)(unaff_EDI + 0x1b4) = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
  }
  return;
}

