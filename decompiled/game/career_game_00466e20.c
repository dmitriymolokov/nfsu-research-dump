/* Decompiled from Speed.exe @ 00466e20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00466e20(undefined4 *param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006854f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c8810;
  DAT_00736000 = DAT_00736000 + -1;
  local_4 = 0;
  if (param_1[0x99] != 0) {
    FUN_004672a0();
  }
  piVar2 = (int *)param_1[0x95];
  iVar3 = param_1[0x94];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  *(char *)(param_1[0x96] + 0x1a) = *(char *)(param_1[0x96] + 0x1a) + -1;
  *(char *)(param_1[0x97] + 0x1a) = *(char *)(param_1[0x97] + 0x1a) + -1;
  iVar3 = DAT_0072cbfc;
  iVar5 = *(short *)(param_1[0x96] + 0x18) * 0xde + (int)*(short *)(param_1[0x97] + 0x18);
  pbVar1 = (byte *)((iVar5 >> 3) + DAT_0072cbfc);
  *pbVar1 = *pbVar1 & ~('\x01' << ((byte)iVar5 & 7));
  iVar5 = *(short *)(param_1[0x97] + 0x18) * 0xde + (int)*(short *)(param_1[0x96] + 0x18);
  pbVar1 = (byte *)((iVar5 >> 3) + iVar3);
  *pbVar1 = *pbVar1 & ~('\x01' << ((byte)iVar5 & 7));
  puVar4 = (undefined4 *)param_1[0x96];
  if ((*(char *)((int)puVar4 + 0x15) == '\x03') && (*(char *)((int)puVar4 + 0x1a) == '\0')) {
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    param_1[0x96] = 0;
  }
  puVar4 = (undefined4 *)param_1[0x97];
  if ((*(char *)((int)puVar4 + 0x15) == '\x03') && (*(char *)((int)puVar4 + 0x1a) == '\0')) {
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    param_1[0x97] = 0;
  }
  if (param_1[0x9c] != 0) {
    FUN_005935e0();
  }
  *param_1 = &PTR_LAB_006c84d4;
  ExceptionList = pvStack_c;
  return;
}

