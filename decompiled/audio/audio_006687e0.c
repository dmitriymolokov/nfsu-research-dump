/* Decompiled from Speed.exe @ 006687e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int * FUN_006687e0(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_007177c4 != (int *)0x0) {
    DAT_007177c8 = DAT_007177c8 + 1;
    return DAT_007177c4;
  }
  uVar5 = (param_1 + -1) * 0x10 + 0x28;
  piVar1 = (int *)FUN_00549460(uVar5);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)piVar3 = 0;
      piVar3 = (int *)((int)piVar3 + 1);
    }
    *piVar1 = param_1;
    DVar2 = GetTickCount();
    piVar1[4] = DVar2;
    piVar1[3] = DVar2;
    iVar4 = FUN_0066f1b0();
    piVar1[5] = iVar4;
    if (iVar4 == 0) {
      FUN_00447030(piVar1);
      return (int *)0x0;
    }
    DAT_007177c8 = 1;
    piVar3 = piVar1;
    DAT_007177c4 = piVar1;
  }
  return piVar3;
}

