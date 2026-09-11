/* Decompiled from Speed.exe @ 0043e9d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0043e9d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_8;
  
  local_8 = 0.0;
  FUN_00432d50();
  fVar2 = (float10)FUN_0043f3f0();
  if ((float10)_DAT_006b7918 <= fVar2) {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_00432d50();
    iVar1 = FUN_0041f5d0();
    *(char *)(param_1 + 0x11) = '\x01' - (iVar1 != 3);
    FUN_00432d50();
    fVar2 = (float10)FUN_00432d10();
    local_8 = (float)fVar2;
  }
  return (float10)local_8;
}

