/* spd-match: far pct=15.44 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00421740 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_00455760();
int __cdecl FUN_00455c50();
int __cdecl FUN_0045a930();
extern int DAT_00700e64;
extern int DAT_00700e68;
extern int DAT_007361fc;
extern int DAT_00736210;
extern int DAT_00736214;
extern int DAT_00736218;
extern int DAT_0077a4b0;
void __fastcall FUN_00421740(int obj)

{
  char cVar1;
  char cVar2;

  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar4 = DAT_00700e64;
  if (DAT_007361fc != 0) {
    if (-1 < DAT_00700e64) {
      piVar3 = (int *)(obj + 0x98c);
      iVar5 = 0x14;
      do {
        if (piVar3[-400] != 0) {
          *(undefined4 *)(piVar3[-400] + 0x10) = 0;
        }
        if (*piVar3 != 0) {
          *(undefined4 *)(*piVar3 + 0x10) = 0;
        }
        piVar3 = piVar3 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar4 <= *(int *)(obj + 0x1790)) {
        cVar1 = *(char *)(iVar4 + 0x1228 + obj);
        cVar2 = *(char *)(iVar4 + 0x1200 + obj);
        FUN_00455760(local_30);
        FUN_00455760(local_20);
        FUN_0045a930(cVar2 * 0x50 + 0x300 + obj);
        FUN_0045a930(cVar1 * 0x50 + 0x940 + obj);
      }
    }
    if (DAT_00736210 != 0) {
      FUN_00455c50(&DAT_0077a4b0,obj + 0x15d0);
      return;
    }
    if (DAT_00736214 != 0) {
      FUN_00455c50(&DAT_0077a4b0,obj + 0x1250);
      return;
    }
    if (DAT_00736218 != 0) {
      FUN_00455c50(&DAT_0077a4b0,obj + 0x1410);
      return;
    }
    if (DAT_00700e68 != -1) {
      iVar4 = FUN_0041ffe0();
      FUN_00455c50(&DAT_0077a4b0,*(int *)(iVar4 + 0x30) + 0x10);
    }
  }
  return;
}
