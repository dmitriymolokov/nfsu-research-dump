/* spd-match: far pct=11.46 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E7E00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004dc6e0();
int __cdecl FUN_004e7eb0();
extern int DAT_00735dd4;
extern void LAB_004e7e31(void);
void __fastcall FUN_004e7e00(int obj)

{

  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_00735dd4 == 1) {
    if (*(int *)(*(int *)(obj + 0x84) + 0x730) != 0) {
      local_24 = 0x86d59539;
      local_1c = 0x12346666;
LAB_004e7e31:
      local_8 = 0;
      local_4 = 0;
      local_14 = 0;
      local_10 = 0;
      local_20 = 0x639;
      local_18 = 0x541389e5;
      local_c = 0xb8a7c6cd;
      FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(obj + 0xc));
      return;
    }
  }
  else if (DAT_00735dd4 == 0) {
    if (*(int *)(*(int *)(obj + 0x84) + 0x730) != 0) {
      local_24 = 0x56f12f8f;
      local_1c = 0x12345555;
      goto LAB_004e7e31;
    }
    FUN_004e7eb0();
  }
  return;
}
