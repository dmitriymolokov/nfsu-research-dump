/* spd-match: far pct=3.66 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_0050a070();
int __cdecl FUN_0050a1a0();
extern int DAT_006f8864;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c0244;
extern void LAB_0050a033(void);
extern void LAB_00688f1e(void);
void *ExceptionList;

undefined4 * FUN_00509dd0(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688f1e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  puVar2 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0244;
  *puVar2 = puVar2;
  param_1[0x12] = puVar2;
  (*(unsigned char *)&(local_4)) = 1;
  (local_4 = ((unsigned int)(local_4) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (*(int **)(iVar3 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar3 + 0x18));
  }
  pcVar4 = "PERFORMANCE_ENGINE";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(2,0xbce3a657,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_TRANSMISSION";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(6,0xa4f13384,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_TIRES";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(7,0x88243aa3,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_ECU";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(5,0xd3f2cf84,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_TURBO";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(3,0xdb62de8,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_BRAKES";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(8,0x549c1021,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_WEIGHT_REDUCTION";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(0,0x658c4f84,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_SUSPENSION";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(1,0x674389a7,"MU_GaragePerformanceTuner.fng");
  pcVar4 = "PERFORMANCE_NITROUS";
  do {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  FUN_0050a070(4,0x49cb9b30,"MU_GaragePerformanceTuner.fng");
  puVar2 = (undefined4 *)param_1[0x11];
  do {
    if (puVar2 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_0050a033:
      FUN_004f8960();
      FUN_0050a1a0();
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (puVar2[2] == DAT_006f8864) {
      param_1[0x10] = puVar2;
      goto LAB_0050a033;
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}
