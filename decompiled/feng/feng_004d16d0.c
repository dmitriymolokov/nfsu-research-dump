/* Decompiled from Speed.exe @ 004d16d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d16d0(undefined4 param_1,char param_2)

{
  char *pcVar1;
  
  FUN_004f68c0(0x20,"option_buttonR_%02d");
  FUN_00414a60();
  FUN_004f68c0(0x20,"option_buttonL_%02d");
  FUN_00414a60();
  if (param_2 == '\0') {
    FUN_004f68c0(0x20,"LeftArrow_%d");
    FUN_00414a60();
    pcVar1 = "RightArrow_%d";
  }
  else {
    FUN_004f68c0(0x20,"minus_%02d");
    FUN_00414a60();
    pcVar1 = "plus_%02d";
  }
  FUN_004f68c0(0x20,pcVar1);
  FUN_00414a60();
  return;
}

