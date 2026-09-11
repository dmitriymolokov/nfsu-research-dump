/* Decompiled from Speed.exe @ 0058b8a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058b8a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_200 [128];
  
  piVar3 = *(int **)(param_1 + 0x34);
  iVar4 = 0;
  if (piVar3 != (int *)(param_1 + 0x34)) {
    do {
      if (*(char *)((int)piVar3 + 10) == '\0') {
        iVar1 = piVar3[0x12];
        iVar2 = 0;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
          local_200[iVar4] = *(undefined4 *)(iVar1 + 8);
          *(undefined1 *)(iVar1 + 0xe) = 1;
          iVar2 = 1;
        }
        iVar1 = piVar3[0x13];
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
          *(undefined1 *)(iVar1 + 0xe) = 1;
          local_200[iVar2 + iVar4] = *(undefined4 *)(iVar1 + 8);
          iVar2 = iVar2 + 1;
        }
        iVar1 = piVar3[0x14];
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
          *(undefined1 *)(iVar1 + 0xe) = 1;
          local_200[iVar2 + iVar4] = *(undefined4 *)(iVar1 + 8);
          iVar2 = iVar2 + 1;
        }
        iVar1 = piVar3[0x15];
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
          *(undefined1 *)(iVar1 + 0xe) = 1;
          local_200[iVar2 + iVar4] = *(undefined4 *)(iVar1 + 8);
          iVar2 = iVar2 + 1;
        }
        *(char *)((int)piVar3 + 10) = (iVar2 == 0) + '\x01';
        iVar4 = iVar4 + iVar2;
      }
      if (*(char *)((int)piVar3 + 0xb) == '\0') {
        *(undefined1 *)((int)piVar3 + 0xb) = 2;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)(param_1 + 0x34));
    if (0 < iVar4) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      FUN_0053e9e0(&DAT_00740420,local_200,iVar4,&LAB_0058ce60,0,0);
      return 1;
    }
  }
  return 0;
}

