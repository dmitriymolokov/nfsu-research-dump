/* Decompiled from Speed.exe @ 00429b10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00429b10(void)

{
  int iVar1;
  int unaff_ESI;
  float10 fVar2;
  undefined *local_8;
  undefined4 local_4;
  
  if ((((*(int *)(*(int *)(unaff_ESI + 0x14) + 4) == 1) &&
       (*(char *)(*(int *)(unaff_ESI + 0x14) + 0x734) == '\0')) && (DAT_0078a400 != 0)) &&
     (DAT_007361c4 == 2)) {
    iVar1 = DAT_007361b8;
    if (*(int *)(*(int *)(unaff_ESI + 0x18) + 0x10) != 0) {
      iVar1 = DAT_007361b4;
    }
    local_8 = &DAT_0077a478;
    local_4 = 4;
    fVar2 = (float10)FUN_00583f20(&local_8,*(float *)(*(int *)(unaff_ESI + 0x1c) + 0x14) *
                                           DAT_007372b0 -
                                           *(float *)(*(int *)(*(int *)(iVar1 + 4) + 0x1c) + 0x14) *
                                           DAT_007372b0);
    *(float *)(unaff_ESI + 0x404) = (float)fVar2;
  }
  return;
}

