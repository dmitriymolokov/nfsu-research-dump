/* Decompiled from Speed.exe @ 0066c680 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066c680(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *(int *)(unaff_EBX + 0x90);
  uVar4 = *(uint *)(unaff_EBX + 0x88);
  iVar2 = *(int *)(unaff_EBX + 0x8c);
  if ((int)(uVar4 + iVar1) % iVar2 != *(int *)(unaff_EBX + 0x94)) {
    uVar3 = param_1[2];
    if (uVar3 != 6) {
      if (*(uint *)(unaff_EBX + 0x9c) <= uVar3) {
        if (*(uint *)(unaff_EBX + 0x9c) < uVar3) {
          param_1[2] = 4;
          param_1[3] = *(int *)(unaff_EBX + 0x9c);
          *param_1 = 0;
          FUN_0066c0c0();
          return 0xffffffff;
        }
        if (*param_1 != 0) goto LAB_0066c70a;
      }
      return 0;
    }
    if (4 < (iVar2 - ((iVar2 - *(int *)(unaff_EBX + 0x94)) + iVar1) % iVar2) / (int)uVar4) {
LAB_0066c70a:
      piVar5 = (int *)(*(int *)(unaff_EBX + 0x98) + iVar1);
      piVar6 = param_1;
      piVar7 = piVar5;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)piVar7 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      *(int *)(unaff_EBX + 0x204) = *(int *)(unaff_EBX + 0x204) + 1;
      *(int *)(unaff_EBX + 0x90) =
           (*(int *)(unaff_EBX + 0x88) + *(int *)(unaff_EBX + 0x90)) % *(int *)(unaff_EBX + 0x8c);
      if (param_1[2] != 6) {
        *(int *)(unaff_EBX + 0x9c) = *(int *)(unaff_EBX + 0x9c) + 1;
        *(int *)(unaff_EBX + 0xa4) = *(int *)(unaff_EBX + 0xa4) + *piVar5;
      }
      *(uint *)(unaff_EBX + 0x208) = *(uint *)(unaff_EBX + 0x208) | 1;
      if (*(code **)(unaff_EBX + 0x3c) != (code *)0x0) {
        (**(code **)(unaff_EBX + 0x3c))();
      }
      *(int *)(unaff_EBX + 0x204) = *(int *)(unaff_EBX + 0x204) + -1;
      return 1;
    }
  }
  return 2;
}

