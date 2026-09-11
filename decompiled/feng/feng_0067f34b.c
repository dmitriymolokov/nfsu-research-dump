/* spd-match: far pct=12.36 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006eb720;
extern int DAT_00717e80;
extern code *DAT_00717e84;
extern void LAB_0067f3ae(void);
int unaff_retaddr;

undefined4 FUN_0067f34b(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  undefined4 uVar5;
  uint unaff_retaddr;
  undefined1 local_80 [120];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  iVar1 = (*DAT_00717e84)(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (iVar1 == 0) {
LAB_0067f3ae:
    uVar5 = 0;
  }
  else {
    uVar2 = _LcidFromHexString();
    if ((param_1 != uVar2) && (param_2 != 0)) {
      sVar3 = _strlen(DAT_00717e80);
      sVar4 = _GetPrimaryLen();
      if (sVar4 == sVar3) goto LAB_0067f3ae;
    }
    uVar5 = 1;
  }
  return uVar5;
}
