/* spd-match: far pct=7.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AA4D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0059fb80();
int unaff_EDI;
void __fastcall FUN_004aa4d0(char * obj, char param_1)

{
  char cVar1;
  bool bVar2;

  int iVar3;
  char *pcVar4;
  int iVar5;
  char *unaff_EDI;
  char local_20 [32];
  
  bVar2 = false;
  if ((obj != (char *)0x0) && (iVar3 = 0, *obj != '\0')) {
    do {
      iVar5 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    } while (obj[iVar5] != '\0');
    if (0 < iVar3) {
      bVar2 = true;
    }
  }
  unaff_EDI[0] = '\0';
  unaff_EDI[1] = '\0';
  unaff_EDI[2] = '\0';
  unaff_EDI[3] = '\0';
  unaff_EDI[4] = '\0';
  unaff_EDI[5] = '\0';
  unaff_EDI[6] = '\0';
  unaff_EDI[7] = '\0';
  unaff_EDI[8] = '\0';
  unaff_EDI[9] = '\0';
  unaff_EDI[10] = '\0';
  unaff_EDI[0xb] = '\0';
  unaff_EDI[0xc] = '\0';
  if (!bVar2) {
    if (param_1 == '\x01') {
      iVar3 = FUN_0059fb80();
      if (iVar3 == 0) {
        iVar3 = FUN_0059fb80();
      }
      iVar5 = 0x20;
      pcVar4 = local_20;
      do {
        cVar1 = pcVar4[iVar3 - (int)local_20];
        iVar5 = iVar5 + -1;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
      } while (iVar5 != 0);
    }
    else {
      iVar3 = FUN_0059fb80();
      if (iVar3 == 0) {
        iVar3 = FUN_0059fb80();
      }
      iVar5 = 0x20;
      pcVar4 = local_20;
      do {
        cVar1 = pcVar4[iVar3 - (int)local_20];
        iVar5 = iVar5 + -1;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        pcVar4 = pcVar4 + 1;
      } while (iVar5 != 0);
    }
    iVar3 = 0xd;
    pcVar4 = unaff_EDI;
    do {
      cVar1 = pcVar4[(int)(local_20 + -(int)unaff_EDI)];
      iVar3 = iVar3 + -1;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
    } while (iVar3 != 0);
    unaff_EDI[0xd] = '\0';
    return;
  }
  iVar3 = 0xd;
  pcVar4 = unaff_EDI;
  do {
    cVar1 = pcVar4[(int)obj - (int)unaff_EDI];
    iVar3 = iVar3 + -1;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while (iVar3 != 0);
  unaff_EDI[0xd] = '\x01';
  return;
}
