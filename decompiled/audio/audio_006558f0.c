/* Decompiled from Speed.exe @ 006558f0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006558f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_00713ee4 != '\0') {
    puVar1 = (undefined4 *)(&DAT_007163dc)[param_1];
    FUN_00652030(*puVar1);
    FUN_00655880();
    iVar2 = 0;
    *puVar1 = 0xffffffff;
    if (*(char *)((int)puVar1 + 0x62) != '\0') {
      piVar3 = puVar1 + 0x19;
      do {
        if (*piVar3 != 0) {
          FUN_006510d0(*piVar3);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < (int)(uint)*(byte *)((int)puVar1 + 0x62));
    }
    return 0;
  }
  return 0xfffffff6;
}

