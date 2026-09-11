/* Decompiled from Speed.exe @ 00545af0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00545af0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_1;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    param_1 = 0;
    do {
      iVar4 = *(int *)(iVar2 + 0x74) + param_1;
      bVar1 = false;
      if (((*(int *)(*(int *)(iVar2 + 0x74) + 0x38 + param_1) != 0) &&
          (param_2 <= *(int *)(iVar4 + 0x30))) && (*(int *)(iVar4 + 0x30) < param_3 + param_2)) {
        bVar1 = true;
        *(undefined4 *)(iVar4 + 0x70) = 0;
      }
      if (((*(int *)(iVar4 + 0x3c) != 0) && (param_2 <= *(int *)(iVar4 + 0x34))) &&
         (*(int *)(iVar4 + 0x34) < param_2 + param_3)) {
        bVar1 = true;
        *(undefined4 *)(iVar4 + 0x74) = 0;
      }
      if ((*(int *)(iVar4 + 0x70) == 0) && (bVar1)) {
        FUN_00408010();
        if ((*(int *)(iVar2 + 0x70) != 0) &&
           ((iVar3 = *(int *)(*(int *)(iVar2 + 0x70) + 0x74), iVar3 != 0 &&
            (iVar3 = FUN_0053e400(*(undefined4 *)(iVar4 + 0x24),iVar3,0), iVar3 != 0)))) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        iVar3 = *(int *)(iVar4 + 0x24);
        if (((iVar3 == 0x530b82b0) || (iVar3 == 0x530b82b1)) || (iVar3 == 0x530b82b2)) {
          FUN_005a8500();
        }
      }
      if (iVar4 == DAT_0073551c) {
        DAT_0073551c = 0;
      }
      local_4 = local_4 + 1;
      param_1 = param_1 + 0x7c;
    } while (local_4 < *(int *)(iVar2 + 0x7c));
  }
  FUN_0040caa0(0);
  FUN_004029a0(0);
  FUN_004f46c0(iVar2,0);
  DAT_0073556c = 1;
  return;
}

