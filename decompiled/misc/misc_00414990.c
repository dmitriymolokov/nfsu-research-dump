/* Decompiled from Speed.exe @ 00414990 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00414990(void)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_PC_Keyboard_Config_fng_00700ff8;
  while( true ) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) break;
    ppuVar2 = ppuVar2 + 1;
    if (0x701003 < (int)ppuVar2) {
      return;
    }
  }
  FUN_00413a70(*(int *)(iVar1 + 0x14),1);
  return;
}

