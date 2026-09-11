/* spd-match: far pct=7.69 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2113/batches/20260724T133106Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00549410();
int __cdecl FUN_00674898();
extern int DAT_00704b60;
extern int DAT_00704b64;
extern int DAT_00704b68;
extern unsigned char *DAT_0073d828;
extern int DAT_0073d82c;
extern int _DAT_00704b6c;
extern void LAB_0054e501(void);
int unaff_EDI;

void FUN_0054e480(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  iVar2 = FUN_00674898();
  uVar1 = DAT_00704b68;
  if (DAT_00704b60 <= -iVar2 - (int)DAT_00704b64) {
    iVar2 = (-iVar2 - (int)DAT_00704b64) / DAT_00704b60;
    DAT_00704b64 = ((int)DAT_00704b64) + (int)DAT_00704b60 * iVar2;
    DAT_00704b68 = 0;
    _DAT_00704b6c = (iVar2 != 1) - 1 & uVar1;
  }
  DAT_00704b68 = ((int)DAT_00704b68) + unaff_EDI;
  iVar2 = 0;
  piVar3 = &DAT_0073d82c;
  do {
    if (*piVar3 == param_1) {
      puVar4 = &DAT_0073d828 + iVar2 * 5;
      goto LAB_0054e501;
    }
    piVar3 = piVar3 + 5;
    iVar2 = iVar2 + 1;
  } while ((int)piVar3 < 0x73d868);
  puVar4 = (undefined4 *)0x0;
LAB_0054e501:
  FUN_00549410(puVar4[3]);
  return;
}
