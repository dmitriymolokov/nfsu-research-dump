/* Decompiled from Speed.exe @ 00444af0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


int __fastcall FUN_00444af0(undefined4 param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2[1];
  iVar6 = 0;
  iVar2 = 0;
  if (0 < iVar5) {
    psVar4 = (short *)(*param_2 + 8);
    do {
      if (((((char)psVar4[1] != '\0') || (sVar1 = *psVar4, sVar1 == 0x9c4)) || (sVar1 == 0x960)) ||
         ((sVar1 == 0xa28 || (sVar1 == 0x9c3)))) {
        iVar3 = *(int *)(psVar4 + 10);
        iVar6 = iVar6 + iVar3;
        if ((*(int *)(psVar4 + 8) != iVar3) &&
           (iVar3 = iVar3 + *(int *)(psVar4 + 8), iVar2 <= iVar3)) {
          iVar2 = iVar3;
        }
      }
      psVar4 = psVar4 + 0x1c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar2 < iVar6) {
      iVar2 = iVar6;
    }
  }
  return iVar2;
}

