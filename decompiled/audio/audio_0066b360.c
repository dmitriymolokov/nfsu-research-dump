/* Decompiled from Speed.exe @ 0066b360 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_0066b360(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 < 0x40) || (0x7f < bVar1)) {
    iVar5 = *(int *)(unaff_EBX + 0x94);
    uVar4 = *(uint *)(unaff_EBX + 0x88);
    if ((int)(uVar4 + iVar5) % *(int *)(unaff_EBX + 0x90) != *(int *)(unaff_EBX + 0x98)) {
      uVar3 = bVar1 - 0x80;
      if (uVar3 != (*(uint *)(unaff_EBX + 200) + 1 & 0x3f)) {
        return (uint)(uVar3 == *(uint *)(unaff_EBX + 200));
      }
      *(uint *)(unaff_EBX + 200) = uVar3;
      goto LAB_0066b3f9;
    }
  }
  else {
    iVar2 = *(int *)(unaff_EBX + 0x90);
    iVar5 = *(int *)(unaff_EBX + 0x94);
    uVar4 = *(uint *)(unaff_EBX + 0x88);
    if (*(int *)(unaff_EBX + 0x8c) <
        (iVar2 - ((iVar2 - *(int *)(unaff_EBX + 0x98)) + iVar5) % iVar2) / (int)uVar4) {
      *(uint *)(unaff_EBX + 0xc0) = bVar1 - 0x40;
LAB_0066b3f9:
      puVar6 = (undefined4 *)(*(int *)(unaff_EBX + 0x9c) + iVar5);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(int *)(unaff_EBX + 0x200) = *(int *)(unaff_EBX + 0x200) + 1;
      *(int *)(unaff_EBX + 0x94) =
           (*(int *)(unaff_EBX + 0x88) + *(int *)(unaff_EBX + 0x94)) % *(int *)(unaff_EBX + 0x90);
      *(uint *)(unaff_EBX + 0x204) = *(uint *)(unaff_EBX + 0x204) | 1;
      if (*(code **)(unaff_EBX + 0x3c) != (code *)0x0) {
        (**(code **)(unaff_EBX + 0x3c))();
      }
      *(int *)(unaff_EBX + 0x200) = *(int *)(unaff_EBX + 0x200) + -1;
      return 1;
    }
  }
  return 0xffffffff;
}

