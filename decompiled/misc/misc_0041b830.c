/* spd-match: far pct=11.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041B830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041a250();
int __cdecl FUN_0041a640();
int __cdecl FUN_0041a6c0();
int __cdecl FUN_0041ab00();
int __cdecl FUN_0041ad20();
int __cdecl FUN_0041af40();
int __cdecl FUN_0041b210();
extern int DAT_0071d890;
void __fastcall FUN_0041b830(int obj, int param_1)

{
  char *pcVar1;
  int iVar2;

  if (((&DAT_0071d890)[obj] != 0) && (*(char *)(obj + 0x2220 + param_1) == '\x01')) {
    iVar2 = param_1 + obj * 10;
    pcVar1 = (char *)(iVar2 + 0x25dc);
    *(undefined1 *)(obj + 0x2220 + param_1) = 0;
    if (*pcVar1 == '\x01') {
      FUN_0041a250(param_1,*(undefined4 *)(param_1 + (obj * 3 + 0xae9) * 4),
                   *(undefined4 *)(param_1 + 0x2ba8 + obj * 0xc));
    }
    if (*(char *)(iVar2 + 0x25dd) == '\x01') {
      FUN_0041a640(obj,*(undefined4 *)(param_1 + 0x2bb8 + obj * 8));
    }
    if (*(char *)(iVar2 + 0x25de) == '\x01') {
      FUN_0041a6c0(param_1);
    }
    if (*(char *)(iVar2 + 0x25e1) == '\x01') {
      FUN_0041ab00(param_1,*(undefined4 *)(param_1 + 0x2be8 + obj * 4));
    }
    if (*(char *)(iVar2 + 0x25e2) == '\x01') {
      FUN_0041ad20(param_1,*(undefined4 *)(param_1 + 0x2bf0 + obj * 4));
    }
    if (*(char *)(iVar2 + 0x25e3) == '\x01') {
      FUN_0041af40(param_1,*(undefined4 *)(param_1 + 0x2bf8 + obj * 4));
    }
    if (*(char *)(param_1 + (obj * 5 + 0x12f2) * 2) == '\x01') {
      FUN_0041b210(param_1,*(undefined4 *)(param_1 + obj * 0xc + 0x2c00),
                   *(undefined4 *)(param_1 + (obj * 3 + 0xb01) * 4),
                   *(undefined4 *)(param_1 + 0x2c08 + obj * 0xc));
    }
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(undefined4 *)(iVar2 + 0x25e0) = 0;
    *(undefined2 *)(iVar2 + 0x25e4) = 0;
  }
  return;
}
