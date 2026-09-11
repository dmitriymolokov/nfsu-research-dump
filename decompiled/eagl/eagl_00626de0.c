/* spd-match: far pct=18.42 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00626de0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


#include "ghidra_compat.h"

extern void *PTR_FUN_006dfaa0;
extern void *PTR_FUN_006a7b28;

int __cdecl FUN_00628ed0();

undefined4 *  FUN_00626de0(undefined4 *param_1,byte param_2)

{
  *param_1 = (unsigned int)&PTR_FUN_006a7b28;
  FUN_00628ed0();
  if ((param_2 & 1) != 0) {
    (*(int (__cdecl *)(...))PTR_FUN_006dfaa0)(param_1,0x14);
  }
  return param_1;
}

