/* spd-match: far pct=8.41 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00458A50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_LAB_006c8f08;
void __fastcall FUN_00458a50(undefined4 * obj, undefined4 param_1)

{
  uint *puVar1;

  uint *puVar2;
  int iVar3;
  
  puVar1 = obj + 3;
  *obj = &PTR_LAB_006c8f08;
  iVar3 = 8;
  puVar2 = puVar1;
  do {
    *puVar2 = *puVar2 & 0xfffffffe;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  obj[1] = param_1;
  *puVar1 = *puVar1 & 0xfffffffe;
  obj[4] = obj[4] & 0xfffffffe;
  obj[5] = obj[5] & 0xfffffffe;
  obj[6] = obj[6] & 0xfffffffe;
  obj[8] = obj[8] & 0xfffffffe;
  obj[9] = obj[9] & 0xfffffffe;
  obj[7] = obj[7] & 0xfffffffe;
  obj[10] = obj[10] & 0xfffffffe;
  return;
}
