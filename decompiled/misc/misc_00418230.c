/* Decompiled from Speed.exe @ 00418230 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00418230(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int unaff_EBX;
  int local_24;
  char local_20 [32];
  
  FUN_004181e0(unaff_EBX);
  if ((*(int *)(unaff_EBX + 0x260) != 0) &&
     (local_24 = 0, 0 < *(int *)(*(int *)(unaff_EBX + 0x260) + 8))) {
    puVar1 = (undefined4 *)(unaff_EBX + 0x274);
    do {
      piVar6 = _malloc(0x10);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar4 = piVar6 + 2;
        *piVar4 = (int)piVar4;
        piVar6[3] = (int)piVar4;
      }
      puVar3 = *(undefined4 **)(unaff_EBX + 0x278);
      *puVar3 = piVar6;
      *(int **)(unaff_EBX + 0x278) = piVar6;
      piVar6[1] = (int)puVar3;
      *piVar6 = (int)puVar1;
      if (*(int *)(unaff_EBX + 0x280) == 0) {
        *(undefined4 *)(unaff_EBX + 0x280) = *puVar1;
      }
      if (*(int *)(unaff_EBX + 0x27c) == 0) {
        *(undefined4 *)(unaff_EBX + 0x27c) = *puVar1;
      }
      piVar4 = *(int **)(unaff_EBX + 0x260);
      if (local_24 < piVar4[1]) {
        iVar8 = *piVar4;
        iVar7 = iVar8 * local_24;
        iVar5 = piVar4[3];
        if (iVar8 != 0) {
          pcVar9 = local_20;
          do {
            cVar2 = pcVar9[(iVar7 + iVar5) - (int)local_20];
            iVar8 = iVar8 + -1;
            *pcVar9 = cVar2;
            if (cVar2 == '\0') break;
            pcVar9 = pcVar9 + 1;
          } while (iVar8 != 0);
        }
      }
      FUN_004174b0(piVar6,local_20);
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(*(int *)(unaff_EBX + 0x260) + 8));
  }
  FUN_004f9240(unaff_EBX + 0x26c);
  if (*(int *)(unaff_EBX + 0x284) != 0) {
    FUN_004f8dd0(*(int *)(unaff_EBX + 0x284));
  }
  return;
}

