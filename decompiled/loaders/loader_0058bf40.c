/* spd-match: far pct=11.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058BF40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053ec90();
int __cdecl FUN_00565ce0();
int __cdecl FUN_0058b520();
int __cdecl FUN_0058be70();
int __cdecl FUN_0058c160();
int __cdecl FUN_0058c1c0();
extern int DAT_00740420;
undefined4 __fastcall FUN_0058bf40(int * obj, undefined4 param_1)

{
  int *piVar1;

  int iVar2;
  undefined4 extraout_EDX;
  undefined1 local_1e0 [480];
  
  if ((((char)obj[0x2e8] == '\0') && (*(char *)((int)obj + 0xba1) != '\x01')) &&
     (*(char *)((int)obj + 0xba2) != '\x01')) {
    FUN_0058be70(1);
    FUN_0058c160(param_1);
    iVar2 = FUN_0058c1c0(param_1,local_1e0,0x78,extraout_EDX);
    if (iVar2 != 0) {
      FUN_0053ec90(&DAT_00740420,local_1e0,iVar2);
    }
    *(short *)(obj[0x2e9] + 0x50) = *(short *)(obj[0x2e9] + 0x50) + -1;
    FUN_0058b520(param_1);
    iVar2 = *obj;
    piVar1 = (int *)obj[1];
    obj[0x2e9] = 0;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_00565ce0();
    return 1;
  }
  return 0;
}
