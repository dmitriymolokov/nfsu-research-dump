/* spd-match: far pct=5.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6d10();
int __cdecl FUN_004f7000();
int __cdecl FUN_004f7350();
int __cdecl FUN_00674898();
extern int DAT_006ca778;
extern int _DAT_006cc7dc;

void __fastcall FUN_0059ee90(int param_1)

{
  undefined4 uVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  FUN_004f7350(&local_14,&local_8);
  FUN_004f6d10(&local_10,&local_c);
  local_14 = (((*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x18)) /
              (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x18))) *
              *(float *)(param_1 + 0x28) - local_14 * ((int)_DAT_006cc7dc)) + *(float *)(param_1 + 0x2c) +
             local_10;
  FUN_004f7350(local_4,&local_10);
  FUN_004f7000(local_14,(local_10 * ((int)_DAT_006cc7dc) + local_c) - local_8 * ((int)_DAT_006cc7dc));
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_00674898();
    FUN_004f68a0(&DAT_006ca778,uVar1);
  }
  return;
}
