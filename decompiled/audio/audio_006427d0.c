/* spd-match: far pct=2.30 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


struct ThisCallBox {
  int FUN_006427d0(int param_2);
};
int ThisCallBox::FUN_006427d0(int param_2) {
  char * param_1 = (char *)this;
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (*param_1 != '\0') {
    param_2 = param_2 - (int)param_1;
    do {
      cVar2 = param_1[param_2];
      if (cVar2 == '\0') {
        return iVar4;
      }
      cVar3 = *param_1;
      if ((cVar3 < 'A') || ('Z' < cVar3)) {
        iVar6 = (int)cVar3;
      }
      else {
        iVar6 = cVar3 + 0x20;
      }
      if ((cVar2 < 'A') || ('Z' < cVar2)) {
        iVar5 = (int)cVar2;
      }
      else {
        iVar5 = cVar2 + 0x20;
      }
      if (iVar6 != iVar5) {
        return iVar4;
      }
      pcVar1 = param_1 + 1;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (*pcVar1 != '\0');
  }
  return iVar4;
}
