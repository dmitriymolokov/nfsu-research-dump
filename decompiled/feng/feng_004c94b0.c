/* spd-match: far pct=23.20 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C94B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_EDI;
void __fastcall FUN_004c94b0(int obj)

{
  char cVar1;

  int iVar2;
  char *pcVar3;
  int unaff_EDI;
  
  cVar1 = *(char *)(unaff_EDI + 8);
  iVar2 = unaff_EDI + 8;
  pcVar3 = (char *)(obj + 8);
  *pcVar3 = cVar1;
  while (cVar1 != '\0') {
    cVar1 = *(char *)(iVar2 + 1);
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar1;
  }
  cVar1 = *(char *)(unaff_EDI + 0x48);
  iVar2 = unaff_EDI + 0x48;
  pcVar3 = (char *)(obj + 0x48);
  *pcVar3 = cVar1;
  while (cVar1 != '\0') {
    cVar1 = *(char *)(iVar2 + 1);
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar1;
  }
  *(undefined4 *)(obj + 0x88) = *(undefined4 *)(unaff_EDI + 0x88);
  *(undefined4 *)(obj + 0x8c) = *(undefined4 *)(unaff_EDI + 0x8c);
  *(undefined4 *)(obj + 0x90) = *(undefined4 *)(unaff_EDI + 0x90);
  *(undefined4 *)(obj + 0x94) = *(undefined4 *)(unaff_EDI + 0x94);
  *(undefined4 *)(obj + 0x98) = *(undefined4 *)(unaff_EDI + 0x98);
  *(undefined4 *)(obj + 0x9c) = *(undefined4 *)(unaff_EDI + 0x9c);
  *(undefined4 *)(obj + 0xa0) = *(undefined4 *)(unaff_EDI + 0xa0);
  *(undefined1 *)(obj + 0xa4) = *(undefined1 *)(unaff_EDI + 0xa4);
  *(undefined1 *)(obj + 0xa5) = *(undefined1 *)(unaff_EDI + 0xa5);
  *(undefined1 *)(obj + 0xa6) = *(undefined1 *)(unaff_EDI + 0xa6);
  return;
}
