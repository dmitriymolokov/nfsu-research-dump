/* Decompiled from Speed.exe @ 005b2443 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005b2443(int param_1,char *param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_2 < *(char **)(param_1 + 4)) && (*param_2 == '0')) {
    uVar3 = 0;
    bVar2 = false;
    pcVar5 = param_2;
    while (((pcVar5 = pcVar5 + 1, pcVar5 < *(char **)(param_1 + 4) && (cVar1 = *pcVar5, '/' < cVar1)
            ) && (cVar1 < '8'))) {
      if ((uVar3 & 0xe0000000) != 0) {
        bVar2 = true;
      }
      uVar3 = cVar1 + -0x30 + uVar3 * 8;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3;
    }
    if (bVar2) {
      FUN_005b1f01(*(undefined4 *)(param_1 + 0x30),param_1 + 8,0x3eb,
                   "octal value truncated to 32bits");
    }
    iVar4 = (int)pcVar5 - (int)param_2;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

