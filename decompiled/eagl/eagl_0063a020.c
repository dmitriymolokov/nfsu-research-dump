/* Decompiled from Speed.exe @ 0063a020 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_0063a020(uint param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = (param_1 & 0x1f) * 0xac + DAT_0070f36c;
  if (iVar1 != 0) {
    iVar1 = FUN_006420d0(iVar1 + 0x14,&LAB_006390f0,param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x11) = param_2;
      FUN_00639150();
    }
  }
  return;
}

