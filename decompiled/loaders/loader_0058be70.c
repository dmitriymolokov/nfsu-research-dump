/* spd-match: far pct=25.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058BE70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053ec90();
int __cdecl FUN_0058b520();
int __cdecl FUN_0058c1c0();
extern int DAT_00740420;
char __fastcall FUN_0058be70(undefined4 val, int param_1)

{
  short *psVar1;

  int *piVar2;
  int iVar3;
  int unaff_EDI;
  char cVar4;
  undefined1 local_1e0 [480];
  
  if (((*(char *)(unaff_EDI + 0xba2) != '\x02') || (*(char *)(unaff_EDI + 0xba3) == '\0')) &&
     (param_1 == 0)) {
    return '\0';
  }
  iVar3 = *(int *)(unaff_EDI + 0xd90);
  if (0 < iVar3) {
    piVar2 = (int *)(unaff_EDI + 0xd94);
    do {
      if (*piVar2 != 0) {
        psVar1 = (short *)(*piVar2 + 0xc);
        *psVar1 = *psVar1 + -1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_0058c1c0(val,local_1e0,0x78,unaff_EDI + 0xd94);
  cVar4 = iVar3 != 0;
  *(undefined4 *)(unaff_EDI + 0xd90) = 0;
  if ((bool)cVar4) {
    FUN_0053ec90(&DAT_00740420,local_1e0,iVar3);
  }
  if (*(int *)(unaff_EDI + 0xba8) != 0) {
    psVar1 = (short *)(*(int *)(unaff_EDI + 0xba8) + 0x50);
    *psVar1 = *psVar1 + -1;
    FUN_0058b520(val);
    *(undefined4 *)(unaff_EDI + 0xba8) = 0;
    cVar4 = cVar4 + '\x01';
  }
  return cVar4;
}
