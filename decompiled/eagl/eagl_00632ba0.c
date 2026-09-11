/* spd-match: far pct=9.09 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00632ba0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


#include "ghidra_compat.h"

extern void *PTR_FUN_006a83ec;
extern void *DAT_0070d364;
extern void *PTR_LAB_006a7a94;

int __cdecl FUN_00634150(...);
int __cdecl FUN_00634120(...);
int __cdecl PTR_FUN_006dfaa0(...);

undefined4 *  FUN_00632ba0(undefined4 *param_1,byte param_2)

{
  *param_1 = (unsigned int)&PTR_FUN_006a83ec;
  if (param_1[7] != 0) {
    (*(int (__cdecl *)(...))FUN_00634150)(1);
    (*(int (__cdecl *)(...))FUN_00634120)();
  }
  if (param_1[3] != 0) {
    (*(int (__cdecl **)(...))(*(int *)DAT_0070d364 + 0x18))(param_1[3]);
  }
  *param_1 = (unsigned int)&PTR_LAB_006a7a94;
  if ((param_2 & 1) != 0) {
    (*(int (__cdecl *)(...))PTR_FUN_006dfaa0)(param_1,0x5c);
  }
  return param_1;
}

