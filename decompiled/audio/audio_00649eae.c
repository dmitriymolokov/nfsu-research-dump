/* spd-match: far pct=4.73 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_09/attempt3/anchors_fixed */
#include "ghidra_compat.h"

extern unsigned char UNK_006a99c8[16];
extern unsigned char UNK_006a99cc[16];
extern unsigned char UNK_006a99d4[16];

extern unsigned char *DAT_006a9fb8;
extern unsigned char *DAT_006a9fbc;
extern unsigned char *DAT_006a9fc4;
extern unsigned char *DAT_00712738;
extern unsigned char *DAT_00712b38;
extern unsigned char *DAT_00712bb8;
extern unsigned char *DAT_00712bf8;
extern unsigned char *DAT_00712c40;
extern unsigned char *DAT_00712c60;
extern unsigned char *DAT_00713040;
extern int DAT_00713440;
extern unsigned char *DAT_00713448;
extern int DAT_00713848;
extern int _DAT_00712c40;

void FUN_00649eae(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_20;
  char local_18;
  uint local_c;
  
  for (local_c = 0xffffff00; (int)local_c < 0xff; local_c = local_c + 1) {
    local_18 = (char)local_c;
    if ((int)local_c < -0x80) {
      local_18 = -0x80;
    }
    else if (0x7f < (int)local_c) {
      local_18 = '\x7f';
    }
    (&DAT_00713848)[local_c & 0x1ff] = local_18 + -0x80;
  }
  _DAT_00712c40 = 0xf;
  for (local_c = 1; (int)local_c < 8; local_c = local_c + 1) {
    *(undefined4 *)(&DAT_00712c40 + local_c * 4) = 0x1f;
  }
  for (local_c = 0; (int)local_c < 8; local_c = local_c + 1) {
    *(undefined4 *)(&DAT_00712c60 + local_c * 4) = 0x2f;
  }
  for (local_c = 0; (int)local_c < 0x80; local_c = local_c + 1) {
    *(undefined4 *)(&DAT_00713040 + local_c * 4) = 0x3f;
  }
  for (local_c = 1; (int)local_c < 0x5f; local_c = local_c + 1) {
    uVar1 = *(uint *)(&UNK_006a99c8[0] + local_c * 0x10);
    uVar2 = *(uint *)(&UNK_006a99cc[0] + local_c * 0x10);
    uVar3 = *(uint *)(&UNK_006a99d4[0] + local_c * 0x10);
    if ((uVar3 & 0xfc00) == 0) {
      for (local_20 = 0; local_20 < 1 << (8U - ((char)uVar1 + -6) & 0x1f); local_20 = local_20 + 1)
      {
        *(uint *)(&DAT_00713448 + (((int)uVar3 >> 2) + local_20) * 4) =
             uVar2 << 0x16 | (uVar2 & 0xfc00) << 6 | uVar1 - 6;
      }
    }
    else {
      for (local_20 = 0; local_20 < 1 << (9U - (char)uVar1 & 0x1f); local_20 = local_20 + 1) {
        *(uint *)(&DAT_00712c40 + (((int)uVar3 >> 7) + local_20) * 4) =
             uVar2 << 0x16 | (uVar2 & 0xfc00) << 6 | uVar1;
      }
    }
  }
  for (local_c = 0; (int)local_c < 0x80; local_c = local_c + 1) {
    iVar4 = *(int *)(&DAT_006a9fb8 + local_c * 0x10);
    uVar1 = *(uint *)(&DAT_006a9fbc + local_c * 0x10);
    uVar2 = *(uint *)(&DAT_006a9fc4 + local_c * 0x10);
    if ((uVar2 & 0x8000) == 0) {
      for (local_20 = 0; local_20 < 1 << (8U - ((char)iVar4 + -1) & 0x1f); local_20 = local_20 + 1)
      {
        *(uint *)(&DAT_00712738 + (((int)uVar2 >> 7) + local_20) * 4) =
             uVar1 << 0x16 | (uVar1 & 0xfc00) << 6 | iVar4 - 1U;
      }
    }
    else {
      for (local_20 = 0; local_20 < 1 << (8U - ((char)iVar4 + '\x02') & 0x1f);
          local_20 = local_20 + 1) {
        *(uint *)(&DAT_00713448 + (((int)uVar2 >> 10) + local_20) * 4) =
             uVar1 << 0x16 | (uVar1 & 0xfc00) << 6 | iVar4 + 2U;
      }
    }
  }
  for (local_c = 0; (int)local_c < 0x20; local_c = local_c + 1) {
    *(undefined4 *)(&DAT_00712b38 + local_c * 4) = 1;
  }
  for (local_c = 0; (int)local_c < 0x10; local_c = local_c + 1) {
    *(uint *)(&DAT_00712bb8 + local_c * 4) = (local_c + 1) * 0x400000 | 6;
    *(uint *)(&DAT_00712bf8 + local_c * 4) = (local_c + -0x10) * 0x400000 | 6;
  }
  DAT_00713440 = 1;
  return;
}
