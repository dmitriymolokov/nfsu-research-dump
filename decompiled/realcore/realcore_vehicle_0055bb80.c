/* Decompiled from Speed.exe @ 0055bb80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_0055bb80(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(*(int *)(param_1 + 0x40) + 0x66);
  iVar4 = 0;
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_0055bc8c:
    iVar4 = 0;
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
LAB_0055bc1d:
      FUN_00495f00(0xceffd44);
      return;
    }
    do {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    } while (pcVar6[iVar2] != '\0');
    if (iVar4 == 0) goto LAB_0055bc1d;
    if (((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
       (iVar4 = FUN_004ffb70(), iVar4 != 0)) goto LAB_0055bcf8;
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004ef050(0xd965a529);
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 2;
      FUN_0041f060(iVar4,pcVar6);
      return;
    }
  }
  else {
    do {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    } while (pcVar6[iVar2] != '\0');
    if (iVar4 < 0x18) goto LAB_0055bc8c;
    pcVar1 = (char *)(*(int *)(param_1 + 0x40) + 0x99);
    *pcVar1 = *pcVar6;
    if (*pcVar6 != '\0') {
      pcVar5 = pcVar1;
      do {
        cVar3 = pcVar5[(int)(pcVar6 + (1 - (int)pcVar1))];
        pcVar5 = pcVar5 + 1;
        *pcVar5 = cVar3;
      } while (cVar3 != '\0');
    }
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0xad) = 0x2e;
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0xae) = 0x2e;
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0xaf) = 0x2e;
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0xb0) = 0;
    pcVar6 = (char *)(*(int *)(param_1 + 0x40) + 0x99);
    iVar4 = 0;
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) goto LAB_0055bc1d;
    do {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
    } while (pcVar6[iVar2] != '\0');
    if (iVar4 == 0) goto LAB_0055bc1d;
    if (((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
       (iVar4 = FUN_004ffb70(), iVar4 != 0)) goto LAB_0055bcf8;
    if (DAT_0073578c != 0) {
      iVar4 = FUN_004ef050(0xd965a529);
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 2;
      FUN_0041f060(iVar4,pcVar6);
      return;
    }
  }
  iVar4 = 0;
LAB_0055bcf8:
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 2;
  FUN_0041f060(iVar4,pcVar6);
  return;
}

