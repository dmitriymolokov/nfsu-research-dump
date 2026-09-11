/* spd-match: far pct=6.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A6D20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736150;
extern int DAT_0077af30;
int __fastcall FUN_005a6d20(int val, int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;

  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  iVar6 = *(int *)(param_1 + 8 + val * 4);
  cVar1 = *(char *)(iVar6 + 0x5c);
  local_4 = 0;
  if ((cVar1 == -1) || (sVar2 = *(short *)(iVar6 + 0x5e), sVar2 == -1)) {
    iVar6 = 0;
  }
  else {
    if (cVar1 < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (&DAT_0077af30)[cVar1];
    }
    iVar6 = sVar2 * 0x88 + 0x27c + iVar6;
  }
  if ((*(int *)(param_1 + 4) + -1 <= val) ||
     (iVar3 = *(int *)(param_1 + 0xc + val * 4), *(char *)(iVar3 + 0x60) == '\0')) {
    return 0;
  }
  iVar8 = 0;
  do {
    iVar4 = 0;
    do {
      if (*(char *)(iVar4 + 0x81 + iVar6) == -1) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    if (iVar4 <= iVar8) {
      return local_4;
    }
    if (local_4 != 0) {
      return local_4;
    }
    uVar5 = (uint)*(byte *)(iVar8 + 0x81 + iVar6);
    if (uVar5 == 0xff) {
      iVar4 = 0;
    }
    else {
      iVar4 = uVar5 * 0x20 + DAT_00736150;
    }
    cVar1 = *(char *)(iVar3 + 0x5c);
    if (((cVar1 == -1) || (*(short *)(iVar3 + 0x5e) == -1)) || (cVar1 < 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = (&DAT_0077af30)[cVar1];
    }
    if ((&DAT_0077af30)[*(byte *)(iVar4 + 9)] == iVar7) {
      local_4 = iVar4;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}
