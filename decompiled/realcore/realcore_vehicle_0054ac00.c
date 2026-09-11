/* Decompiled from Speed.exe @ 0054ac00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054ac00(undefined4 param_1)

{
  int unaff_ESI;
  undefined1 local_40 [64];
  
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    *(undefined4 *)(unaff_ESI + 0x540) = 7;
    *(undefined4 *)(unaff_ESI + 0x544) = param_1;
    local_40[0] = 0;
    FUN_00667950(local_40,0x40,&DAT_006bd3bc,&DAT_006b9172);
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0,0x6d6f7665,local_40,FUN_0054c9e0,0);
    }
    *(undefined4 *)(unaff_ESI + 0x53c) = *(undefined4 *)(unaff_ESI + 0x538);
    *(undefined4 *)(unaff_ESI + 0x538) = 0x10;
  }
  return;
}

