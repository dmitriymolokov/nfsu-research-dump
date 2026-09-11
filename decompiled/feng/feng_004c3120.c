/* Decompiled from Speed.exe @ 004c3120 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c3120(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int unaff_EBX;
  char local_100 [256];
  
  uVar2 = FUN_004f42f0("BRAND_NAME_%s",*(int *)(*(int *)(unaff_EBX + 0x48) + 0x730) + 0xc0);
  FUN_00495f00(uVar2);
  uVar2 = FUN_004c2b00();
  FUN_004ad7b0(uVar2);
  if (DAT_006cc7a4 <= *(float *)(*(int *)(unaff_EBX + 0x48) + 0xe64)) {
    iVar3 = FUN_0059fb80();
    if (iVar3 == 0) {
      iVar3 = FUN_0059fb80();
    }
    iVar5 = 0x100;
    pcVar4 = local_100;
    do {
      cVar1 = pcVar4[iVar3 - (int)local_100];
      iVar5 = iVar5 + -1;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
    } while (iVar5 != 0);
    iVar3 = FUN_00674898();
  }
  else {
    iVar3 = FUN_0059fb80();
    if (iVar3 == 0) {
      iVar3 = FUN_0059fb80();
    }
    iVar5 = 0x100;
    pcVar4 = local_100;
    do {
      cVar1 = pcVar4[iVar3 - (int)local_100];
      iVar5 = iVar5 + -1;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
    } while (iVar5 != 0);
    iVar3 = FUN_00674898();
    iVar3 = -iVar3;
  }
  FUN_004f6850(local_100,iVar3);
  return;
}

