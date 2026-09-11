/* spd-match: far pct=5.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005459F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004029a0();
int __cdecl FUN_00407db0();
int __cdecl FUN_0040caa0();
int __cdecl FUN_004f46c0();
int __cdecl FUN_0053e400();
extern int DAT_0073556c;
extern void LAB_00545a6a(void);
void __fastcall FUN_005459f0(int obj, int param_1, int param_2, int param_3)

{
  bool bVar1;
  int iVar2;

  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = param_2;
  local_4 = 0;
  if (0 < *(int *)(obj + 0x7c)) {
    param_2 = 0;
    do {
      iVar4 = *(int *)(obj + 0x74) + param_2;
      bVar1 = false;
      if (((*(int *)(*(int *)(obj + 0x74) + 0x38 + param_2) != 0) &&
          (iVar3 = *(int *)(iVar4 + 0x30), iVar2 <= iVar3)) && (iVar3 < param_3 + iVar2)) {
        *(int *)(iVar4 + 0x70) = (iVar3 - iVar2) + param_1;
        bVar1 = true;
      }
      if (((*(int *)(iVar4 + 0x3c) == 0) || (iVar3 = *(int *)(iVar4 + 0x34), iVar3 < iVar2)) ||
         (param_3 + iVar2 <= iVar3)) {
        if (bVar1) goto LAB_00545a6a;
      }
      else {
        *(int *)(iVar4 + 0x74) = (iVar3 - iVar2) + param_1;
LAB_00545a6a:
        if (*(int *)(iVar4 + 0x70) != 0) {
          FUN_00407db0();
          if (((*(int *)(obj + 0x70) != 0) &&
              (iVar3 = *(int *)(*(int *)(obj + 0x70) + 0x74), iVar3 != 0)) &&
             (iVar3 = FUN_0053e400(*(undefined4 *)(iVar4 + 0x24),iVar3,0), iVar3 != 0)) {
            *(int *)(iVar3 + 4) = iVar4;
          }
        }
      }
      local_4 = local_4 + 1;
      param_2 = param_2 + 0x7c;
    } while (local_4 < *(int *)(obj + 0x7c));
  }
  FUN_0040caa0(1);
  FUN_004029a0(1);
  FUN_004f46c0();
  DAT_0073556c = 1;
  return;
}
