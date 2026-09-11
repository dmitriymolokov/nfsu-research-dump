/* spd-match: far pct=6.77 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00455270();
int __cdecl FUN_00455390();
int __cdecl FUN_00567160();
int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_005a50c0();
extern void LAB_005a5069(void);
extern void LAB_005a507a(void);
extern void LAB_006866b0(void);
int unaff_EBX;
void *ExceptionList;

void FUN_005a4f90(void)

{
  int iVar1;
  char cVar2;
  int *unaff_EBX;
  int unaff_ESI;
  int *piVar3;
  char local_15;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006866b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00571ea0(0,"FuturePointsPtr");
  piVar3 = (int *)*unaff_EBX;
  if (*(char *)(unaff_ESI + 0x3d) != '\0') {
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
    }
    piVar3 = (int *)0x0;
  }
  local_15 = piVar3 != (int *)0x0;
  FUN_00571c20(unaff_ESI,&local_15,1,1,1);
  if (local_15 == '\0') goto LAB_005a507a;
  if (piVar3 != (int *)0x0) {
    iStack_14 = (**(code **)(*piVar3 + 4))();
  }
  FUN_00571c20(unaff_ESI,&iStack_14,1,4,1);
  if (*(char *)(unaff_ESI + 0x3d) != '\0') {
    if (iStack_14 == 0) {
      iStack_10 = FUN_00567160();
      uStack_4 = 0;
      if (iStack_10 == 0) {
LAB_005a5069:
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00455270();
      }
    }
    else if (iStack_14 == 1) {
      iStack_10 = FUN_00567160();
      uStack_4 = 1;
      if (iStack_10 == 0) goto LAB_005a5069;
      piVar3 = (int *)FUN_00455390();
    }
    *unaff_EBX = (int)piVar3;
  }
  if (piVar3 != (int *)0x0) {
    FUN_005a50c0();
  }
LAB_005a507a:
  iVar1 = *(char *)(unaff_ESI + 0x40) * 0x10 + 0x4c + unaff_ESI;
  *(int *)(iVar1 + 0xc) = *(int *)(unaff_ESI + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  ExceptionList = pvStack_c;
  return;
}
