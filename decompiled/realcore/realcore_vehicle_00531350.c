/* spd-match: far pct=9.33 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142441Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_00530740();
int __cdecl FUN_00530f20();
extern int DAT_007356ac;
extern int _DAT_00736730;
extern int _DAT_00736734;
extern int _DAT_00736738;
extern int _DAT_00736740;
extern int _DAT_00736744;
extern int _DAT_00736748;
extern unsigned char *PTR_s_CSISSOUND_006f8714;

extern char s_SND_WORLDImpact_006be750[];
extern char s_SND_SmokeableImpact_006be760[];








void __fastcall FUN_00531350(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  FUN_00530f20();
  (**(code **)(*param_1 + 0x3c))();
  cVar3 = (**(code **)(*param_1 + 0x54))();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x58))();
  }
  iVar4 = (**(code **)(*param_1 + 0x30))();
  FUN_00530740();
  iVar1 = *(int *)(((int)DAT_007356ac) + 0x3e1c);
  iVar2 = param_1[0xcf];
  if (-1 < iVar2) {
    if (iVar2 < 2) {
      PTR_s_CSISSOUND_006f8714 = s_SND_WORLDImpact_006be750;
    }
    else if (iVar2 == 2) {
      PTR_s_CSISSOUND_006f8714 = s_SND_SmokeableImpact_006be760;
    }
  }
  param_1[0xc3] = param_1[0x13];
  param_1[199] = param_1[0x92];
  param_1[0xc1] = iVar1 * iVar4 >> 0xf;
  param_1[0xc5] = 0x1000;
  (**(code **)(*param_1 + 100))();
  iVar1 = param_1[0x87];
  *(undefined1 *)((int)param_1 + 0x34e) = 1;
  *(undefined1 *)((int)param_1 + 0x351) = 0;
  *(undefined1 *)((int)param_1 + 0x34f) = 1;
  _DAT_00736734 = *(undefined4 *)(iVar1 + 0x74);
  _DAT_00736730 = *(undefined4 *)(iVar1 + 0x70);
  _DAT_00736738 = *(undefined4 *)(iVar1 + 0x78);
  iVar1 = param_1[0x87];
  _DAT_00736740 = *(undefined4 *)(iVar1 + 0x30);
  _DAT_00736744 = *(undefined4 *)(iVar1 + 0x34);
  _DAT_00736748 = *(undefined4 *)(iVar1 + 0x38);
  return;
}
