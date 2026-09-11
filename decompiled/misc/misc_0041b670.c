/* spd-match: far pct=14.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041B670 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20();
int __cdecl FUN_0041a680();
int __cdecl FUN_0041ace0();
int __cdecl FUN_0041af00();
int __cdecl FUN_0041b150();
int __cdecl FUN_0041b5f0();
int __cdecl FUN_0041bb30();
int __cdecl FUN_0041bc20();
extern int DAT_0071d890;
extern int DAT_0071d89c;
void __fastcall FUN_0041b670(int obj, int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;

  if ((&DAT_0071d89c)[obj] == 0) {
    FUN_00419c20("ERROR: trying to play a force on channel %d but no");
    FUN_00419c20("wheel/joystick opened.\n");
  }
  else if ((*(char *)(obj + 0x2220 + param_1) == '\0') && ((&DAT_0071d890)[obj] != 0)) {
    iVar1 = param_1 + 0x2498;
    *(undefined1 *)(obj + 0x2220 + param_1) = 1;
    cVar3 = FUN_0041bc20(iVar1);
    if (cVar3 != '\0') {
      if ((&DAT_0071d890)[obj] != 0) {
        cVar3 = FUN_0041bc20(iVar1);
        if (cVar3 != '\0') {
          FUN_0041bb30(obj);
        }
      }
      *(undefined1 *)(param_1 + 0x25dc + obj * 10) = 1;
    }
    cVar3 = FUN_0041bc20(param_1 + 0x24e8);
    if (cVar3 != '\0') {
      FUN_0041a680();
      *(undefined1 *)(param_1 + 0x25dd + obj * 10) = 1;
    }
    cVar3 = FUN_0041bc20(iVar1);
    if (cVar3 != '\0') {
      if ((&DAT_0071d890)[obj] != 0) {
        cVar3 = FUN_0041bc20(iVar1);
        if (cVar3 != '\0') {
          FUN_0041bb30(obj);
        }
      }
      *(undefined1 *)(param_1 + 0x25de + obj * 10) = 1;
    }
    iVar2 = param_1 + 0x2538;
    cVar3 = FUN_0041bc20(iVar2);
    if (cVar3 != '\0') {
      FUN_0041ace0();
      *(undefined1 *)(param_1 + 0x25e1 + obj * 10) = 1;
    }
    cVar3 = FUN_0041bc20(iVar2);
    if (cVar3 != '\0') {
      FUN_0041af00();
      *(undefined1 *)(param_1 + 0x25e2 + obj * 10) = 1;
    }
    cVar3 = FUN_0041bc20(iVar1);
    if (cVar3 != '\0') {
      FUN_0041b150(param_1);
      *(undefined1 *)(param_1 + 0x25e3 + obj * 10) = 1;
    }
    cVar3 = FUN_0041bc20(iVar2);
    if (cVar3 != '\0') {
      FUN_0041b5f0();
      *(undefined1 *)(param_1 + (obj * 5 + 0x12f2) * 2) = 1;
      return;
    }
  }
  return;
}
