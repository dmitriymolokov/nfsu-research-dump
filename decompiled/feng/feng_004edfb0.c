/* spd-match: far pct=9.41 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EDFB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004cd180();
int __cdecl FUN_004edad0();
int __cdecl FUN_004edd00();
extern unsigned char *DAT_006f8a48;
extern int DAT_006f8ae8;
void __fastcall FUN_004edfb0(int obj)

{
  undefined1 *puVar1;
  char *pcVar2;

  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)(obj + 0x50) != '\0') {
    *(undefined1 *)(obj + 0x50) = 0;
    FUN_004edd00();
  }
  pcVar2 = *(char **)(obj + 0x1fc);
  if ((pcVar2 != (char *)0x0) && (iVar4 = 0, *pcVar2 != '\0')) {
    do {
      iVar3 = iVar4;
      iVar4 = iVar3 + 1;
    } while (pcVar2[iVar3 + 1] != '\0');
    if ((0 < iVar4) && (0 < *(int *)(obj + 0x48))) {
      for (iVar6 = *(int *)(obj + 0x48) + -1; iVar6 < iVar4; iVar6 = iVar6 + 1) {
        puVar1 = (undefined1 *)(iVar6 + *(int *)(obj + 0x1fc));
        *puVar1 = puVar1[1];
      }
      *(undefined1 *)(iVar3 + *(int *)(obj + 0x1fc)) = 0;
      *(int *)(obj + 0x48) = *(int *)(obj + 0x48) + -1;
      FUN_004edad0();
      if (DAT_006f8ae8 != 0x14) {
        uVar5 = 0;
        do {
          if (*(int *)((int)&DAT_006f8a48 + uVar5) == 0x14) break;
          uVar5 = uVar5 + 8;
        } while (uVar5 < 0x70);
      }
      FUN_004cd180(0);
    }
  }
  return;
}
