/* spd-match: far pct=4.46 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006b9172;
extern int DAT_0071d89c;
extern int DAT_0078ece8;
extern int DAT_0078ed08;
extern void LAB_004078d7(void);
extern void LAB_00407912(void);
extern void LAB_00407993(void);

undefined * FUN_00407800(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar7 = &DAT_0078ece8;
  for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  DAT_0078ece8 = 0x13c;
  iVar4 = -1;
  bVar2 = true;
  if ((*(char *)(param_1 + 0x264) != '\0') && ((param_2 == 3 || (param_2 == 4)))) {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      bVar2 = false;
    }
  }
  iVar8 = iVar4;
  if ((((*(char *)(param_1 + 0x265) != '\0') && (*(char *)(param_1 + 0x268) == '\0')) &&
      (param_2 == 1)) && (iVar8 = param_2, param_3 != 0)) {
    bVar2 = false;
    iVar8 = iVar4;
  }
  iVar4 = iVar8;
  if (((*(char *)(param_1 + 0x266) != '\0') && (*(char *)(param_1 + 0x268) == '\0')) &&
     ((param_2 == 2 && (iVar4 = param_2, param_3 != 0)))) {
    bVar2 = false;
    iVar4 = iVar8;
  }
  if (((*(char *)(param_1 + 0x267) == '\0') || (*(char *)(param_1 + 0x268) == '\0')) ||
     ((param_2 != 2 && (param_2 != 1)))) {
LAB_004078d7:
    if (iVar4 < 0) goto LAB_00407912;
  }
  else {
    if (param_3 != 0) {
      bVar2 = false;
      goto LAB_004078d7;
    }
    iVar4 = 3;
  }
  piVar5 = (int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)];
  if ((piVar5 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar5 + 0x38))
                        (piVar5,&DAT_0078ece8,*(undefined4 *)(param_1 + 0x244 + iVar4 * 4),1),
     -1 < iVar4)) {
    return &DAT_0078ed08;
  }
LAB_00407912:
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 0x18);
  do {
    if (*piVar5 == param_2) {
      if ((param_3 == 1) && (bVar2)) {
        bVar2 = false;
      }
      else {
        piVar6 = (int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)];
        if ((piVar6 != (int *)0x0) &&
           (iVar8 = (**(code **)(*piVar6 + 0x38))(piVar6,&DAT_0078ece8,iVar4 + 0x30,1), -1 < iVar8))
        {
LAB_00407993:
          return &DAT_0078ed08;
        }
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
    if (0xf < iVar4) {
      iVar4 = 0x20;
      piVar5 = (int *)(param_1 + 0x58);
      do {
        iVar8 = 0;
        piVar6 = piVar5;
        do {
          if (*piVar6 == param_2) {
            if ((param_3 == 1) && (bVar2)) {
              bVar2 = false;
            }
            else {
              piVar1 = (int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)];
              if ((piVar1 != (int *)0x0) &&
                 (iVar3 = (**(code **)(*piVar1 + 0x38))(piVar1,&DAT_0078ece8,iVar4,1), -1 < iVar3))
              goto LAB_00407993;
            }
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar8 < 4);
        iVar4 = iVar4 + 4;
        piVar5 = piVar5 + 4;
        if (0x2f < iVar4) {
          return &DAT_006b9172;
        }
      } while( true );
    }
  } while( true );
}
