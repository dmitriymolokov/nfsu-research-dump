/* spd-match: far pct=8.60 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0042ad10();
int __cdecl FUN_00439010();
int __cdecl FUN_00439da0();
int __cdecl FUN_00469f30();
int __cdecl FUN_004740d0();
int __cdecl FUN_00567160();
int __cdecl FUN_00674898();
extern int DAT_006f227c;
extern int DAT_006f3d84;
extern int DAT_00734588;
extern int DAT_007346c4;
extern int DAT_00736188;
extern int DAT_0073ad34;
extern int _DAT_006ccd3c;
extern unsigned char *PTR_FUN_006b9694;
extern unsigned char *PTR_FUN_006ca494;
extern unsigned char *PTR_LAB_006ca4a4;
extern void LAB_0068690e(void);
void *ExceptionList;

undefined4 * FUN_00436ff0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0068690e;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  *param_1 = &PTR_LAB_006ca4a4;
  *param_1 = &PTR_FUN_006ca494;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  local_14 = 0;
  FUN_0042ad10(0x3f800000,0x3f800000);
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7d] = 0x3f800000;
  param_1[0x7e] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x7f) = 0;
  *(undefined2 *)((int)param_1 + 0x1fe) = 1;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x97) = 4;
  *(undefined1 *)((int)param_1 + 0x25d) = 10;
  *(undefined1 *)((int)param_1 + 0x25e) = 0;
  *(undefined1 *)((int)param_1 + 0x25f) = 0;
  param_1[0x96] = &PTR_FUN_006b9694;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = param_1 + 0x9b;
  puVar2 = _malloc(0x28);
  param_1[0x9a] = puVar2;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00736188 = (uint)DAT_006f3d84;
  param_1[1] = param_2;
  puVar2 = param_1 + 4;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  (*(unsigned char *)&(local_14)) = 1;
  if (DAT_007346c4 != 0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2c] = DAT_0073ad34;
  }
  param_1[0x24] = 0;
  iVar6 = param_1[1];
  if (*(char *)(*(int *)(iVar6 + 0x14) + 0x734) != '\0') {
    if (*(int *)(iVar6 + 0x28) != 3) {
      if (*(undefined4 **)(iVar6 + 0x34) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar6 + 0x34))(1);
      }
      *(undefined4 *)(iVar6 + 0x34) = 0;
      *(undefined4 *)(iVar6 + 0x28) = 3;
      iVar3 = FUN_00567160();
      (*(unsigned char *)&(local_14)) = 3;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004740d0(iVar3,iVar6,*(undefined4 *)(iVar6 + 0x20));
      }
      *(undefined4 *)(iVar6 + 0x34) = uVar4;
      *(undefined4 *)(*(int *)(iVar6 + 0x3c) + 0x60) = 1;
      (*(unsigned char *)&(local_14)) = 1;
      FUN_00469f30();
      *(undefined4 *)(*(int *)(iVar6 + 0x34) + 4) = *(undefined4 *)(iVar6 + 0x30);
    }
    *(undefined4 *)(*(int *)(param_1[1] + 0x30) + 0x1e4) = 0x3f800000;
  }
  FUN_00439da0();
  iVar6 = param_1[1];
  uVar4 = *(undefined4 *)(iVar6 + 100);
  uVar1 = *(undefined4 *)(iVar6 + 0x68);
  param_1[0x84] = *(undefined4 *)(iVar6 + 0x60);
  param_1[0x85] = uVar4;
  param_1[0x86] = uVar1;
  iVar6 = param_1[1];
  uVar4 = *(undefined4 *)(iVar6 + 0x74);
  uVar1 = *(undefined4 *)(iVar6 + 0x78);
  param_1[0x88] = *(undefined4 *)(iVar6 + 0x70);
  param_1[0x89] = uVar4;
  param_1[0x8a] = uVar1;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x94] = 0x3f800000;
  iVar6 = FUN_00439010();
  uVar7 = DAT_006f227c % 0x2ac;
  uVar8 = DAT_006f227c ^ 0x1d872b41;
  uVar5 = uVar8 >> 5 ^ uVar8;
  DAT_006f227c = uVar5 << 0x1b ^ uVar5 ^ uVar8;
  param_1[0xa6] = *(int *)(iVar6 + 0x10) * 0xc90 + uVar7 + DAT_00734588;
  iVar6 = FUN_00674898();
  iVar3 = FUN_00674898();
  param_1[0xa7] = iVar3 - iVar6;
  param_1[0xa0] =
       *(uint *)param_1[0xa6] ^ (uint)((float)(int)param_1[0xa7] + *(float *)(param_1[1] + 0x60));
  param_1[0xa1] =
       *(uint *)param_1[0xa6] ^ (uint)((float)(int)param_1[0xa7] + *(float *)(param_1[1] + 100));
  param_1[0xa2] =
       *(uint *)param_1[0xa6] ^ (uint)((float)(int)param_1[0xa7] + *(float *)(param_1[1] + 0x68));
  param_1[0x95] = *(uint *)param_1[0xa6] ^ (uint)((float)(int)param_1[0xa7] + _DAT_006ccd3c);
  param_1[0xa5] = *(uint *)param_1[0xa6] ^ (uint)(float)(int)param_1[0xa7];
  ExceptionList = pvStack_1c;
  return param_1;
}
