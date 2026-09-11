/* spd-match: far pct=5.80 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00406E10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736508;
void __fastcall FUN_00406e10(int obj, int param_1)

{
  int iVar1;
  bool bVar2;

  int *piVar3;
  int iVar4;
  
  bVar2 = true;
  if ((*(char *)(obj + 0x264) != '\0') &&
     ((*(int *)(obj + 0x23c) == 3 || (*(int *)(obj + 0x23c) == 4)))) {
    bVar2 = false;
  }
  if (((*(char *)(obj + 0x265) != '\0') && (*(char *)(obj + 0x268) == '\0')) &&
     (*(int *)(obj + 0x23c) == 1)) {
    bVar2 = false;
  }
  if (((*(char *)(obj + 0x266) != '\0') && (*(char *)(obj + 0x268) == '\0')) &&
     (*(int *)(obj + 0x23c) == 2)) {
    bVar2 = false;
  }
  if (((*(char *)(obj + 0x267) != '\0') && (*(char *)(obj + 0x268) != '\0')) &&
     ((*(int *)(obj + 0x23c) == 2 || (*(int *)(obj + 0x23c) == 1)))) {
    bVar2 = false;
  }
  piVar3 = (int *)(obj + 0x18);
  iVar4 = 0x20;
  do {
    iVar1 = *(int *)(obj + 0x23c);
    if (*piVar3 == iVar1) {
      if (((((*(int *)(obj + 0x240) == 1) && (bVar2)) && (iVar1 != 4)) &&
          ((iVar1 != 3 && (iVar1 != 1)))) && (iVar1 != 2)) {
        bVar2 = false;
      }
      else {
        *piVar3 = 0;
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(obj + 0x18 + param_1 * 4) = *(undefined4 *)(obj + 0x23c);
  *(undefined4 *)(obj + 0x23c) = 0;
  DAT_00736508 = 0;
  return;
}
