/* Decompiled from Speed.exe @ 004f4220 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f4220(void)

{
  int iVar1;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 0x14))(1);
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    if (**(int **)(iVar1 + 0x10) == 0x30210) {
      FUN_00565ce0();
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  return;
}

