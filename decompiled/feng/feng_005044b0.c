/* spd-match: far pct=29.66 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005044B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004ac750();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_0051b060();
int __cdecl FUN_0057ea80();
extern int DAT_00748850;
extern int _DAT_0072cc80;
int unaff_EBX;
void __fastcall FUN_005044b0(int obj, undefined4 param_1)

{
  int iVar1;

  int iVar2;
  int unaff_EBX;
  
  iVar1 = obj + 0x730;
  *(undefined4 *)(obj + 0x72c) = 0;
  FUN_004ac5a0(*(undefined4 *)(obj + 8),0,iVar1);
  *(undefined4 *)(obj + 0xb7c + unaff_EBX * 4) = param_1;
  *(char *)(obj + 0xd5c + unaff_EBX) = *(char *)(obj + 0xd5c + unaff_EBX) + '\x01';
  FUN_0057ea80(iVar1);
  FUN_004ac750(*(undefined4 *)(obj + 8),iVar1);
  FUN_004323f0(obj + 0x10,iVar1);
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,iVar1);
  _DAT_0072cc80 = 2;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,2);
  }
  FUN_0051b060();
  return;
}
