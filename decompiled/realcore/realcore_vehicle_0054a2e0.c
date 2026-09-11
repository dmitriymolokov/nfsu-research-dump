/* spd-match: far pct=50.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054A2E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054c350();
int __cdecl FUN_00664e00();
int __cdecl FUN_00667d70();
extern int DAT_0073d8d0;
undefined4 __fastcall FUN_0054a2e0(char * obj, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)

{
  int iVar1;

  int iVar2;
  undefined1 local_18 [24];
  
  if ((obj != (char *)0x0) && (*obj != '\0')) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (obj[iVar1] != '\0');
    if ((iVar2 < 0xd) && (*(int *)(param_2 + 0x68) != 0)) {
      *(undefined4 *)(param_2 + 0x30) = param_3;
      *(undefined4 *)(param_2 + 0x34) = param_4;
      local_18[0] = 0;
      FUN_00667d70(local_18,0x18,"PERS=%s");
      if (DAT_0073d8d0 != 0) {
        FUN_00664e00(DAT_0073d8d0,0x75736572,local_18,FUN_0054c350,0);
      }
      return 0;
    }
  }
  return 0xffffffff;
}
