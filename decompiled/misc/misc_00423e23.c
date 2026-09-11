/* Decompiled from Speed.exe @ 00423e23 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00423e23(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  int iVar5;
  int iStack00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  float in_stack_00000028;
  undefined4 in_stack_00000058;
  
  FUN_00572cd0();
  if (*(undefined4 **)(unaff_EBX + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBX + 0x54))(1);
  }
  iStack00000018 = 0;
  if (0 < *(int *)(*(int *)(unaff_EBX + 0xa8) + 4)) {
    iVar5 = 0;
    do {
      FUN_004422b0(0,0);
      in_stack_00000028 = in_stack_00000028 + _DAT_006cc954;
      puVar4 = (undefined4 *)(*(int *)(unaff_EBX + 0x94) + iVar5);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      iVar1 = *(int *)(unaff_EBX + 0x90);
      *(float *)(iVar1 + 8 + iVar5) = in_stack_00000028;
      puVar4 = (undefined4 *)(iVar1 + iVar5);
      *puVar4 = in_stack_00000020;
      puVar4[1] = in_stack_00000024;
      iStack00000018 = iStack00000018 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iStack00000018 < *(int *)(*(int *)(unaff_EBX + 0xa8) + 4));
  }
  *(undefined4 *)(*(int *)(unaff_EBX + 0x58) + 0x88) = 0;
  puVar4 = (undefined4 *)&stack0x00000030;
  for (iVar5 = 0x8c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  in_stack_00000058 = 2;
  pvVar2 = _malloc(0x470);
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_004854e0(pvVar2,*(undefined4 *)(unaff_EBX + 0xa0),*(undefined4 *)(unaff_EBX + 0x58),
                         &stack0x00000030,1);
    *(undefined4 *)(unaff_EBX + 0x54) = uVar3;
    return 1;
  }
  *(undefined4 *)(unaff_EBX + 0x54) = 0;
  return 1;
}

