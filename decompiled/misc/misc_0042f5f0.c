/* Decompiled from Speed.exe @ 0042f5f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0042f5f0(int param_1,float param_2)

{
  int iVar1;
  
  *(float *)(param_1 + 200) = param_2;
  if ((((*(ushort *)(param_1 + 0xc4) & 1) != 0) && ((*(ushort *)(param_1 + 0xc4) & 2) == 0)) &&
     ((DAT_0078a345 != '\0' || (DAT_007361a4 != 0)))) {
    iVar1 = *(byte *)(param_1 + 199) - 1;
    *(float *)(param_1 + 0xcc) = param_2 + *(float *)(param_1 + 0xcc);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(char *)(param_1 + 199) = (char)iVar1;
  }
  return;
}

