/* Decompiled from Speed.exe @ 0042a4d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a4d0(void)

{
  int unaff_ESI;
  float10 fVar1;
  char local_1;
  
  if ((((*(char *)(*(int *)(unaff_ESI + 0x3c) + 0x1c) != '\0') && (*(int *)(unaff_ESI + 0x3cc) == 4)
       ) && (fVar1 = (float10)FUN_00440a40(unaff_ESI + 0x540,unaff_ESI + 0x60,0,0,&local_1),
            local_1 != '\0')) &&
     ((float10)*(float *)(unaff_ESI + 0x68) + (float10)_DAT_006cc90c < fVar1)) {
    FUN_00428080();
    return;
  }
  return;
}

