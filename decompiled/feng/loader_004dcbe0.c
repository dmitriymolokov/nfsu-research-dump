/* Decompiled from Speed.exe @ 004dcbe0 */
/* Module: FEng_FE */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004dcbe0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  FUN_004f39a0(param_2,FUN_004dcb50);
  iVar2 = FUN_004f65d0();
  iVar4 = *(int *)(iVar2 + 0x18);
  if (DAT_0073578c != 0) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar3 = iVar1 + 0xdc;
    if ((iVar3 == 0) || (iVar3 = FUN_004fd1e0(iVar3), iVar3 == 0)) {
      FUN_004eede0(iVar1,param_2,iVar4 + 1,0xff);
    }
  }
  iVar4 = FUN_004f65d0();
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x1c) = 0;
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x14);
    if (iVar4 != 0) {
      FUN_004dcd30();
    }
  }
  if (DAT_006f8aa8 != 0xc) {
    uVar5 = 0;
    do {
      if (*(int *)((int)&DAT_006f8a48 + uVar5) == 0xc) break;
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0x70);
  }
  _DAT_00735e08 = iVar2;
  FUN_004cd180(0);
  return iVar4;
}

