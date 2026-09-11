/* Decompiled from Speed.exe @ 005a5340 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a5340(void)

{
  int iVar1;
  int unaff_ESI;
  int *piVar2;
  
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 0xffffffff;
  if (*(int *)(unaff_ESI + 0xa8) != 0) {
    FUN_0059cb20();
  }
  piVar2 = (int *)(unaff_ESI + 8);
  iVar1 = 0x28;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(unaff_ESI + 0xb8) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0xc0) = 0xffffffff;
  *(undefined1 *)(unaff_ESI + 0xbc) = 0;
  *(undefined1 *)(unaff_ESI + 0xb0) = 1;
  *(undefined4 *)(unaff_ESI + 0xb1) = 0x1010101;
  *(undefined2 *)(unaff_ESI + 0xb5) = 0x101;
  return;
}

