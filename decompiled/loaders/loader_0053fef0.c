/* spd-match: far pct=6.73 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053FEF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00565da0();
extern unsigned char *DAT_0072fa00;
extern int DAT_00743c60;
extern unsigned char *DAT_00743c64;
int * __fastcall FUN_0053fef0(int obj)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(obj + 8);
  piVar1 = (int *)(*(int *)(obj + 4) + 8 + obj);
  if (piVar4 < piVar1) {
    piVar5 = (int *)0x0;
    do {
      iVar3 = *piVar4;
      if (iVar3 == 0x134002) {
        piVar5 = piVar4 + 2;
        FUN_00565da0("SolidList,%s",piVar4 + 6);
        piVar4[0x1f] = 0;
        *DAT_00743c64 = (int)piVar5;
        piVar2 = piVar5;
        piVar4[3] = (int)DAT_00743c64;
        DAT_00743c64 = piVar2;
        *piVar5 = (int)&DAT_00743c60;
        DAT_0072fa00 = DAT_0072fa00 + 1;
      }
      else if (iVar3 == 0x134003) {
        piVar5[0x1e] = (int)(piVar4 + 2);
      }
      else if (iVar3 == 0x134004) {
        piVar5[0x1f] = (int)(piVar4 + 2);
      }
      else if (iVar3 == -0x7fecbff8) {
        for (piVar2 = piVar4 + 2; piVar2 < (int *)(piVar4[1] + 8 + (int)piVar4);
            piVar2 = (int *)((int)piVar2 + piVar2[1] + 8)) {
        }
      }
      piVar4 = (int *)((int)piVar4 + piVar4[1] + 8);
    } while (piVar4 < piVar1);
    if (piVar5 != (int *)0x0) {
      *(undefined2 *)((int)piVar5 + 0x72) = 1;
      return piVar5;
    }
  }
  return (int *)0x0;
}
