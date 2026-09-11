/* spd-match: far pct=8.18 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00674999();
extern int DAT_006eb864;
extern unsigned char *PTR_FUN_006eb45c;

undefined4 FUN_006749ca(DWORD *param_1)

{
  DWORD *pDVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  pDVar1 = TlsGetValue(DAT_006eb864);
  if (pDVar1 == (DWORD *)0x0) {
    BVar2 = TlsSetValue(DAT_006eb864,param_1);
    if (BVar2 == 0) {
      __amsg_exit(0x10);
    }
    DVar3 = GetCurrentThreadId();
    *param_1 = DVar3;
    pDVar1 = param_1;
  }
  else {
    pDVar1[0x13] = param_1[0x13];
    pDVar1[0x14] = param_1[0x14];
    _free(param_1);
  }
  if (PTR_FUN_006eb45c != (undefined *)0x0) {
    (*(code *)PTR_FUN_006eb45c)();
  }
  uVar4 = (*(code *)pDVar1[0x13])(pDVar1[0x14]);
  FUN_00674999(uVar4);
  return 0;
}
