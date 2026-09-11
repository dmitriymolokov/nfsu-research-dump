/* spd-match: far pct=7.41 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004eede0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_00509d70();
int __cdecl FUN_0050c3c0();
int __cdecl FUN_0050c4d0();
int __cdecl FUN_0059e5c0();
int __cdecl FUN_005a1550();
extern int DAT_00735738;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_0075eef8;
extern int DAT_007677ac;
extern unsigned char *PTR_FUN_006c016c;
extern void LAB_0050c2bf(void);
extern void LAB_0050c2d2(void);
extern void LAB_0050c309(void);
extern void LAB_0050c365(void);
extern void LAB_0050c385(void);
extern void LAB_00688f1e(void);
void *ExceptionList;

undefined4 * FUN_0050c0f0(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688f1e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c016c;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar2 = *(int *)(DAT_0073578c + 8);
    iVar5 = iVar2 + 0xdc;
    if ((iVar5 == 0) || (iVar5 = FUN_004fd1e0(iVar5), iVar5 == 0)) {
      FUN_004eede0(iVar2,"MU_HorizontalBrowserBack.fng",0x10,0);
    }
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int **)(iVar5 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar5 + 0x18));
  }
  bVar7 = DAT_007677ac != 0;
  pcVar6 = "PAINT_MOD_BASE";
  do {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050c3c0(0,0xa3b76154,"PC_ColorPicker.fng",0);
  pcVar6 = "PAINT_MOD_PART_RIMS";
  do {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050c3c0(4,0xd223f84a,"PC_ColorPicker.fng",0);
  pcVar6 = "PAINT_MOD_PART_SPOILER";
  do {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050c3c0(2,0xa8d7e6ed,"PC_ColorPicker.fng",0);
  if ((bVar7) || (cVar4 = FUN_00509d70(2), cVar4 == '\0')) {
    pcVar6 = "PAINT_MOD_PART_ENGINE_ACCENT";
    do {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050c3c0(8,0x4e875a92,"PC_ColorPicker.fng",0);
    if (!bVar7) goto LAB_0050c2bf;
LAB_0050c2d2:
    pcVar6 = "PAINT_MOD_PART_BRAKE_CALIPERS";
    do {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    FUN_0050c3c0(0xb,0x87b7eb73,"PC_ColorPicker.fng",0);
    if (!bVar7) goto LAB_0050c309;
  }
  else {
LAB_0050c2bf:
    cVar4 = FUN_00509d70(8);
    if (cVar4 == '\0') goto LAB_0050c2d2;
LAB_0050c309:
    cVar4 = FUN_005a1550(&DAT_0075eef8,2);
    if ((cVar4 == '\0') && (cVar4 = FUN_0059e5c0(), cVar4 == '\0')) goto LAB_0050c365;
  }
  pcVar6 = "PAINT_MOD_PART_MUFFLER_TIP";
  do {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050c3c0(5,0xa6343aec,"PC_ColorPicker.fng",0);
LAB_0050c365:
  puVar3 = (undefined4 *)param_1[0x11];
  do {
    if (puVar3 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_0050c385:
      FUN_004f8960();
      FUN_0050c4d0();
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (puVar3[2] == DAT_00735738) {
      param_1[0x10] = puVar3;
      goto LAB_0050c385;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
