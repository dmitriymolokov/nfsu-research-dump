/* spd-match: far pct=19.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004650D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00464f20();
int __cdecl FUN_00565230();
int unaff_EBX;
int unaff_ESI;
void __fastcall FUN_004650d0(int obj, undefined4 *param_1)

{

  undefined4 unaff_EBX;
  float *unaff_ESI;
  undefined4 uStack_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  FUN_00464f20();
  FUN_00565230();
  local_60 = *unaff_ESI - *(float *)(obj + 0x20);
  local_58 = 0;
  local_5c = unaff_ESI[1] - *(float *)(obj + 0x24);
  FUN_00565230();
  FUN_004650d0(&local_60,&local_60,local_50);
  *param_1 = unaff_EBX;
  param_1[1] = uStack_68;
  return;
}
