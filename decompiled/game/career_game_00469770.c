/* spd-match: far pct=16.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00469770 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00466600();
int __cdecl FUN_00466ce0();
int __cdecl FUN_00467300();
int __cdecl FUN_00468300();
int __cdecl FUN_00567160();
int __cdecl FUN_005962c0();
int unaff_EBX;
undefined4 * __fastcall FUN_00469770(int * obj)

{

  int iVar1;
  int *unaff_EBX;
  undefined4 *puVar2;
  
  iVar1 = (**(code **)(*unaff_EBX + 0x50))();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)0x0;
  iVar1 = FUN_00466600(0);
  if (((iVar1 != 0) && (iVar1 = FUN_00468300(), iVar1 == 0)) &&
     (iVar1 = (**(code **)(*obj + 0x50))(), iVar1 != 0)) {
    if (*(char *)((int)obj + 0x15) == '\x02') {
      obj = (int *)FUN_005962c0();
      if (obj == (int *)0x0) {
        return (undefined4 *)0x0;
      }
      iVar1 = FUN_00466600(0);
      if (iVar1 == 0) {
        return (undefined4 *)0x0;
      }
    }
    iVar1 = FUN_00567160();
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00466ce0(obj);
    }
    iVar1 = FUN_00467300();
    if (iVar1 != 0) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}
