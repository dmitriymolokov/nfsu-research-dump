/* Decompiled from Speed.exe @ 00418a00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00418a00(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_EDI;
  
  puVar5 = *(undefined4 **)(unaff_EDI + 0x280);
  piVar1 = (int *)(unaff_EDI + 0x26c);
  piVar6 = (int *)*piVar1;
  bVar2 = false;
  if (piVar6 != piVar1) {
    do {
      if (!bVar2) {
        if (piVar6[4] == param_1) {
          *(int **)(unaff_EDI + 0x284) = piVar6;
          bVar2 = true;
        }
        else if (puVar5 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      FUN_004f8ec0(piVar6);
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar1);
    if (bVar2) {
      *(undefined4 **)(unaff_EDI + 0x27c) = puVar5;
      FUN_004f8dd0(*(undefined4 *)(unaff_EDI + 0x284));
    }
  }
  if (DAT_0073578c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x18);
    }
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x80);
    }
  }
  *(bool *)(unaff_EDI + 0x265) = *(int *)(iVar3 + 0x10) != 0x38fc835a;
  FUN_004f9240();
  return;
}

