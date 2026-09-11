/* spd-match: far pct=13.13 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00438a40();
int __cdecl FUN_0049e420();
int __cdecl FUN_0049e6a0();
int __cdecl FUN_0049e740();
int __cdecl FUN_0049e7e0();
int __cdecl FUN_0049e890();
int __cdecl FUN_0049e9d0();
int __cdecl FUN_0049ebf0();
int __cdecl FUN_004ad2a0();
int __cdecl FUN_005a2f10();
int __cdecl FUN_005a3340();
int __cdecl FUN_00674898();
extern int DAT_007677a8;
extern int DAT_00777b4c;
extern int DAT_00777cd0;
extern int DAT_007787b0;
extern int DAT_0077b244;
extern unsigned char *PTR_LAB_006c75c8;
extern void LAB_0049ede4(void);
extern void LAB_0049edec(void);
extern void LAB_0049eeaf(void);
extern void LAB_00685aeb(void);
void *ExceptionList;

undefined4 * FUN_0049ed00(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685aeb;
  local_c = ExceptionList;
  puVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_006c75c8;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  iVar6 = 0;
  local_4 = 0;
  if (DAT_00777b4c != 4) {
    FUN_0049e9d0(param_1);
  }
  piVar5 = DAT_007677a8;
  if (DAT_00777b4c == 1) {
    if ((DAT_007677a8 != (int *)0x0) && (cVar2 = FUN_005a2f10(DAT_007677a8,0), cVar2 != '\0')) {
      cVar2 = (**(code **)(*piVar5 + 4))();
      bVar8 = cVar2 == '\0';
LAB_0049ede4:
      if (bVar8) {
        FUN_0049ebf0(param_1);
      }
      goto LAB_0049edec;
    }
  }
  else {
    if (DAT_00777b4c == 8) {
      iVar3 = 0;
      if (0 < DAT_007787b0) {
        piVar5 = &DAT_00777cd0;
        do {
          if (*piVar5 == 1) {
            if ((iVar3 * 0x15c != -0x777cd0) && (DAT_0077b244 != 0)) {
              cVar2 = FUN_00438a40();
              iVar3 = FUN_004ad2a0();
              bVar8 = *(int *)(iVar3 + 4) == (int)cVar2;
              goto LAB_0049ede4;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 0x57;
        } while (iVar3 < DAT_007787b0);
      }
      goto LAB_0049eeaf;
    }
LAB_0049edec:
    piVar5 = DAT_007677a8;
    if (DAT_00777b4c != 1) goto LAB_0049eeaf;
  }
  cVar2 = FUN_005a2f10(piVar5,0);
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*piVar5 + 4))(), cVar2 != '\0')) {
    cVar2 = FUN_005a3340();
    if (cVar2 != '\0') {
      FUN_0049e740(param_1);
    }
  }
  else if ((char)piVar5[0x167b] == '\0') {
    uVar4 = FUN_00674898();
    FUN_0049e6a0(param_1,uVar4);
    bVar8 = false;
    if (0 < piVar5[0x1645]) {
      piVar7 = piVar5 + 0x1636;
      bVar8 = false;
      do {
        if ((*piVar7 == 0) && (piVar7[2] == 4)) {
          bVar8 = true;
        }
        else {
          FUN_0049e420(param_1);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar6 < piVar5[0x1645]);
    }
    if (piVar5[0x1629] == 6) {
      FUN_0049e890(param_1);
    }
    if (bVar8) {
      FUN_0049e7e0(param_1);
    }
  }
LAB_0049eeaf:
  param_1[3] = param_1[1];
  ExceptionList = local_c;
  return param_1;
}
