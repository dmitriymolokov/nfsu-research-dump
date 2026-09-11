/* spd-match: far pct=4.68 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p2/batches/20260724T141726Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_00565da0();
int __cdecl FUN_0057ce10();
extern int DAT_006c3cf8;
extern int DAT_00734588;
extern unsigned char *PTR_DAT_006f0974;
extern void LAB_0057eab0(void);
extern void LAB_0057eb10(void);
extern void LAB_0057eb1f(void);
extern void LAB_0057ebaf(void);
extern void LAB_0057ebbb(void);
extern void LAB_0057ede2(void);
extern void LAB_0057ee50(void);
extern void LAB_0057eec0(void);
extern void LAB_0057ef28(void);
extern void LAB_0057efc0(void);

extern char s_CALIPER_006c3cf0[];






void FUN_0057ea80(int *param_1)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_84;
  byte local_80;
  byte local_7f [127];
  
  piVar6 = param_1 + 0x1a9;
  for (iVar8 = 0x1e; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar6 = 0x1010101;
    piVar6 = piVar6 + 1;
  }
  local_84 = 0;
LAB_0057eab0:
  iVar8 = param_1[local_84 + 0x113];
  if (iVar8 != 0) {
    piVar6 = *(int **)(iVar8 + 0x14);
    piVar2 = piVar6;
    if (piVar6 != (int *)0x0) {
      for (; piVar2 < piVar6 + *(short *)(iVar8 + 0x1c) * 2; piVar2 = piVar2 + 2) {
        if (*piVar2 == -0x17f5c49e) {
          piVar2 = piVar6 + *(short *)(iVar8 + 0x1c) * 2;
          if ((piVar6 == (int *)0x0) || (piVar2 <= piVar6)) goto LAB_0057eb1f;
          goto LAB_0057eb10;
        }
      }
    }
  }
  goto LAB_0057ebbb;
  while (piVar6 = piVar6 + 2, piVar6 < piVar2) {
LAB_0057eb10:
    if (*piVar6 == -0x17f5c49e) goto joined_r0x0057eb25;
  }
LAB_0057eb1f:
  piVar6 = (int *)0x0;
joined_r0x0057eb25:
  while (piVar6 != (int *)0x0) {
    iVar14 = 0;
    do {
      pbVar11 = (&PTR_DAT_006f0974)[iVar14 * 2];
      iVar12 = -1;
      bVar3 = *pbVar11;
      while (bVar3 != 0) {
        iVar12 = iVar12 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar3 = *pbVar1;
      }
    } while ((iVar12 != piVar6[1]) && (iVar14 = iVar14 + 1, iVar14 < 0x78));
    if (iVar14 != 0x78) {
      *(undefined1 *)(*(int *)(iVar14 * 8 + 0x6f0970) + 0x6a4 + (int)param_1) = 0;
    }
    if (*(int *)(iVar8 + 0x14) == 0) {
LAB_0057ebaf:
      piVar6 = (int *)0x0;
    }
    else {
      do {
        piVar6 = piVar6 + 2;
        if ((int *)(*(int *)(iVar8 + 0x14) + *(short *)(iVar8 + 0x1c) * 8) <= piVar6)
        goto LAB_0057ebaf;
      } while (*piVar6 != -0x17f5c49e);
    }
  }
LAB_0057ebbb:
  if (local_84 == 0x11) {
    iVar8 = -1;
    pcVar9 = "CALIPER";
    bVar3 = s_CALIPER_006c3cf0[0];
    while (bVar3 != 0) {
      iVar8 = iVar8 * 0x21 + (uint)bVar3;
      pbVar11 = (byte *)(pcVar9 + 1);
      pcVar9 = pcVar9 + 1;
      bVar3 = *pbVar11;
    }
    iVar14 = param_1[0x1c7];
    if (((iVar14 == 0) || (*(char *)(iVar14 + 0x10) != '\x1e')) || (*(int *)(iVar14 + 0xc) != iVar8)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((iVar14 != 0) && ((*(char *)(iVar14 + 0x10) == '\x10' || (bVar4)))) {
      *(undefined1 *)((int)param_1 + 0x6b5) = 0;
    }
    goto LAB_0057efc0;
  }
  if (local_84 == 8) {
    if (iVar8 == 0) {
      if (param_1[0x11f] != 0) {
        *(undefined1 *)(param_1 + 0x1ac) = 1;
      }
    }
    else if ((char)param_1[0x1ab] == '\0') {
      if (param_1[0x11f] != 0) {
        *(undefined1 *)(param_1 + 0x1ac) = 1;
      }
    }
    else {
      iVar8 = -1;
      puVar10 = &DAT_006c3cf8;
      bVar3 = DAT_006c3cf8;
      while (bVar3 != 0) {
        iVar8 = iVar8 * 0x21 + (uint)bVar3;
        pbVar11 = puVar10 + 1;
        puVar10 = puVar10 + 1;
        bVar3 = *pbVar11;
      }
      iVar14 = param_1[0x1c7];
      if (((iVar14 == 0) || (*(char *)(iVar14 + 0x10) != '\x1e')) ||
         (*(int *)(iVar14 + 0xc) != iVar8)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((iVar14 == 0) || (*(char *)(iVar14 + 0x10) != '\f')) ||
         (*(char *)(iVar14 + 0x11) == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((iVar14 == 0) || ((!bVar5 && (!bVar4)))) {
        if (param_1[0x11f] != 0) {
          *(undefined1 *)(param_1 + 0x1ac) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1ab) = 0;
        *(undefined1 *)((int)param_1 + 0x6b7) = 0;
        *(undefined1 *)(param_1 + 0x1ac) = 1;
      }
    }
    goto LAB_0057efc0;
  }
  if (local_84 != 6) goto LAB_0057efc0;
  if (iVar8 == 0) {
    *(undefined1 *)((int)param_1 + 0x6a5) = 1;
    *(undefined1 *)((int)param_1 + 0x6a6) = 1;
    *(undefined1 *)((int)param_1 + 0x6ae) = 1;
    *(undefined1 *)((int)param_1 + 0x6a9) = 1;
    *(undefined1 *)((int)param_1 + 0x6aa) = 0;
    puVar10 = (undefined1 *)((int)param_1 + 0x6be);
    iVar8 = 4;
    do {
      puVar10[-4] = 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    goto LAB_0057efc0;
  }
  FUN_00565da0("%s_WIDE%d_",*param_1 * 0xc90 + DAT_00734588,*(undefined1 *)(iVar8 + 0x12));
  iVar8 = -1;
  pbVar11 = &local_80;
  bVar3 = local_80;
  while (bVar3 != 0) {
    iVar8 = iVar8 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar11 + 1;
    pbVar11 = pbVar11 + 1;
    bVar3 = *pbVar1;
  }
  pcVar9 = "DECAL_LEFT_DOOR_RECT_MEDIUM";
  uVar7 = 0x44;
  iVar14 = iVar8;
  do {
    pbVar11 = (byte *)(pcVar9 + 1);
    iVar14 = iVar14 * 0x21 + uVar7;
    pcVar9 = pcVar9 + 1;
    uVar7 = (uint)*pbVar11;
  } while (*pbVar11 != 0);
  iVar12 = *param_1;
  iVar13 = 0;
  if (iVar12 == 0x23) {
LAB_0057ede2:
    iVar14 = FUN_0057ce10(iVar13,0x1a,iVar14,0,0xffffffff);
  }
  else {
    iVar13 = iVar12 * 0xc90 + DAT_00734588;
    if (iVar13 != 0) {
      pbVar11 = (byte *)(iVar13 + 0x20);
      iVar13 = -1;
      bVar3 = *pbVar11;
      while (bVar3 != 0) {
        iVar13 = iVar13 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar3 = *pbVar1;
      }
      goto LAB_0057ede2;
    }
    iVar14 = 0;
  }
  param_1[0x12d] = iVar14;
  pcVar9 = "DECAL_RIGHT_DOOR_RECT_MEDIUM";
  uVar7 = 0x44;
  iVar14 = iVar8;
  do {
    pbVar11 = (byte *)(pcVar9 + 1);
    iVar14 = iVar14 * 0x21 + uVar7;
    pcVar9 = pcVar9 + 1;
    uVar7 = (uint)*pbVar11;
  } while (*pbVar11 != 0);
  iVar13 = 0;
  if (iVar12 == 0x23) {
LAB_0057ee50:
    iVar14 = FUN_0057ce10(iVar13,0x1b,iVar14,0,0xffffffff);
  }
  else {
    iVar13 = iVar12 * 0xc90 + DAT_00734588;
    if (iVar13 != 0) {
      pbVar11 = (byte *)(iVar13 + 0x20);
      iVar13 = -1;
      bVar3 = *pbVar11;
      while (bVar3 != 0) {
        iVar13 = iVar13 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar3 = *pbVar1;
      }
      goto LAB_0057ee50;
    }
    iVar14 = 0;
  }
  param_1[0x12e] = iVar14;
  pcVar9 = "DECAL_LEFT_QUARTER_RECT_MEDIUM";
  uVar7 = 0x44;
  iVar14 = iVar8;
  do {
    pbVar11 = (byte *)(pcVar9 + 1);
    iVar14 = iVar14 * 0x21 + uVar7;
    pcVar9 = pcVar9 + 1;
    uVar7 = (uint)*pbVar11;
  } while (*pbVar11 != 0);
  iVar13 = 0;
  if (iVar12 == 0x23) {
LAB_0057eec0:
    iVar14 = FUN_0057ce10(iVar13,0x1c,iVar14,0,0xffffffff);
  }
  else {
    iVar13 = iVar12 * 0xc90 + DAT_00734588;
    if (iVar13 != 0) {
      pbVar11 = (byte *)(iVar13 + 0x20);
      iVar13 = -1;
      bVar3 = *pbVar11;
      while (bVar3 != 0) {
        iVar13 = iVar13 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar3 = *pbVar1;
      }
      goto LAB_0057eec0;
    }
    iVar14 = 0;
  }
  param_1[0x12f] = iVar14;
  pcVar9 = "DECAL_RIGHT_QUARTER_RECT_MEDIUM";
  uVar7 = 0x44;
  do {
    pbVar11 = (byte *)(pcVar9 + 1);
    iVar8 = iVar8 * 0x21 + uVar7;
    pcVar9 = pcVar9 + 1;
    uVar7 = (uint)*pbVar11;
  } while (*pbVar11 != 0);
  iVar14 = 0;
  if (iVar12 == 0x23) {
LAB_0057ef28:
    iVar8 = FUN_0057ce10(iVar14,0x1d,iVar8,0,0xffffffff);
  }
  else {
    iVar14 = iVar12 * 0xc90 + DAT_00734588;
    if (iVar14 != 0) {
      pbVar11 = (byte *)(iVar14 + 0x20);
      iVar14 = -1;
      bVar3 = *pbVar11;
      while (bVar3 != 0) {
        iVar14 = iVar14 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        bVar3 = *pbVar1;
      }
      goto LAB_0057ef28;
    }
    iVar8 = 0;
  }
  param_1[0x130] = iVar8;
  *(undefined1 *)((int)param_1 + 0x6a5) = 0;
  *(undefined1 *)((int)param_1 + 0x6a6) = 0;
  *(undefined1 *)((int)param_1 + 0x6ae) = 0;
  *(undefined1 *)((int)param_1 + 0x6a9) = 0;
  *(undefined1 *)((int)param_1 + 0x6aa) = 1;
  puVar10 = (undefined1 *)((int)param_1 + 0x6be);
  iVar8 = 4;
  do {
    puVar10[-4] = 0;
    *puVar10 = 1;
    puVar10 = puVar10 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
LAB_0057efc0:
  local_84 = local_84 + 1;
  if (0x77 < local_84) {
    return;
  }
  goto LAB_0057eab0;
}
