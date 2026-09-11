/* Decompiled from Speed.exe @ 0054a140 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 __fastcall
FUN_0054a140(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar4 = param_4;
  for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 != 0) {
    pcVar1 = (char *)(param_2 + 0x38);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      do {
        iVar3 = iVar2 + 1;
        iVar2 = iVar2 + 1;
      } while (pcVar1[iVar3] != '\0');
      if (0 < iVar2) {
        FUN_006682f0(pcVar1,param_4,0x8c,&DAT_006bd444);
        return 0;
      }
    }
    puVar4 = &DAT_006f3cd0;
    for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_4 = *puVar4;
      puVar4 = puVar4 + 1;
      param_4 = param_4 + 1;
    }
    return 0;
  }
  return 0xffffffff;
}

