/* Decompiled from Speed.exe @ 00525080 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00525080(void)

{
  int *piVar1;
  int unaff_ESI;
  int *local_4;
  
  piVar1 = *(int **)(unaff_ESI + 0x300);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_4);
    FUN_0064b580();
    (**(code **)(*local_4 + 4))(piVar1);
    FUN_0064b5a0();
  }
  *(undefined4 *)(unaff_ESI + 0x300) = 0;
  *(undefined1 *)(unaff_ESI + 0x31c) = 0;
  *(undefined1 *)(unaff_ESI + 0x31d) = 0;
  *(undefined1 *)(unaff_ESI + 0x2f4) = 0;
  *(undefined4 *)(unaff_ESI + 0x314) = *(undefined4 *)(unaff_ESI + 0x240);
  return;
}

