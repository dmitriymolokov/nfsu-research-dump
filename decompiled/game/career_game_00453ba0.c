/* spd-match: far pct=9.09 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00453BA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044efd0(...);
int __cdecl FUN_0044f470(...);
int __cdecl FUN_005a7700(...);
extern int _DAT_006b76d8;
int unaff_ESI;

struct ThisCallBox {
  undefined4 FUN_00453ba0(int val, int param_2);
};
undefined4 ThisCallBox::FUN_00453ba0(int val, int param_2)

{
  char cVar1;

  int iVar2;
  undefined4 *unaff_ESI;
  float local_8;
  undefined1 local_4 [4];
  
  if ((val != ((int)this)) && (cVar1 = FUN_005a7700(val,*unaff_ESI), cVar1 == '\0')) {
    return 0;
  }
  local_8 = 0.0;
  iVar2 = FUN_0044f470(((int)this),0,*(undefined4 *)(param_2 + 0x208),&local_8,local_4);
  if ((((iVar2 != 0) && (cVar1 = FUN_0044efd0(iVar2), cVar1 != '\0')) &&
      (local_8 < _DAT_006b76d8 != (local_8 == _DAT_006b76d8))) &&
     ((local_8 < *(float *)(param_2 + 0x204) != (local_8 == *(float *)(param_2 + 0x204)) ||
      (iVar2 == *(int *)(param_2 + 0x200))))) {
    return 0;
  }
  return 1;
}
