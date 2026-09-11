/* spd-match: far pct=15.62 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063a310();
int __cdecl FUN_0063d080();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00641a90();
int __cdecl FUN_00641e00();
int __cdecl FUN_00642450();
int __cdecl FUN_00672a10();
extern code *DAT_006e75ec;
extern int DAT_0070f36c;
extern int DAT_0070f3a4;
extern unsigned char *_DAT_0070f3c4;

undefined4 FUN_0063a950(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = (*DAT_006e75ec)("bigfile",0x118,param_2);
  if (iVar2 != 0) {
    iVar3 = FUN_00672a10(param_1,0x7c);
    if (iVar3 == 0) {
      uVar4 = FUN_0063d080(param_1);
    }
    else {
      uVar4 = 0;
    }
    FUN_0063f190(&DAT_0070f3a4);
    *(int *)(iVar2 + 4) = _DAT_0070f3c4;
    _DAT_0070f3c4 = _DAT_0070f3c4 + -1;
    FUN_0063f1a0(&DAT_0070f3a4);
    *(undefined4 *)(iVar2 + 8) = uVar4;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    iVar3 = (iVar2 + 0x14) - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_0063a310(9,param_3,param_4,uVar4);
    iVar3 = DAT_0070f36c;
    *(int *)(iVar5 + 0x2c) = iVar2;
    iVar3 = (*(uint *)(iVar5 + 4) & 0x1f) * 0xac + iVar3;
    if (iVar3 == 0) {
      FUN_00642450("FILE_queueop - ATTEMPT TO QUEUE FILEOP ON NON-EXISTANT DEVICE.\n");
    }
    FUN_00641e00(iVar3 + 0x14,iVar5);
    FUN_00641a90(iVar3 + 0x7c);
    return *(undefined4 *)(iVar5 + 4);
  }
  return 0;
}
