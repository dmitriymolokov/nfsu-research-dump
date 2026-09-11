/* spd-match: far pct=15.50 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_006f1dd8;
extern int DAT_00744220;
extern unsigned char *PTR_s_ENV_STATIC_006f81c0;
extern void LAB_00684d8b(void);
void *ExceptionList;

void FUN_00533f70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    ExceptionList = &local_c;
    FUN_0064b510(&param_1);
    FUN_0064b580();
    iVar3 = (**(code **)*param_1)(0x18,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      puVar1 = (undefined4 *)(iVar3 + 4);
      *puVar1 = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0xfff;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 1;
      iVar4 = FUN_0064c1a0(&DAT_00744220,puVar1,iVar3);
      if (iVar4 < 0) {
        FUN_0064c000(&PTR_s_ENV_STATIC_006f81c0);
        FUN_0064c1a0(&DAT_00744220,puVar1,iVar3);
      }
    }
    puVar2[0xa1] = iVar3;
    FUN_00532640();
    FUN_00532670(0x3f800000,0x3f800000,1,0);
    puVar2[0xbf] = 0x3f800000;
  }
  ExceptionList = local_c;
  return;
}
