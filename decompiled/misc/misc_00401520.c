/* spd-match: far pct=18.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004057c0();
int __cdecl FUN_00405860();
int __cdecl FUN_004058d0();
int __cdecl FUN_0040a4e0();
int __cdecl FUN_00411030();
int __cdecl FUN_00411ab0();
int __cdecl FUN_004130d0();
int __cdecl FUN_00419ea0();
int __cdecl FUN_004f6170();
int __cdecl FUN_004f61f0();
int __cdecl FUN_004f6240();
int __cdecl FUN_004f62a0();
int __cdecl FUN_004f63a0();
int __cdecl FUN_004fa0f0();
int __cdecl FUN_00573cb0();
extern int DAT_00706498;
extern int DAT_00735788;
extern int DAT_00736124;
extern unsigned char *DAT_0073636c;
extern int DAT_0073650c;
extern int DAT_00736514;
extern int DAT_00736515;

undefined4 __fastcall FUN_00401520(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_0073636c != (int *)0x0) {
    cVar1 = FUN_00411ab0(param_1);
    if (cVar1 == '\0') {
      if (DAT_00735788 == 0) {
        FUN_004f61f0();
      }
      else {
        FUN_004f62a0(0xee,0xff);
      }
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,7,0);
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,0);
      do {
        if (DAT_00736124 != 0) break;
        if (DAT_0073636c != (int *)0x0) {
          (**(code **)(*DAT_0073636c + 0xa4))(DAT_0073636c);
          FUN_004fa0f0();
          (**(code **)(*DAT_0073636c + 0xa8))(DAT_0073636c);
          iVar2 = (**(code **)(*DAT_0073636c + 0x44))(DAT_0073636c,0,0,0,0);
          if (iVar2 == -0x7789f798) {
            iVar2 = (**(code **)(*DAT_0073636c + 0xc))(DAT_0073636c);
            if (iVar2 == -0x7789f797) {
              FUN_0040a4e0();
            }
          }
          (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c,0,0,7,0,0x3f800000,0);
        }
        FUN_004f6170();
        FUN_00405860();
        FUN_004058d0();
        FUN_004057c0();
        DAT_00736514 = 0;
        DAT_00736515 = 0;
        FUN_00419ea0();
        DAT_0073650c = 1;
        FUN_00573cb0();
        FUN_004130d0(&DAT_00706498,0);
        cVar1 = FUN_00411ab0();
        FUN_00411030();
      } while (cVar1 == '\0');
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,7,1);
      cVar1 = '\0';
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
      if (cVar1 != '\0') {
        FUN_004f6240();
        return 0;
      }
      FUN_004f63a0("DiscErrorPC.fng");
    }
  }
  return 0;
}
