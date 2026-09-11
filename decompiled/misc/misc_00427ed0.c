/* Decompiled from Speed.exe @ 00427ed0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00427ed0(int *param_1)

{
  int unaff_ESI;
  
  if ((float)param_1[5] != DAT_006cc7a4) {
    if ((float)param_1[5] <= *(float *)(unaff_ESI + 0x68)) {
      return 0;
    }
  }
  if (*param_1 == 3) {
    FUN_00564db0(param_1[3],param_1[4],param_1[1],param_1[2],0);
    FUN_00427e60(DAT_00700d58,1);
    return 1;
  }
  if ((DAT_0078a368 == 0) || (*(int *)(*(int *)(unaff_ESI + 0x14) + 4) != 2)) {
    *(undefined4 *)(unaff_ESI + 0x87c) = 1;
  }
  return 1;
}

