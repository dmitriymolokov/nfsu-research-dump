/* spd-match: far pct=34.05 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00448220 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00447d90();
int __cdecl FUN_00447ee0();
int __cdecl FUN_004480b0();
int __cdecl FUN_004480f0();
int __cdecl FUN_00565ce0();
int __cdecl FUN_0058d3c0();
int __cdecl FUN_0058d3f0();
void __fastcall FUN_00448220(int obj)

{
  int iVar1;

  int iVar2;
  
  if ((*(int *)(obj + 0x90) == 0) && (*(int *)(obj + 0x8c) == 0)) {
    if (((*(byte *)(obj + 0xc) & 8) != 0) && (iVar1 = *(int *)(obj + 0x9c), iVar1 != 0)) {
      iVar2 = FUN_0058d3c0();
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        *(int *)(obj + 0xa0) = iVar1;
        *(undefined4 *)(obj + 0x9c) = 0;
        if (iVar1 != 0) {
          FUN_004480b0(0);
          FUN_0058d3f0();
        }
        FUN_00565ce0();
      }
    }
    FUN_00447d90((int *)(obj + 0x9c),(undefined4 *)(obj + 0xa0),*(undefined4 *)(obj + 0x88)
                 ,obj + 0x68);
    if ((*(byte *)(obj + 0xc) & 4) != 0) {
      if (*(int *)(obj + 0x9c) != 0) {
        FUN_004480f0();
      }
      *(undefined4 *)(obj + 0xa0) = 0;
    }
    FUN_00447ee0();
    *(undefined4 *)(obj + 0x90) = 1;
  }
  return;
}
