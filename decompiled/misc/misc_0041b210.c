/* spd-match: far pct=8.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041B210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419900();
int __cdecl FUN_00419ab0();
int __cdecl FUN_00419c20();
int __cdecl FUN_0041b630();
int __cdecl FUN_0041bab0();
int __cdecl FUN_0041bbb0();
int __cdecl FUN_0041bc20();
extern int DAT_006a6e70;
extern int DAT_006a6e80;
extern int DAT_006a6e90;
extern int DAT_006a6ea0;
extern int DAT_006a6eb0;
extern int DAT_0071d890;
extern unsigned char *DAT_0071d89c;
void __fastcall FUN_0041b210(int obj, int param_1, int param_2, undefined4 param_3, int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;

  int iVar4;
  int iVar5;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  if (0x96 < param_4) {
    param_4 = 0x96;
  }
  puVar2 = &DAT_0071d89c + obj;
  if ((&DAT_0071d89c)[obj] == 0) {
    FUN_00419c20("ERROR: trying to play a force on channel %d but no");
    FUN_00419c20("wheel/joystick opened.\n");
  }
  else if ((*(char *)(obj + 0x2220 + param_1) == '\0') && ((&DAT_0071d890)[obj] != 0)) {
    switch(param_2) {
    case 0:
      local_8 = &DAT_006a6ea0;
      break;
    case 1:
      local_8 = &DAT_006a6eb0;
      break;
    case 2:
      local_8 = &DAT_006a6e90;
      break;
    case 3:
      local_8 = &DAT_006a6e80;
      break;
    case 4:
      local_8 = &DAT_006a6e70;
    }
    iVar1 = param_1 + 0x2538;
    cVar3 = FUN_0041bc20(iVar1);
    if (cVar3 == '\0') {
      if (*(int *)(obj * 0x20 + 0x2554 + param_1) == 0) {
        iVar5 = FUN_00419900(obj,puVar2,0x12,0xffffffff,0,10000,0xffffffff,0,
                             (&DAT_0071d890)[obj],0,4,1,0,param_3,0,0,param_4 * 1000,0,0,0,0,0,
                             local_8);
        if (-1 < iVar5) {
          iVar5 = param_1 + obj * 0xc;
          *(int *)(iVar5 + 0x2c00) = param_2;
          *(undefined4 *)(param_1 + (obj * 3 + 0xb01) * 4) = param_3;
          *(int *)(iVar5 + 0x2c08) = param_4;
        }
      }
      else {
        cVar3 = FUN_0041b630(param_3,param_4);
        if (cVar3 == '\0') {
          iVar5 = param_1 + obj * 0xc;
          if (param_2 == *(int *)(iVar5 + 0x2c00)) {
            iVar4 = FUN_00419ab0(obj,0x12,0xffffffff,0,10000,0xffffffff,0,(&DAT_0071d890)[obj]
                                 ,0,4,1,0,param_3,0,0,param_4 * 1000,0,0,0,0,0);
          }
          else {
            FUN_0041bbb0(obj);
            iVar4 = FUN_00419900(obj,puVar2,0x12,0xffffffff,0,10000,0xffffffff,0,
                                 (&DAT_0071d890)[obj],0,4,1,0,param_3,0,0,param_4 * 1000,0,0,0,0,
                                 0,local_8);
          }
          if (-1 < iVar4) {
            *(int *)(iVar5 + 0x2c00) = param_2;
            *(undefined4 *)(param_1 + (obj * 3 + 0xb01) * 4) = param_3;
            *(int *)(iVar5 + 0x2c08) = param_4;
          }
        }
      }
      FUN_0041bab0(iVar1,obj);
      return;
    }
    cVar3 = FUN_0041b630(param_3,param_4);
    if (cVar3 == '\0') {
      iVar5 = param_1 + obj * 0xc;
      if (param_2 == *(int *)(iVar5 + 0x2c00)) {
        iVar4 = FUN_00419ab0(obj,0x12,0xffffffff,0,10000,0xffffffff,0,(&DAT_0071d890)[obj],0,4
                             ,1,0,param_3,0,0,param_4 * 1000,0,0,0,0,0);
      }
      else {
        FUN_0041bbb0(obj);
        iVar4 = FUN_00419900(obj,puVar2,0x12,0xffffffff,0,10000,0xffffffff,0,
                             (&DAT_0071d890)[obj],0,4,1,0,param_3,0,0,param_4 * 1000,0,0,0,0,0,
                             local_8);
        FUN_0041bab0(iVar1,obj);
      }
      if (-1 < iVar4) {
        *(int *)(iVar5 + 0x2c00) = param_2;
        *(undefined4 *)(param_1 + (obj * 3 + 0xb01) * 4) = param_3;
        *(int *)(iVar5 + 0x2c08) = param_4;
        return;
      }
    }
  }
  return;
}
