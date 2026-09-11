/* spd-match: far pct=5.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A6000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057f2b0();
int unaff_ESI;
int __fastcall FUN_005a6000(int obj, int param_1)

{
  char cVar1;

  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar2 = *(int *)(obj + 0x10);
  if (*(char *)(iVar2 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  cVar1 = *(char *)(iVar2 + 0x424);
  iVar2 = (**(code **)(*unaff_ESI + 4))();
  iVar2 = (iVar2 * 5 + 1 + (int)cVar1) * 0x34;
  if ((*(char *)(iVar2 + param_1) == '\0') && (*(char *)(iVar2 + param_1 + 1) == '\0')) {
    *(undefined1 *)(unaff_ESI + 0x2c) = 0;
  }
  iVar2 = 0;
  do {
    iVar3 = (**(code **)(*unaff_ESI + 8))(iVar2 + 0xb);
    if (*(char *)(iVar3 + 0x265 + param_1) == '\0') {
      *(undefined1 *)(iVar2 + 0xb1 + (int)unaff_ESI) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return iVar3 + 0x265 + param_1;
}
