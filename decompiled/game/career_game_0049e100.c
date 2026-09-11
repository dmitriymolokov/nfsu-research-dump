/* spd-match: far pct=12.74 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0049e0b0();
int __cdecl FUN_0049ed00();
int __cdecl FUN_004a9900();
int __cdecl FUN_004ab670();
int __cdecl FUN_004abb50();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00567160();
int __cdecl FUN_005a2f10();
extern int DAT_006fb988;
extern int DAT_0073578c;
extern int DAT_00735790;
extern int DAT_007361f0;
extern int DAT_00746104;
extern int DAT_00748f70;
extern unsigned char *DAT_007677a8;
extern int DAT_00777b4c;
extern unsigned char *PTR_FUN_006c7584;
extern unsigned char *PTR_s_PostRaceMenu_fng_006fb998;
extern unsigned char *PTR_s_PostRaceResults_fng_006fb98c;
extern unsigned char *PTR_s_RewardPopup_fng_006fb990;
extern unsigned char *PTR_s_StyleAnimator_fng_006fb994;
extern void LAB_0049e1ce(void);
extern void LAB_0049e1f0(void);
extern void LAB_00686cd6(void);
void *ExceptionList;

undefined4 * FUN_0049e100(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00686cd6;
  local_c = ExceptionList;
  piVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c7584;
  *piVar1 = (int)piVar1;
  param_1[2] = piVar1;
  local_4 = 0;
  FUN_0049ed00(param_1 + 4);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  if ((DAT_00777b4c != 1) || (*(int *)(DAT_007677a8 + 0x58a0) != 0)) {
    FUN_004a9900(PTR_s_PostRaceResults_fng_006fb98c);
  }
  iVar5 = DAT_007677a8;
  cVar3 = FUN_0049e0b0(param_1);
  if (cVar3 != '\0') {
    FUN_004a9900(PTR_s_StyleAnimator_fng_006fb994);
    iVar5 = DAT_007677a8;
  }
  if (((DAT_00777b4c == 1) && (*(int *)(iVar5 + 0x58a0) == 0)) &&
     (cVar3 = FUN_005a2f10(iVar5,0), cVar3 != '\0')) {
LAB_0049e1ce:
    cVar3 = FUN_005a2f10(iVar5,0);
    if ((cVar3 != '\0') && (*(int *)(iVar5 + 0x58a0) == 0)) goto LAB_0049e1f0;
  }
  else {
    if ((undefined4 *)param_1[5] != param_1 + 5) {
      FUN_004a9900(PTR_s_RewardPopup_fng_006fb990);
      iVar5 = DAT_007677a8;
    }
    if (DAT_00777b4c == 1) goto LAB_0049e1ce;
  }
  FUN_004a9900(PTR_s_PostRaceMenu_fng_006fb998);
LAB_0049e1f0:
  if ((int *)*piVar1 == piVar1) {
    DAT_006fb988 = 0;
    DAT_00735790 = FUN_004ab670(&DAT_00748f70);
    FUN_004abb50(1);
    iVar5 = DAT_007361f0;
    piVar4 = (int *)FUN_00567160();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 10;
      piVar4[3] = 0;
    }
    puVar2 = *(undefined4 **)(iVar5 + 0xc);
    *puVar2 = piVar4;
    *(int **)(iVar5 + 0xc) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar5 + 8;
  }
  piVar4 = (int *)*piVar1;
  param_1[3] = piVar4;
  for (; piVar4 != piVar1; piVar4 = (int *)*piVar4) {
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0)) &&
       (*(int *)(iVar5 + 0x18) != 0)) {
      *(undefined1 *)(*(int *)(iVar5 + 0x18) + 0x15) = 1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}
