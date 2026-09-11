/* spd-match: far pct=7.72 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045D970 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00456e90();
int __cdecl FUN_005a6700();
int __cdecl FUN_005a7700();
bool __fastcall FUN_0045d970(int obj, int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;

  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_c;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  bVar7 = false;
  if ((*(int *)param_1[0xf6] != 0) && (*(int *)(param_1[0xf9] + 4) != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x40))(0xff,0xff);
    iVar5 = FUN_00456e90(param_1[1],uVar4);
    iVar6 = iVar5;
    if (iVar5 < 0xc) {
      iVar6 = 0xb;
    }
    *(int *)(param_1[0xf6] + 8) = iVar6;
    iStack_8 = iVar5;
    iVar6 = FUN_005a6700(auStack_4,&uStack_c,*(undefined4 *)(param_1[0xf6] + 8));
    uStack_c = *(undefined4 *)(param_1[0xf9] + 8 + iVar6 * 4);
    iVar2 = iVar5;
    iVar6 = iStack_8;
    if (obj < 1) {
      for (; iStack_8 = iVar2, obj < 0; obj = obj + 1) {
        iStack_8 = iVar6;
        cVar3 = FUN_005a7700(iVar5,param_1[1]);
        if (cVar3 == '\0') break;
        iVar5 = iVar5 + -1;
        iVar2 = iStack_8;
        iVar6 = iStack_8;
      }
    }
    else {
      do {
        iVar6 = iVar5 + 1;
        cVar3 = FUN_005a7700(iVar5,param_1[1]);
        if (cVar3 == '\0') break;
        obj = obj + -1;
        iVar5 = iVar6;
      } while (0 < obj);
    }
    bVar7 = iVar5 != iStack_8;
    *(int *)(param_1[0xf6] + 8) = iVar5;
    puVar1 = (undefined4 *)param_1[0xf7];
    *puVar1 = 1;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
  }
  return bVar7;
}
