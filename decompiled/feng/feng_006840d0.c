/* spd-match: far pct=3.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00641a10();
extern char stack0xfffffc24;

int FUN_006840d0(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  undefined4 auStack_390 [83];
  undefined4 auStack_244 [7];
  uint uStack_228;
  char acStack_224 [260];
  char acStack_120 [288];
  
  uStack_3b4 = 0x18;
  uStack_3b0 = 0x1c;
  FUN_00641a10(param_2,0,0x21c);
  auStack_244[0] = 0x244;
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,auStack_244);
  if (iVar1 == 0) {
    *param_2 = uStack_228;
    _strncpy((char *)(param_2 + 5),acStack_224,0x103);
    _strncpy((char *)(param_2 + 0x46),acStack_120,0x103);
    uStack_3b4 = 0x2c;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&uStack_3b4);
    if (iVar1 == 0) {
      uVar5 = 0;
      auStack_390[0] = 0x13c;
      param_2[1] = param_2[1] & 0xfffffffc;
      if (uStack_3ac != 0) {
        uVar6 = 0;
        do {
          if (0x1f < uVar6) break;
          if ((*param_2 & 0xff) == 2) {
            iVar2 = (**(code **)(*param_1 + 0x38))(param_1,auStack_390,uVar6 + 0xc,1);
            if (iVar2 == 0) {
              uVar3 = param_2[3] | 1 << ((byte)uVar6 & 0x1f);
              goto code_r0x0068423e;
            }
          }
          else if (((*param_2 & 0xff) == 4) &&
                  (iVar2 = (**(code **)(*param_1 + 0x38))(param_1,auStack_390,uVar6 + 0x30,1),
                  iVar2 == 0)) {
            uVar3 = param_2[3] | 1 << ((byte)uVar6 & 0x1f);
code_r0x0068423e:
            param_2[3] = uVar3;
            uVar5 = uVar5 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 < uStack_3ac);
      }
      uVar5 = 0;
      uVar6 = 0;
      if (uStack_3b0 != 0) {
        do {
          if (7 < uVar6) break;
          iVar2 = (**(code **)(*param_1 + 0x38))
                            (param_1,auStack_390,*(undefined4 *)(&stack0xfffffc24 + uVar6 * 4),1);
          if (iVar2 == 0) {
            param_2[2] = param_2[2] | 1 << ((byte)uVar6 & 0x1f);
            uVar5 = uVar5 + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar5 < uStack_3b0);
      }
      bVar4 = 0;
      uVar5 = 0;
      if (uStack_3a8 != 0) {
        uVar6 = 0x20;
        do {
          if (0x2f < uVar6) {
            return 0;
          }
          iVar2 = (**(code **)(*param_1 + 0x38))(param_1,auStack_390,uVar6,1);
          if (iVar2 == 0) {
            uVar5 = uVar5 + 1;
            param_2[4] = param_2[4] | 1 << (bVar4 & 0x1f);
          }
          bVar4 = bVar4 + 1;
          uVar6 = uVar6 + 4;
        } while (uVar5 < uStack_3a8);
      }
    }
  }
  return iVar1;
}
