/* spd-match: far pct=34.07 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058BDC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0058bf40();
int __cdecl FUN_0058cbb0();
void __fastcall FUN_0058bdc0(int obj)

{
  int iVar1;

  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  if (*(char *)(obj + 0xba1) == '\x01') {
    iVar3 = *(int *)(obj + 0xbac);
    *(undefined1 *)(obj + 0xba1) = 2;
    if (0 < iVar3) {
      piVar2 = (int *)(obj + 0xbb0);
      do {
        iVar1 = *piVar2;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x01')) {
          *(undefined1 *)(iVar1 + 0xe) = 2;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (*(char *)(obj + 0xba2) == '\x01') {
    iVar3 = *(int *)(obj + 0xd90);
    *(undefined1 *)(obj + 0xba2) = 2;
    if (0 < iVar3) {
      piVar2 = (int *)(obj + 0xd94);
      do {
        iVar1 = *piVar2;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x01')) {
          *(undefined1 *)(iVar1 + 0xe) = 2;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_0058bf40(unaff_EDI);
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  FUN_0058cbb0();
  return;
}
