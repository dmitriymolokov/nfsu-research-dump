/* Decompiled from Speed.exe @ 004edd00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004edd00(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int unaff_EBX;
  undefined1 local_800 [2048];
  
  pcVar3 = *(char **)(unaff_EBX + 0x1fc);
  iVar4 = 0x9c;
  param_1 = param_1 - (int)pcVar3;
  do {
    cVar1 = pcVar3[param_1];
    iVar4 = iVar4 + -1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar4 != 0);
  *(undefined1 *)(*(int *)(unaff_EBX + 0x1fc) + 0x9c) = 0;
  FUN_0059ff40(local_800,0x800);
  FUN_00504080();
  pcVar3 = *(char **)(unaff_EBX + 0x1fc);
  iVar4 = 0;
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar1 = pcVar3[iVar2];
    }
  }
  *(int *)(unaff_EBX + 0x48) = iVar4;
  return;
}

