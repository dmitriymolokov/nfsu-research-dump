/* Decompiled from Speed.exe @ 0053e830 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0053e830(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *unaff_EDI;
  uint local_84;
  
  if (((param_2 != (byte *)0x0) && (param_3 != 0)) && (unaff_EDI != (undefined4 *)0x0)) {
    if (*(short *)((int)unaff_EDI + 0xe) != 0) {
      *(short *)((int)unaff_EDI + 0xe) = *(short *)((int)unaff_EDI + 0xe) + 1;
      return;
    }
    bVar1 = *(byte *)((int)unaff_EDI + 0xd);
    if ((bVar1 & 0x10) != 0) {
      *(byte *)((int)unaff_EDI + 0xd) = bVar1 & 0xdf;
      *(undefined2 *)((int)unaff_EDI + 0xe) = 1;
      *(int *)(param_3 + 0xa8) = *(int *)(param_3 + 0xa8) + 1;
      *(int *)(param_3 + 0xac) = *(int *)(param_3 + 0xac) + unaff_EDI[2];
      return;
    }
    FUN_00565da0("StrmEntry%c: 0x%08x",(-((bVar1 & 1) != 0) & 0x23U) + 0x20,*unaff_EDI);
    iVar2 = unaff_EDI[2];
    iVar3 = *param_1;
    local_84 = 0x2000;
    if ((*(byte *)((int)unaff_EDI + 0xd) & 1) == 0) {
      if (*param_2 != 0) {
        iVar4 = FUN_00565d70();
        if (iVar2 + iVar3 + 0x80 < iVar4) {
          local_84 = *param_2 & 7 | 0x2000;
        }
      }
    }
    else {
      local_84 = 0x2008;
    }
    uVar5 = FUN_00565b60(iVar2 + iVar3,0,0,local_84);
    *(short *)((int)unaff_EDI + 0xe) = *(short *)((int)unaff_EDI + 0xe) + 1;
    unaff_EDI[4] = uVar5;
    *(int *)(param_3 + 0xa4) = *(int *)(param_3 + 0xa4) + 1;
    *(short *)(param_2 + 2) = *(short *)(param_2 + 2) + 1;
    *(byte *)((int)unaff_EDI + 0xd) = *(byte *)((int)unaff_EDI + 0xd) | 0x10;
    FUN_0058ac20(unaff_EDI[4] + (*param_1 - 1U) & ~(*param_1 - 1U),param_3 + 8,unaff_EDI[1],
                 unaff_EDI[2],&LAB_0053e6c0);
    *(int *)(param_3 + 0xa8) = *(int *)(param_3 + 0xa8) + 1;
    *(int *)(param_3 + 0xac) = *(int *)(param_3 + 0xac) + unaff_EDI[2];
  }
  return;
}

