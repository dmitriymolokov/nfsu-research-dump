/* Decompiled from Speed.exe @ 0054df00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0054df00(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 uStack_238;
  undefined4 uStack_237;
  char cStack_1d0;
  char acStack_1cf [199];
  undefined1 local_108;
  undefined4 local_107;
  
  local_108 = 0;
  puVar5 = &local_107;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  FUN_00565da0("%s-%s-%s",&PTR_DAT_006bd178,&DAT_006bd174,&DAT_006bd16c);
  FUN_00667950(param_1,param_2,&DAT_006bd158,&local_108);
  uStack_238 = 0;
  puVar5 = &uStack_237;
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  FUN_00449ec0(100);
  FUN_00565da0("%s/%s-%s",&DAT_006bd174,&uStack_238,"Jan 15 2004");
  FUN_00667950(param_1,param_2,&DAT_006bd138,&local_108);
  cStack_1d0 = '\0';
  pcVar2 = acStack_1cf;
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2 = (char *)FUN_00401b30();
  cStack_1d0 = *pcVar2;
  if (*pcVar2 != '\0') {
    pcVar4 = &cStack_1d0;
    do {
      cVar1 = pcVar4[(int)(pcVar2 + (1 - (int)&cStack_1d0))];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  FUN_00667950(param_1,param_2,&DAT_006bd130,&cStack_1d0);
  return;
}

