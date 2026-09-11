/* Decompiled from Speed.exe @ 00565da0 */
/* Module: Loader */
/* Ghidra DecompileModule */


void FUN_00565da0(undefined4 param_1)

{
  int iVar1;
  undefined1 *unaff_ESI;
  
  DAT_007304b8 = &LAB_005669d0;
  DAT_007304bc = &LAB_005669f0;
  DAT_00730508 = unaff_ESI;
  iVar1 = FUN_00565df0(0,param_1,&stack0x00000008);
  if ((unaff_ESI != (undefined1 *)0x0) && (iVar1 != -1)) {
    *DAT_00730508 = 0;
  }
  return;
}

