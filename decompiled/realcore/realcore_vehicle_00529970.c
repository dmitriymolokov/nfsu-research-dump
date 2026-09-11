/* spd-match: far pct=13.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00529970 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
extern unsigned char *DAT_006b6628;
extern unsigned char *DAT_006b6638;
void __fastcall FUN_00529970(int * obj)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;

  cVar3 = (**(code **)(*obj + 0x60))(3);
  if ((cVar3 != '\0') && (obj[0x746] < 5)) {
    obj[0x794] = 1;
    FUN_00532640();
    FUN_00532670(0x41b80000,0,1000,0);
    obj[0x773] = 0x41b80000;
    iVar1 = *(int *)(&DAT_006b6628 + obj[0x755] * 4);
    uVar2 = *(undefined4 *)(&DAT_006b6638 + obj[0x755] * 4);
    FUN_00532640();
    FUN_00532670((float)iVar1,0,uVar2,0);
    obj[0x792] = (int)(float)iVar1;
  }
  return;
}
