/* Decompiled from Speed.exe @ 0042c450 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042c450(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (*(undefined4 **)(unaff_ESI + 0x27c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x27c))(1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x280);
  *(int **)(unaff_ESI + 0x27c) = piVar1;
  *(undefined4 *)(unaff_ESI + 0x280) = *(undefined4 *)(unaff_ESI + 0x284);
  *(undefined4 *)(unaff_ESI + 0x284) = 0;
  if ((piVar1 != (int *)0x0) && ((piVar1[3] == 1 || (piVar1[3] == 0x11)))) {
    (**(code **)(*piVar1 + 0x14))(*(undefined1 *)(unaff_ESI + 0x4ad));
  }
                    /* WARNING: Could not recover jumptable at 0x0042c4a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(unaff_ESI + 0x27c) + 0x38))();
  return;
}

