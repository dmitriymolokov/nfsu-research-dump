/* spd-match: far pct=11.81 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00405FA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0071d89c;
int unaff_ESI;
void __fastcall FUN_00405fa0(int obj)

{
  int *piVar1;

  undefined4 *unaff_ESI;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  
  if (*(int *)(obj + 0x134) != 0x13) {
    piVar1 = (int *)(&DAT_0071d89c)[*(int *)(obj + 0x130)];
    local_244 = 0x244;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x3c))(piVar1,&local_244);
    }
    *unaff_ESI = local_240;
    unaff_ESI[1] = local_23c;
    unaff_ESI[2] = local_238;
    unaff_ESI[3] = local_234;
    return;
  }
  *unaff_ESI = *(undefined4 *)(obj + 0x11c);
  unaff_ESI[1] = *(undefined4 *)(obj + 0x120);
  unaff_ESI[2] = *(undefined4 *)(obj + 0x124);
  unaff_ESI[3] = *(undefined4 *)(obj + 0x128);
  return;
}
