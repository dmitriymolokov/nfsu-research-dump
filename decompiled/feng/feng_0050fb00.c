/* spd-match: far pct=4.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_0050fe70();
int __cdecl FUN_0050ff80();
int __cdecl FUN_005a1550();
int __cdecl FUN_005a4420();
extern int DAT_00735748;
extern int DAT_00735ec1;
extern unsigned char *DAT_00737668;
extern int DAT_0073766c;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0075eef8;
extern unsigned char *PTR_FUN_006c02a8;
extern void LAB_0050fbe4(void);
extern void LAB_0050fbea(void);
extern void LAB_0050fc34(void);
extern void LAB_0050fc38(void);
extern void LAB_0050fcb0(void);
extern void LAB_0050fe2e(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_0050fb00(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 local_19;
  undefined4 local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar2 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c02a8;
  *puVar2 = puVar2;
  param_1[0x12] = puVar2;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  iVar7 = FUN_004f3f90(&DAT_00746104);
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0x18) != 0)) && (*(int **)(iVar7 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar7 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar7 + 0x18));
  }
  cVar6 = FUN_005a1550(&DAT_0075eef8,1);
  uVar5 = DAT_0073766c;
  if (cVar6 == '\0') {
    uVar8 = 0;
    if (DAT_0073766c == 0) {
LAB_0050fbe4:
      bVar4 = false;
    }
    else {
      piVar10 = (int *)(DAT_00737668 + 0x24);
      do {
        if ((piVar10[-1] == 1) && (*piVar10 == 2)) {
          if (*(char *)(uVar8 * 0x34 + 0x30 + DAT_00737668) == '\0') goto LAB_0050fbe4;
          goto LAB_0050fbea;
        }
        uVar8 = uVar8 + 1;
        piVar10 = piVar10 + 0xd;
      } while (uVar8 < DAT_0073766c);
      bVar4 = false;
    }
  }
  else {
LAB_0050fbea:
    bVar4 = true;
  }
  cVar6 = FUN_005a1550(&DAT_0075eef8,1);
  iVar7 = DAT_00745e40;
  if (cVar6 == '\0') {
    uVar8 = 0;
    if (uVar5 == 0) {
LAB_0050fc34:
      bVar3 = false;
    }
    else {
      piVar10 = (int *)(DAT_00737668 + 0x24);
      do {
        if ((piVar10[-1] == 1) && (*piVar10 == 3)) {
          if (*(char *)(uVar8 * 0x34 + 0x30 + DAT_00737668) == '\0') goto LAB_0050fc34;
          goto LAB_0050fc38;
        }
        uVar8 = uVar8 + 1;
        piVar10 = piVar10 + 0xd;
      } while (uVar8 < uVar5);
      bVar3 = false;
    }
  }
  else {
LAB_0050fc38:
    bVar3 = true;
  }
  if ((bVar4) || (DAT_00735ec1 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar3) || (bVar3 = false, DAT_00735ec1 != '\0')) {
    bVar3 = true;
  }
  bVar12 = DAT_00745e40 == 1;
  iVar9 = FUN_005a4420();
  if ((iVar7 == 1) && (iVar9 == 2)) {
    local_15 = 1;
  }
  else {
    local_15 = 0;
    if ((iVar7 == 1) && (local_19 = 1, iVar9 == 3)) goto LAB_0050fcb0;
  }
  local_19 = 0;
LAB_0050fcb0:
  pcVar11 = "DECAL_ZONE_WINDSHIELD";
  do {
    pcVar1 = pcVar11 + 1;
    pcVar11 = pcVar11 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050fe70(0,0x46a798ac,0,0);
  pcVar11 = "DECAL_ZONE_REARWINDOW";
  do {
    pcVar1 = pcVar11 + 1;
    pcVar11 = pcVar11 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050fe70(1,0x4b5a083a,0,0);
  if (bVar12 || bVar4) {
    pcVar11 = "DECAL_ZONE_LEFTDOOR";
    do {
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050fe70(2,0x542f8a37,local_15,0);
    pcVar11 = "DECAL_ZONE_RIGHTDOOR";
    do {
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050fe70(3,0xfd12c62a,local_15,0);
    pcVar11 = "DECAL_ZONE_LEFTPANEL";
    do {
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050fe70(4,0xdaf24433,local_15,0);
    pcVar11 = "DECAL_ZONE_RIGHTPANEL";
    do {
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050fe70(5,0xa03cfe86,local_15,0);
  }
  if (bVar12 || bVar3) {
    pcVar11 = "DECAL_ZONE_HOOD";
    do {
      pcVar1 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050fe70(6,0xf2b1f5a3,local_19,0);
  }
  puVar2 = (undefined4 *)param_1[0x11];
  do {
    if (puVar2 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_0050fe2e:
      FUN_004f8960();
      FUN_0050ff80(param_1);
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar2[2] == DAT_00735748) {
      param_1[0x10] = puVar2;
      goto LAB_0050fe2e;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}
