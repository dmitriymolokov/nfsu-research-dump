/* Decompiled from Speed.exe @ 006428a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_006428a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = -1;
  iVar2 = 0;
  iVar5 = 0;
  uVar4 = 0;
  do {
    if (*(int *)((int)&DAT_006e80d0 + uVar4) != 0) {
      iVar1 = FUN_006427d0(param_1);
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
        iVar3 = iVar5;
      }
    }
    uVar4 = uVar4 + 0xc;
    iVar5 = iVar5 + 1;
  } while (uVar4 < 0x60);
  return iVar3;
}

