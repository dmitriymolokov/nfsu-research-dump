/* Decompiled from Speed.exe @ 004dccc0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dccc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0x44) == 0) {
    uVar2 = FUN_00565b60(0x100,0,0,0);
    *(undefined4 *)(unaff_EBX + 0x44) = uVar2;
  }
  pcVar3 = *(char **)(unaff_EBX + 0x44);
  iVar4 = 0x100;
  param_1 = param_1 - (int)pcVar3;
  do {
    cVar1 = pcVar3[param_1];
    iVar4 = iVar4 + -1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar4 != 0);
  if (*(int *)(unaff_EBX + 0x44) == 0) {
    FUN_00495f00(*(undefined4 *)(unaff_EBX + 0x50));
    return;
  }
  FUN_004f6850(*(int *)(unaff_EBX + 0x44));
  return;
}

