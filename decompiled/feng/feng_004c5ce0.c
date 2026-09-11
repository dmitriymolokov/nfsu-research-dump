/* Decompiled from Speed.exe @ 004c5ce0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c5ce0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_220 [32];
  char local_200 [512];
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x40) + 8);
  uVar3 = FUN_004f42f0("EVENT_%d_DESCRIPTION",*puVar2);
  if (puVar2[2] != 4) {
    FUN_00495f00(uVar3);
    return;
  }
  FUN_00674898();
  FUN_00586690(0x3f800000);
  FUN_00674898();
  FUN_00586580(local_220);
  iVar4 = FUN_0059fb80();
  if (iVar4 == 0) {
    iVar4 = FUN_0059fb80();
  }
  iVar6 = 0x200;
  pcVar5 = local_200;
  do {
    cVar1 = pcVar5[iVar4 - (int)local_200];
    iVar6 = iVar6 + -1;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
  } while (iVar6 != 0);
  FUN_004f6850(local_200,local_220);
  return;
}

