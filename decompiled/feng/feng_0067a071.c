/* spd-match: far pct=2.30 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_0067A071 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0067e1d0();
extern int DAT_006ec184;
int unaff_EBX;
void __fastcall __cftoe2(int * obj, int param_1, int param_2, char param_3)

{

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *unaff_EBX;
  
  if (param_3 != '\0') {
    __shift();
  }
  if (*obj == 0x2d) {
    *unaff_EBX = 0x2d;
    unaff_EBX = unaff_EBX + 1;
  }
  puVar1 = unaff_EBX;
  if (0 < param_1) {
    puVar1 = unaff_EBX + 1;
    *unaff_EBX = *puVar1;
    *puVar1 = DAT_006ec184;
  }
  puVar1 = (undefined1 *)FUN_0067e1d0(puVar1 + param_1 + (uint)(param_3 == '\0'),"e+000");
  if (param_2 != 0) {
    *puVar1 = 0x45;
  }
  if (*(char *)obj[3] != '0') {
    iVar2 = obj[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      puVar1[1] = 0x2d;
    }
    if (99 < iVar2) {
      iVar3 = iVar2 / 100;
      iVar2 = iVar2 % 100;
      puVar1[2] = puVar1[2] + (char)iVar3;
    }
    if (9 < iVar2) {
      iVar3 = iVar2 / 10;
      iVar2 = iVar2 % 10;
      puVar1[3] = puVar1[3] + (char)iVar3;
    }
    puVar1[4] = puVar1[4] + (char)iVar2;
  }
  return;
}
