/* Decompiled from Speed.exe @ 0060417a */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __fastcall FUN_0060417a(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + uVar3 * 4);
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar1 * 4) + 4) & 0x20) == 0) {
        piVar1[2] = -1;
        piVar1[3] = -1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  iVar2 = FUN_005f8440();
  if ((((((-1 < iVar2) && (iVar2 = FUN_005fede4(), -1 < iVar2)) &&
        (iVar2 = FUN_005f9ec4(), -1 < iVar2)) &&
       (((iVar2 = FUN_005ff66c(), -1 < iVar2 && (iVar2 = FUN_005f8440(), -1 < iVar2)) &&
        ((iVar2 = FUN_005ffbd5(), -1 < iVar2 &&
         ((iVar2 = FUN_00600fa7(), -1 < iVar2 && (iVar2 = FUN_00603622(), -1 < iVar2)))))))) &&
      (((*(undefined4 *)(param_1 + 0x40) = 1, (*(byte *)(param_1 + 0x34) & 8) != 0 ||
        ((iVar2 = FUN_00601cfe(), -1 < iVar2 &&
         (((*(byte *)(param_1 + 0x34) & 8) != 0 || (iVar2 = FUN_00603b2e(), -1 < iVar2)))))) &&
       (iVar2 = FUN_005f8440(), -1 < iVar2)))) &&
     (((iVar2 = FUN_005fede4(), -1 < iVar2 && (iVar2 = FUN_00603df3(), -1 < iVar2)) &&
      (iVar2 = FUN_00601ecc(), -1 < iVar2)))) {
    iVar2 = 0;
  }
  return iVar2;
}

