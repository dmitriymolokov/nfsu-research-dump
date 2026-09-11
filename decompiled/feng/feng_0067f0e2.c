/* spd-match: far pct=8.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006eb720;
extern int DAT_00717e6c;
extern code *DAT_00717e84;
extern void LAB_0067f149(void);
int unaff_retaddr;

void __fastcall FUN_0067f0e2(char *param_1)

{
  int iVar1;
  uint unaff_retaddr;
  undefined4 uVar2;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 != 0) goto LAB_0067f149;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_00717e84)(DAT_00717e6c,uVar2,local_10,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_10;
LAB_0067f149:
  _atol(param_1);
  return;
}
