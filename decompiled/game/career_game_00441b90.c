/* spd-match: far pct=10.48 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441B90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0043fe70();
int __cdecl FUN_0043ff30();
int __cdecl FUN_00441b20();
extern unsigned char *DAT_00736184;
void __fastcall FUN_00441b90(int obj, int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;

  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = DAT_00736184;
  if (*(short *)(obj + 6) < 0) {
    if (*(int *)(DAT_00736184 + 0x18) == *(int *)(DAT_00736184 + 0x2c)) {
      FUN_00441b20(param_1);
    }
    iVar3 = *(int *)(iVar5 + 0x18) + 1;
    if (*(undefined4 **)(iVar5 + 0x10) == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      uVar1 = **(undefined4 **)(iVar5 + 0x10);
      if (*(int *)(iVar5 + 0x1c) < iVar3) {
        *(int *)(iVar5 + 0x1c) = iVar3;
      }
      *(int *)(iVar5 + 0x18) = iVar3;
      *(undefined4 *)(iVar5 + 0x10) = uVar1;
      piVar4 = (int *)FUN_0043ff30();
    }
    puVar2 = *(undefined4 **)(param_1 + 0x54);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x54) = piVar4;
    *piVar4 = param_1 + 0x50;
    piVar4[1] = (int)puVar2;
    *(char *)(piVar4 + 2) = (char)piVar4[2] + '\x01';
    return;
  }
  iVar5 = FUN_0043fe70(param_1);
  *(char *)(iVar5 + 8) = *(char *)(iVar5 + 8) + '\x01';
  return;
}
