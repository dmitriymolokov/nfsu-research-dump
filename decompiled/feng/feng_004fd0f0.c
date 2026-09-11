/* spd-match: far pct=6.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-c/va_004FD0F0 */
#include "ghidra_compat.h"

int __fastcall FUN_004fd0f0(char * obj, undefined4 param_1, char *param_2)

{
  char cVar1;

  char cVar2;
  
  do {
    cVar2 = *obj;
    if (('`' < cVar2) && (cVar2 < 0x7b)) {
      cVar2 = cVar2 + -0x20;
    }
    cVar1 = *param_2;
    obj = obj + 1;
    if (('`' < cVar1) && (cVar1 < 0x7b)) {
      cVar1 = cVar1 + -0x20;
    }
    param_2 = param_2 + 1;
  } while ((cVar2 != '\0') && (cVar2 == cVar1));
  return (int)cVar2 - (int)cVar1;
}
