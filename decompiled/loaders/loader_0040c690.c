/* spd-match: far pct=7.66 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040C690 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040c890();
extern unsigned char *DAT_0073636c;
extern int DAT_0078bc40;
extern unsigned char *DAT_0078bc44;
extern void LAB_0040c80a(void);
undefined4 __fastcall FUN_0040c690(int obj, undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  
  iVar2 = *(int *)(obj + 4);
  piVar1 = (int *)(obj + 8);
  puVar7 = (undefined4 *)0x0;
  do {
    if ((int *)(iVar2 + 8 + obj) <= piVar1) {
      return 1;
    }
    iVar3 = *piVar1;
    if (iVar3 == 0x134900) {
      puVar7 = (undefined4 *)((int)piVar1 + 0x17U & 0xfffffff0);
      *param_1 = puVar7;
      *DAT_0078bc44 = puVar7;
      puVar8 = puVar7;
      puVar7[1] = DAT_0078bc44;
      DAT_0078bc44 = puVar8;
      *puVar7 = &DAT_0078bc40;
    }
    else if (iVar3 == 0x134b02) {
      puVar7 = (undefined4 *)*param_1;
      puVar7[5] = (int)piVar1 + 0x17U & 0xfffffff0;
    }
    else if (iVar3 == 0x134b03) {
      puVar7 = (undefined4 *)*param_1;
      puVar7[6] = (int)piVar1 + 0x17U & 0xfffffff0;
      puVar7[7] = (piVar1[1] - ((int)piVar1 + 0x17U & 0xfffffff0)) + 8 + (int)piVar1;
      uStack_20 = 0x40c730;
      FUN_0040c890();
      if (puVar7[7] != 0) {
        uStack_20 = 0;
        uStack_28 = 1;
        puStack_24 = puVar7 + 8;
        (**(code **)(*DAT_0073636c + 0x6c))(DAT_0073636c,puVar7[7],0,0x65);
        piVar4 = (int *)puVar7[8];
        puVar10 = (undefined4 *)0x0;
        (**(code **)(*piVar4 + 0x2c))(piVar4,0,0,&uStack_28);
        uVar6 = puVar7[7];
        puVar8 = (undefined4 *)puVar7[6];
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        piVar4 = (int *)puVar7[8];
LAB_0040c80a:
        (**(code **)(*piVar4 + 0x30))(piVar4);
      }
    }
    else if (iVar3 == 0x134b01) {
      puVar7[0xb] = 0;
      puVar7 = (undefined4 *)*param_1;
      puVar7[10] = (int)piVar1 + 0x87U & 0xffffff80;
      iVar3 = (piVar1[1] - ((int)piVar1 + 0x87U & 0xffffff80)) + 8 + (int)piVar1;
      puVar7[0xc] = iVar3;
      if (puVar7[0xd] != 0) {
        uStack_20 = 0;
        uStack_28 = 1;
        piVar9 = DAT_0073636c;
        puStack_24 = puVar7 + 0xb;
        (**(code **)(*DAT_0073636c + 0x68))(DAT_0073636c,iVar3,0,0);
        piVar4 = (int *)puVar7[0xb];
        (**(code **)(*piVar4 + 0x2c))(piVar4,0,0,&puStack_24,0);
        uVar6 = puVar7[0xc];
        piVar4 = (int *)puVar7[10];
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *piVar9 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar9 = piVar9 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)piVar9 = (char)*piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar9 = (int *)((int)piVar9 + 1);
        }
        piVar4 = (int *)puVar7[0xb];
        goto LAB_0040c80a;
      }
    }
    piVar1 = (int *)(piVar1[1] + 8 + (int)piVar1);
  } while( true );
}
