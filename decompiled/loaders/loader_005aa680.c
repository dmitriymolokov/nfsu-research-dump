/* spd-match: far pct=4.44 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_03/attempt2_targeted */
#include "ghidra_compat.h"

int __cdecl FUN_005a8570();
int __cdecl FUN_005a8640();
extern int _DAT_006cc7bc;
extern int _DAT_006cc970;
int unaff_EBP;
int unaff_EDI;
int unaff_ESI;

undefined4 FUN_005aa680(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *unaff_EBP;
  uint *puVar6;
  int *unaff_ESI;
  int unaff_EDI;
  int iVar7;
  uint *puVar8;
  float fStack_64;
  undefined1 *puStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  uint *puStack_50;
  undefined1 *puStack_4c;
  uint *puStack_48;
  undefined4 uStack_44;
  int *piStack_30;
  undefined1 *puStack_2c;
  undefined1 auStack_24 [8];
  int *piStack_1c;
  undefined1 local_18 [12];
  int *piStack_c;
  
  piStack_54 = *(int **)(*param_1 + 0x18);
  uStack_44 = 0;
  puStack_48 = (uint *)0x0;
  puStack_4c = local_18;
  puStack_50 = (uint *)0x0;
  uStack_58 = 0x5aa6c5;
  (**(code **)(*piStack_54 + 0x4c))();
  uStack_58 = 0;
  uStack_5c = 0;
  puStack_60 = auStack_24;
  fStack_64 = 0.0;
  (**(code **)(**(int **)(*piStack_c + 0x18) + 0x4c))(*(int **)(*piStack_c + 0x18));
  (**(code **)(**(int **)(*piStack_1c + 0x18) + 0x4c))
            (*(int **)(*piStack_1c + 0x18),0,&piStack_30,0,0);
  puVar3 = puStack_50 + (int)*(short *)((int)param_1 + 0x46) * (int)(short)param_1[0x11];
  if (puStack_50 < puVar3) {
    iVar4 = unaff_EDI - (int)puStack_48;
    puVar5 = puStack_48;
    puVar6 = puStack_50;
    iVar7 = iVar4;
    puVar8 = puVar3;
    do {
      uVar1 = *(uint *)(iVar4 + (int)puVar5) & 0xff;
      if (uVar1 == 0) {
        uVar2 = *puVar5;
      }
      else {
        uVar2 = *puVar5;
        puStack_2c = (undefined1 *)(unsigned int)((float)uVar1 * _DAT_006cc970);
        uStack_5c = uVar2;
        uStack_58 = FUN_005a8570(uVar2,(((param_4 >> 0x18) << 8 | param_4 & 0xff) << 8 |
                                       param_4 >> 8 & 0xff) << 8 | param_4 >> 0x10 & 0xff);
        fStack_64 = _DAT_006cc7bc - (float)(unsigned int)puStack_2c;
        puStack_60 = puStack_2c;
        iVar4 = iVar7;
        puVar3 = puVar8;
        uVar1 = FUN_005a8640(&uStack_5c,&fStack_64,2,0);
        uVar2 = (uVar1 ^ uVar2) & 0xffffff ^ uVar2;
        param_1 = unaff_EBP;
        iVar7 = iVar4;
        puVar8 = puVar3;
      }
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar6 < puVar3);
  }
  (**(code **)(**(int **)(*piStack_30 + 0x18) + 0x50))(*(int **)(*piStack_30 + 0x18),0);
  (**(code **)(**(int **)(*unaff_ESI + 0x18) + 0x50))(*(int **)(*unaff_ESI + 0x18),0);
  (**(code **)(**(int **)(*param_1 + 0x18) + 0x50))(*(int **)(*param_1 + 0x18),0);
  return 1;
}
