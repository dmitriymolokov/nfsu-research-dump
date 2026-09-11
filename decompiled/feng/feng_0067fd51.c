/* spd-match: far pct=3.23 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_0067FD51 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


struct ThisCallBox {
  void FUN_0067fd51(uint val, uint param_2, int param_3);
};
void ThisCallBox::FUN_0067fd51(uint val, uint param_2, int param_3)

{
  char * param_1 = (char *)this;
  ulonglong uVar1;
  char *pcVar2;

  char *pcVar3;
  char cVar4;
  
  pcVar2 = param_1;
  if (param_3 != 0) {
    *param_1 = '-';
    param_1 = param_1 + 1;
    val = -val;
    pcVar2 = param_1;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)val;
    val = val / param_2;
    cVar4 = (char)(uVar1 % (ulonglong)param_2);
    if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (val != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *param_1;
    pcVar3 = pcVar3 + -1;
    *param_1 = cVar4;
    param_1 = param_1 + 1;
  } while (param_1 < pcVar3);
  return;
}
