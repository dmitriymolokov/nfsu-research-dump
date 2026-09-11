/* spd-match: far pct=6.60 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EE060 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004cd180();
int __cdecl FUN_004edad0();
int __cdecl FUN_004edd00();
int __cdecl FUN_004ee1c0();
extern unsigned char *DAT_006f8a48;
extern int DAT_006f8ae0;
void __fastcall FUN_004ee060(int obj, char param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;

  int iVar4;
  uint uVar5;
  
  if (*(char *)(obj + 0x50) != '\0') {
    *(undefined1 *)(obj + 0x50) = 0;
    FUN_004edd00();
  }
  pcVar3 = *(char **)(obj + 0x1fc);
  iVar4 = 0;
  if (pcVar3 != (char *)0x0) {
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = pcVar3[iVar1];
    }
  }
  if ((iVar4 < *(int *)(obj + 0x4c)) && (param_1 != '\0')) {
    iVar4 = 0x9a;
    if (*(int *)(obj + 0x48) < 0x9a) {
      do {
        *(undefined1 *)(*(int *)(obj + 0x1fc) + iVar4) =
             *(undefined1 *)(*(int *)(obj + 0x1fc) + -1 + iVar4);
        iVar4 = iVar4 + -1;
      } while (*(int *)(obj + 0x48) < iVar4);
    }
    *(char *)(*(int *)(obj + 0x48) + *(int *)(obj + 0x1fc)) = param_1;
    *(undefined1 *)(*(int *)(obj + 0x1fc) + 0x9b) = 0;
    iVar4 = *(int *)(obj + 0x48) + 1;
    *(int *)(obj + 0x48) = iVar4;
    if (*(int *)(obj + 0x4c) < iVar4) {
      *(int *)(obj + 0x48) = *(int *)(obj + 0x4c);
    }
    FUN_004edad0();
    if (DAT_006f8ae0 != 0x13) {
      uVar5 = 0;
      do {
        if (*(int *)((int)&DAT_006f8a48 + uVar5) == 0x13) break;
        uVar5 = uVar5 + 8;
      } while (uVar5 < 0x70);
    }
    FUN_004cd180(0);
  }
  if ((*(char *)(obj + 0x51) != '\0') && (param_1 != ' ')) {
    FUN_004ee1c0();
  }
  return;
}
