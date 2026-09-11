/* Decompiled from Speed.exe @ 00623350 */
/* Module: EAGL */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00623350(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_0070a4a0 != '\0') {
    iVar6 = 0;
    if (0 < DAT_006e2a90) {
      do {
        piVar1 = *(int **)(DAT_0070a48c + iVar6 * 4);
        if (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          *piVar1 = 0;
          piVar1[4] = 0;
          (*(code *)PTR_FUN_006dfaa0)(piVar1,0x14);
          DAT_0070a49c = DAT_0070a49c + -1;
        }
        *(undefined4 *)(DAT_0070a48c + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_006e2a90);
    }
    iVar6 = 0;
    if (0 < DAT_006e2a8c) {
      do {
        puVar3 = *(undefined4 **)(DAT_0070a488 + iVar6 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
          _DAT_0070a498 = _DAT_0070a498 + -1;
        }
        *(undefined4 *)(DAT_0070a488 + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_006e2a8c);
    }
    iVar5 = 0;
    iVar6 = DAT_006e2a8c;
    if (0 < DAT_006e2a8c) {
      iVar7 = 0;
      do {
        iVar4 = *(int *)(iVar7 + 0x10 + DAT_0070a4ac);
        puVar3 = (undefined4 *)(iVar7 + 0x10 + DAT_0070a4ac);
        if (iVar4 != 0) {
          (*(code *)PTR_FUN_006dfaa0)(iVar4,iVar6 << 2);
          *puVar3 = 0;
          iVar6 = DAT_006e2a8c;
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar5 < iVar6);
    }
    if (DAT_0070a48c != 0) {
      (*(code *)PTR_FUN_006dfaa0)(DAT_0070a48c,DAT_006e2a90 * 4);
      iVar6 = DAT_006e2a8c;
    }
    if (DAT_0070a488 != 0) {
      (*(code *)PTR_FUN_006dfaa0)(DAT_0070a488,iVar6 * 4);
      iVar6 = DAT_006e2a8c;
    }
    if (DAT_0070a4ac != 0) {
      (*(code *)PTR_FUN_006dfaa0)(DAT_0070a4ac,0x14);
      iVar6 = DAT_006e2a8c;
    }
    if (DAT_0070a490 != 0) {
      (*(code *)PTR_FUN_006dfaa0)(DAT_0070a490,iVar6 << 2);
    }
    if (DAT_0070a494 != 0) {
      (*(code *)PTR_FUN_006dfaa0)(DAT_0070a494,DAT_006e2a90 * 4);
    }
    DAT_0070a4a0 = '\0';
  }
  return;
}

