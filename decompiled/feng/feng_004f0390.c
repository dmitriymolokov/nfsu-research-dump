/* spd-match: far pct=10.47 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F0390 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f04e0();
int __cdecl FUN_004f0660();
int __cdecl FUN_004f16d0();
extern char stack0xffffff78;
void __fastcall FUN_004f0390(undefined1 * obj)

{
  undefined4 *puVar1;
  int iVar2;

  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_48 = 0;
  local_44 = 0x3f800000;
  (**(code **)(**(int **)(obj + 0x10c) + 0x3c))(local_40);
  iVar3 = *(int *)(obj + 0xe4);
  if (iVar3 == 0) {
    obj[0x5250] = *obj;
    return;
  }
  puVar1 = (undefined4 *)(obj + 0x110);
  do {
    *(undefined2 *)(obj + 0xd8) = 0;
    (**(code **)(**(int **)(obj + 0x10c) + 0x20))(iVar3);
    *puVar1 = 0;
    for (iVar2 = *(int *)(iVar3 + 0x40); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (*(int *)(iVar2 + 0x18) == 5) {
        FUN_004f04e0(iVar2,&stack0xffffff78,&local_48,0);
      }
      else {
        FUN_004f0660(0);
      }
    }
    FUN_004f16d0(puVar1);
    (**(code **)(**(int **)(obj + 0x10c) + 0x30))(obj + 0x114,*puVar1);
    (**(code **)(**(int **)(obj + 0x10c) + 0x24))(iVar3);
    iVar3 = *(int *)(iVar3 + 4);
  } while (iVar3 != 0);
  obj[0x5250] = *obj;
  return;
}
