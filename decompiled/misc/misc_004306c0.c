/* Decompiled from Speed.exe @ 004306c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004306c0(int param_1)

{
  if (*(char *)(param_1 + 0x124) != '\0') {
    return 1;
  }
  if ((DAT_0078a346 == '\0') && (DAT_007361a0 == 0)) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x114) != 0) && (*(int *)(param_1 + 0x114) != 0x7fffffff)) &&
     (DAT_00700b64 <= (float)(DAT_0073ad34 - *(int *)(param_1 + 0x114)) * _DAT_006cca38)) {
    return 1;
  }
  return 0;
}

