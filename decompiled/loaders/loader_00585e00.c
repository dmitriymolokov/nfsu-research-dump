/* spd-match: far pct=12.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006f089c;
extern unsigned char *DAT_006f08a0;
extern unsigned char *DAT_006f08a4;
extern int DAT_0073457c;
extern unsigned char *DAT_0073ad34;
extern int _DAT_006cc7b0;
extern int _DAT_006cca38;
extern int _DAT_006f0898;
extern int _DAT_006f08a8;
extern int _DAT_00734578;
extern int _DAT_00734580;

void __fastcall FUN_00585e00(undefined4 param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  _DAT_006f08a8 = 1;
  if (DAT_0073457c != DAT_006cc7a4) {
    _DAT_00734578 = FUN_00674898(param_1);
    DAT_006f089c = DAT_006f08a0 + _DAT_00734578;
    _DAT_00734580 = (float)(extraout_ST0 - (float10)(unsigned int)(_DAT_00734578) * (float10)(unsigned int)(_DAT_006cc7b0));
    DAT_006f08a0 = (unsigned int)(DAT_006f089c);
    iVar1 = FUN_00674898();
    DAT_0073ad34 = DAT_0073ad34 + iVar1;
    DAT_006f08a4 = DAT_006f08a4 + 1;
    DAT_0073457c = 0.0;
    _DAT_006f0898 = (float)(unsigned int)(DAT_0073ad34) * _DAT_006cca38;
  }
  return;
}
