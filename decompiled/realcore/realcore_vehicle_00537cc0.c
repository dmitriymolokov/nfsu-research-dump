/* Decompiled from Speed.exe @ 00537cc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00537cc0(void)

{
  int iVar1;
  int unaff_ESI;
  int *piVar2;
  
  iVar1 = 5;
  if (*(int *)(unaff_ESI + 0x1c4) == 4) {
    *(undefined4 *)(unaff_ESI + 0x1c4) = 5;
    *(undefined4 *)(unaff_ESI + 0x1c0) = 5;
  }
  if (*(int *)(unaff_ESI + 0x1c4) == 2) {
    *(undefined4 *)(unaff_ESI + 0x1d0) = DAT_0078a2f0;
    piVar2 = (int *)(unaff_ESI + 0x14);
    if (*(int *)(unaff_ESI + 0x1c0) == 5) {
      do {
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 0x4c))();
        }
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      do {
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 0x54))();
        }
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined4 *)(unaff_ESI + 0x1c0) = 3;
    *(undefined1 *)(unaff_ESI + 0x219) = 0;
    *(undefined1 *)(unaff_ESI + 0x21b) = 0;
    *(undefined1 *)(unaff_ESI + 0x21a) = 0;
    *(undefined1 *)(unaff_ESI + 0x21f) = 0;
    *(undefined1 *)(unaff_ESI + 0x220) = 0;
    *(undefined1 *)(unaff_ESI + 0x21c) = 0;
    *(undefined1 *)(unaff_ESI + 0x221) = 0;
    *(undefined1 *)(unaff_ESI + 0x222) = 0;
    *(undefined1 *)(unaff_ESI + 0x223) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c4) = 3;
    *(undefined4 *)(unaff_ESI + 0x1c0) = 3;
    return;
  }
  if (*(int *)(unaff_ESI + 0x1c4) == 5) {
    piVar2 = (int *)(unaff_ESI + 0x14);
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x50))();
      }
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(unaff_ESI + 0x1c0) = *(undefined4 *)(unaff_ESI + 0x1c4);
  return;
}

