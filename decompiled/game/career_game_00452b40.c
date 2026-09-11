/* spd-match: far pct=8.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00452B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00457590();
int __cdecl FUN_0057a680();
int __cdecl FUN_00647b70();
extern int DAT_007006ec;
extern int DAT_007361a8;
extern int DAT_0077a4ac;
extern int DAT_0078a344;
extern void LAB_00452bd2(void);
int unaff_EDI;
undefined4 __fastcall FUN_00452b40(int * obj, undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;

  int iVar3;
  int iVar4;
  int *unaff_EDI;
  undefined4 local_4;
  
  uVar1 = DAT_007006ec;
  *unaff_EDI = 0;
  local_4 = 0;
  iVar3 = FUN_00457590(&DAT_0077a4ac,*(int *)(*obj + 0x30) + 0x10,obj + 0xe3,uVar1,&local_4);
  if (iVar3 != 0) {
    if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
LAB_00452bd2:
      *unaff_EDI = iVar3;
      *param_1 = local_4;
      return 400;
    }
    iVar4 = FUN_00647b70();
    if ((iVar4 == 6) &&
       (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1d4) + 0x90) + 0x14) + 4) == 3)) {
      iVar4 = FUN_0057a680();
      cVar2 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x2c) + 0x3fc) + 0xc))();
      if (cVar2 != '\0') goto LAB_00452bd2;
    }
  }
  return 0xffffffff;
}
