/* spd-match: far pct=1.61 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005F56AD */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_005f56da(void);
int unaff_EBX;
undefined4 __fastcall FUN_005f56ad(char * obj, uint param_1)

{

  undefined4 uVar1;
  int unaff_EBX;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  bVar4 = param_1 == 0;
  if (param_1 != 0) {
    iVar2 = unaff_EBX - (int)obj;
    do {
      if (obj[iVar2] < *obj) {
        return 0xffffffff;
      }
      if (*obj < obj[iVar2]) goto LAB_005f56da;
      uVar3 = uVar3 + 1;
      obj = obj + 1;
    } while (uVar3 < param_1);
    bVar4 = uVar3 == param_1;
  }
  if ((bVar4) && (*(char *)(uVar3 + unaff_EBX) != '\0')) {
LAB_005f56da:
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
