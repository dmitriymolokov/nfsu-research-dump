/* spd-match: far pct=5.26 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p2/batches/20260724T153947Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned char MSG;
typedef MSG *LPMSG;
typedef unsigned char *LPBYTE;
typedef unsigned int MMRESULT;
void *DefWindowProcA_exref;
void *DestroyWindow;
void *_StartAddress;

int __cdecl FUN_00620230();
int __cdecl FUN_00620240();
int __cdecl FUN_00621020();
int __cdecl FUN_00622910();
int __cdecl FUN_0063f1b0();
extern unsigned char *DAT_00709d80;

extern int iRam00000000;






undefined4 __fastcall FUN_00622a10(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 **ppuVar8;
  int iStack_50;
  undefined4 **ppuStack_4c;
  int *piStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 **ppuStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c [3];
  
  iVar4 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x30);
  local_c[0] = 0;
  puStack_1c = (undefined4 *)0x622a2d;
  FUN_00621020();
  puStack_1c = (undefined4 *)0x622a32;
  cVar2 = FUN_00620230();
  if (cVar2 == '\0') {
    puStack_1c = (undefined4 *)0x622a3b;
    FUN_00620240();
  }
  puStack_1c = local_c;
  uStack_24 = *(undefined4 *)(param_1 + 0x20);
  uStack_20 = 0;
  uStack_28 = *(undefined4 *)(param_1 + 0x1c);
  piStack_30 = DAT_00709d80;
  puStack_34 = (undefined4 *)0x622a56;
  iStack_2c = iVar4;
  iVar3 = (**(code **)(*DAT_00709d80 + 0x5c))();
  if (iVar3 < 0) {
    puStack_34 = &uStack_24;
    uStack_3c = *(undefined4 *)(param_1 + 0x20);
    ppuStack_38 = (undefined4 **)0x2;
    uStack_40 = *(undefined4 *)(param_1 + 0x1c);
    piStack_48 = DAT_00709d80;
    ppuStack_4c = (undefined4 **)0x622a75;
    piStack_44 = (int *)iVar4;
    (**(code **)(*DAT_00709d80 + 0x5c))();
  }
  piStack_44 = *(int **)(param_1 + 4);
  puStack_34 = (undefined4 *)0x1000;
  ppuStack_38 = &puStack_1c;
  uStack_3c = *(undefined4 *)(param_1 + 0xc);
  uStack_40 = 0;
  piStack_48 = (int *)0x622a8e;
  (**(code **)(*piStack_44 + 0x2c))();
  piStack_48 = (int *)0x2000;
  ppuStack_4c = &puStack_34;
  iStack_50 = *(int *)(param_1 + 0xc);
  ppuVar8 = ppuStack_38;
  (*(code *)(*ppuStack_38)[0xb])(ppuStack_38);
  FUN_0063f1b0(piStack_48,piStack_44,*(undefined4 *)(param_1 + 0xc));
  (*(code *)(*ppuStack_4c)[0xc])(ppuStack_4c);
  (**(code **)(**(int **)(param_1 + 4) + 0x30))(*(int **)(param_1 + 4));
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = 0x1000;
  piVar6 = &iStack_50;
  uVar5 = uVar1;
  (**(code **)(iRam00000000 + 0x2c))(0,uVar1,*(undefined4 *)(param_1 + 0x30),piVar6,0x1000);
  FUN_0063f1b0(uVar7,ppuVar8,*(undefined4 *)(param_1 + 0x30));
  (**(code **)(*piVar6 + 0x30))(piVar6);
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(int *)(param_1 + 0xc) = iVar4;
  *(int *)(param_1 + 8) = iVar4;
  FUN_00622910();
  return uVar1;
}
