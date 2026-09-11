/* spd-match: far pct=9.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041A250 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419c20();
int __cdecl FUN_0041a470();
int __cdecl FUN_0041bab0();
int __cdecl FUN_0041bc20();
int __cdecl FUN_0041c070();
int __cdecl FUN_0041c240();
extern int DAT_006a6e60;
extern int DAT_0071d890;
extern unsigned char *DAT_0071d89c;
void __fastcall FUN_0041a250(undefined4 val, int param_1, undefined4 param_2, undefined4 param_3)

{
  char cVar1;

  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar2 = param_1 + 0x2498;
  cVar1 = FUN_0041bc20(iVar2);
  if (cVar1 == '\0') {
    if ((&DAT_0071d89c)[unaff_ESI] == 0) {
      FUN_00419c20("ERROR: trying to play a force on channel %d but no");
      FUN_00419c20("wheel/joystick opened.\n");
    }
    else if ((*(char *)(unaff_ESI + 0x2220 + param_1) == '\0') && ((&DAT_0071d890)[unaff_ESI] != 0))
    {
      cVar1 = FUN_0041bc20(iVar2);
      if (cVar1 == '\0') {
        if (*(int *)(unaff_ESI * 0x20 + 0x24a8 + param_1) == 0) {
          iVar3 = FUN_0041c070(unaff_ESI,&DAT_0071d89c + unaff_ESI,0x12,0xffffffff,0,10000,
                               0xffffffff,0,(&DAT_0071d890)[unaff_ESI],0,4,1,1,val,param_3,
                               param_3,param_2,param_2,0,0,&DAT_006a6e60);
        }
        else {
          cVar1 = FUN_0041a470(param_2,param_3);
          if (cVar1 != '\0') {
            FUN_0041bab0(iVar2,unaff_ESI);
            return;
          }
          iVar3 = FUN_0041c240(iVar2,unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                               (&DAT_0071d890)[unaff_ESI],0,4,1,1,val,param_3,param_3,param_2,
                               param_2,0,0);
        }
        if (-1 < iVar3) {
          iVar3 = param_1 + unaff_ESI * 0xc;
          *(undefined4 *)(iVar3 + 0x2ba0) = val;
          *(undefined4 *)(param_1 + (unaff_ESI * 3 + 0xae9) * 4) = param_2;
          *(undefined4 *)(iVar3 + 0x2ba8) = param_3;
        }
        FUN_0041bab0(iVar2,unaff_ESI);
        return;
      }
      cVar1 = FUN_0041a470(param_2,param_3);
      if (cVar1 == '\0') {
        iVar2 = FUN_0041c240(iVar2,unaff_ESI,0x12,0xffffffff,0,10000,0xffffffff,0,
                             (&DAT_0071d890)[unaff_ESI],0,4,1,1,val,param_3,param_3,param_2,
                             param_2,0,0);
        if (-1 < iVar2) {
          iVar2 = param_1 + unaff_ESI * 0xc;
          *(undefined4 *)(iVar2 + 0x2ba0) = val;
          *(undefined4 *)(param_1 + (unaff_ESI * 3 + 0xae9) * 4) = param_2;
          *(undefined4 *)(iVar2 + 0x2ba8) = param_3;
          return;
        }
      }
    }
  }
  return;
}
