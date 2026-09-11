/* spd-match: far pct=14.04 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051D240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0051d1b0();
int __cdecl FUN_00520790();
int __cdecl FUN_00520b90();
int __cdecl FUN_00521850();
int __cdecl FUN_00522020();
int __cdecl FUN_00533060();
int __cdecl FUN_00536800();
int __cdecl FUN_00536a70();
int __cdecl FUN_005384e0();
int __cdecl FUN_0063f0a0();
extern int DAT_006f1dd8;
extern int DAT_0073568c;
extern int DAT_00735690;
extern unsigned char *DAT_007356a8;
extern unsigned char *DAT_007356ac;
extern void LAB_0051d40f(void);
extern void LAB_0051d4e4(void);
void __fastcall FUN_0051d240(int obj, undefined4 param_1)

{
  char cVar1;

  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  
  if (DAT_006f1dd8 == 0) {
    return;
  }
  FUN_00520790();
  FUN_00521850();
  FUN_00536800(DAT_007356ac,param_1);
  if (*(int **)(obj + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0xbc) + 0x20))(0);
  }
  if ((*(int *)(obj + 0x104) != 0) && (FUN_005384e0(), *(int *)(obj + 0xf8) == 1)) {
    iVar4 = *(int *)(obj + 0x104);
    *(undefined4 *)(iVar4 + 0x1c8) = 0;
    *(undefined4 *)(iVar4 + 0x1cc) = 0;
    *(undefined4 *)(iVar4 + 0x264) = 0;
    *(undefined4 *)(iVar4 + 0x268) = 0;
    *(undefined4 *)(iVar4 + 0x26c) = 0;
    *(undefined4 *)(iVar4 + 0x270) = 0;
    puVar2 = (undefined4 *)(iVar4 + 0x98);
    iVar4 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(int *)(obj + 0x7c) < *(int *)(obj + 0x78)) {
    do {
      iVar4 = *(int *)(*(int *)(obj + 0x7c) * 0x1c + 0x1fc + obj);
      if (iVar4 != -1) {
        *(int *)(*(int *)(obj + 0xb4) + 0x44) = iVar4;
      }
      iVar4 = *(int *)(obj + 0x7c);
      DAT_0073568c = *(undefined4 *)(iVar4 * 0x1c + 500 + obj);
      DAT_00735690 = *(undefined4 *)((iVar4 + 0x12) * 0x1c + obj);
      FUN_00522020(*(undefined4 *)(iVar4 * 0x1c + obj + 0x1ec),0,1,iVar4 + 9);
      iVar4 = *(int *)(obj + 0x7c) + 1;
      *(int *)(obj + 0x7c) = iVar4;
    } while (iVar4 < *(int *)(obj + 0x78));
  }
  if (*(char *)(DAT_007356a8 + 0x84) != '\0') {
    param_1 = 0;
  }
  if (*(int *)(obj + 0x60) != 0) {
    FUN_0051d1b0();
  }
  iVar4 = 0;
  if (0 < *(int *)(obj + 0xcc)) {
    piVar5 = (int *)(obj + 0xc4);
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 0x30))(param_1);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(obj + 0xcc));
  }
  iVar4 = 0;
  if (0 < *(int *)(obj + 0xe0)) {
    piVar5 = (int *)(obj + 0xd0);
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 0x30))(param_1);
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(obj + 0xe0));
  }
  piVar5 = (int *)(obj + 0xe4);
  for (piVar6 = *(int **)(obj + 0xe4); (piVar6 != piVar5 && (piVar6 != (int *)0x0));
      piVar6 = (int *)*piVar6) {
  }
  if (*piVar5 == 0) goto LAB_0051d40f;
  piVar6 = (int *)(*piVar5 + -0x270);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(obj + -0x18c);
    }
    if (piVar6 == piVar3) break;
    (**(code **)(*piVar6 + 0x30))(param_1);
    if (piVar6[0x9c] == 0) {
LAB_0051d40f:
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)(piVar6[0x9c] + -0x270);
    }
  }
  FUN_00533060();
  if (*(int **)(obj + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0xc0) + 0x20))(0);
  }
  if (*(int *)(obj + 0x90) != 0) {
    FUN_00520b90();
  }
  if (((DAT_006f1dd8 != 0) && (DAT_007356ac != 0)) && (*(int *)(DAT_007356ac + 0x3494) == 9)) {
    iVar4 = *(int *)(obj + 0x104);
    if (iVar4 != 0) {
      cVar1 = (**(code **)(**(int **)(iVar4 + 0x24) + 0x80))(0);
      cVar7 = cVar1 != '\0';
      cVar1 = (**(code **)(**(int **)(iVar4 + 0x24) + 0x80))(1);
      if (cVar1 != '\0') {
        cVar7 = cVar7 + '\x01';
      }
      if (cVar7 != '\0') goto LAB_0051d4e4;
    }
    iVar4 = DAT_007356ac;
    FUN_00536a70(DAT_007356ac,9,0);
    FUN_00536a70(iVar4,9,1);
    FUN_00536a70(iVar4,9,2);
    FUN_00536a70(iVar4,9,3);
  }
LAB_0051d4e4:
  if (*(int **)(obj + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(obj + 0x80) + 0xc))(param_1);
  }
  FUN_0063f0a0(0);
  return;
}
