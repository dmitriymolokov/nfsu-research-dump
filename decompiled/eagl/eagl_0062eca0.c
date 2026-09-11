/* spd-match: far pct=16.28 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0062eca0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


#include "ghidra_compat.h"

extern void *PTR_FUN_006a8288;
extern void *DAT_0070d364;
extern void *PTR_FUN_006dfaa0;

int __cdecl FUN_00628ed0();

undefined4 *  FUN_0062eca0(undefined4 *param_1,byte param_2)

{
  *param_1 = (unsigned int)&PTR_FUN_006a8288;
  if (param_1[8] != 0) {
    (*(int (__cdecl **)(...))(*(int *)DAT_0070d364 + 0x18))(param_1[8]);
    (*(int (__cdecl **)(...))(*(int *)DAT_0070d364 + 0x18))(param_1[10]);
    (*(int (__cdecl **)(...))(*(int *)DAT_0070d364 + 0x18))(param_1[0xb]);
  }
  FUN_00628ed0();
  if ((param_2 & 1) != 0) {
    (*(int (__cdecl *)(...))PTR_FUN_006dfaa0)(param_1,0x30);
  }
  return param_1;
}

