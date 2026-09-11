/* spd-match: far pct=4.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A7F70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_00732330;
extern unsigned char *DAT_00732334;
extern unsigned char *DAT_00732338;
extern unsigned char *DAT_0073233c;
int unaff_EDI;
void __fastcall FUN_005a7f70(int val, undefined4 param_1, int param_2, int param_3, int param_4, int param_5)

{
  int iVar1;

  int iVar2;
  int unaff_EDI;
  
  iVar1 = val * 0x14;
  iVar2 = (*(int *)(&DAT_00732330 + val * 0x14) - param_2) * unaff_EDI;
  *(int *)(&DAT_00732330 + iVar1) =
       *(int *)(&DAT_00732330 + val * 0x14) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  iVar2 = (*(int *)(&DAT_00732334 + iVar1) - param_3) * unaff_EDI;
  *(int *)(&DAT_00732334 + iVar1) =
       *(int *)(&DAT_00732334 + iVar1) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  iVar2 = (*(int *)(&DAT_00732338 + iVar1) - param_4) * unaff_EDI;
  *(int *)(&DAT_00732338 + iVar1) =
       *(int *)(&DAT_00732338 + iVar1) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  iVar2 = (*(int *)(&DAT_0073233c + iVar1) - param_5) * unaff_EDI;
  *(int *)(&DAT_0073233c + iVar1) =
       *(int *)(&DAT_0073233c + iVar1) - ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10);
  return;
}
