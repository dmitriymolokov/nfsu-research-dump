/* spd-match: far pct=16.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A8B10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a8a70();
int __cdecl FUN_004a9900();
int unaff_EBX;
void __fastcall FUN_004a8b10(char * obj)

{
  int iVar1;
  char cVar2;

  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0xc) == *(int *)(unaff_EBX + 8)) {
    *(undefined4 *)(unaff_EBX + 0x10) = 0;
    FUN_004a8a70(0);
  }
  iVar3 = 0;
  if (obj != (char *)0x0) {
    cVar2 = *obj;
    while (cVar2 != '\0') {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = obj[iVar1];
    }
  }
  pcVar4 = _malloc(iVar3 + 1);
  cVar2 = *obj;
  *pcVar4 = cVar2;
  if (cVar2 != '\0') {
    pcVar5 = pcVar4;
    do {
      cVar2 = pcVar5[(int)(obj + (1 - (int)pcVar4))];
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar2;
    } while (cVar2 != '\0');
  }
  FUN_004a9900(pcVar4);
  *(int *)(unaff_EBX + 0xc) = *(int *)(unaff_EBX + 0xc) + 1;
  return;
}
