/* spd-match: far pct=19.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054A700 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054b7b0();
int __cdecl FUN_0054cf80();
int __cdecl FUN_00567d30();
int __cdecl FUN_00664e00();
int __cdecl FUN_00667d70();
extern int DAT_0073d868;
extern int DAT_0073d8d0;
extern int DAT_0073dda8;
extern code *DAT_0073ddac;
extern void LAB_0054cc10(void);
void __fastcall FUN_0054a700(int obj, undefined4 param_1)

{

  int iVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  if (*(int *)(obj + 0x68) != 0) {
    *(undefined4 *)(obj + 0x540) = 0xf;
    *(undefined4 *)(obj + 0x544) = param_1;
    iVar1 = FUN_0054b7b0(&DAT_0073d868);
    if ((iVar1 == 0) || (iVar2 = FUN_00567d30(), iVar2 != 0)) {
      FUN_0054cf80();
      if (DAT_0073ddac != (code *)0x0) {
        (*DAT_0073ddac)();
      }
      DAT_0073dda8 = 0;
      DAT_0073ddac = (code *)0x0;
      return;
    }
    FUN_00667d70(local_40,0x40,"NAME=%s",iVar1 + 4);
    if (DAT_0073d8d0 != 0) {
      FUN_00664e00(DAT_0073d8d0,0x67676574,local_40,&LAB_0054cc10,0);
    }
  }
  return;
}
