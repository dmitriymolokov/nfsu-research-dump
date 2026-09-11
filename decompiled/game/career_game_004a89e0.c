/* spd-match: far pct=11.90 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A89E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f6910();
int __cdecl FUN_00567220();
extern unsigned char *DAT_007349b4;
extern int DAT_007349b8;
void __fastcall FUN_004a89e0(undefined4 * obj)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  int iVar4;
  int *piVar5;
  bool bVar6;
  
  FUN_004f6910(*obj);
  obj[4] = 0;
  obj[3] = 0;
  piVar5 = obj + 5;
  piVar1 = (int *)obj[5];
  while (piVar1 != piVar5) {
    _free(*(void **)(*piVar5 + 8));
    piVar1 = (int *)*piVar5;
    iVar4 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar4;
    *(int **)(iVar4 + 4) = piVar2;
    iVar3 = DAT_007349b4;
    iVar4 = *(int *)(DAT_007349b4 + 0x18);
    *piVar1 = *(int *)(DAT_007349b4 + 0x10);
    *(int **)(iVar3 + 0x10) = piVar1;
    iVar4 = iVar4 + -1;
    bVar6 = DAT_007349b8 != 0;
    *(int *)(iVar3 + 0x18) = iVar4;
    if (bVar6) {
      if (iVar4 == 0) {
        FUN_00567220();
        DAT_007349b4 = 0;
      }
      else {
        DAT_007349b8 = 1;
      }
    }
    piVar1 = (int *)*piVar5;
  }
  return;
}
