/* spd-match: far pct=8.23 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042BAC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0042bac0(undefined1 * obj, undefined1 *param_1)

{

  int iVar1;
  undefined1 *puVar2;
  
  *obj = *param_1;
  obj[1] = param_1[1];
  obj[2] = param_1[2];
  obj[3] = param_1[3];
  obj[4] = param_1[4];
  obj[5] = param_1[5];
  obj[6] = param_1[6];
  obj[7] = param_1[7];
  obj[8] = param_1[8];
  obj[9] = param_1[9];
  obj[10] = param_1[10];
  obj[0xb] = param_1[0xb];
  obj[0xc] = param_1[0xc];
  obj[0xd] = param_1[0xd];
  obj[0xe] = param_1[0xe];
  obj[0xf] = param_1[0xf];
  *(undefined4 *)(obj + 0x10) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = obj + 0x14;
  iVar1 = 0x10;
  do {
    *puVar2 = puVar2[(int)param_1 - (int)obj];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(obj + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(obj + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(obj + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(obj + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(obj + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}
