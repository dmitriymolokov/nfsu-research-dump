/* spd-match: far pct=4.39 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00628c90();
extern unsigned char *PTR_FUN_006dfa9c;
extern unsigned char *PTR_FUN_006dfaa0;
int unaff_EDI;

undefined4 FUN_0047b600(undefined4 param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = 0;
  if ((void *)unaff_ESI[2] != (void *)0x0) {
    _free((void *)unaff_ESI[2]);
    unaff_ESI[2] = 0;
  }
  unaff_ESI[3] = 0;
  if (unaff_ESI[4] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(unaff_ESI[4],0x40);
    unaff_ESI[4] = 0;
  }
  unaff_ESI[8] = param_2;
  unaff_ESI[5] = 0;
  *unaff_ESI = unaff_EDI;
  iVar2 = *(int *)(*(int *)(unaff_EDI + 0x20) + 8);
  unaff_ESI[3] = iVar2 * 0xc;
  pvVar1 = _malloc(iVar2 * 0x30);
  unaff_ESI[2] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar2 = *(int *)(*(int *)(unaff_EDI + 0x20) + 8);
    unaff_ESI[5] = iVar2;
    iVar2 = (*(code *)PTR_FUN_006dfa9c)(iVar2 << 6,"EAGL::Transform GlobalPoseBuffer CAnimPart");
    unaff_ESI[4] = iVar2;
    if (iVar2 != 0) {
      FUN_00628c90(unaff_ESI[2],0);
      return 1;
    }
  }
  *unaff_ESI = 0;
  if ((void *)unaff_ESI[2] != (void *)0x0) {
    _free((void *)unaff_ESI[2]);
    unaff_ESI[2] = 0;
  }
  unaff_ESI[3] = 0;
  if (unaff_ESI[4] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(unaff_ESI[4],0x40);
    unaff_ESI[4] = 0;
  }
  unaff_ESI[5] = 0;
  return 0;
}
