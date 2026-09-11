/* Decompiled from Speed.exe @ 0043cb60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043ccde) */

void FUN_0043cb60(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  
  FUN_004388d0();
  FUN_00436e60();
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    FUN_00424c60();
    FUN_00575950();
    FUN_00436e60();
    FUN_00424c60();
    FUN_00424c40();
    FUN_00436ed0();
  }
  if (param_3 == '\0') {
    FUN_00436e60();
  }
  else {
    FUN_00436e60();
    local_14 = 0;
    for (local_18 = 0; local_18 < 0x78; local_18 = local_18 + 1) {
      if ((local_14 < 0xc) && (local_18 == *(int *)(&DAT_00700a28 + local_14 * 4))) {
        local_14 = local_14 + 1;
      }
      else {
        iVar1 = FUN_0057ea40();
        if (iVar1 == 0) {
          FUN_00436e60();
        }
        else {
          FUN_0057ccb0((int)*(char *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 8));
          FUN_00436e60();
        }
      }
    }
  }
  return;
}

