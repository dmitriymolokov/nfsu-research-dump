/* Decompiled from Speed.exe @ 0042a790 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042a790(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_0073458c != 0) {
    DAT_0073458c = 0;
    piVar2 = (int *)*DAT_007361f8;
    if (piVar2 != DAT_007361f8) {
      do {
        FUN_0057f2b0(1);
        if (piVar2[10] == 1) {
          iVar1 = *(int *)(piVar2[0xd] + 0x4c);
          FUN_0046d1c0(*(undefined4 *)(iVar1 + 0x18),iVar1 + 0x80);
          *(float *)(iVar1 + 0x84) =
               *(float *)(*(int *)(iVar1 + 0x1c) + 0x5c) * *(float *)(iVar1 + 0x84);
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != DAT_007361f8);
    }
  }
  return;
}

