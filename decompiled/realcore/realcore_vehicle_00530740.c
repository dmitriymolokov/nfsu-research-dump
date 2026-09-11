/* spd-match: far pct=29.61 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00530740 */
#include "ghidra_compat.h"
extern unsigned char *DAT_007356a8;
extern int DAT_007356ac;
extern int DAT_007356b0;
extern unsigned char *DAT_007361f0;
void __fastcall FUN_00530740(int *esi_ptr, int obj) {
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  *esi_ptr = (*(int *)(obj + 0x50) * *esi_ptr) >> 0xf;
  iVar1 = *(int *)(obj + 0x32c);
  iVar3 = DAT_007356b0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x14) + 4);
    if ((iVar2 == 1 || iVar2 == 2) && (*(int *)(iVar1 + 0x878) != 0)) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x878) + 0x264);
      if (iVar3 < 0) iVar3 = 0;
      else if (iVar3 > 3) iVar3 = 3;
    }
  }
  if (iVar3 <= 3) {
    if (*(char *)(DAT_007356a8 + 0x84) != 0) *esi_ptr = 0;
    piVar4 = (int *)DAT_007361f0;
    if (piVar4 != 0 && (*piVar4 == 1 || *piVar4 == 7)) *esi_ptr = 0;
    *esi_ptr = (*(int *)(iVar3 * 0xd10 + 0x858 + DAT_007356ac) * *esi_ptr) >> 0xf;
  }
}
