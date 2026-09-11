/* Decompiled from Speed.exe @ 004c44c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c44c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int unaff_EBX;
  char local_20 [32];
  
  pcVar4 = local_20;
  iVar2 = FUN_0059fb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0059fb80();
  }
  iVar5 = 0x20;
  do {
    cVar1 = pcVar4[iVar2 - (int)local_20];
    iVar5 = iVar5 + -1;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while (iVar5 != 0);
  FUN_004f6850("%s %d",local_20,
               *(undefined4 *)(*(int *)(*(int *)(unaff_EBX + 0x48) + 0x730) + 0xc7c));
  uVar3 = FUN_004c2b00();
  FUN_004ad7b0(uVar3);
  return;
}

