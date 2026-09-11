/* Decompiled from Speed.exe @ 005c5508 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c5508(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  FUN_005b1752();
  FUN_005b1797();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  pcVar1 = _setlocale(4,(char *)0x0);
  pcVar1 = __strdup(pcVar1);
  *(char **)(param_1 + 0x84) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    iVar3 = 2;
    bVar5 = true;
    pcVar4 = "C";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *pcVar1 == *pcVar4;
      pcVar1 = pcVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) goto LAB_005c5588;
  }
  _setlocale(4,"C");
LAB_005c5588:
  uVar2 = __controlfp(0,0);
  *(uint *)(param_1 + 0x88) = uVar2;
  __controlfp(0x10000,0x30000);
  return param_1;
}

