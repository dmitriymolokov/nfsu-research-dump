/* spd-match: far pct=16.78 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054B0E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00664e00();
int __cdecl FUN_00667750();
int __cdecl FUN_00667950();
extern int DAT_006bd340;
extern int DAT_006bd348;
extern int DAT_006bd350;
extern int DAT_0073d8d0;
extern void LAB_0054cac0(void);
int unaff_ESI;
void __fastcall FUN_0054b0e0(int obj, undefined4 param_1, undefined4 param_2)

{

  int unaff_ESI;
  undefined1 local_400 [1024];
  
  *(undefined4 *)(obj + 0x540) = 0xc;
  *(undefined4 *)(obj + 0x544) = param_1;
  local_400[0] = 0;
  FUN_00667950(local_400,0x400,&DAT_006bd350,param_2);
  if (unaff_ESI != 0) {
    FUN_00667950(local_400,0x400,&DAT_006bd348);
    FUN_00667750(local_400,0x400,&DAT_006bd340,0x20);
  }
  if (DAT_0073d8d0 != 0) {
    FUN_00664e00(DAT_0073d8d0,0x6d657367,local_400,&LAB_0054cac0,0);
  }
  return;
}
