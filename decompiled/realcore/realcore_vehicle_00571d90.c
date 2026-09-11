/* spd-match: far pct=4.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00571D90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
extern int DAT_006cc7a4;
void __fastcall FUN_00571d90(int obj)

{

  undefined4 unaff_EDI;
  char local_1;
  
  local_1 = '\0';
  if ((((*(float *)(obj + 0xc) == DAT_006cc7a4) && (*(float *)(obj + 0x1c) == DAT_006cc7a4))
      && (*(float *)(obj + 0x2c) == DAT_006cc7a4)) &&
     ((*(int *)(obj + 0x3c) == 0x3f800000 &&
      (((*(float *)(obj + 0x30) != DAT_006cc7a4 || (*(float *)(obj + 0x34) != DAT_006cc7a4))
       || (local_1 = '\x01', *(float *)(obj + 0x38) != DAT_006cc7a4)))))) {
    local_1 = '\x02';
  }
  FUN_00571c20(unaff_EDI,&local_1,1,1,1);
  if (local_1 == '\0') {
    FUN_00571c20(unaff_EDI,obj,0x40,0xffffffff,0);
    return;
  }
  FUN_00571c20(unaff_EDI,obj,0xc,0xffffffff,0);
  FUN_00571c20(unaff_EDI,obj + 0x10,0xc,0xffffffff,0);
  FUN_00571c20(unaff_EDI,obj + 0x20,0xc,0xffffffff,0);
  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined4 *)(obj + 0x1c) = 0;
  *(undefined4 *)(obj + 0x2c) = 0;
  *(undefined4 *)(obj + 0x3c) = 0x3f800000;
  if (local_1 == '\x02') {
    FUN_00571c20(unaff_EDI,obj + 0x30,0xc,0xffffffff,0);
    return;
  }
  *(undefined4 *)(obj + 0x30) = 0;
  *(undefined4 *)(obj + 0x34) = 0;
  *(undefined4 *)(obj + 0x38) = 0;
  return;
}
