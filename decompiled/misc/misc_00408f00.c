/* spd-match: far pct=11.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00408F00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00446620();
int __cdecl FUN_0053e290();
extern int DAT_00700e74;
extern int DAT_00700e80;
extern int DAT_00700e90;
extern int DAT_00702c80;
extern int DAT_0071db20;
extern unsigned char *DAT_007361f0;
extern int DAT_007404c0;
extern int DAT_007405e8;
extern unsigned char *DAT_00740638;
extern int DAT_00740768;
extern int DAT_00740878;
extern int DAT_0077a920;
void __fastcall FUN_00408f00(int obj)

{
  int iVar1;
  char cVar2;

  undefined4 *puVar3;
  int *piVar4;
  
  cVar2 = DAT_0071db20;
  if (DAT_0071db20 == '\0') {
    *(undefined4 *)(obj + 0x820) = 0;
  }
  if ((((DAT_00702c80 != 0) && (DAT_0077a920 == 6)) && (*DAT_007361f0 != 1)) && (cVar2 == '\0')) {
    puVar3 = &DAT_007404c0;
    do {
      if ((*(char *)(puVar3 + 2) != '\0') && (*(int *)(puVar3[0x16] + 0x10) != 0)) {
        iVar1 = *(int *)(obj + 0x820);
        *(int *)(obj + 0x820) = iVar1 + 1;
        FUN_0053e290(iVar1 * 0xd0 + obj);
      }
      puVar3 = puVar3 + 0x18;
    } while ((int)puVar3 < 0x740581);
    if (DAT_00700e74 != 0) {
      piVar4 = &DAT_00740878;
      do {
        if (((char)piVar4[-0x14] != '\0') && (*(int *)(*piVar4 + 0x10) != 0)) {
          iVar1 = *(int *)(obj + 0x820);
          *(int *)(obj + 0x820) = iVar1 + 1;
          FUN_0053e290(iVar1 * 0xd0 + obj);
        }
        piVar4 = piVar4 + 0x18;
      } while ((int)piVar4 < 0x740a59);
    }
    if (((DAT_00700e90 != 0) && (DAT_007405e8 != '\0')) && (*(int *)(DAT_00740638 + 0x10) != 0)) {
      iVar1 = *(int *)(obj + 0x820);
      *(int *)(obj + 0x820) = iVar1 + 1;
      FUN_0053e290(iVar1 * 0xd0 + obj);
    }
    if ((DAT_00700e80 != 0) && (DAT_00740768 != '\0')) {
      iVar1 = *(int *)(obj + 0x820);
      *(int *)(obj + 0x820) = iVar1 + 1;
      FUN_0053e290(iVar1 * 0xd0 + obj);
    }
  }
  FUN_00446620();
  return;
}
