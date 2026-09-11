/* Decompiled from Speed.exe @ 00655060 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_00655060(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  FUN_0064e520();
  iVar3 = 0;
  if (DAT_00713db6 != 0) {
    do {
      if ((&DAT_007163dc)[iVar3] == 0) {
        iVar1 = FUN_00575940(iVar3,param_4);
        if (iVar1 < 0) {
          FUN_0064e540();
          return -6;
        }
        iVar1 = FUN_00575940();
        puVar2 = (undefined4 *)(param_4 + iVar1);
        iVar1 = FUN_00575940();
        *(short *)(puVar2 + 0x10) = (short)((param_5 - iVar1) - 0x9cU >> 5);
        puVar2[0x14] = param_4;
        puVar2[0x15] = param_1;
        puVar2[0x16] = param_2;
        puVar2[0x17] = param_3;
        *puVar2 = 0xffffffff;
        (&DAT_007163dc)[iVar3] = puVar2;
        FUN_0064e540();
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_00713db6);
  }
  FUN_0064e540();
  return -9;
}

