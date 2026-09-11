/* Decompiled from Speed.exe @ 005bb43f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_005bb43f(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char local_18 [15];
  undefined1 local_9;
  
  iVar6 = (int)param_1;
  if ((((param_1 != (undefined4 *)0x0) && (*(int *)((int)param_1 + 4) == 2)) &&
      (*(int *)((int)param_1 + 0x10) == 2)) &&
     (((param_2 != 0 && (*(int *)(param_2 + 4) == 2)) && (*(int *)(param_2 + 0x10) == 9)))) {
    pvVar4 = _malloc(0x30);
    if (pvVar4 == (void *)0x0) {
      param_1 = (undefined4 *)0x0;
    }
    else {
      param_1 = (undefined4 *)FUN_005d7ac2((int *)(param_2 + 0x10));
    }
    if (param_1 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(iVar6 + 0x18);
      pcVar3 = *(char **)(param_2 + 0x18);
      FUN_00673533(local_18,0x10,&DAT_0069f230,uVar2);
      pcVar5 = local_18;
      local_9 = 0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (int)(pcVar7 + ((1 - (int)(pcVar3 + 1)) - (int)(local_18 + 1)));
      iVar6 = FUN_005b1775(pcVar5);
      if (iVar6 != 0) {
        FUN_00673533(iVar6,pcVar5,&DAT_0069f228,uVar2,pcVar3);
        pcVar5[iVar6 + -1] = '\0';
        param_1[6] = iVar6;
        return param_1;
      }
      (**(code **)*param_1)(1);
    }
  }
  return (undefined4 *)0x0;
}

