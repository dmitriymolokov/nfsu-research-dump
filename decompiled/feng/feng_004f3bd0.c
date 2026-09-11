/* Decompiled from Speed.exe @ 004f3bd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f3bd0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = DAT_0073578c;
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    if (((DAT_0073578c != 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
    if (*(undefined4 **)(unaff_ESI + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_ESI + 0x14))(1);
    }
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    if (**(int **)(unaff_ESI + 0x10) == 0x30210) {
      FUN_00565ce0();
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
    }
  }
  return;
}

