/* Decompiled from Speed.exe @ 0048e210 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0048e210(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = param_1;
  FUN_004834e0();
  param_1[0xc] = param_2;
  *param_1 = &PTR_FUN_006c7c08;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  FUN_00440740();
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  piVar1 = *(int **)param_1[0xc];
  param_1[0xb] = piVar1;
  if ((piVar1 == (int *)0x0) || (piVar1 == (int *)param_1[0xc])) {
    param_1[0xb] = 0;
  }
  else {
    piVar1[0xd] = piVar1[0xd] & 0xffffff7f;
  }
  pvVar3 = _malloc(0x50);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00473ea0();
  }
  param_1[0xd] = uVar4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1 = (undefined4 *)0x0;
  if (0 < *(int *)(DAT_0073619c + 0x24)) {
    iVar7 = 0x520;
    iVar6 = DAT_0073619c;
    do {
      if (*(int *)(iVar7 + iVar6) != 0) {
        puVar5 = _malloc(0x250);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_LAB_006c84d4;
          puVar5[0x4e] = 0;
        }
        *(undefined4 **)((int)puVar2 + iVar7 + -0x4e8) = puVar5;
        FUN_004727c0();
        iVar6 = DAT_0073619c;
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar7 = iVar7 + 4;
    } while ((int)param_1 < *(int *)(iVar6 + 0x24));
  }
  uVar4 = DAT_006f0888;
  iVar6 = puVar2[7];
  *(undefined1 *)(iVar6 + 0x270) = 1;
  *(undefined4 *)(iVar6 + 0x27c) = uVar4;
  return puVar2;
}

