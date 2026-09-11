/* Decompiled from Speed.exe @ 00528010 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528010(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  char local_28 [40];
  
  local_28[0] = '|';
  iVar1 = 0;
  do {
    cVar4 = (&DAT_006bf0b1)[iVar1];
    local_28[iVar1 + 1] = cVar4;
    iVar1 = iVar1 + 1;
  } while (cVar4 != '\0');
  iVar1 = FUN_00674898();
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 1) + 1;
    do {
      iVar2 = 0;
      cVar4 = local_28[0];
      while (cVar4 != '\0') {
        local_28[iVar2] = cVar4;
        iVar3 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        cVar4 = local_28[iVar3];
      }
      cVar4 = '|';
      puVar5 = &DAT_006bf0b0;
      do {
        iVar3 = iVar2;
        local_28[iVar3] = cVar4;
        cVar4 = puVar5[1];
        puVar5 = puVar5 + 1;
        iVar2 = iVar3 + 1;
      } while (cVar4 != '\0');
      iVar1 = iVar1 + -1;
      local_28[iVar3 + 1] = '\0';
    } while (iVar1 != 0);
  }
  return;
}

