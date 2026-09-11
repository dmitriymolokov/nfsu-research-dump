/* Decompiled from Speed.exe @ 00455c50 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00455c50(int *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (DAT_00700694 == 0) {
    if ((char)*param_1 == '\0') {
      return;
    }
    FUN_00455ae0(param_1);
  }
  else {
    if ((char)*param_1 != '\0') goto LAB_00455c9a;
    FUN_00455810(param_1);
  }
  if ((char)*param_1 == '\0') {
    return;
  }
LAB_00455c9a:
  iVar4 = 0;
  piVar3 = param_1;
  pcVar1 = param_2;
  do {
    piVar3 = piVar3 + 1;
    if ((iVar4 < param_2[0x1a0]) || (*param_2 <= iVar4)) {
      *(undefined4 *)(*piVar3 + 0x10) = 0;
    }
    else {
      local_18 = *(undefined4 *)(pcVar1 + 0x18);
      local_1c = *(undefined4 *)(pcVar1 + 0x14);
      local_20 = *(undefined4 *)(pcVar1 + 0x10);
      iVar2 = FUN_00424b50(local_18,0,0x3a83126f);
      if (iVar2 != 0) {
        FUN_00455760(&local_20);
      }
      FUN_00455b50(param_1,iVar4,DAT_006b755c);
      iVar2 = *(int *)(*piVar3 + 8);
      *(int **)(iVar2 + 0x10) = param_1 + 0x7d;
      *(undefined4 *)(iVar2 + 0x14) = 1;
    }
    iVar4 = iVar4 + 1;
    pcVar1 = pcVar1 + 0x10;
  } while (iVar4 < 0x28);
  return;
}

