/* Decompiled from Speed.exe @ 005a1da0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a1da0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar5 = 0;
  iVar2 = 0;
  do {
    puVar3 = (uint *)(&DAT_00733ff8)[uVar5];
    if (((puVar3 != (uint *)0x0) ||
        (((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          (puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0)) &&
         (uVar5 == *puVar3)))) && (puVar3[1] != 8)) {
      if (((uVar5 < 0x100) && ((&DAT_00733ff8)[uVar5] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
           (uVar5 == *puVar3)))))) {
        pcVar4 = (char *)(uVar5 + 0x34c + unaff_EDI);
      }
      else {
        pcVar4 = (char *)0x0;
      }
      if ((*pcVar4 == '\x02') || (*pcVar4 == '\x04')) {
        iVar2 = iVar2 + 1;
      }
    }
    uVar1 = uVar5 + 1;
    if ((((uVar1 < 0x100) && (puVar3 = (uint *)(&DAT_00733ffc)[uVar5], puVar3 != (uint *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
          (uVar1 == *puVar3)))))) && (puVar3[1] != 8)) {
      if (((uVar1 < 0x100) && ((&DAT_00733ffc)[uVar5] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
           (uVar1 == *puVar3)))))) {
        pcVar4 = (char *)(uVar5 + 0x34d + unaff_EDI);
      }
      else {
        pcVar4 = (char *)0x0;
      }
      if ((*pcVar4 == '\x02') || (*pcVar4 == '\x04')) {
        iVar2 = iVar2 + 1;
      }
    }
    uVar1 = uVar5 + 2;
    if ((((uVar1 < 0x100) && (puVar3 = (uint *)(&DAT_00734000)[uVar5], puVar3 != (uint *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
          (uVar1 == *puVar3)))))) && (puVar3[1] != 8)) {
      if (((uVar1 < 0x100) && ((&DAT_00734000)[uVar5] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
           (uVar1 == *puVar3)))))) {
        pcVar4 = (char *)(uVar5 + 0x34e + unaff_EDI);
      }
      else {
        pcVar4 = (char *)0x0;
      }
      if ((*pcVar4 == '\x02') || (*pcVar4 == '\x04')) {
        iVar2 = iVar2 + 1;
      }
    }
    uVar1 = uVar5 + 3;
    if ((((uVar1 < 0x100) && (puVar3 = (uint *)(&DAT_00734004)[uVar5], puVar3 != (uint *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
          (uVar1 == *puVar3)))))) && (puVar3[1] != 8)) {
      if (((uVar1 < 0x100) && ((&DAT_00734004)[uVar5] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar3 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar3 != (uint *)0x0 &&
           (uVar1 == *puVar3)))))) {
        pcVar4 = (char *)(uVar5 + 0x34f + unaff_EDI);
      }
      else {
        pcVar4 = (char *)0x0;
      }
      if ((*pcVar4 == '\x02') || (*pcVar4 == '\x04')) {
        iVar2 = iVar2 + 1;
      }
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x100);
  return iVar2;
}

