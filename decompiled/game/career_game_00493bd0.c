/* spd-match: far pct=13.89 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.5/va_00493BD0 */
#include "ghidra_compat.h"

undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;

int __cdecl FUN_0040a880();
char __fastcall FUN_00493b20(int obj, char param_1);

void __cdecl FUN_00493bd0(undefined4 *param_2, undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)FUN_0040a880();
  for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    cVar1 = FUN_00493b20((int)puVar3, (char)param_3);
    if (cVar1 != '\0') {
      return;
    }
  }
  puVar3 = _malloc(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puRam00000004 = (undefined4 *)param_2[1];
    *puRam00000004 = 0;
    param_2[1] = 0;
    puRam00000000 = param_2;
    return;
  }
  puVar2 = puVar3 + 2;
  *puVar2 = puVar2;
  puVar3[3] = puVar2;
  FUN_00493b20((int)puVar3, '\x01');
  puVar2 = (undefined4 *)param_2[1];
  *puVar2 = puVar3;
  param_2[1] = puVar3;
  *puVar3 = param_2;
  puVar3[1] = puVar2;
  return;
}
