/* spd-match: far pct=13.24 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041B150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041a250();
int __cdecl FUN_0041a6c0();
int __cdecl FUN_0041bb30();
int __cdecl FUN_0041bc20();
extern int DAT_0071d890;
void __fastcall FUN_0041b150(int obj, int param_1)

{
  char cVar1;

  if ((&DAT_0071d890)[obj] != 0) {
    cVar1 = FUN_0041bc20(param_1 + 0x2498);
    if (cVar1 != '\0') {
      FUN_0041bb30(obj);
    }
    if (*(char *)(obj + 0x25d8 + param_1) != '\0') {
      FUN_0041a6c0(param_1);
      *(undefined1 *)(param_1 + 0x2499 + obj * 8) = 1;
      *(undefined1 *)(obj + 0x25d8 + param_1) = 0;
    }
    if (*(char *)(obj + 0x25da + param_1) != '\0') {
      FUN_0041a250(param_1,*(undefined4 *)(param_1 + (obj * 3 + 0xae9) * 4),
                   *(undefined4 *)(param_1 + 0x2ba8 + obj * 0xc));
      *(undefined1 *)(param_1 + 0x2498 + obj * 8) = 1;
      *(undefined1 *)(obj + 0x25da + param_1) = 0;
    }
  }
  return;
}
