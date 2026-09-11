/* spd-match: far pct=4.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0044cb90();
int __cdecl FUN_0044cca0();
int __cdecl FUN_00466500();
int __cdecl FUN_00468820();
extern int DAT_00700784;
extern int DAT_007361a8;
extern int DAT_0077a049;
extern int DAT_0078a344;

undefined1 FUN_0044cac0(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  cVar2 = '\0';
  if (*(int *)(iVar1 + 0x3cc) == 4) {
    iVar4 = (int)*(char *)(*(int *)(iVar1 + 0x3c) + 0x1c);
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        if (cVar2 != '\0') {
          return 0;
        }
        FUN_00468820(iVar5);
        cVar2 = FUN_00466500();
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if (cVar2 != '\0') {
        return 0;
      }
    }
    cVar2 = FUN_0044cca0();
    if (cVar2 == '\0') {
      iVar1 = *(int *)(iVar1 + 0x3d8);
      if ((DAT_0078a344 != '\0') || (iVar4 = DAT_00700784, DAT_007361a8 != 0)) {
        uVar3 = (**(code **)(*param_1 + 0x58))();
        iVar4 = (byte)(&DAT_0077a049)[(uVar3 & ((int)uVar3 < 1) - 1) * 0x54] + 1;
      }
      if ((iVar4 <= iVar1) && (cVar2 = FUN_0044cb90(), cVar2 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}
