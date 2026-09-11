/* spd-match: far pct=11.16 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00547020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00438980();
int __cdecl FUN_0043b850();
int __cdecl FUN_0043d2d0();
int __cdecl FUN_00547450();
int __cdecl FUN_005479e0();
int __cdecl FUN_005488d0();
extern int DAT_00735500;
extern int DAT_0073ddc0;
extern int DAT_007402b0;
void __fastcall FUN_00547020(undefined4 val, int param_1)

{
  undefined4 uVar1;

  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = &DAT_0073ddc0;
  do {
    puVar4 = puVar2;
    if (puVar2[1] == param_1) break;
    puVar2 = puVar2 + 8;
    puVar4 = (undefined4 *)0x0;
  } while ((int)puVar2 < 0x73de20);
  if ((2 < DAT_00735500) && (puVar4 != (undefined4 *)0x0)) {
    FUN_005488d0(0x20);
    FUN_00438980(&DAT_007402b0);
    FUN_005488d0(0x20);
    uVar1 = *puVar4;
    iVar3 = FUN_0043b850(uVar1);
    if ((iVar3 != 0) && (*(float *)(iVar3 + 0x1a4) < 0.0)) {
      *(undefined4 *)(iVar3 + 0x1a4) = 0;
      FUN_0043d2d0(uVar1,val,0);
      puVar2 = &DAT_0073ddc0;
      do {
        iVar3 = puVar2[1];
        if ((((iVar3 != -1) && (puVar2 != (undefined4 *)0x0)) && (iVar3 != param_1)) &&
           (4 < (int)puVar2[4])) {
          FUN_005479e0(iVar3,2,0);
        }
        puVar2 = puVar2 + 8;
      } while ((int)puVar2 < 0x73de20);
      FUN_00547450(param_1,0);
    }
  }
  return;
}
