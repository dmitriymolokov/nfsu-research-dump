/* spd-match: far pct=6.54 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AB670 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ab640();
int __cdecl FUN_0051ba80();
int __cdecl FUN_005a0320();
int __cdecl FUN_005a2f10();
int __cdecl FUN_005a3340();
extern int DAT_00777b4c;
extern void LAB_004ab6a4(void);
extern void LAB_004ab771(void);
extern void LAB_004ab7e2(void);
char * __fastcall FUN_004ab670(int val, int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;

  char *local_4;
  
  local_4 = "MU_Main_PC.fng";
  if (val == 0) {
    switch(DAT_00777b4c) {
    case 1:
      iVar1 = *(int *)(param_1 + 0x1e838);
      if (iVar1 == 0) goto LAB_004ab6a4;
      cVar3 = FUN_005a2f10(iVar1,0);
      cVar4 = FUN_005a2f10(iVar1,0);
      cVar5 = FUN_005a3340();
      iVar2 = *(int *)(iVar1 + 0x58a4);
      if ((iVar2 == 2) && (cVar6 = FUN_005a2f10(iVar1,0), cVar6 != '\0')) {
        return "MU_UG_JunkmanGiveth.fng";
      }
      if ((iVar2 == 3) && (cVar6 = FUN_005a2f10(iVar1,0), cVar6 != '\0')) {
        cVar3 = FUN_005a0320();
        if (cVar3 != '\0') {
          return "MU_UG_SamanthaGiveth.fng";
        }
      }
      else {
        if (*(int *)(iVar1 + 0x58a0) == 0) {
          if (cVar3 == '\0') {
            return local_4;
          }
          if (cVar5 == '\0') {
            return local_4;
          }
          if (cVar4 == '\0') {
            return local_4;
          }
          return "MU_UG_NewCareerExtroFMV.fng";
        }
        if ((*(char *)(iVar1 + 0x5964) != '\0') && (cVar4 != '\0')) {
LAB_004ab7e2:
          return "MU_UG_NewCareerExtroFMV.fng";
        }
        if (*(char *)(iVar1 + 0x5958) == '\0') {
          if (cVar4 == '\0') goto LAB_004ab771;
        }
        else if (cVar4 == '\0') goto LAB_004ab7e2;
        cVar3 = FUN_004ab640();
        if ((cVar3 != '\0') || (cVar3 = FUN_0051ba80(), cVar3 != '\0')) {
          return "MU_UG_MagazineGiveth.fng";
        }
      }
LAB_004ab771:
      return "MU_UG_UndergroundMenu.fng";
    case 2:
    case 4:
      return "MU_QuickRaceModeSelect.fng";
    case 8:
      local_4 = "MU_OnlineMenu.fng";
    }
  }
  else {
    if (val == 1) {
LAB_004ab6a4:
      return "MU_Garage.fng";
    }
    if (val == 2) {
      return "MU_UG_MapScreen.fng";
    }
  }
  return local_4;
}
