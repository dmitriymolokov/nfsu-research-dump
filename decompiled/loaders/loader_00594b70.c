/* Decompiled from Speed.exe @ 00594b70 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594b70(void)

{
  undefined4 *puVar1;
  
  if (DAT_00734484 == (undefined4 *)0x0) {
    FUN_0063f150(&DAT_007315f8);
    DAT_00734484 = (undefined4 *)FUN_00566dc0(0xe8,"bFile System",0);
    if (DAT_00734484 == (undefined4 *)0x0) {
      return;
    }
    if (DAT_0073d814 == 1) {
      *DAT_0073d81c = DAT_00734484;
      puVar1 = DAT_00734484;
      DAT_00734484[1] = DAT_0073d81c;
      DAT_0073d81c = puVar1;
      *DAT_00734484 = &DAT_0073d818;
    }
  }
  return;
}

