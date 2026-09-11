/* Decompiled from Speed.exe @ 005f7b67 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005f7b67(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xff000000;
  if ((((uVar1 != 0x20000000) && (uVar1 != 0x21000000)) && (uVar1 != 0x24000000)) &&
     ((uVar1 != 0x25000000 && (uVar1 != 0x30000000)))) {
    return 0;
  }
  return 1;
}

