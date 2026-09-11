/* spd-match: far pct=18.88 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0044f750();
int __cdecl FUN_00450170();
int __cdecl FUN_00450400();
int __cdecl FUN_00450660();
int __cdecl FUN_00450d20();
int __cdecl FUN_00450e20();
int __cdecl FUN_00451400();
int __cdecl FUN_004519f0();
int __cdecl FUN_004521c0();
int __cdecl FUN_00452570();
int __cdecl FUN_004527d0();
int __cdecl FUN_00452990();
int __cdecl FUN_00453090();
int __cdecl FUN_00453470();
int __cdecl FUN_00453730();
int __cdecl FUN_00453860();
int __cdecl FUN_00454170();
int __cdecl FUN_00454930();
int __cdecl FUN_00567160();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
extern void LAB_0044e7a6(void);
extern void LAB_0044e7ba(void);
extern void LAB_006865b8(void);
void *ExceptionList;

void FUN_0044e480(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int unaff_EBX;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006865b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00571ea0(0,"AIActionPtr");
  piVar2 = (int *)*piVar1;
  param_1 = (int *)CONCAT31(((unsigned int)(param_1) >> 8),piVar2 != (int *)0x0);
  FUN_00571c20(unaff_EBX,&param_1,1,1,1);
  if ((char)param_1 == '\0') goto LAB_0044e7ba;
  if (piVar2 != (int *)0x0) {
    local_14 = piVar2[0x7e];
  }
  FUN_00571c20(unaff_EBX,&local_14,1,4,1);
  if (*(char *)(unaff_EBX + 0x3d) != '\0') {
    switch(local_14) {
    case 0:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) {
LAB_0044e7a6:
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_00450660(0,0,0);
      }
      break;
    case 1:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_0044f750(0,0,0,0,0);
      break;
    case 2:
      local_10 = FUN_00567160();
      local_4 = 0;
      if (local_10 == 0) {
        piVar2 = (int *)0x0;
        local_4 = 0xffffffff;
      }
      else {
        piVar2 = (int *)FUN_00452990(local_10,0,0,0);
        local_4 = 0xffffffff;
      }
      break;
    case 3:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00453860(0,0,0,0);
      break;
    case 4:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00450400(0);
      break;
    case 5:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00450e20(0,0);
      break;
    case 6:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00450d20(0,0);
      break;
    case 7:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00450170(0);
      break;
    case 8:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_004527d0(0);
      break;
    case 9:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00451400(0,0);
      break;
    case 10:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_004519f0(0,0xbf800000);
      break;
    case 0xb:
    case 0xf:
      break;
    case 0xc:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_004521c0(0,0);
      break;
    case 0xd:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00453090(0,0);
      break;
    case 0xe:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00452570(0);
      break;
    case 0x10:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00453470(0);
      break;
    case 0x11:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00453730(0,0);
      break;
    case 0x12:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00454170(0,0,0);
      break;
    case 0x13:
      iVar3 = FUN_00567160();
      if (iVar3 == 0) goto LAB_0044e7a6;
      piVar2 = (int *)FUN_00454930(0);
      break;
    default:
      goto switchD_0044e50d_default;
    }
switchD_0044e50d_default:
    *piVar1 = (int)piVar2;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
LAB_0044e7ba:
  iVar3 = *(char *)(unaff_EBX + 0x40) * 0x10;
  *(int *)(iVar3 + unaff_EBX + 0x58) =
       *(int *)(unaff_EBX + 0x150) - *(int *)(iVar3 + 0x58 + unaff_EBX);
  cVar4 = *(char *)(unaff_EBX + 0x40) + -1;
  *(char *)(unaff_EBX + 0x40) = cVar4;
  if ((int)cVar4 < *(int *)(unaff_EBX + 0x44)) {
    *(undefined4 *)(unaff_EBX + 0x44) = 0xffffffff;
  }
  ExceptionList = pvStack_c;
  return;
}
