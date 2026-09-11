/* spd-match: far pct=4.49 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_05/attempt3_unk_define */
#include "ghidra_compat.h"

#define UNK_006a08f8 (*(undefined4 *)0x006a08f8)
#define UNK_006a08fc (*(undefined4 *)0x006a08fc)

extern unsigned char *DAT_006a0900;
extern void LAB_005d774e(void);
extern void LAB_005d7753(void);

undefined4 FUN_005d7700(byte *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  uint local_8;
  
  uVar5 = 0;
  if (param_1 == (byte *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    local_8 = 0x26;
    do {
      uVar3 = local_8 + uVar5 >> 1;
      pbVar6 = *(byte **)(&UNK_006a08f8 + uVar3 * 0xc);
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005d774e:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_005d7753;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005d774e;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005d7753:
      if (iVar4 == 0) {
        iVar4 = uVar3 * 0xc;
        if ((*(uint *)(&DAT_006a0900 + iVar4) & param_2) == param_2) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(&UNK_006a08f8 + iVar4);
            param_3[1] = *(undefined4 *)(&UNK_006a08fc + iVar4);
            param_3[2] = *(undefined4 *)(&DAT_006a0900 + iVar4);
          }
          return 0;
        }
        break;
      }
      if (iVar4 < 0) {
        uVar5 = uVar3 + 1;
        uVar3 = local_8;
      }
      local_8 = uVar3;
    } while (uVar5 < local_8);
    uVar2 = 0x80004005;
  }
  return uVar2;
}
