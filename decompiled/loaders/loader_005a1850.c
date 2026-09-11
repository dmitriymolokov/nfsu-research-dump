/* Decompiled from Speed.exe @ 005a1850 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a1850(void)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EDI;
  
  uVar6 = 0;
  do {
    puVar2 = (uint *)(&DAT_00733ff8)[uVar6];
    if (((puVar2 != (uint *)0x0) ||
        (((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          (puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0)) &&
         (uVar6 == *puVar2)))) && (puVar2[1] == 8)) {
      if (((uVar6 < 0x100) && ((&DAT_00733ff8)[uVar6] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
           (uVar6 == *puVar2)))))) {
        pcVar5 = (char *)(uVar6 + 0x34c + unaff_EDI);
      }
      else {
        pcVar5 = (char *)0x0;
      }
      if (*pcVar5 == '\0') goto LAB_005a1b01;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x100);
  piVar7 = &DAT_00733ffc;
  uVar6 = 2;
  do {
    if ((((uVar6 - 2 < 0x100) && (piVar3 = (int *)piVar7[-1], piVar3 != (int *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((piVar3 = (int *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), piVar3 != (int *)0x0 &&
          (uVar6 - 2 == *piVar3)))))) && (piVar3[1] == 8)) {
      if (((uVar6 - 2 < 0x100) && (piVar7[-1] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((piVar3 = (int *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), piVar3 != (int *)0x0 &&
           (uVar6 - 2 == *piVar3)))))) {
        puVar4 = (undefined1 *)(uVar6 + 0x34a + unaff_EDI);
      }
      else {
        puVar4 = (undefined1 *)0x0;
      }
      *puVar4 = 0;
    }
    if ((((uVar6 - 1 < 0x100) && (piVar3 = (int *)*piVar7, piVar3 != (int *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((piVar3 = (int *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), piVar3 != (int *)0x0 &&
          (uVar6 - 1 == *piVar3)))))) && (piVar3[1] == 8)) {
      if (((uVar6 - 1 < 0x100) && (*piVar7 != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((piVar3 = (int *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), piVar3 != (int *)0x0 &&
           (uVar6 - 1 == *piVar3)))))) {
        puVar4 = (undefined1 *)(uVar6 + 0x34b + unaff_EDI);
      }
      else {
        puVar4 = (undefined1 *)0x0;
      }
      *puVar4 = 0;
    }
    if ((((uVar6 < 0x100) && (puVar2 = (uint *)piVar7[1], puVar2 != (uint *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
          (uVar6 == *puVar2)))))) && (puVar2[1] == 8)) {
      if (((uVar6 < 0x100) && (piVar7[1] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
           (uVar6 == *puVar2)))))) {
        puVar4 = (undefined1 *)(uVar6 + 0x34c + unaff_EDI);
      }
      else {
        puVar4 = (undefined1 *)0x0;
      }
      *puVar4 = 0;
    }
    uVar1 = uVar6 + 1;
    if ((((uVar1 < 0x100) && (puVar2 = (uint *)piVar7[2], puVar2 != (uint *)0x0)) ||
        ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
         ((puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
          (uVar1 == *puVar2)))))) && (puVar2[1] == 8)) {
      if (((uVar1 < 0x100) && (piVar7[2] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
           (uVar1 == *puVar2)))))) {
        puVar4 = (undefined1 *)(uVar6 + 0x34d + unaff_EDI);
      }
      else {
        puVar4 = (undefined1 *)0x0;
      }
      *puVar4 = 0;
    }
    uVar1 = uVar6 + 2;
    piVar7 = piVar7 + 4;
    uVar6 = uVar6 + 4;
  } while (uVar1 < 0x100);
  uVar6 = 0;
  do {
    puVar2 = (uint *)(&DAT_00733ff8)[uVar6];
    if (((puVar2 != (uint *)0x0) ||
        (((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          (puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0)) &&
         (uVar6 == *puVar2)))) && (puVar2[1] == 8)) {
      if (((uVar6 < 0x100) && ((&DAT_00733ff8)[uVar6] != 0)) ||
         ((*(int *)(unaff_EDI + 0x88b0) != 0 &&
          ((puVar2 = (uint *)(*(int *)(unaff_EDI + 0x88b0) + 0x58a0), puVar2 != (uint *)0x0 &&
           (uVar6 == *puVar2)))))) {
        pcVar5 = (char *)(uVar6 + 0x34c + unaff_EDI);
      }
      else {
        pcVar5 = (char *)0x0;
      }
      if (*pcVar5 == '\0') {
LAB_005a1b01:
        *pcVar5 = '\x01';
        return;
      }
    }
    uVar6 = uVar6 + 1;
    if (0xff < uVar6) {
      return;
    }
  } while( true );
}

