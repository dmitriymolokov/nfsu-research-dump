/* spd-match: far pct=10.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_00650fd0();
int __cdecl FUN_00654cd0();
int __cdecl FUN_00657870();
int __cdecl FUN_00659f30();
int __cdecl FUN_00659f60();
int __cdecl FUN_0065bdb0();
int __cdecl FUN_0065bde0();
int __cdecl FUN_0065fce0();
int __cdecl FUN_0065fdd0();
int __cdecl FUN_0065fed0();
int __cdecl FUN_00660050();
int __cdecl FUN_00660220();
int __cdecl FUN_00660250();
int __cdecl FUN_00660390();
int __cdecl FUN_006603c0();
int __cdecl FUN_00660610();
int __cdecl FUN_00660640();
int __cdecl FUN_00660700();
int __cdecl FUN_006607b0();
int __cdecl FUN_006607e0();
extern int DAT_006ea53d;
extern unsigned char *DAT_006ea640;
extern unsigned char *DAT_006ea668;
extern int DAT_00716465;
extern int DAT_00716688;
extern int DAT_00717288;
extern int DAT_0071728c;
extern unsigned char *DAT_00717290;
extern int DAT_00717294;
extern int DAT_00717298;
extern int DAT_0071729c;
extern int DAT_007172a0;
extern int DAT_007172a4;
extern int DAT_007172a8;
extern int DAT_007172ac;
extern unsigned char *DAT_007172e4;

void FUN_0065a240(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  DAT_00717290 = &DAT_007172ac;
  DAT_00717294 = FUN_00650fd0(0x1c);
  FUN_00654cd0(DAT_00717294,0x1c);
  iVar3 = DAT_0071729c;
  DAT_007172e4 = DAT_007172a4;
  DAT_007172a8 = DAT_007172a0;
  iVar4 = FUN_0065fce0(((int)DAT_00717290) + ((int)DAT_0071729c) + 1,4);
  DAT_0071728c = FUN_00650fd0(iVar4 * 4);
  iVar7 = 0;
  pbVar6 = DAT_007172e4;
  if (0 < iVar4) {
    do {
      uVar5 = FUN_00650fd0(*(undefined4 *)(&DAT_006ea640 + (uint)*pbVar6 * 4));
      *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4) = uVar5;
      FUN_00654cd0(*(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4),
                   *(undefined4 *)(&DAT_006ea640 + (uint)*pbVar6 * 4));
      FUN_00654cd0(&local_10,0x10);
      switch(*pbVar6) {
      case 0:
        FUN_0065fdd0(*(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4));
        break;
      case 1:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 4,2);
        local_10 = local_10 << 8;
        local_c = param_1 << 8;
        local_8 = FUN_0065fce0(pbVar6 + 6,2);
        FUN_00659f30(uVar5);
        FUN_00659f60(uVar5,&local_10);
        break;
      case 2:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 2,2);
        local_10 = local_10 << 8;
        local_c = param_1 << 8;
        FUN_006607b0(uVar5);
        FUN_006607e0(uVar5,&local_10);
        break;
      case 3:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 2,2);
        local_10 = local_10 << 8;
        local_c = param_1 << 8;
        FUN_0065bdb0(uVar5);
        FUN_0065bde0(uVar5,&local_10);
        break;
      case 4:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 4,2);
        local_10 = local_10 << 8;
        local_c = FUN_0065fce0(pbVar6 + 6,2);
        local_c = local_c << 8;
        local_8 = param_1 << 8;
        FUN_0065bdb0(uVar5);
        FUN_00660700(uVar5,&local_10);
        break;
      case 5:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 2,2);
        local_10 = local_10 << 8;
        local_c = param_1 << 8;
        local_8 = FUN_0065fce0(pbVar6 + 4,2);
        local_8 = local_8 << 8;
        local_4 = FUN_0065fce0(pbVar6 + 6,2);
        FUN_00660610(uVar5);
        FUN_00660640(uVar5,&local_10);
        break;
      case 6:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 2,2);
        FUN_00660390(uVar5);
        FUN_006603c0(uVar5,&local_10);
        break;
      case 7:
        uVar5 = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        local_10 = FUN_0065fce0(pbVar6 + 2,2);
        local_c = param_1 << 8;
        local_8 = FUN_0065fce0(pbVar6 + 4,2);
        local_8 = local_8 << 8;
        FUN_00660220(uVar5);
        FUN_00660250(uVar5,&local_10);
        break;
      case 8:
        FUN_00660050(*(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4));
        break;
      case 9:
        FUN_0065fed0(*(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4));
      }
      bVar2 = pbVar6[1];
      if (bVar2 != 0) {
        if ((*pbVar6 == 9) && (10 < *(byte *)((int)DAT_00717290 + 2))) {
          *(undefined4 *)
           (((int)DAT_00717294) +
           (uint)(byte)(&DAT_006ea53d)[((uint)((int)DAT_00716465) + (int)DAT_0071729c * 6) * 6 + (bVar2 & 0xf)]
           * 4) = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
          *(undefined4 *)
           (((int)DAT_00717294) +
           (uint)(byte)(&DAT_006ea53d)
                       [((uint)((int)DAT_00716465) + (int)DAT_0071729c * 6) * 6 + (uint)(bVar2 >> 4)] * 4) =
               *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        }
        else {
          *(undefined4 *)
           (((int)DAT_00717294) +
           (uint)(byte)(&DAT_006ea53d)[((uint)((int)DAT_00716465) + (int)DAT_0071729c * 6) * 6 + (uint)bVar2] *
           4) = *(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4);
        }
      }
      iVar7 = iVar7 + 1;
      pbVar6 = pbVar6 + *(int *)(&DAT_006ea668 + (uint)*pbVar6 * 4);
    } while (iVar7 < iVar4);
  }
  iVar4 = DAT_007172a8;
  iVar8 = 0;
  iVar7 = FUN_0065fce0(((int)DAT_00717290) + iVar3 + 7,4);
  if (0 < iVar7) {
    do {
      iVar7 = FUN_0065fce0(iVar4 + 4,4,*(undefined1 *)(iVar4 + 8),*(undefined1 *)(iVar4 + 9));
      iVar7 = FUN_0065fce0(iVar4,4,*(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4));
      FUN_00657870(*(undefined4 *)(((int)DAT_0071728c) + iVar7 * 4));
      iVar4 = iVar4 + 0xc;
      iVar8 = iVar8 + 1;
      iVar7 = FUN_0065fce0(((int)DAT_00717290) + iVar3 + 7,4);
    } while (iVar8 < iVar7);
  }
  DAT_00717288 = 3000;
  FUN_00654cd0(&DAT_00716688,0x400);
  DAT_00717298 = 0;
  bVar2 = *DAT_007172e4;
  pbVar6 = DAT_007172e4;
  while (bVar2 != 0) {
    pbVar1 = pbVar6 + *(int *)(&DAT_006ea668 + (uint)bVar2 * 4);
    pbVar6 = pbVar6 + *(int *)(&DAT_006ea668 + (uint)bVar2 * 4);
    DAT_00717298 = ((int)DAT_00717298) + 1;
    bVar2 = *pbVar1;
  }
  return;
}
