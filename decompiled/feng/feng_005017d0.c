/* spd-match: far pct=6.18 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004fbd00();
int __cdecl FUN_004fefb0();
int __cdecl FUN_004ffbe0();
int __cdecl FUN_00501610();
int __cdecl FUN_00501ac0();
int __cdecl FUN_00501b80();
int __cdecl FUN_00501da0();
int __cdecl FUN_00502840();
extern void LAB_005019e7(void);
extern void LAB_00685feb(void);
void *ExceptionList;

uint FUN_005017d0(int *param_1,ushort *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  ushort *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685feb;
  ExceptionList = &local_c;
  puVar3 = (ushort *)(param_3 + (int)param_2);
  *(undefined1 *)(param_1 + 6) = 0;
  puVar7 = puVar3;
  do {
    if (puVar3 <= param_2) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)puVar7 >> 8),1);
    }
    uVar2 = *param_2;
    if (uVar2 < 0x5050) {
      if (uVar2 == 0x504f) {
        *(undefined4 *)(param_1[3] + 0xc) = *(undefined4 *)(param_2 + 2);
        *(undefined4 *)(param_1[3] + 0x10) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1[3] + 0x1c) = *(undefined4 *)(param_2 + 6);
        *(short *)(param_1[3] + 0x22) = (short)*(undefined4 *)(param_2 + 8);
        if ((*(uint *)(param_1[3] + 0x1c) & 0x100000) != 0) {
          piVar1 = param_1 + 7;
          uVar4 = FUN_00502840(param_1,piVar1,param_1 + 8);
          if ((char)uVar4 == '\0') {
            if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
              uVar4 = (*(code *)**(undefined4 **)param_1[3])(1);
            }
            param_1[3] = 0;
            ExceptionList = local_c;
            return uVar4 & 0xffffff00;
          }
          *(undefined1 *)(param_1 + 6) = 1;
          *(uint *)(param_1[3] + 0x1c) = *(uint *)(param_1[3] + 0x1c) | *(uint *)(*piVar1 + 0x1c);
          if (*(short *)(param_1[3] + 0x22) == -1) {
            *(undefined4 *)(param_1[3] + 0x24) = *(undefined4 *)(*piVar1 + 0x24);
            *(undefined4 *)(param_1[3] + 0x28) = *(undefined4 *)(*piVar1 + 0x28);
          }
          if (((int *)*piVar1)[6] == 5) {
            pvVar6 = _malloc(0x68);
            local_4 = 0;
            if (pvVar6 == (void *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_004fbd00(pvVar6,0,1);
            }
            local_4 = 0xffffffff;
          }
          else {
            iVar5 = (**(code **)(*(int *)*piVar1 + 4))(1);
          }
          FUN_004fefb0();
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1[3] + 0xc);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1[3] + 0x10);
          *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1[3] + 0x1c);
          *(undefined2 *)(iVar5 + 0x22) = *(undefined2 *)(param_1[3] + 0x22);
          *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1[3] + 0x24);
          *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(param_1[3] + 0x28);
          if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)param_1[3])(1);
          }
          param_1[3] = iVar5;
          for (iVar5 = *(int *)(iVar5 + 0x4c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
            if (*(int *)(iVar5 + 0x18) != 0) {
              *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(*(int *)(iVar5 + 0x18) + 0x30);
            }
          }
        }
        if ((*(uint *)(param_1[3] + 0x1c) & 0x10000000) != 0) {
          *(int *)(*(int *)(*param_1 + 0x84) + param_1[0x13] * 4) = param_1[3];
          param_1[0x13] = param_1[0x13] + 1;
        }
      }
      else if (uVar2 == 0x4150) {
        if ((param_1[4] == 0) || (*(int *)(param_1[4] + 0xc) != *(int *)(param_2 + 2))) {
          iVar5 = FUN_004ffbe0();
          param_1[4] = iVar5;
        }
        param_1[5] = param_1[4];
      }
      else {
        if (uVar2 != 0x4153) goto LAB_005019e7;
        uVar2 = param_2[1];
        uVar4 = 0;
        puVar7 = param_2;
        if (uVar2 >> 2 != 0) {
          do {
            *(undefined4 *)(*(int *)(param_1[3] + 0x2c) + uVar4 * 4) = *(undefined4 *)(puVar7 + 2);
            uVar4 = uVar4 + 1;
            puVar7 = puVar7 + 2;
          } while (uVar4 < uVar2 >> 2);
        }
      }
    }
    else if (uVar2 == 0x6e4f) {
      if (*(char *)((int)param_1 + 9) != '\0') {
        FUN_004fefb0();
      }
    }
    else if (uVar2 == 0x744f) {
      iVar5 = FUN_00501610(*(undefined4 *)(param_2 + 2));
      param_1[3] = iVar5;
    }
    else {
LAB_005019e7:
      iVar5 = param_1[3];
      if (iVar5 != 0) {
        switch(*(undefined4 *)(iVar5 + 0x18)) {
        case 1:
        case 9:
        case 10:
          if (uVar2 == 0x6649) {
            *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_2 + 2);
          }
          break;
        case 2:
          FUN_00501ac0();
          break;
        case 4:
          FUN_00501b80(param_1);
          break;
        case 6:
          FUN_00501da0();
        }
      }
    }
    puVar7 = (ushort *)(uint)param_2[1];
    param_2 = (ushort *)((int)(param_2 + 2) + (int)puVar7);
  } while( true );
}
