/* Decompiled from Speed.exe @ 00468410 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00468410(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *param_1 = &PTR_FUN_006c86a8;
  DAT_00736008 = DAT_00736008 + -1;
  FUN_004685a0(0);
  iVar1 = param_1[1];
  piVar2 = (int *)param_1[2];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    if (DAT_00779be0 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)(DAT_00779be0 + -0x250);
    }
    puVar4 = (undefined4 *)FUN_00421970();
    while (puVar3 = puVar6, puVar3 != puVar4) {
      if (puVar3[0x94] == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)(puVar3[0x94] + -0x250);
      }
      if (((undefined4 *)puVar3[0x96] == param_1) || ((undefined4 *)puVar3[0x97] == param_1)) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  if (-1 < *(short *)(param_1 + 6)) {
    *(undefined4 *)(DAT_00736050 + *(short *)(param_1 + 6) * 4) = 0;
    iVar1 = DAT_00736070;
    iVar5 = (int)*(short *)(param_1 + 6);
    *(byte *)(*(int *)(DAT_00736070 + 4) + (iVar5 >> 3)) =
         *(byte *)(*(int *)(DAT_00736070 + 4) + (iVar5 >> 3)) &
         ~('\x01' << ((byte)*(short *)(param_1 + 6) & 7));
    if (iVar5 < *(int *)(iVar1 + 8)) {
      *(int *)(iVar1 + 8) = iVar5;
    }
  }
  return;
}

