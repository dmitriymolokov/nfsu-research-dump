/* spd-match: far pct=43.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_00793240;
extern void LAB_006793e9(void);
extern void LAB_006793eb(void);

undefined4 FUN_0067939b(uint param_1)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = __get_osfhandle(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_006793e9;
    }
    hObject = (HANDLE)__get_osfhandle(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_006793eb;
    }
  }
LAB_006793e9:
  DVar4 = 0;
LAB_006793eb:
  __free_osfhnd(param_1);
  *(undefined1 *)((&DAT_00793240)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}
