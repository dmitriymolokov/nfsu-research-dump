/* spd-match: far pct=12.38 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/buckets/p0_04/attempt1_0054a0c0_tc */
#include "ghidra_compat.h"

extern unsigned char p08_DAT_006b9172;
extern char *p08_tsmiInvalid_master_account_name_006f2f38;
extern undefined4 *p08_DAT_00734f60;

int __cdecl FUN_00549dc0();
int __cdecl FUN_00664d40();
int __cdecl FUN_00666ea0();
int unaff_ESI;

undefined1 *  FUN_0054a0c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    if (param_1 == -1) {
      param_1 = *(int *)(unaff_ESI + 0x294);
    }
    uVar1 = FUN_00664d40(*(int *)(unaff_ESI + 0x68),5,param_1);
    iVar2 = FUN_00666ea0(*(undefined4 *)(unaff_ESI + 0x74),uVar1);
    if (iVar2 != 0) {
      if (*(int *)(unaff_ESI + 0x68) == 0) {
        puVar3 = (undefined1 *)FUN_00549dc0();
        return puVar3;
      }
      uVar1 = FUN_00664d40(*(int *)(unaff_ESI + 0x68),1,*(undefined4 *)(iVar2 + 0x184 + param_2 * 4)
                          );
      FUN_00666ea0(*(undefined4 *)(unaff_ESI + 0x70),uVar1);
      puVar3 = (undefined1 *)FUN_00549dc0();
      return puVar3;
    }
  }
  return &p08_DAT_006b9172;
}
