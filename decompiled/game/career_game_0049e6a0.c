/* Decompiled from Speed.exe @ 0049e6a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049e6a0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char local_100 [256];
  
  pcVar5 = local_100;
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar6 = 0x100;
  do {
    cVar1 = pcVar5[iVar3 - (int)local_100];
    iVar6 = iVar6 + -1;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
  } while (iVar6 != 0);
  piVar4 = _malloc(0x108);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x2ccb70aa;
  }
  FUN_004f68c0(0xfc,local_100,param_2);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = piVar4;
  *(int **)(param_1 + 8) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = param_1 + 4;
  return;
}

