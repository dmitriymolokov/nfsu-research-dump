/* spd-match: far pct=7.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F8290 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041f060();
int __cdecl FUN_004fd230();
int unaff_EDI;
void __fastcall FUN_004f8290(int val, int param_1)

{

  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  if (val == *(int *)(param_1 + 0x14)) {
    iVar1 = FUN_004fd230();
    if (unaff_EDI == iVar1) {
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xc) + 4;
      }
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 == param_1 + 4) {
        iVar1 = *(int *)(param_1 + 8);
      }
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 + -4;
      }
      *(int *)(param_1 + 0xc) = iVar1;
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x18) == 2) {
        FUN_0041f060(*(int *)(param_1 + 0x10),*(undefined4 *)(iVar1 + 0x10));
        return;
      }
    }
    else {
      iVar1 = FUN_004fd230();
      if (unaff_EDI == iVar1) {
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)(*(int *)(param_1 + 0xc) + 4);
        }
        puVar3 = (undefined4 *)*piVar2;
        if (puVar3 == (undefined4 *)(param_1 + 4)) {
          puVar3 = *(undefined4 **)(param_1 + 4);
        }
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = puVar3 + -1;
        }
        *(undefined4 **)(param_1 + 0xc) = puVar3;
        if (*(int *)(*(int *)(param_1 + 0x10) + 0x18) == 2) {
          FUN_0041f060(*(int *)(param_1 + 0x10),puVar3[4]);
        }
      }
    }
  }
  return;
}
