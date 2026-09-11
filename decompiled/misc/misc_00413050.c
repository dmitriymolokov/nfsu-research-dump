/* spd-match: far pct=13.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00413050 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006a6ee0;
extern int DAT_006a6fb8;
extern unsigned char *DAT_00736350;
extern int DAT_00736380;
void __fastcall FUN_00413050(int * obj)

{
  int *piVar1;

  int iVar2;
  
  if (DAT_00736350 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_00736350 + 0xc))(DAT_00736350,&DAT_006a6ee0);
    if (iVar2 < 0) {
      *obj = 0;
    }
    iVar2 = (**(code **)(*(int *)*obj + 0x2c))((int *)*obj,&DAT_006a6fb8);
    piVar1 = (int *)*obj;
    if (iVar2 < 0) {
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x20))(piVar1);
      }
      piVar1 = (int *)*obj;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *obj = 0;
        return;
      }
    }
    else {
      (**(code **)(*piVar1 + 0x34))(piVar1,DAT_00736380,5);
      SetCursorPos(200,200);
      (**(code **)(*(int *)*obj + 0x1c))((int *)*obj);
    }
  }
  return;
}
