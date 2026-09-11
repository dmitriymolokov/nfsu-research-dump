/* spd-match: far pct=6.73 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B3C60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00564a50();
int __cdecl FUN_00565da0();
int __cdecl FUN_0057ce10();
int __cdecl FUN_0057d160();
int __cdecl FUN_0057d340();
int __cdecl FUN_0057ea80();
int __cdecl FUN_0057f2b0();
extern int DAT_006f1db8;
extern int DAT_006f1dbc;
extern int DAT_006f1dc0;
extern int DAT_006f1dc4;
extern int DAT_006f227c;
extern int DAT_006fafc8;
extern int DAT_0073494c;
extern int DAT_00734950;
extern int DAT_0073ad40;
extern unsigned char *DAT_0078a418;
extern void LAB_004b3cac(void);
extern void LAB_004b3dfc(void);
void __fastcall FUN_004b3c60(int val, int param_1, undefined4 param_2, char param_3, int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  float fVar4;

  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined *puVar15;
  float local_98;
  byte local_90;
  byte local_8f [63];
  int local_50 [20];
  
  if (param_4 == (int *)0x0) {
    param_4 = (int *)(DAT_0078a418 + 0x10);
  }
  if ((DAT_006f1db8 == -1) &&
     ((((iVar5 = DAT_006f1dbc, val != 100 && (iVar5 = DAT_006f1dc0, val != 0x65)) &&
       (iVar5 = DAT_006f1dc4, val != 0x66)) || (iVar5 == -1)))) {
    if ((DAT_0073494c == 0) || (DAT_00734950 == 0)) {
      piVar14 = local_50;
      for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar14 = 0;
        piVar14 = piVar14 + 1;
      }
      puVar15 = &DAT_006fafc8;
      do {
        uVar13 = DAT_006f227c % 0x14;
        uVar7 = DAT_006f227c ^ 0x1d872b41;
        uVar9 = uVar7 >> 5 ^ uVar7;
        DAT_006f227c = uVar7 ^ uVar9 << 0x1b ^ uVar9;
        iVar5 = local_50[uVar13];
        while (iVar5 != 0) {
          uVar10 = DAT_006f227c % 100;
          uVar9 = DAT_006f227c ^ 0x1d872b41;
          uVar7 = uVar9 >> 5 ^ uVar9;
          DAT_006f227c = uVar7 << 0x1b ^ uVar7 ^ uVar9;
          uVar13 = uVar13 + ((-(uint)(0x32 < uVar10) & 2) - 1);
          if ((int)uVar13 < 0x14) {
            if ((int)uVar13 < 0) {
              uVar13 = 0x13;
            }
          }
          else {
            uVar13 = 0;
          }
          iVar5 = local_50[uVar13];
        }
        local_50[uVar13] = (int)puVar15;
        puVar15 = puVar15 + 4;
      } while ((int)puVar15 < 0x6fb018);
      local_98 = 7.5;
      do {
        iVar5 = 0;
        local_98 = local_98 + local_98;
        do {
          if ((param_3 != '\0') || (*(int *)local_50[iVar5] != *param_4)) {
            FUN_0057d160(1,0,0);
            if (*(char *)(param_1 + 0x424) == -1) {
              FUN_0057f2b0(1);
            }
            fVar4 = *(float *)(param_1 + 0x428);
            if ((char)param_4[0x109] == -1) {
              FUN_0057f2b0(1);
            }
            if (fVar4 <= (float)param_4[0x10a] + local_98) goto LAB_004b3cac;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x14);
      } while( true );
    }
    FUN_00564a50(4);
  }
LAB_004b3cac:
  uVar13 = 0;
  FUN_0057d160(1,0,0);
  FUN_0057d340(param_1);
  FUN_00565da0("DUMMY_SKIN%d",param_2);
  iVar5 = -1;
  pbVar11 = &local_90;
  bVar2 = local_90;
  while (bVar2 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)bVar2;
    pbVar1 = pbVar11 + 1;
    pbVar11 = pbVar11 + 1;
    bVar2 = *pbVar1;
  }
  *(int *)(param_1 + 0x444) = iVar5;
  FUN_00565da0("DUMMY_WHEEL%d",param_2);
  iVar5 = -1;
  pbVar11 = &local_90;
  while (local_90 != 0) {
    iVar5 = iVar5 * 0x21 + (uint)local_90;
    pbVar1 = pbVar11 + 1;
    pbVar11 = pbVar11 + 1;
    local_90 = *pbVar1;
  }
  *(int *)(param_1 + 0x448) = iVar5;
  uVar9 = param_4[0x131];
  local_98 = 0.0;
  for (iVar5 = FUN_0057ce10(0,0x1e,0,0,0xffffffff); iVar5 != 0;
      iVar5 = FUN_0057ce10(0,0x1e,0,iVar5,0xffffffff)) {
    uVar13 = uVar13 + 1;
  }
  if (uVar13 != 0) {
    puVar6 = (undefined4 *)FUN_0040a880();
    uVar7 = DAT_006f227c;
    do {
      uVar12 = uVar7 % uVar13;
      uVar7 = uVar7 ^ 0x1d872b41;
      uVar10 = uVar7 >> 5 ^ uVar7;
      uVar7 = uVar10 << 0x1b ^ uVar10 ^ uVar7;
      for (puVar3 = DAT_0073ad40; puVar3 != puVar6; puVar3 = (undefined4 *)*puVar3) {
        uVar10 = puVar3[3];
        uVar8 = puVar3[4] * 0x30 + uVar10;
        for (; uVar10 < uVar8; uVar10 = uVar10 + 0x30) {
          if (*(char *)(uVar10 + 0x10) == '\x1e') goto LAB_004b3dfc;
        }
      }
      uVar10 = 0;
LAB_004b3dfc:
      DAT_006f227c = uVar7;
      if (0 < (int)uVar12) {
        do {
          uVar10 = FUN_0057ce10(0,0x1e,0,uVar10,0xffffffff);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar10 != uVar9) {
        local_98 = (float)uVar10;
      }
    } while (local_98 == 0.0);
    *(float *)(param_1 + 0x4c4) = local_98;
    *(char *)(param_1 + 0x64a) = *(char *)(param_1 + 0x64a) + '\x01';
    FUN_0057ea80(param_1);
  }
  return;
}
