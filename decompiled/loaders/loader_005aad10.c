/* spd-match: far pct=4.81 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AAD10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
int unaff_ESI;
undefined4 __fastcall FUN_005aad10(int obj, int param_1)

{
  int iVar1;

  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  if ((*(int *)(*(int *)(obj + 0x14) + 4) != 3) || (*(int *)(*(int *)(param_1 + 0x14) + 4) != 3))
  {
    return 1;
  }
  iVar1 = (*(short *)(obj + 10) + -0x32) * 0x10 + unaff_ESI;
  if ((((*(char *)(iVar1 + 0x10) != '\0') &&
       (iVar2 = (*(short *)(param_1 + 10) + -0x32) * 0x10, iVar3 = iVar2 + unaff_ESI,
       *(char *)(iVar2 + 0x10 + unaff_ESI) != '\0')) && (DAT_006cc7a4 <= *(float *)(iVar1 + 0x18)))
     && ((DAT_006cc7a4 <= *(float *)(iVar3 + 0x18) &&
         (*(int *)(iVar1 + 0x14) != *(int *)(iVar3 + 0x14))))) {
    return 1;
  }
  return 0;
}
