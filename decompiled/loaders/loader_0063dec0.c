/* Decompiled from Speed.exe @ 0063dec0 */
/* Module: Loader */
/* Ghidra DecompileModule */


char * FUN_0063dec0(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  local_8 = 0;
  local_4 = 0;
  iVar3 = FUN_0063dd90(param_1);
  cVar1 = *(char *)(iVar3 + -8 + param_1);
  iVar3 = iVar3 + -8 + param_1;
  if (((('@' < cVar1) && (cVar1 < '[')) || (('`' < cVar1 && (cVar1 < '{')))) &&
     ((((('/' < *(char *)(iVar3 + 1) && (*(char *)(iVar3 + 1) < ':')) &&
        ('/' < *(char *)(iVar3 + 2))) &&
       ((*(char *)(iVar3 + 2) < ':' && ('/' < *(char *)(iVar3 + 3))))) &&
      (*(char *)(iVar3 + 3) < ':')))) {
    local_4 = 8;
  }
  iVar6 = 4;
  pcVar7 = (char *)(param_1 + 0x10);
  param_1 = 4;
  iVar3 = FUN_0063dd90(iVar2);
  pcVar5 = (char *)(iVar3 + (iVar2 - local_4));
  iVar3 = FUN_0063dd20(iVar2);
  if (iVar3 == 1) {
    iVar6 = 3;
    pcVar7 = (char *)(iVar2 + 6);
    param_1 = 3;
  }
  else if ((iVar3 == 3) && (iVar6 = *(char *)(iVar2 + 3) + -0x30, param_1 = iVar6, 4 < iVar6)) {
    param_1 = 4;
  }
  if (param_2 == 0) {
    while (pcVar7 < pcVar5) {
      pcVar7 = pcVar7 + param_1 + iVar6;
      if (local_8 == param_3) goto LAB_0063e02c;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_8 = local_8 + 1;
    }
  }
  else {
    while (pcVar7 < pcVar5) {
      pcVar7 = pcVar7 + param_1 + iVar6;
      iVar3 = FUN_0063dc80();
      if (iVar3 == 0) {
LAB_0063e02c:
        if (param_4 != (undefined4 *)0x0) {
          uVar4 = FUN_0063dcd0();
          *param_4 = uVar4;
        }
        if (param_5 != (undefined4 *)0x0) {
          uVar4 = FUN_0063dc30();
          *param_5 = uVar4;
        }
        return pcVar7;
      }
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  return (char *)0x0;
}

