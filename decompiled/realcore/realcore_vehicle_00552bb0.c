/* spd-match: far pct=8.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004f6850();
int __cdecl FUN_00549ed0();
int __cdecl FUN_0054b700();
int __cdecl FUN_00550bd0();
int __cdecl FUN_00551c10();
int __cdecl FUN_00551fa0();
int __cdecl FUN_005522d0();
int __cdecl FUN_0055e980();
int __cdecl FUN_00565da0();
int __cdecl FUN_005808e0();
int __cdecl FUN_0059fb80();
int __cdecl FUN_0064c660();
int __cdecl FUN_00666f30();
int __cdecl FUN_006682f0();
int __cdecl FUN_00668b40();
int __cdecl FUN_00674898();
extern int DAT_006b9172;
extern int DAT_006bcecc;
extern int DAT_006bd444;
extern int DAT_006ca778;
extern int DAT_006f3cd0;
extern int DAT_0073d868;
extern int DAT_0073d8d0;
extern int DAT_0073d8d8;
extern int DAT_0073d8dc;
extern int DAT_0073daf4;
extern int DAT_00777cb4;
extern int DAT_0078ee28;
extern void LAB_00552c15(void);
extern void LAB_00552d2c(void);
extern void LAB_00552eb9(void);
extern void LAB_00552fa2(void);

void FUN_00552bb0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_7c4;
  undefined4 local_7c0 [36];
  int local_730 [459];
  
  if (DAT_0073d8d0 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_0064c660(DAT_0073d8dc);
    if (6 < iVar7) {
      iVar7 = 6;
    }
  }
  iVar2 = 0;
  if (0 < iVar7) {
    do {
      iVar2 = iVar2 + 1;
      FUN_00551c10(param_1,iVar2);
    } while (iVar2 < iVar7);
    if (5 < iVar2) goto LAB_00552c15;
  }
  iVar2 = iVar2 + 1;
  do {
    FUN_00551fa0(param_1,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
LAB_00552c15:
  iVar7 = **(int **)(param_1 + 0x7a0);
  if ((*(int **)(param_1 + 0x7a0))[9] != iVar7) {
    FUN_005522d0(param_1,iVar7 + 1);
  }
  if (DAT_0073d8d0 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0064c660(DAT_0073d8dc);
  }
  FUN_00550bd0(*(undefined4 *)(param_1 + 0x7a0),uVar3);
  iVar7 = *(int *)(*(int *)(param_1 + 0x7a0) + 0x2c);
  if (iVar7 < *(int *)(*(int *)(param_1 + 0x7a0) + 0x30)) {
    local_7c4 = 0x38;
    do {
      if ((DAT_0073d8d0 == 0) || (iVar2 = FUN_00666f30(DAT_0073d8dc,iVar7), iVar2 == 0)) {
        puVar4 = &DAT_006b9172;
      }
      else {
        puVar4 = (undefined1 *)(iVar2 + 9);
      }
      FUN_004f6850(puVar4);
      if (*(char *)(param_1 + 0x70) == '\0') {
        if (((DAT_0073d8d0 == 0) || (iVar2 = FUN_00666f30(DAT_0073d8dc,iVar7), iVar2 == 0)) ||
           (iVar2 = FUN_0054b700(&DAT_0073d868,iVar2 + 0x44), iVar2 == 0)) {
LAB_00552d2c:
          if (((*(int *)(*(int *)(*(int *)(local_7c4 + *(int *)(param_1 + 0x7a0)) + 0x10) + 0x10) <
                0) && (DAT_0073d8d0 != 0)) &&
             ((iVar2 = FUN_00666f30(DAT_0073d8dc,iVar7), iVar2 != 0 &&
              ((iVar2 = FUN_0054b700(&DAT_0073d868,iVar2 + 0x44), iVar2 != 0 && (DAT_0073d8d0 != 0))
              )))) {
            _atol((char *)(iVar2 + 0x28));
          }
        }
        else {
          iVar5 = -1;
          if (DAT_0073d8d0 != 0) {
            iVar5 = FUN_00668b40(DAT_0073daf4,*(undefined4 *)(iVar2 + 0x30),0,0);
          }
          if (iVar5 < 0) goto LAB_00552d2c;
        }
        FUN_0055e980();
      }
      iVar2 = FUN_00666f30(DAT_0073d8dc,iVar7);
      if (DAT_0073d8d0 == 0) {
        puVar4 = &DAT_006b9172;
      }
      else {
        DAT_0078ee28 = 0;
        if (iVar2 != 0) {
          FUN_00565da0(&DAT_006ca778,*(undefined4 *)(iVar2 + 0x24c));
        }
        puVar4 = &DAT_0078ee28;
      }
      FUN_004f6850(puVar4);
      if (*(char *)(param_1 + 0x70) == '\0') {
LAB_00552fa2:
        FUN_004f6850(&DAT_006b9172);
      }
      else {
        if ((DAT_0073d8d0 == 0) || (iVar2 = FUN_00666f30(DAT_0073d8d8,iVar7), iVar2 == 0)) {
          puVar4 = &DAT_006b9172;
        }
        else {
          puVar4 = (undefined1 *)(iVar2 + 8);
        }
        iVar2 = FUN_0054b700(&DAT_0073d868,puVar4);
        puVar6 = local_7c0;
        for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        if (iVar2 == 0) goto LAB_00552fa2;
        pcVar1 = (char *)(iVar2 + 0x38);
        iVar2 = 0;
        if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
LAB_00552eb9:
          puVar6 = &DAT_006f3cd0;
          puVar8 = local_7c0;
          for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        else {
          do {
            iVar5 = iVar2 + 1;
            iVar2 = iVar2 + 1;
          } while (pcVar1[iVar5] != '\0');
          if (iVar2 < 1) goto LAB_00552eb9;
          FUN_006682f0(pcVar1,local_7c0,0x8c,&DAT_006bd444);
        }
        switch(DAT_00777cb4) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:;
        }
        uVar3 = FUN_00674898();
        FUN_004f6850(&DAT_006bcecc,uVar3);
      }
      FUN_00417600();
      if (DAT_0073d8d0 != 0) {
        FUN_00666f30(DAT_0073d8d8,iVar7);
        iVar2 = FUN_00549ed0(&DAT_0073d868,local_730);
        if (((iVar2 != 0) && (local_730[0] != -1)) && (*(char *)(param_1 + 0x70) != '\0')) {
          uVar3 = FUN_005808e0();
          switch(uVar3) {
          default:
            break;
          case 1:
            break;
          case 2:
            break;
          case 0xfffffffe:
            break;
          case 0xffffffff:;
          }
          iVar2 = FUN_0059fb80();
          if (iVar2 == 0) {
            iVar2 = FUN_0059fb80();
          }
          FUN_004f6850(iVar2);
        }
      }
      iVar7 = iVar7 + 1;
      local_7c4 = local_7c4 + 4;
    } while (iVar7 < *(int *)(*(int *)(param_1 + 0x7a0) + 0x30));
  }
  return;
}
