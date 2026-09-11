/* Decompiled from Speed.exe @ 00573c30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00573c30(uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(&DAT_0073b260 + (param_1 >> 0x10) * 0x18c);
  piVar2 = (int *)FUN_0040a880();
  if (piVar3 != piVar2) {
    while (piVar3[2] != (param_1 & 0xff)) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar2) {
        return;
      }
    }
    iVar1 = *param_2;
    if (iVar1 < 0x100) {
      piVar2 = param_2 + iVar1 * 3 + 1;
      *param_2 = iVar1 + 1;
      *(short *)piVar2 = (short)param_1;
      *(char *)((int)piVar2 + 2) = (char)(param_1 >> 0x10);
      *(char *)((int)piVar2 + 3) = (char)piVar3[2];
      piVar2[1] = piVar3[4];
      piVar2[2] = piVar3[5];
    }
  }
  return;
}

