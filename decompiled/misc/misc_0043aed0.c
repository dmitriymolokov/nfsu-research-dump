/* Decompiled from Speed.exe @ 0043aed0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043aed0(int *param_1)

{
  char cVar1;
  
  if (*param_1 == 4) {
    FUN_004390d0(5);
    FUN_004f62a0(0,0);
    if (DAT_007361f8 != 0) {
      _DAT_006f0894 = 0x40c00000;
      FUN_00420080(DAT_007361f8);
      FUN_00405560();
      FUN_0043d160();
    }
    cVar1 = FUN_005466e0();
    if (cVar1 != '\0') {
      FUN_00546810();
    }
  }
  return;
}

