/* spd-match: far pct=3.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005835F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0077af30;
int unaff_EDI;
uint __fastcall FUN_005835f0(int * obj, int *param_1)

{

  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    obj = (int *)param_1[0xf6];
    if (*obj == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)*(short *)(*obj + 10);
    }
    if (iVar2 == *unaff_EDI) {
      if (*obj == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = ((obj[1] - *obj) + -0x27c) / 0x88;
      }
      iVar1 = (**(code **)(*param_1 + 0x40))();
      if (iVar1 == 0) {
        iVar1 = (int)*(short *)((int)unaff_EDI + 6);
        if (iVar1 == -1) {
          if (*unaff_EDI < 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (&DAT_0077af30)[*unaff_EDI];
          }
          iVar1 = *(short *)(iVar1 + 0x10) + -2;
        }
        return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < iVar2);
      }
      iVar1 = (int)(short)unaff_EDI[1];
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      return CONCAT31((int3)((uint)iVar1 >> 8),iVar2 < iVar1);
    }
  }
  return (uint)obj & 0xffffff00;
}
