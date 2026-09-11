/* spd-match: far pct=4.38 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00457300 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00457180(...);
int __cdecl FUN_005a6150(...);
int __cdecl FUN_005a7270(...);

struct ThisCallBox {
  undefined4 FUN_00457300(int obj, undefined4 param_2, undefined4 param_3, int param_4);
};
undefined4 ThisCallBox::FUN_00457300(int obj, undefined4 param_2, undefined4 param_3, int param_4)

{
  int iVar1;
  char cVar2;

  int *piVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (obj == -1) {
    obj = FUN_005a6150(((int)this),param_2,1);
  }
  if (param_4 == -1) {
    param_4 = FUN_005a6150(((int)this),param_3,2);
  }
  if (((obj != -1) && (param_4 != -1)) && (obj <= param_4)) {
    piVar3 = (int *)(((int)this) + 8 + obj * 4);
    while( true ) {
      iVar1 = *piVar3;
      FUN_005a7270(&local_30,*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x20),0);
      local_40 = local_30;
      local_3c = local_2c;
      FUN_005a7270(&local_20,*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x3c),0);
      local_38 = local_20;
      local_34 = local_1c;
      cVar2 = FUN_00457180(&local_40);
      if (cVar2 == '\0') break;
      obj = obj + 1;
      piVar3 = piVar3 + 1;
      if (param_4 < obj) {
        return 1;
      }
    }
  }
  return 0;
}
