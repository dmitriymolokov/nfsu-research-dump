/* spd-match: far pct=14.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063a310();
int __cdecl FUN_0063d080();
int __cdecl FUN_0063f1b0();
int __cdecl FUN_00641a90();
int __cdecl FUN_00641e00();
int __cdecl FUN_00642450();
int __cdecl FUN_00672a10();
extern code *DAT_006e75ec;
extern int DAT_0070f36c;

undefined4 FUN_0063a5d0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar2 = FUN_00672a10(param_1,0x7c);
  if (iVar2 == 0) {
    uVar3 = FUN_0063d080(param_1);
  }
  else {
    uVar3 = 0;
  }
  iVar2 = FUN_0063a310(0,param_3,param_4,uVar3);
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 1;
  uVar3 = (*DAT_006e75ec)(param_1,pcVar4 + (1 - (int)(param_1 + 1)),0x100);
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  FUN_0063f1b0(uVar3,param_1,pcVar4 + (1 - (int)(param_1 + 1)));
  iVar5 = (*(uint *)(iVar2 + 4) & 0x1f) * 0xac + DAT_0070f36c;
  *(undefined4 *)(iVar2 + 0x24) = param_2;
  if (iVar5 == 0) {
    FUN_00642450("FILE_queueop - ATTEMPT TO QUEUE FILEOP ON NON-EXISTANT DEVICE.\n");
  }
  FUN_00641e00(iVar5 + 0x14,iVar2);
  FUN_00641a90(iVar5 + 0x7c);
  return *(undefined4 *)(iVar2 + 4);
}
