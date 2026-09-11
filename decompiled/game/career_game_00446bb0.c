/* Decompiled from Speed.exe @ 00446bb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_00446bb0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int local_4;
  
  if (param_2 != '\0') {
    FUN_00446bb0(0);
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    psVar6 = (short *)(param_1 + 0x14);
    do {
      iVar4 = (int)*psVar6;
      cVar1 = (char)(iVar4 / 100) + '@';
      if (((('@' < cVar1) && (cVar1 < 'U')) && (0 < iVar4 % 100)) && (iVar4 % 100 < 10)) {
        iVar4 = iVar4 + 10;
        if (param_2 == '\0') {
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x10)) {
            psVar5 = (short *)(param_1 + 0x14);
            do {
              if (*psVar5 == iVar4) {
                FUN_00446b10();
                local_4 = local_4 + -1;
                psVar6 = psVar6 + -1;
                break;
              }
              iVar3 = iVar3 + 1;
              psVar5 = psVar5 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x10));
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 < 0x40) {
            iVar2 = 0;
            if (0 < iVar3) {
              psVar5 = (short *)(param_1 + 0x14);
              do {
                if (*psVar5 == iVar4) goto LAB_00446c6a;
                iVar2 = iVar2 + 1;
                psVar5 = psVar5 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x10));
            }
            *(short *)(param_1 + 0x14 + iVar3 * 2) = (short)iVar4;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          }
        }
      }
LAB_00446c6a:
      local_4 = local_4 + 1;
      psVar6 = psVar6 + 1;
    } while (local_4 < *(int *)(param_1 + 0x10));
  }
  return;
}

