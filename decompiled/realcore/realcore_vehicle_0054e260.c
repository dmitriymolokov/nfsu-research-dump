/* spd-match: far pct=10.31 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2113/batches/20260724T133058Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00549410();
int __cdecl FUN_00674898();
extern int DAT_00704b80;
extern int DAT_00704b84;
extern int DAT_00704b88;
extern int DAT_00734f7c;
extern int _DAT_00704b8c;
int unaff_EDI;

void FUN_0054e260(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = FUN_00674898();
  uVar1 = DAT_00704b88;
  if (DAT_00704b80 <= -iVar2 - (int)DAT_00704b84) {
    iVar2 = (-iVar2 - (int)DAT_00704b84) / DAT_00704b80;
    DAT_00704b84 = ((int)DAT_00704b84) + (int)DAT_00704b80 * iVar2;
    DAT_00704b88 = 0;
    _DAT_00704b8c = (iVar2 != 1) - 1 & uVar1;
  }
  DAT_00704b88 = ((int)DAT_00704b88) + unaff_EDI;
  FUN_00549410(DAT_00734f7c);
  return;
}
