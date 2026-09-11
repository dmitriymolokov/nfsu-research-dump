/* Decompiled from Speed.exe @ 005c683a */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c683a(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar1 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),(int *)(param_1 + 0x60));
  if (-1 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 9) {
      iVar2 = 0xc;
      bVar5 = true;
      pcVar3 = *(char **)(param_1 + 0x68);
      pcVar4 = "pack_matrix";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        iVar1 = FUN_005c5f11();
        return iVar1;
      }
      iVar2 = 8;
      bVar5 = true;
      pcVar3 = *(char **)(param_1 + 0x68);
      pcVar4 = "warning";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        iVar1 = FUN_005c602e();
        return iVar1;
      }
    }
    if ((iVar1 != 0xc) && (iVar1 != 0xd)) {
      FUN_005b1a6c();
    }
    iVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return iVar1;
}

