/* spd-match: far pct=7.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005942D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_00734488;
void __fastcall FUN_005942d0(int obj, char *param_1, undefined4 param_2, undefined4 param_3)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  
  DAT_00734488 = DAT_00734488 + 1;
  *(undefined4 *)(obj + 0xc) = param_3;
  *(undefined4 *)(obj + 8) = 0;
  *(undefined4 *)(obj + 0x10) = param_2;
  cVar2 = *param_1;
  pcVar1 = (char *)(obj + 0x14);
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar3 = pcVar1;
    do {
      cVar2 = pcVar3[(int)(param_1 + (1 - (int)pcVar1))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  return;
}
