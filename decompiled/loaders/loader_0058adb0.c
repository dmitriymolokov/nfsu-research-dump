/* spd-match: far pct=10.20 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058ADB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0058adb0(int obj, char *param_1)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar1 = (char *)(obj + 8);
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar3 = pcVar1;
    do {
      cVar2 = pcVar3[(int)(param_1 + (1 - (int)pcVar1))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(obj + 0x50) = 0;
  *(undefined4 *)(obj + 0x54) = 0;
  *(undefined2 *)(obj + 0x58) = 0;
  *(undefined1 *)(obj + 0x5a) = 0;
  *(undefined1 *)(obj + 0x5b) = 0;
  return;
}
