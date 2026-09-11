/* spd-match: far pct=16.54 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_04/attempt2/typed_pointer_repairs */
#include "ghidra_compat.h"

double __cdecl _atof(const char *);
int __cdecl _isalnum(int);

int __cdecl FUN_005b1775(...);

struct ThisCallBox {
  uint FUN_005b1c41(char *param_2, undefined4 *param_3);
};
uint ThisCallBox::FUN_005b1c41(char *param_2, undefined4 *param_3) {
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_2 < *(char **)(((int)this) + 4)) &&
     ((iVar1 = _isalpha((int)*param_2), pcVar3 = param_2, iVar1 != 0 || (*param_2 == '_')))) {
    do {
      pcVar3 = pcVar3 + 1;
      if (*(char **)(((int)this) + 4) <= pcVar3) break;
      iVar1 = _isalnum((int)*pcVar3);
    } while ((iVar1 != 0) || (*pcVar3 == '_'));
    uVar4 = (int)pcVar3 - (int)param_2;
    pcVar3 = (char *)FUN_005b1775(uVar4 + 1);
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *param_2;
        param_2 = param_2 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pcVar3[uVar4] = '\0';
      *param_3 = (undefined4)(unsigned long)pcVar3;
      return uVar4;
    }
  }
  return 0;
}
