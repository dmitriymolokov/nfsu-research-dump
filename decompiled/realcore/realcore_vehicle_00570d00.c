/* spd-match: far pct=10.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00570D00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0056d8d0();
int __cdecl FUN_00570c20();
extern int DAT_006f41a0;
extern int DAT_00700ea0;
extern unsigned char *DAT_007361f8;
void __fastcall FUN_00570d00(int obj, undefined4 param_1)

{

  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (((DAT_006f41a0 != 0) && (DAT_00700ea0 != 0)) && (DAT_007361f8 != (int *)0x0)) {
    piVar4 = (int *)*DAT_007361f8;
    iVar3 = 99;
    piVar2 = DAT_007361f8;
    if (piVar4 != DAT_007361f8) {
      do {
        iVar1 = FUN_00570c20();
        if ((iVar1 != 0) && (0 < iVar3)) {
          iVar3 = iVar3 + -1;
          piVar2 = piVar4 + 0x138;
          if ((1 << ((byte)*(undefined4 *)(obj + 4) & 0x1f) & piVar4[0x14c]) == 0) {
            piVar2 = piVar4 + 0x24;
          }
          FUN_0056d8d0(piVar4[0x135],obj,piVar2,0,param_1);
          piVar2 = DAT_007361f8;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != piVar2);
    }
  }
  return;
}
