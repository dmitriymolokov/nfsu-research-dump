/* Decompiled from Speed.exe @ 005a08f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005a08f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  
  if (((param_1 != 0) && (uVar2 = FUN_005a03d0(), uVar2 < 0x20)) &&
     (iVar1 = (&DAT_00733f78)[uVar2], iVar1 != 0)) {
    switch(*(undefined1 *)(extraout_ECX + 0x11)) {
    case 1:
      return *(undefined4 *)(iVar1 + 4);
    case 2:
      return *(undefined4 *)(iVar1 + 8);
    case 3:
      return *(undefined4 *)(iVar1 + 0xc);
    }
  }
  return 0;
}

