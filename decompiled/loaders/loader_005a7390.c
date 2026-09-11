/* spd-match: far pct=5.19 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_02/attempt02_thiscall_repaired */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern unsigned char *_DAT_006cc83c;
int unaff_ESI;

struct ThisCallBox {
  float10 FUN_005a7390(float param_2, undefined4 param_3);
};
float10 ThisCallBox::FUN_005a7390(float param_2, undefined4 param_3) {
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  float10 fVar4;
  
  cVar1 = (char)unaff_ESI[0x17];
  fVar4 = (float10)DAT_006cc7a4;
  if ((cVar1 != -1) && (*(short *)((int)unaff_ESI + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[cVar1];
    }
    iVar2 = *(short *)((int)unaff_ESI + 0x5e) * 0x88 + 0x27c + iVar2;
    if (iVar2 != 0) {
      iVar3 = iVar2;
      fVar4 = (float10)(**(code **)(*unaff_ESI + 0x28))(iVar2);
      iVar3 = (**(code **)(*unaff_ESI + 0x10))(param_3,iVar3,param_2,(float)fVar4);
      fVar4 = (float10)param_2 -
              ((float10)((int)*(short *)(iVar2 + 0x3c + iVar3 * 2) << 8) * (float10)*(float *)_DAT_006cc83c +
              (float10)((float)(uintptr_t)this));
    }
  }
  return fVar4;
}
