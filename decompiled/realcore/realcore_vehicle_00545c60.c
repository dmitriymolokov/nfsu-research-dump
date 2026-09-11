/* spd-match: far pct=11.11 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00545C60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00740410;
extern unsigned char *DAT_00740414;
void __fastcall FUN_00545c60(undefined4 * obj, int param_1, int param_2, undefined4 param_3, undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;

  int iVar3;
  
  obj[2] = param_3;
  obj[3] = param_2;
  obj[4] = param_1;
  obj[5] = param_4;
  if (0 < param_1) {
    iVar3 = 0;
    do {
      iVar1 = obj[2];
      *(int *)(iVar1 + iVar3 + 0x28) = param_2;
      param_2 = param_2 + *(int *)(iVar1 + iVar3 + 0x1c) * 0x10;
      iVar3 = iVar3 + 0x34;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *DAT_00740414 = obj;
  puVar2 = obj;
  obj[1] = DAT_00740414;
  DAT_00740414 = puVar2;
  *obj = &DAT_00740410;
  return;
}
