/* spd-match: far pct=14.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C4920 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f42f0();
extern int DAT_006c6544;
void __fastcall FUN_004c4920(int obj)

{

  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "";
  pcVar2 = "";
  if (*(int *)(*(int *)(obj + 8) + 4) == 1) {
    pcVar2 = "_TOURNAMENT";
  }
  switch(*(undefined4 *)(*(int *)(obj + 8) + 8)) {
  case 0:
    FUN_004f42f0("MODE_ICON_%s%s","CIRCUIT",pcVar2);
    return;
  case 1:
    FUN_004f42f0("MODE_ICON_%s%s",&DAT_006c6544,pcVar2);
    return;
  case 2:
    FUN_004f42f0("MODE_ICON_%s%s","SPRINT",pcVar2);
    return;
  case 3:
    FUN_004f42f0("MODE_ICON_%s%s","DRIFT",pcVar2);
    return;
  case 4:
    pcVar1 = "TIME_TRIAL";
    break;
  case 5:
    FUN_004f42f0("MODE_ICON_%s%s","LAP_KNOCKOUT",pcVar2);
    return;
  }
  FUN_004f42f0("MODE_ICON_%s%s",pcVar1,pcVar2);
  return;
}
