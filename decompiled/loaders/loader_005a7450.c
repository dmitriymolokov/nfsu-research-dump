/* spd-match: far pct=3.96 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142458Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern int _DAT_006cc83c;
int unaff_ESI;

float10 __fastcall FUN_005a7450(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float unaff_ESI;
  float10 fVar4;
  
  cVar1 = (char)param_1[0x17];
  fVar4 = (float10)((int)DAT_006cc7a4);
  if ((cVar1 != -1) && (*(short *)((int)param_1 + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[cVar1];
    }
    iVar2 = *(short *)((int)param_1 + 0x5e) * 0x88 + 0x27c + iVar2;
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*param_1 + 0x10))();
      fVar4 = -((float10)((int)*(short *)(iVar2 + 0x3c + iVar3 * 2) << 8) * (float10)((int)_DAT_006cc83c) +
               (float10)unaff_ESI);
    }
  }
  return fVar4;
}
