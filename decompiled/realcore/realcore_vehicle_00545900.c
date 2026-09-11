/* spd-match: far pct=2.23 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00545900 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053e400();
extern int DAT_0073551c;
extern int DAT_0073556c;
extern void LAB_00545991(void);
int unaff_ESI;
void __fastcall FUN_00545900(int val, int param_1, int param_2)

{
  int *piVar1;
  int iVar2;

  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int local_10;
  int local_8;
  
  *(int *)(unaff_ESI + 0x74) = param_2;
  *(int *)(unaff_ESI + 0x78) = param_1;
  *(int *)(unaff_ESI + 0x7c) = val;
  if (0 < val) {
    piVar4 = (int *)(param_2 + 0x2c);
    local_10 = param_1;
    local_8 = val;
    do {
      iVar2 = *piVar4;
      piVar1 = piVar4 + -0xb;
      if (iVar2 == 0) {
        piVar4[0x10] = (int)piVar1;
      }
      else {
        iVar5 = *(int *)(unaff_ESI + 0x7c);
        iVar3 = FUN_0053e400(iVar2,*(undefined4 *)(unaff_ESI + 0x74),0x24);
        if (iVar3 == 0) {
          if (0 < iVar5) {
            iVar5 = *(int *)(unaff_ESI + 0x74);
            iVar3 = 0;
            do {
              if (*(int *)(iVar5 + 0x24) == iVar2) {
                piVar4[0x10] = iVar5;
                goto LAB_00545991;
              }
              iVar3 = iVar3 + 1;
              iVar5 = iVar5 + 0x7c;
            } while (iVar3 < *(int *)(unaff_ESI + 0x7c));
          }
          iVar3 = 0;
        }
        piVar4[0x10] = iVar3;
      }
LAB_00545991:
      *piVar1 = local_10;
      piVar4[0xf] = unaff_ESI;
      piVar4[0x11] = 0;
      piVar4[0x12] = 0;
      if (piVar4[-2] == 0x66994f4a) {
        DAT_0073551c = piVar1;
      }
      piVar4 = piVar4 + 0x1f;
      local_10 = local_10 + 0x20;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  DAT_0073556c = 1;
  return;
}
