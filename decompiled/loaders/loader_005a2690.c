/* Decompiled from Speed.exe @ 005a2690 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a2690(undefined4 param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_EDI;
  bool bVar7;
  
  uVar3 = 0;
  uVar5 = 0xffffffff;
  bVar7 = true;
  do {
    if ((((bVar7) && ((&DAT_00733ff8)[uVar3] != 0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 != (uint *)0x0 &&
          (uVar3 == *puVar4)))))) &&
       (pcVar2 = (char *)(uVar3 + 0x34c + unaff_EDI), pcVar2 != (char *)0x0)) {
      if (((0xff < uVar3) || (puVar4 = (uint *)(&DAT_00733ff8)[uVar3], puVar4 == (uint *)0x0)) &&
         ((*(int *)(unaff_EDI + 0x88b0) == 0 ||
          ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 == (uint *)0x0 ||
           (uVar3 != *puVar4)))))) {
        puVar4 = (uint *)0x0;
      }
      if (((puVar4[1] != 8) && (*pcVar2 == '\x02')) && ((int)uVar5 < (int)uVar3)) {
        uVar5 = uVar3;
      }
    }
    uVar1 = uVar3 + 1;
    if ((((uVar1 < 0x100) && ((&DAT_00733ffc)[uVar3] != 0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 != (uint *)0x0 &&
          (uVar1 == *puVar4)))))) &&
       (pcVar2 = (char *)(uVar3 + 0x34d + unaff_EDI), pcVar2 != (char *)0x0)) {
      if (((0xff < uVar1) || (puVar4 = (uint *)(&DAT_00733ffc)[uVar3], puVar4 == (uint *)0x0)) &&
         ((*(int *)(unaff_EDI + 0x88b0) == 0 ||
          ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 == (uint *)0x0 ||
           (uVar1 != *puVar4)))))) {
        puVar4 = (uint *)0x0;
      }
      if (((puVar4[1] != 8) && (*pcVar2 == '\x02')) && ((int)uVar5 < (int)uVar1)) {
        uVar5 = uVar1;
      }
    }
    uVar1 = uVar3 + 2;
    if ((((uVar1 < 0x100) && ((&DAT_00734000)[uVar3] != 0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 != (uint *)0x0 &&
          (uVar1 == *puVar4)))))) &&
       (pcVar2 = (char *)(uVar3 + 0x34e + unaff_EDI), pcVar2 != (char *)0x0)) {
      if (((0xff < uVar1) || (puVar4 = (uint *)(&DAT_00734000)[uVar3], puVar4 == (uint *)0x0)) &&
         ((*(int *)(unaff_EDI + 0x88b0) == 0 ||
          ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 == (uint *)0x0 ||
           (uVar1 != *puVar4)))))) {
        puVar4 = (uint *)0x0;
      }
      if (((puVar4[1] != 8) && (*pcVar2 == '\x02')) && ((int)uVar5 < (int)uVar1)) {
        uVar5 = uVar1;
      }
    }
    uVar1 = uVar3 + 3;
    if ((((uVar1 < 0x100) && ((&DAT_00734004)[uVar3] != 0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 != (uint *)0x0 &&
          (uVar1 == *puVar4)))))) &&
       (pcVar2 = (char *)(uVar3 + 0x34f + unaff_EDI), pcVar2 != (char *)0x0)) {
      if (((0xff < uVar1) || (puVar4 = (uint *)(&DAT_00734004)[uVar3], puVar4 == (uint *)0x0)) &&
         ((*(int *)(unaff_EDI + 0x88b0) == 0 ||
          ((puVar4 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar4 == (uint *)0x0 ||
           (uVar1 != *puVar4)))))) {
        puVar4 = (uint *)0x0;
      }
      if (((puVar4[1] != 8) && (*pcVar2 == '\x02')) && ((int)uVar5 < (int)uVar1)) {
        uVar5 = uVar1;
      }
    }
    uVar3 = uVar3 + 4;
    bVar7 = uVar3 < 0x100;
  } while ((int)uVar3 < 0x100);
  if (uVar5 == 0x71) {
    uVar5 = 0x70;
  }
  else if (uVar5 == 0xffffffff) {
    return 0;
  }
  iVar6 = uVar5 * 0x2c + DAT_00734414;
  switch(param_1) {
  case 0:
    return iVar6 + 4;
  case 1:
    return iVar6 + 0x22;
  case 2:
    return iVar6 + 0xe;
  case 3:
    return iVar6 + 0x18;
  default:
    return 0;
  }
}

