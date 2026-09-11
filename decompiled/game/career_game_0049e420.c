/* spd-match: far pct=10.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049E420 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0049e400();
int __cdecl FUN_004f42f0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_0057cf70();
int __cdecl FUN_0059fb80();
extern int DAT_00734998;
extern unsigned char *PTR_s_PAINT_006fb9a0;
extern void LAB_0049e56f(void);
extern void LAB_0049e574(void);
extern void LAB_0049e5a4(void);
void __fastcall FUN_0049e420(undefined4 * obj, int param_1)

{
  char cVar1;
  undefined4 *puVar2;

  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char local_200 [256];
  char local_100 [256];
  
  switch(*obj) {
  case 0:
    FUN_004f42f0("EVENT_REWARD_%s_LEVEL_%d",(&PTR_s_PAINT_006fb9a0)[obj[1]],obj[2]);
    break;
  case 1:
    FUN_0049e400();
    break;
  case 2:
    pcVar6 = (char *)FUN_0057cf70();
    pcVar5 = "";
    if (*(int *)(pcVar6 + 0xc50) == 0xf) {
      pcVar6 = "HYUNDAI";
      if (DAT_00734998 == 0) {
LAB_0049e56f:
        pcVar5 = "_USA";
LAB_0049e574:
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
      else if (DAT_00734998 == 2) {
        pcVar5 = "_KOREA";
        pcVar6 = "HYUNDAI";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
      else if (DAT_00734998 == 1) {
        pcVar5 = "_EUROPE";
        pcVar6 = "HYUNDAI";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
      else if (DAT_00734998 == 5) {
        pcVar5 = "_EUROPE";
        pcVar6 = "HYUNDAI";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
      else {
        if (DAT_00734998 != 4) goto LAB_0049e574;
        pcVar5 = "_EUROPE";
        pcVar6 = "HYUNDAI";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
    }
    else {
      if (*(int *)(pcVar6 + 0xc50) != 0xe) goto LAB_0049e574;
      if (DAT_00734998 == 1) {
        pcVar5 = "_EUROPE";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
      else if (DAT_00734998 == 5) {
        pcVar5 = "_EUROPE";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
      else {
        if (DAT_00734998 != 4) {
          pcVar5 = "_EUROPE";
          if (DAT_00734998 != 2) goto LAB_0049e56f;
          goto LAB_0049e574;
        }
        pcVar5 = "_EUROPE";
        pcVar8 = "EVENT_REWARD_CAR_%s%s";
      }
    }
    goto LAB_0049e5a4;
  case 3:
    pcVar6 = (char *)obj[1];
    pcVar5 = "";
    if (obj[2] == 1) {
      pcVar5 = "_BACKWARD";
    }
    else if (obj[2] == 0) {
      pcVar5 = "_FORWARD";
    }
    pcVar8 = "EVENT_REWARD_TRACK_%d%s";
LAB_0049e5a4:
    FUN_004f42f0(pcVar8,pcVar6,pcVar5);
    break;
  case 4:
    goto switchD_0049e438_caseD_4;
  }
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar7 = 0x100;
  pcVar6 = local_100;
  do {
    cVar1 = pcVar6[iVar3 - (int)local_100];
    iVar7 = iVar7 + -1;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0);
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar7 = 0x100;
  pcVar6 = local_200;
  do {
    cVar1 = pcVar6[iVar3 - (int)local_200];
    iVar7 = iVar7 + -1;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0);
  piVar4 = _malloc(0x108);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x2ccb70aa;
  }
  FUN_004f68c0(0xfc,local_100,local_200);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = piVar4;
  *(int **)(param_1 + 8) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = param_1 + 4;
switchD_0049e438_caseD_4:
  return;
}
