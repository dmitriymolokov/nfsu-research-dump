/* spd-match: far pct=7.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0067f34b();
extern int DAT_006eb720;
extern int DAT_00717e64;
extern int DAT_00717e68;
extern int DAT_00717e6c;
extern int DAT_00717e70;
extern int DAT_00717e7c;
extern int DAT_00717e80;
extern code *DAT_00717e84;
extern void LAB_0067f677(void);
extern void LAB_0067f696(void);
int unaff_retaddr;

uint FUN_0067f5e2(void)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_retaddr;
  undefined4 uVar3;
  char local_80 [120];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  uVar1 = _LcidFromHexString();
  iVar2 = (*DAT_00717e84)(uVar1,(-(uint)(DAT_00717e70 != 0) & 0xfffff002) + 0x1001,local_80,0x78);
  if (iVar2 == 0) {
    DAT_00717e64 = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_00717e80,local_80);
  if (iVar2 == 0) {
    if (DAT_00717e70 == 0) {
      uVar3 = 1;
      goto LAB_0067f677;
    }
  }
  else {
    if (((DAT_00717e70 != 0) || (DAT_00717e7c == 0)) ||
       (iVar2 = __strnicmp(DAT_00717e80,local_80,DAT_00717e7c), iVar2 != 0)) goto LAB_0067f696;
    uVar3 = 0;
LAB_0067f677:
    iVar2 = FUN_0067f34b(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_0067f696;
  }
  DAT_00717e64 = DAT_00717e64 | 4;
  DAT_00717e68 = uVar1;
  DAT_00717e6c = uVar1;
LAB_0067f696:
  return ~(DAT_00717e64 >> 2) & 1;
}
