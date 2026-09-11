/* Decompiled from Speed.exe @ 0053ed70 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


undefined4 FUN_0053ed70(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  do {
    if (puVar3 == (undefined4 *)(param_1 + 0x18)) {
      return 0;
    }
    if (param_2 == 0) {
LAB_0053edad:
      if ((puVar3[0x24] == 0) || (0 < (int)puVar3[0x29])) {
        return 1;
      }
    }
    else {
      pcVar4 = (char *)(puVar3 + 2);
      iVar5 = param_2 - (int)pcVar4;
      do {
        cVar1 = pcVar4[iVar5];
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if ((cVar1 == '\0') || (cVar2 == '\0')) break;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) goto LAB_0053edad;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

