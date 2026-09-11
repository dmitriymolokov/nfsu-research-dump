/* spd-match: far pct=8.39 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00544E90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040db20();
int __cdecl FUN_005447c0();
extern int DAT_00740b50;
extern int DAT_00740b58;
extern int DAT_00740b5c;
int __fastcall FUN_00544e90(int val, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
  int iVar1;

  int iVar2;
  undefined4 *puVar3;
  
  if (9 < val % 100) {
    return 0;
  }
  iVar1 = val % 100 + (val / 100) * 10;
  if (((&DAT_00740b58)[iVar1 * 0xc] != 0) && ((&DAT_00740b50)[iVar1 * 0xc] != 1)) {
    (&DAT_00740b50)[iVar1 * 0xc] = 1;
    iVar2 = FUN_0040db20(param_1);
    if (iVar2 != 0) {
      iVar2 = 0;
      puVar3 = (undefined4 *)(&DAT_00740b5c)[iVar1 * 0xc];
      if (0 < (int)(&DAT_00740b58)[iVar1 * 0xc]) {
        do {
          iVar2 = iVar2 + 1;
          FUN_005447c0(param_1,puVar3,0x3f800000,0,param_4,0);
          puVar3 = (undefined4 *)*puVar3;
        } while (iVar2 < (int)(&DAT_00740b58)[iVar1 * 0xc]);
      }
      return iVar2;
    }
  }
  return 0;
}
