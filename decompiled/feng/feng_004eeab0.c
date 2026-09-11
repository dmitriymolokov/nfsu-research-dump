/* Decompiled from Speed.exe @ 004eeab0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004eeab0(void)

{
  void **ppvVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bVar6;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685398;
  iVar5 = *(int *)(unaff_ESI + 0xe4);
  local_4 = 0;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  while ((ExceptionList = ppvVar1, iVar5 != 0 && (cVar2 = FUN_004ffb00(iVar5), cVar2 != '\0'))) {
    iVar5 = *(int *)(iVar5 + 4);
    ppvVar1 = ExceptionList;
  }
  bVar6 = 0;
  if (*(int *)(unaff_ESI + 0xd4) != 0) {
    uVar3 = 0;
    do {
      puVar4 = (undefined4 *)(uVar3 * 0x88 + *(int *)(unaff_ESI + 8));
      puVar4[1] = 0;
      *puVar4 = 0;
      bVar6 = bVar6 + 1;
      puVar4 = puVar4 + 2;
      for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      uVar3 = (uint)bVar6;
    } while (uVar3 < *(uint *)(unaff_ESI + 0xd4));
  }
  if (*(char *)(unaff_ESI + 2) != '\0') {
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
    *(undefined2 *)(unaff_ESI + 0x1a) = 0;
    *(undefined2 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    *(undefined1 *)(unaff_ESI + 0x28) = 0;
    *(undefined1 *)(unaff_ESI + 0x29) = 0;
  }
  ExceptionList = local_c;
  return;
}

