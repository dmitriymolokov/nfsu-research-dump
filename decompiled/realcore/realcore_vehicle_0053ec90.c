/* Decompiled from Speed.exe @ 0053ec90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0053ec90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(param_2 + iVar3 * 4);
      if ((((iVar2 != 0) && (iVar1 = FUN_0053e560(param_1,iVar2), iVar1 != 0)) &&
          (*(char *)(iVar1 + 0x8b) == '\0')) &&
         (((*(int *)(iVar1 + 0x9c) != 0 &&
           (iVar2 = FUN_0053e400(iVar2,*(int *)(iVar1 + 0x9c),0), iVar2 != 0)) &&
          (*(short *)(iVar2 + 0xe) = *(short *)(iVar2 + 0xe) + -1, *(short *)(iVar2 + 0xe) == 0))))
      {
        if ((*(byte *)(iVar2 + 0xd) & 0x10) == 0) {
          FUN_0053ebc0(iVar1);
        }
        else {
          *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) | 0x20;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return;
}

