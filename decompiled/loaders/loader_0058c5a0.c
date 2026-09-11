/* Decompiled from Speed.exe @ 0058c5a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058c5a0(undefined4 param_1,int param_2,int param_3)

{
  short *psVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  undefined1 local_1e0 [480];
  
  iVar3 = *(int *)(param_2 + 0x18);
  if (((((iVar3 != 0) && (*(char *)(iVar3 + 0xba1) == '\x02')) &&
       (*(char *)(iVar3 + 0xba2) == '\x02')) &&
      ((*(char *)(iVar3 + 0xba3) != '\0' && (*(char *)(iVar3 + 0xba2) == '\x02')))) &&
     (*(char *)(iVar3 + 0xba3) != '\0')) {
    iVar5 = *(int *)(iVar3 + 0xd90);
    if (0 < iVar5) {
      piVar4 = (int *)(iVar3 + 0xd94);
      do {
        if (*piVar4 != 0) {
          psVar1 = (short *)(*piVar4 + 0xc);
          *psVar1 = *psVar1 + -1;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_0058c1c0(param_1,local_1e0,0x78,iVar3 + 0xd94);
    cVar6 = iVar5 != 0;
    *(undefined4 *)(iVar3 + 0xd90) = 0;
    if ((bool)cVar6) {
      FUN_0053ec90(&DAT_00740420,local_1e0,iVar5);
    }
    if (*(int *)(iVar3 + 0xba8) != 0) {
      psVar1 = (short *)(*(int *)(iVar3 + 0xba8) + 0x50);
      *psVar1 = *psVar1 + -1;
      FUN_0058b520(param_1);
      *(undefined4 *)(iVar3 + 0xba8) = 0;
      cVar6 = cVar6 + '\x01';
    }
    if (cVar6 != '\0') {
      return 1;
    }
  }
  if (*(int *)(param_2 + 8) == 0) {
    iVar3 = *(int *)(param_2 + 0x18);
    if ((iVar3 != 0) && ((param_3 == 0 || (iVar5 = FUN_0058c010(param_1), iVar5 == 0)))) {
      pcVar2 = (char *)(iVar3 + 0xba0);
      *pcVar2 = *pcVar2 + -1;
      FUN_0058bf40(param_1);
      *(undefined4 *)(param_2 + 0x18) = 0;
      return 1;
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      pcVar2 = (char *)(*(int *)(param_2 + 0x14) + 8);
      *pcVar2 = *pcVar2 + -1;
      FUN_0058ba80(param_1);
      *(undefined4 *)(param_2 + 0x14) = 0;
      return 1;
    }
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 != 0) {
      if ((param_3 != 0) && (iVar5 = FUN_0058c970(param_1), iVar5 != 0)) {
        return 0;
      }
      pcVar2 = (char *)(iVar3 + 0xc);
      *pcVar2 = *pcVar2 + -1;
      FUN_0058b6c0(param_1);
      *(undefined4 *)(param_2 + 0x10) = 0;
      return 1;
    }
  }
  return 0;
}

