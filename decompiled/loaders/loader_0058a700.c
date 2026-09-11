/* spd-match: far pct=22.66 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058A700 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00565b60();
int __cdecl FUN_0058aba0();
extern int DAT_00737bb4;
extern int DAT_00737bbc;
extern void LAB_0058a600(void);
undefined4 * __fastcall FUN_0058a700(undefined4 * obj)

{
  int iVar1;
  undefined4 *puVar2;

  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = obj[2];
  iVar1 = obj[1];
  uVar3 = FUN_00565b60(iVar4 - iVar1,0,0,8);
  *obj = uVar3;
  iVar4 = FUN_0058aba0(uVar3,obj[5] + 0xc,obj[1],iVar4 - iVar1,&LAB_0058a600);
  puVar6 = DAT_00737bb4;
  puVar5 = (undefined4 *)FUN_0040a880();
  puVar2 = DAT_00737bbc;
  for (; puVar6 != puVar5; puVar6 = (undefined4 *)*puVar6) {
    if (puVar6[0x19] == iVar4) {
      return puVar6;
    }
  }
  puVar6 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar2 == puVar6) {
      return (undefined4 *)0x0;
    }
    if (puVar2[0x19] == iVar4) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}
