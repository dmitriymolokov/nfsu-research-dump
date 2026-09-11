/* Decompiled from Speed.exe @ 0050b9e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050b9e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char cStack_170;
  char acStack_16f [47];
  char cStack_140;
  char acStack_13f [31];
  char local_120 [288];
  
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar3 + 0x18));
  }
  iVar3 = *(int *)(param_1 + 0x40);
  local_120[0] = '\0';
  iVar4 = *(int *)(iVar3 + 0xc);
  iVar8 = 0;
  if (*(char *)(iVar4 + 6) != '\0') {
    do {
      FUN_004f68c0(0x20,"BRAND_%d",*(undefined1 *)(iVar4 + 7 + iVar8));
      pcVar6 = &cStack_140;
      cVar1 = cStack_140;
      while (cVar1 != '\0') {
        pcVar7 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar7;
      }
      iVar4 = FUN_0059fb80();
      if (iVar4 == 0) {
        iVar4 = FUN_0059fb80();
      }
      FUN_004f68c0(0x20,&DAT_006cc580,iVar4);
      iVar4 = 0;
      cVar1 = cStack_170;
      pcVar6 = &cStack_170;
      if (local_120[0] != '\0') {
        pcVar7 = local_120;
        iVar5 = iVar4;
        do {
          local_120[iVar5] = *pcVar7;
          iVar4 = iVar5 + 1;
          iVar2 = iVar5 + 1;
          pcVar7 = local_120 + iVar5 + 1;
          iVar5 = iVar4;
        } while (local_120[iVar2] != '\0');
      }
      while (cVar1 != '\0') {
        local_120[iVar4] = cVar1;
        iVar4 = iVar4 + 1;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      }
      local_120[iVar4] = '\0';
      iVar4 = *(int *)(iVar3 + 0xc);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)*(byte *)(iVar4 + 6));
  }
  FUN_004f67f0(local_120);
  iVar4 = FUN_0059fb80();
  if (iVar4 == 0) {
    iVar4 = FUN_0059fb80();
  }
  FUN_004f68c0(0x30,"%s %d",iVar4,*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4));
  FUN_004f67f0(&cStack_170);
  return;
}

