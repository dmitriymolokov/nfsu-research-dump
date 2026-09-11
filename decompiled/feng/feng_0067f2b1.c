/* spd-match: far pct=9.63 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0067f15e();
extern int DAT_006eb720;
extern int DAT_00717e64;
extern int DAT_00717e68;
extern int DAT_00717e6c;
extern int DAT_00717e74;
extern int DAT_00717e78;
extern code *DAT_00717e84;
int unaff_retaddr;

uint FUN_0067f2b1(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_retaddr;
  char local_80 [120];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  uVar1 = _LcidFromHexString();
  iVar2 = (*DAT_00717e84)(uVar1,(-(uint)(DAT_00717e74 != 0) & 0xfffff005) + 0x1002,local_80,0x78);
  if (iVar2 == 0) {
    DAT_00717e64 = 0;
    uVar3 = 1;
  }
  else {
    iVar2 = __stricmp(DAT_00717e78,local_80);
    if (iVar2 == 0) {
      iVar2 = FUN_0067f15e(uVar1);
      if (iVar2 != 0) {
        DAT_00717e64 = DAT_00717e64 | 4;
        DAT_00717e68 = uVar1;
        DAT_00717e6c = uVar1;
      }
    }
    uVar3 = ~(DAT_00717e64 >> 2) & 1;
  }
  return uVar3;
}
