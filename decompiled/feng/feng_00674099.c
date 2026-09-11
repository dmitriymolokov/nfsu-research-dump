/* spd-match: far pct=4.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00673e7f();
int __cdecl FUN_0067e1d0();
extern int DAT_006eb580;
extern int DAT_006eb608;
extern int DAT_006eb720;
extern int DAT_00717ad8;
extern int DAT_00717adc;
extern int DAT_00717ae0;
extern int _DAT_00717ae0;
int unaff_retaddr;

undefined * FUN_00674099(char *param_1,undefined *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  BOOL BVar2;
  uint unaff_retaddr;
  undefined1 local_98 [144];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  if (param_1 == (char *)0x0) {
    param_2 = (undefined *)0x0;
  }
  else if ((*param_1 == 'C') && (param_1[1] == '\0')) {
    param_2[1] = 0;
    *param_2 = 0x43;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_006eb608,param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_006eb580,param_1), iVar1 != 0)) {
      iVar1 = FUN_00673e7f(local_98,param_1);
      if ((iVar1 != 0) ||
         (BVar2 = ___get_qualified_locale
                            ((LPLC_STRINGS)local_98,(UINT *)&DAT_00717ad8,(LPLC_STRINGS)local_98),
         BVar2 == 0)) {
        return (undefined *)0x0;
      }
      _DAT_00717ae0 = (uint)DAT_00717adc;
      ___lc_lctostr(&DAT_006eb608,local_98);
      if (*param_1 == '\0') {
        param_1 = &DAT_006eb608;
      }
      FUN_0067e1d0(&DAT_006eb580,param_1);
    }
    if (param_3 != (undefined2 *)0x0) {
      _memcpy(param_3,&DAT_00717ad8,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      _memcpy(param_4,&DAT_00717ae0,4);
    }
    FUN_0067e1d0(param_2,&DAT_006eb608);
    param_2 = &DAT_006eb608;
  }
  return param_2;
}
