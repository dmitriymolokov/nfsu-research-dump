/* spd-match: far pct=4.55 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_realcore/attempt3_smart_abs_a130 */
#include "ghidra_compat.h"

typedef void _func_void_void_ptr(void);
int __cdecl FUN_00402ad0();
int __cdecl FUN_004049f0();
int __cdecl FUN_0040a880();
int __cdecl FUN_0040ba40();
int __cdecl FUN_0040be70();
int __cdecl FUN_0040cb70();
int __cdecl FUN_0042ac70();
int __cdecl FUN_0042ac80();
int __cdecl FUN_004ad8d0();
int __cdecl FUN_0053fd70();
int __cdecl FUN_00540680();
int __cdecl FUN_005461c0();
int __cdecl FUN_00565da0();
int __cdecl FUN_00566e60();
int __cdecl FUN_00567160();
int __cdecl FUN_00567890();
int __cdecl FUN_005693d0();
int __cdecl FUN_0056c250();
int __cdecl FUN_0056c310();
int __cdecl FUN_0056c3d0();
int __cdecl FUN_0056ca60();
int __cdecl FUN_0056cc40();
int __cdecl FUN_00579590();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00580b00();
int __cdecl FUN_0058d800();
extern unsigned char *PTR_DAT_006f3df0;
extern void LAB_0049fd90(void);
extern void LAB_0056a396(void);
extern void LAB_0056ad29(void);
extern void LAB_0056ad79(void);
extern void LAB_0056adc9(void);
extern void LAB_0056ae19(void);
extern void LAB_0056ae69(void);
extern void LAB_0056aeb9(void);
extern void LAB_0056af09(void);
extern void LAB_0056af5c(void);
extern void LAB_0056b528(void);
extern void LAB_0056b5ab(void);
extern void LAB_0056b6cb(void);
extern void LAB_0056b6f9(void);
extern void LAB_0056b724(void);
extern void LAB_0056b754(void);
extern void LAB_0056b8f2(void);
extern void LAB_0056be07(void);
extern void LAB_0056be1d(void);
extern void LAB_0056be4c(void);
extern void LAB_0056be62(void);
extern void LAB_0056beab(void);
extern void LAB_0056bf26(void);
extern void LAB_0056bf45(void);
extern void LAB_0056bf59(void);
extern void LAB_0056bf85(void);
extern void LAB_0056bfc2(void);
extern void LAB_0056bfd5(void);
extern void LAB_0056bfff(void);
extern void LAB_0056c007(void);
extern void LAB_0056c00f(void);
extern void LAB_0056c015(void);
extern void LAB_0056c091(void);
extern void LAB_00571560(void);
extern void LAB_006867fb(void);
extern char stack0xfffffffc;
void *ExceptionList;

int * FUN_0056a130(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  int *piVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  int *piVar22;
  char *pcVar23;
  int iVar24;
  int extraout_EDX;
  int *piVar25;
  undefined *puVar26;
  float *pfVar27;
  uint *puVar28;
  int *piVar29;
  int local_570 [256];
  byte local_170;
  byte local_16f [63];
  int aiStack_130 [32];
  int *local_b0;
  int *local_ac;
  int *local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int *local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  uint *local_34;
  uint *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_006867fb;
  local_1c = ExceptionList;
  piVar29 = param_1 + 0x140;
  ExceptionList = &local_1c;
  *piVar29 = (int)piVar29;
  param_1[0x141] = (int)piVar29;
  local_b0 = param_1 + 0x151;
  local_14 = 0;
  _eh_vector_constructor_iterator_(local_b0,8,0x1d,FUN_00579590,FUN_004049f0);
  local_40 = param_1 + 0x18b;
  (*(unsigned char *)&(local_14)) = 1;
  _eh_vector_constructor_iterator_
            (local_40,8,0x1c,(_func_void_void_ptr *)&LAB_0049fd90,
             (_func_void_void_ptr *)&LAB_00571560);
  local_44 = param_1 + 0x1c3;
  (*(unsigned char *)&(local_14)) = 2;
  iVar19 = 0x3a;
  piVar29 = local_44;
  do {
    *piVar29 = 0;
    piVar29[1] = 0;
    piVar29[2] = 0;
    piVar29[3] = 0;
    piVar29 = piVar29 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  piVar29 = param_1 + 0x2ab;
  iVar19 = 0x38;
  do {
    *piVar29 = 0;
    piVar29[1] = 0;
    piVar29[2] = 0;
    piVar29[3] = 0;
    piVar29 = piVar29 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  piVar29 = param_1 + 0x38b;
  iVar19 = 2;
  do {
    *piVar29 = 0;
    piVar29[1] = 0;
    piVar29[2] = 0;
    piVar29[3] = 0;
    piVar29 = piVar29 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  piVar29 = param_1 + 0x393;
  iVar19 = 2;
  do {
    *piVar29 = 0;
    piVar29[1] = 0;
    piVar29[2] = 0;
    piVar29[3] = 0;
    piVar29 = piVar29 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  local_a8 = param_1 + 0x39b;
  _eh_vector_constructor_iterator_(local_a8,0x18,0x78,FUN_0042ac70,FUN_0042ac80);
  piVar29 = param_1 + 0x676;
  *piVar29 = (int)piVar29;
  param_1[0x677] = (int)piVar29;
  param_1[0x675] = 1;
  *(undefined1 *)(param_1 + 0x66d) = 0;
  (*(unsigned char *)&(local_14)) = 4;
  _eh_vector_constructor_iterator_(param_1 + 0x678,0x68,2,FUN_004ad8d0,FUN_0040a880);
  (*(unsigned char *)&(local_14)) = 5;
  _eh_vector_constructor_iterator_(param_1 + 0x6b0,0xa0,2,FUN_0040be70,FUN_0040a880);
  local_2c = param_1 + 0x700;
  piVar29 = local_2c;
  for (iVar19 = 0x70; iVar19 != 0; iVar19 = iVar19 + -1) {
    *piVar29 = 0;
    piVar29 = piVar29 + 1;
  }
  param_1[1] = param_2;
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  iVar19 = (*(int *)0x00734594);
  uVar13 = (*(int *)0x006f227c) ^ 0x1d872b41;
  uVar14 = uVar13 >> 5 ^ uVar13;
  uVar20 = (*(int *)0x006f227c) & 7;
  *(int *)0x006f227c = uVar14 << 0x1b ^ uVar14 ^ uVar13;
  param_1[0x142] = uVar20;
  piVar29 = (int *)(unsigned int)(param_1[1]);
  iVar15 = *piVar29 * 0xc90 + (*(int *)0x00734588);
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),6);
  local_24 = (int *)0x0;
  piVar17 = (*(int *)0x00734590);
  if (0 < iVar19) {
    do {
      if ((*piVar17 == *piVar29) && (piVar17[1] == (int)*(char *)((int)piVar29 + 7))) break;
      piVar17 = piVar17 + 0x10;
      local_24 = (int *)(unsigned int)(((int)local_24 + 1));
    } while ((int)local_24 < (*(int *)0x00734594));
  }
  param_1[2] = iVar15;
  local_38 = (int *)(iVar15 + 0x20);
  piVar17 = *(int **)(piVar29[0x124] + 0x14);
  piVar29 = piVar17 + *(short *)(piVar29[0x124] + 0x1c) * 2;
  if (piVar17 != (int *)0x0) {
    for (; piVar17 < piVar29; piVar17 = piVar17 + 2) {
      if (*piVar17 == -0x14fefe1e) {
        if (piVar17 != (int *)0x0) {
          cVar9 = (char)piVar17[1];
          goto LAB_0056a396;
        }
        break;
      }
    }
  }
  cVar9 = '\0';
LAB_0056a396:
  local_3c = (uint)cVar9;
  pcVar23 = "BLURTEST";
  iVar19 = -1;
  uVar13 = 0x42;
  local_28 = (int *)(unsigned int)(((float)(int)local_3c * (*(int *)0x006ccda4) * (*(int *)0x006cc79c)));
  do {
    iVar19 = iVar19 * 0x21 + uVar13;
    pbVar21 = (byte *)(pcVar23 + 1);
    uVar13 = (uint)*pbVar21;
    pcVar23 = pcVar23 + 1;
  } while (*pbVar21 != 0);
  iVar19 = FUN_005461c0(iVar19,1,0);
  local_30 = (uint *)(unsigned int)(-(float)(unsigned int)(local_28));
  param_1[0x6ac] = iVar19;
  local_34 = (uint *)0x0;
  do {
    puVar28 = local_34;
    *(undefined1 *)(param_1 + (int)local_34 * 0x28 + 0x6d0) = 0x80;
    *(undefined1 *)(param_1 + (int)local_34 * 0x28 + 0x6d1) = 0x80;
    *(undefined1 *)(param_1 + (int)local_34 * 0x28 + 0x6d2) = 0x80;
    *(undefined1 *)(param_1 + (int)local_34 * 0x28 + 0x6d3) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b41) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b45) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b49) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b4d) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b42) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b46) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b4a) = 0x80;
    *(undefined1 *)((int)param_1 + (int)local_34 * 0xa0 + 0x1b4e) = 0x80;
    param_1[(int)local_34 * 0x28 + 0x6c4] = 0;
    param_1[(int)local_34 * 0x28 + 0x6c5] = 0;
    param_1[(int)local_34 * 0x28 + 0x6c6] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6c7] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6c8] = 0;
    param_1[(int)local_34 * 0x28 + 0x6c9] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6cd] = 0;
    param_1[(int)local_34 * 0x28 + 0x6ce] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6cf] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6ca] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6cb] = 0x3f800000;
    param_1[(int)local_34 * 0x28 + 0x6cc] = 0x3f800000;
    aiStack_130[0xc] = 0x3f800000;
    aiStack_130[0xd] = 0;
    aiStack_130[0xe] = 0;
    aiStack_130[0xf] = 0;
    aiStack_130[0x10] = 0;
    aiStack_130[0x11] = 0x3f800000;
    aiStack_130[0x12] = 0;
    aiStack_130[0x13] = 0;
    aiStack_130[0x14] = 0;
    aiStack_130[0x15] = 0;
    aiStack_130[0x16] = 0x3f800000;
    aiStack_130[0x17] = 0;
    aiStack_130[0x18] = 0;
    aiStack_130[0x19] = 0;
    aiStack_130[0x1a] = 0;
    aiStack_130[0x1b] = 0x3f800000;
    if (local_34 == (uint *)0x0) {
      FUN_0040ba40(aiStack_130 + 0xc,aiStack_130 + 0xc);
    }
    local_a0 = (float)(unsigned int)(local_30);
    local_98 = (float)(unsigned int)(local_30);
    local_68 = (float)(unsigned int)(local_30);
    local_80 = (float)(unsigned int)(local_30);
    local_70 = (float)(unsigned int)(local_28);
    local_78 = (float)(unsigned int)(local_28);
    local_60 = (float)(unsigned int)(local_28);
    local_58 = (float)(unsigned int)(local_28);
    local_9c = -0.015;
    local_94 = 0x3f800000;
    local_6c = -0.015;
    local_64 = 0x3f800000;
    local_7c = -0.015;
    local_74 = 0x3f800000;
    local_5c = -0.015;
    local_54 = 0x3f800000;
    FUN_0056a130(&local_a0,&local_a0,aiStack_130 + 0xc);
    FUN_0056a130(&local_70,&local_70,aiStack_130 + 0xc);
    FUN_0056a130(&local_80,&local_80,aiStack_130 + 0xc);
    FUN_0056a130(&local_60,&local_60,aiStack_130 + 0xc);
    param_1[((int)local_34 * 5 + 0xd7) * 8] = (int)local_70;
    param_1[(int)puVar28 * 0x28 + 0x6b4] = (int)local_a0;
    param_1[(int)puVar28 * 0x28 + 0x6c0] = (int)local_80;
    param_1[(int)puVar28 * 0x28 + 0x6bc] = (int)local_60;
    param_1[(int)puVar28 * 0x28 + 0x6b5] = (int)local_9c;
    param_1[(int)puVar28 * 0x28 + 0x6b9] = (int)local_6c;
    param_1[(int)puVar28 * 0x28 + 0x6c1] = (int)local_7c;
    param_1[(int)puVar28 * 0x28 + 0x6bd] = (int)local_5c;
    local_34 = (uint *)(unsigned int)(((int)local_34 + 1));
    param_1[(int)puVar28 * 0x28 + 0x6b6] = (int)local_98;
    param_1[(int)puVar28 * 0x28 + 0x6ba] = (int)local_68;
    param_1[(int)puVar28 * 0x28 + 0x6c2] = (int)local_78;
    param_1[(int)puVar28 * 0x28 + 0x6be] = (int)local_58;
  } while ((int)local_34 < 2);
  FUN_00580b00(param_1 + 0x10,param_1[1],0);
  iVar19 = param_1[0x103];
  *local_44 = param_1[0x102];
  param_1[0x1cb] = param_1[0x104];
  param_1[0x1c7] = iVar19;
  param_1[0x1d7] = param_1[0x107];
  param_1[0x1d3] = param_1[0x105];
  param_1[0x1cf] = param_1[0x106];
  param_1[0x217] = param_1[0x108];
  param_1[0x1e3] = param_1[0x114];
  param_1[0x1df] = param_1[0x113];
  param_1[0x223] = param_1[0x10b];
  param_1[0x21f] = param_1[0x10a];
  param_1[0x21b] = param_1[0x109];
  param_1[0x22f] = param_1[0x10e];
  param_1[0x22b] = param_1[0x10d];
  param_1[0x227] = param_1[0x10c];
  param_1[0x23b] = param_1[0x111];
  param_1[0x237] = param_1[0x110];
  param_1[0x1db] = 0x5799e60b;
  param_1[0x1e7] = 0x7b220ddf;
  param_1[0x1eb] = 0x1b0763a0;
  param_1[0x1ef] = -0x181b10b7;
  param_1[499] = 0x4cdebfca;
  param_1[0x1f7] = 0x60f8b13c;
  param_1[0x1fb] = 0xab88f5d;
  param_1[0x1ff] = -0x6f1f698f;
  param_1[0x203] = 0x13ee21f2;
  param_1[0x207] = -0x29765ce5;
  param_1[0x20b] = -0x470cbea4;
  param_1[0x20f] = 0x2433df4e;
  param_1[0x213] = -0x6a2bcd1;
  param_1[0x233] = param_1[0x10f];
  param_1[0x38b] = 0x17f9f794;
  if (param_1[0x38c] != -0x7a163862) {
    param_1[0x38c] = -0x7a163862;
    param_1[0x38d] = -1;
  }
  param_1[0x38f] = param_1[0x104];
  param_1[0x393] = 0x17f9f794;
  if (param_1[0x394] != 0x17f9f794) {
    param_1[0x394] = 0x17f9f794;
    param_1[0x395] = -1;
  }
  local_ac = param_1 + 0x397;
  *local_ac = param_1[0x104];
  FUN_0056c310();
  local_34 = (uint *)(unsigned int)(param_1[0x106]);
  pbVar21 = *(byte **)(((int *)0x006f21bc) + (*(int *)0x00734998) * 0x10);
  if (pbVar21 != (byte *)0x0) {
    bVar4 = *pbVar21;
    puVar28 = local_34;
    while (bVar4 != 0) {
      puVar28 = (uint *)((int)puVar28 * 0x21 + (uint)bVar4);
      pbVar1 = pbVar21 + 1;
      pbVar21 = pbVar21 + 1;
      bVar4 = *pbVar1;
    }
    iVar19 = FUN_005461c0(puVar28,0,0);
    if (iVar19 != 0) {
      local_34 = puVar28;
    }
  }
  iVar19 = FUN_005461c0(local_34,0,0);
  if (iVar19 != 0) {
    *(undefined1 *)(iVar19 + 0x54) = 0;
  }
  if (local_34 != (uint *)(unsigned int)(param_1[0x1d0])) {
    param_1[0x1d0] = (int)local_34;
    param_1[0x1d1] = -1;
  }
  FUN_0056ca60(param_1);
  FUN_0056c3d0(param_1,param_2);
  if (param_1[0x1dc] != -0x5dbb2b77) {
    param_1[0x1dc] = -0x5dbb2b77;
    param_1[0x1dd] = -1;
  }
  param_1[4] = 0x7f7fffff;
  param_1[5] = 0x7f7fffff;
  param_1[6] = 0x7f7fffff;
  local_30 = (uint *)(unsigned int)((param_2 + 0x44c));
  param_1[8] = -0x800001;
  param_1[9] = -0x800001;
  param_1[10] = -0x800001;
  local_24 = param_1 + 0x39e;
  local_28 = (int *)0x0;
  do {
    uVar13 = *local_30;
    if (uVar13 != 0) {
      local_84 = *(uint *)(uVar13 + 0x24);
      local_34 = (uint *)(uVar13 + 0x20);
      piVar29 = local_24 + -2;
      local_3c = 4;
      do {
        local_a4 = *local_34;
        if (local_a4 != 0) {
          piVar29[1] = local_a4;
          piVar29[3] = 0;
          piVar29[4] = 0;
          piVar17 = piVar29 + -1;
          **(int **)0x00743c74 = (int)piVar17;
          piVar25 = piVar17;
          *piVar29 = (int)(*(int **)0x00743c74);
          *(int **)0x00743c74 = piVar25;
          *piVar17 = (int)((int *)0x00743c70);
          if (((piVar29[1] != 0) && (iVar19 = FUN_00540680(), piVar29[1] != 0)) &&
             (iVar19 != piVar29[2])) {
            iVar15 = *piVar17;
            piVar25 = (int *)*piVar29;
            *piVar25 = iVar15;
            *(int **)(iVar15 + 4) = piVar25;
            if (iVar19 == 0) {
              **(int **)0x00743c74 = (int)piVar17;
              piVar25 = piVar17;
              *piVar29 = (int)(*(int **)0x00743c74);
              *(int **)0x00743c74 = piVar25;
              *piVar17 = (int)((int *)0x00743c70);
            }
            else {
              puVar18 = *(undefined4 **)(iVar19 + 0x8c);
              *puVar18 = piVar17;
              *(int **)(iVar19 + 0x8c) = piVar17;
              *piVar29 = (int)puVar18;
              *piVar17 = iVar19 + 0x88;
            }
            piVar29[2] = iVar19;
          }
          if (piVar29[2] == 0) {
            if (piVar29[1] != 0) {
              iVar19 = *piVar17;
              piVar25 = (int *)*piVar29;
              *piVar25 = iVar19;
              *(int **)(iVar19 + 4) = piVar25;
            }
            piVar29[2] = 0;
            piVar29[1] = local_84;
            piVar29[3] = 0;
            piVar29[4] = 0;
            if (local_84 != 0) {
              **(int **)0x00743c74 = (int)piVar17;
              piVar25 = piVar17;
              *piVar29 = (int)(*(int **)0x00743c74);
              *(int **)0x00743c74 = piVar25;
              *piVar17 = (int)((int *)0x00743c70);
            }
            if (((piVar29[1] != 0) && (iVar19 = FUN_00540680(), piVar29[1] != 0)) &&
               (iVar19 != piVar29[2])) {
              iVar15 = *piVar17;
              piVar25 = (int *)*piVar29;
              *piVar25 = iVar15;
              *(int **)(iVar15 + 4) = piVar25;
              if (iVar19 == 0) {
                **(int **)0x00743c74 = (int)piVar17;
                piVar25 = piVar17;
                *piVar29 = (int)(*(int **)0x00743c74);
                *(int **)0x00743c74 = piVar25;
                *piVar17 = (int)((int *)0x00743c70);
              }
              else {
                puVar18 = *(undefined4 **)(iVar19 + 0x8c);
                *puVar18 = piVar17;
                *(int **)(iVar19 + 0x8c) = piVar17;
                *piVar29 = (int)puVar18;
                *piVar17 = iVar19 + 0x88;
              }
              piVar29[2] = iVar19;
            }
          }
          else {
            local_84 = local_a4;
          }
        }
        if (((int)local_28 < 0x13) || (0x1d < (int)local_28)) {
          piVar29[3] = (int)local_44;
          piVar29[4] = 0x3a;
        }
        else {
          iVar19 = (int)local_28 + -0x13;
          if (0x19 < (int)local_28) {
            iVar19 = (int)local_28 + -0x17;
          }
          piVar29[3] = (int)(param_1 + iVar19 * 0x20 + 0x2ab);
          piVar29[4] = 8;
        }
        local_34 = local_34 + 1;
        piVar29 = piVar29 + 6;
        local_3c = local_3c - 1;
      } while (local_3c != 0);
      if ((-1 < (int)local_28) && ((int)local_28 < 0xc)) {
        iVar19 = *local_24;
        if (iVar19 == 0) {
          local_80 = 0.0;
          local_7c = 0.0;
          local_78 = 0.0;
          local_60 = 0.0;
          local_5c = 0.0;
          local_58 = 0.0;
        }
        else {
          local_80 = *(float *)(iVar19 + 0x20);
          local_7c = *(float *)(iVar19 + 0x24);
          local_78 = *(float *)(iVar19 + 0x28);
          local_60 = *(float *)(iVar19 + 0x30);
          local_5c = *(float *)(iVar19 + 0x34);
          local_58 = *(float *)(iVar19 + 0x38);
        }
        FUN_00567890();
      }
    }
    piVar29 = local_38;
    local_28 = (int *)(unsigned int)(((int)local_28 + 1));
    local_30 = local_30 + 1;
    local_24 = local_24 + 0x18;
  } while ((int)local_28 < 0x1e);
  param_1[4] = (int)((float)(unsigned int)(param_1[4]) - (*(int *)0x006cc7b8));
  param_1[5] = (int)((float)(unsigned int)(param_1[5]) - (*(int *)0x006cc7b8));
  param_1[6] = (int)((float)(unsigned int)(param_1[6]) - (*(int *)0x006cc7b8));
  param_1[8] = (int)((float)(unsigned int)(param_1[8]) + (*(int *)0x006cc7b8));
  param_1[9] = (int)((float)(unsigned int)(param_1[9]) + (*(int *)0x006cc7b8));
  param_1[10] = (int)((float)(unsigned int)(param_1[10]) + (*(int *)0x006cc7b8));
  if (*(int *)0x0077a920 == 3) {
    FUN_00565da0("%s_SHADOWFE",local_38);
    iVar19 = -1;
    pbVar21 = &local_170;
    bVar4 = local_170;
    while (bVar4 != 0) {
      pbVar1 = pbVar21 + 1;
      iVar19 = iVar19 * 0x21 + (uint)bVar4;
      pbVar21 = pbVar21 + 1;
      bVar4 = *pbVar1;
    }
  }
  else {
    FUN_00565da0("%s_SHADOWIG",local_38);
    iVar19 = -1;
    pbVar21 = &local_170;
    bVar4 = local_170;
    while (bVar4 != 0) {
      pbVar1 = pbVar21 + 1;
      iVar19 = iVar19 * 0x21 + (uint)bVar4;
      pbVar21 = pbVar21 + 1;
      bVar4 = *pbVar1;
    }
  }
  iVar19 = FUN_005461c0(iVar19,0,0);
  param_1[0x12d] = iVar19;
  FUN_00565da0("%s_NEON",piVar29);
  iVar19 = -1;
  pbVar21 = &local_170;
  while (local_170 != 0) {
    pbVar1 = pbVar21 + 1;
    iVar19 = iVar19 * 0x21 + (uint)local_170;
    pbVar21 = pbVar21 + 1;
    local_170 = *pbVar1;
  }
  iVar19 = FUN_005461c0(iVar19,1,0);
  param_1[0x12f] = iVar19;
  iVar19 = *(int *)(param_1[1] + 0x61c);
  sVar12 = 0;
  if (iVar19 == 0) {
    *(undefined2 *)(param_1 + 0x130) = 0;
    *(undefined2 *)((int)param_1 + 0x4c2) = 0;
    *(undefined2 *)(param_1 + 0x131) = 0;
    *(undefined2 *)((int)param_1 + 0x4c6) = 0;
    *(undefined2 *)(param_1 + 0x132) = 0;
    *(undefined2 *)((int)param_1 + 0x4ca) = 0;
    *(undefined2 *)(param_1 + 0x133) = 0;
  }
  else {
    puVar26 = ((int *)0x006c7a38);
    iVar15 = -1;
    uVar13 = 0x52;
    do {
      iVar15 = iVar15 * 0x21 + uVar13;
      pbVar21 = puVar26 + 1;
      uVar13 = (uint)*pbVar21;
      puVar26 = puVar26 + 1;
    } while (*pbVar21 != 0);
    local_28 = *(int **)(iVar19 + 0x14);
    local_30 = (uint *)(*(short *)(iVar19 + 0x1c) * 8);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar15 == 0) || (*piVar29 == iVar15)) {
          if (piVar29 != (int *)0x0) {
            local_a4 = piVar29[1];
            goto LAB_0056ad29;
          }
          break;
        }
      }
    }
    local_a4 = 0;
LAB_0056ad29:
    local_a4 = local_a4 & 0xff;
    pcVar23 = "GREEN";
    iVar19 = -1;
    uVar13 = 0x47;
    do {
      pbVar21 = (byte *)(pcVar23 + 1);
      iVar19 = iVar19 * 0x21 + uVar13;
      pcVar23 = pcVar23 + 1;
      uVar13 = (uint)*pbVar21;
    } while (*pbVar21 != 0);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            local_3c = piVar29[1];
            goto LAB_0056ad79;
          }
          break;
        }
      }
    }
    local_3c = 0;
LAB_0056ad79:
    local_3c = local_3c & 0xff;
    puVar26 = ((int *)0x006c7a28);
    iVar19 = -1;
    uVar13 = 0x42;
    do {
      iVar19 = iVar19 * 0x21 + uVar13;
      pbVar21 = puVar26 + 1;
      uVar13 = (uint)*pbVar21;
      puVar26 = puVar26 + 1;
    } while (*pbVar21 != 0);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            uVar13 = piVar29[1];
            goto LAB_0056adc9;
          }
          break;
        }
      }
    }
    uVar13 = 0;
LAB_0056adc9:
    local_44 = (int *)(uVar13 & 0xff);
    pcVar23 = "ALPHA";
    iVar19 = -1;
    uVar13 = 0x41;
    do {
      iVar19 = iVar19 * 0x21 + uVar13;
      pbVar21 = (byte *)(pcVar23 + 1);
      uVar13 = (uint)*pbVar21;
      pcVar23 = pcVar23 + 1;
    } while (*pbVar21 != 0);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            local_84 = piVar29[1];
            goto LAB_0056ae19;
          }
          break;
        }
      }
    }
    local_84 = 0;
LAB_0056ae19:
    local_84 = local_84 & 0xff;
    puVar26 = ((int *)0x006bbcfc);
    iVar19 = -1;
    uVar13 = 0x52;
    do {
      iVar19 = iVar19 * 0x21 + uVar13;
      pbVar21 = puVar26 + 1;
      uVar13 = (uint)*pbVar21;
      puVar26 = puVar26 + 1;
    } while (*pbVar21 != 0);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            uVar13 = piVar29[1];
            goto LAB_0056ae69;
          }
          break;
        }
      }
    }
    uVar13 = 0;
LAB_0056ae69:
    local_24 = (int *)(uVar13 & 0xff);
    puVar26 = ((int *)0x006bbcf4);
    iVar19 = -1;
    uVar13 = 0x47;
    do {
      iVar19 = iVar19 * 0x21 + uVar13;
      pbVar21 = puVar26 + 1;
      uVar13 = (uint)*pbVar21;
      puVar26 = puVar26 + 1;
    } while (*pbVar21 != 0);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            uVar13 = piVar29[1];
            goto LAB_0056aeb9;
          }
          break;
        }
      }
    }
    uVar13 = 0;
LAB_0056aeb9:
    local_34 = (uint *)(uVar13 & 0xff);
    puVar26 = ((int *)0x006bbcec);
    iVar19 = -1;
    uVar13 = 0x42;
    do {
      iVar19 = iVar19 * 0x21 + uVar13;
      pbVar21 = puVar26 + 1;
      uVar13 = (uint)*pbVar21;
      puVar26 = puVar26 + 1;
    } while (*pbVar21 != 0);
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < (int *)(unsigned int)(((int)local_30 + (int)local_28)); piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            uVar10 = (ushort)piVar29[1];
            goto LAB_0056af09;
          }
          break;
        }
      }
    }
    uVar10 = 0;
LAB_0056af09:
    puVar26 = ((int *)0x006bbce4);
    iVar19 = -1;
    uVar13 = 0x41;
    do {
      iVar19 = iVar19 * 0x21 + uVar13;
      pbVar21 = puVar26 + 1;
      uVar13 = (uint)*pbVar21;
      puVar26 = puVar26 + 1;
    } while (*pbVar21 != 0);
    local_38 = (int *)(unsigned int)(((int)local_30 + (int)local_28));
    piVar29 = local_28;
    if (local_28 != (int *)0x0) {
      for (; piVar29 < local_38; piVar29 = piVar29 + 2) {
        if ((iVar19 == 0) || (*piVar29 == iVar19)) {
          if (piVar29 != (int *)0x0) {
            uVar11 = (ushort)piVar29[1];
            goto LAB_0056af5c;
          }
          break;
        }
      }
    }
    uVar11 = 0;
LAB_0056af5c:
    *(short *)((int)param_1 + 0x4c2) = (short)local_3c;
    *(short *)(param_1 + 0x131) = (short)local_44;
    *(short *)((int)param_1 + 0x4c6) = (short)local_84;
    *(short *)(param_1 + 0x132) = (short)local_24 - (short)local_a4;
    *(short *)(param_1 + 0x130) = (short)local_a4;
    *(short *)((int)param_1 + 0x4ca) = (short)local_34 - (short)local_3c;
    *(ushort *)(param_1 + 0x133) = (uVar10 & 0xff) - (short)local_44;
    sVar12 = (uVar11 & 0xff) - (short)local_84;
  }
  *(short *)((int)param_1 + 0x4ce) = sVar12;
  iVar19 = FUN_005461c0(0xbadb4475,0,0);
  param_1[0x12e] = iVar19;
  if (param_1[0x12d] != 0) {
    *(undefined1 *)(param_1[0x12d] + 0x54) = 0;
    *(undefined1 *)(param_1[0x12d] + 0x51) = 2;
  }
  if (param_1[0x12e] != 0) {
    *(undefined1 *)(param_1[0x12e] + 0x54) = 0;
    *(undefined1 *)(param_1[0x12e] + 0x51) = 3;
  }
  if (param_1[0x12f] != 0) {
    *(undefined1 *)(param_1[0x12f] + 0x54) = 0;
    *(undefined1 *)(param_1[0x12f] + 0x51) = 4;
  }
  if (*param_1 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = *(int *)(unsigned int)((*param_1 + 0x868));
  }
  if (iVar19 != 0) {
    iVar15 = param_1[9];
    iVar24 = param_1[8];
    iVar5 = param_1[4];
    *(int *)(iVar19 + 0x5c) = param_1[5];
    *(int *)(iVar19 + 0x58) = iVar5;
    local_38 = (int *)0x1e;
    *(int *)(iVar19 + 0x60) = iVar24;
    *(int *)(iVar19 + 100) = iVar15;
    piVar29 = local_a8;
    do {
      FUN_0058d800(iVar19,piVar29);
      piVar29 = piVar29 + 0x18;
      local_38 = (int *)(unsigned int)(((int)local_38 + -1));
    } while (local_38 != (int *)0x0);
    local_38 = (int *)0x0;
  }
  fVar2 = (*(int *)0x006cc7a4);
  if (param_1[0x416] == 0) {
    pfVar16 = (float *)0x0;
  }
  else {
    pfVar16 = (float *)(param_1[0x416] + 0x70);
    if (pfVar16 != (float *)0x0) {
      fVar2 = *pfVar16;
    }
  }
  param_1[0xc] = (int)fVar2;
  fVar2 = (*(int *)0x006cc7a4);
  if (pfVar16 != (float *)0x0) {
    fVar2 = pfVar16[1];
  }
  param_1[0xd] = (int)fVar2;
  fVar2 = (*(int *)0x006cc7a4);
  if (pfVar16 != (float *)0x0) {
    fVar2 = pfVar16[2];
  }
  param_1[0xe] = (int)fVar2;
  FUN_0056cc40(param_1);
  if (*(char *)(param_2 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  pfVar16 = (float *)(param_2 + 0x70);
  FUN_005693d0(pfVar16);
  pfVar27 = (float *)(param_2 + 0xa0);
  FUN_005693d0(pfVar27);
  FUN_005693d0(param_2 + 0xd0);
  FUN_005693d0(param_2 + 0x100);
  local_80 = (*(float *)(param_2 + 0x100) + *pfVar16) * (*(int *)0x006cc7dc);
  local_7c = (*(float *)(param_2 + 0x104) + *(float *)(param_2 + 0x74)) * (*(int *)0x006cc7dc);
  local_78 = (*(float *)(param_2 + 0x108) + *(float *)(param_2 + 0x78)) * (*(int *)0x006cc7dc);
  FUN_005693d0(&local_80);
  local_60 = (*(float *)(param_2 + 0xd0) + *pfVar27) * (*(int *)0x006cc7dc);
  local_5c = (*(float *)(param_2 + 0xd4) + *(float *)(param_2 + 0xa4)) * (*(int *)0x006cc7dc);
  local_58 = (*(float *)(param_2 + 0xd8) + *(float *)(param_2 + 0xa8)) * (*(int *)0x006cc7dc);
  FUN_005693d0(&local_60);
  FUN_005693d0(pfVar16);
  FUN_005693d0(pfVar27);
  FUN_005693d0(param_2 + 0xd0);
  FUN_005693d0(param_2 + 0x100);
  FUN_005693d0(pfVar16);
  FUN_005693d0(param_2 + 0xd0);
  local_a0 = (local_60 + local_80) * (*(int *)0x006cc7dc);
  local_9c = (local_5c + local_7c) * (*(int *)0x006cc7dc);
  local_98 = (local_58 + local_78) * (*(int *)0x006cc7dc);
  FUN_005693d0(&local_a0);
  fVar8 = *(float *)(param_2 + 0x74) - *(float *)(param_2 + 0xa4);
  fVar3 = *(float *)(param_2 + 0x78) - *(float *)(param_2 + 0xa8);
  local_60 = *pfVar27 - *(float *)(param_2 + 0xd0);
  local_5c = *(float *)(param_2 + 0xa4) - *(float *)(param_2 + 0xd4);
  fVar7 = *(float *)(param_2 + 0xa8) - *(float *)(param_2 + 0xd8);
  fVar2 = fVar7 * fVar8 - local_5c * fVar3;
  local_6c = fVar3 * local_60 - fVar7 * (*pfVar16 - *pfVar27);
  local_68 = local_5c * (*pfVar16 - *pfVar27) - fVar8 * local_60;
  fVar3 = SQRT(fVar2 * fVar2 + local_6c * local_6c + local_68 * local_68);
  if (fVar3 == (*(int *)0x006cc7a4)) {
    local_68 = 0.0;
    local_70 = (*(int *)0x006cc7bc);
    fVar2 = (*(int *)0x006cc7a4);
  }
  else {
    fVar3 = (*(int *)0x006cc7bc) / fVar3;
    local_68 = local_68 * fVar3;
    local_70 = fVar2 * fVar3;
    fVar2 = local_6c * fVar3;
  }
  local_24 = *(int **)(unsigned int)((param_2 + 0x80));
  local_70 = (float)(unsigned int)(local_24) * local_70;
  local_a0 = local_70 + local_a0;
  local_9c = fVar2 * (float)(unsigned int)(local_24) + local_9c;
  local_98 = local_68 * (float)(unsigned int)(local_24) + local_98;
  FUN_005693d0(&local_a0);
  iVar19 = 0;
  local_24 = local_ac;
  do {
    iVar15 = 0;
    piVar29 = local_24;
    do {
      switch(iVar15) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
        if ((iVar19 == 0) || ((0 < iVar19 && (*piVar29 != piVar29[6])))) {
          aiStack_130[iVar15] = (int)(piVar29 + 4);
        }
        break;
      default:
        aiStack_130[iVar15] = 0;
      }
      iVar15 = iVar15 + 1;
      piVar29 = piVar29 + 0x18;
    } while (iVar15 < 0x1e);
    iVar24 = 0;
    iVar15 = 0;
    do {
      if (((aiStack_130[iVar15] != 0) && (iVar5 = *(int *)(aiStack_130[iVar15] + 0xc), iVar5 != 0))
         && (*(int *)(iVar5 + 0x84) != 0)) {
        local_570[iVar24] = iVar5;
        iVar24 = iVar24 + 1;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x1e);
    FUN_0053fd70(local_570,iVar24);
    iVar19 = iVar19 + 1;
    piVar29 = (int *)0x0;
    local_24 = local_24 + 6;
  } while (iVar19 < 4);
  iVar19 = *(int *)(unsigned int)((param_2 + 0x4c4));
  local_38 = (int *)0x0;
  if (iVar19 != 0) {
    piVar25 = *(int **)(iVar19 + 0x14);
    piVar17 = piVar25 + *(short *)(iVar19 + 0x1c) * 2;
    if (piVar25 != (int *)0x0) {
      for (; piVar25 < piVar17; piVar25 = piVar25 + 2) {
        if (*piVar25 == 0x6ba02c05) {
          if (piVar25 != (int *)0x0) {
            local_38 = (int *)piVar25[1];
            goto LAB_0056b528;
          }
          break;
        }
      }
    }
    local_38 = (int *)0x0;
  }
LAB_0056b528:
  if ((*(int *)0x00743c18) != 0) {
    piVar29 = (int *)(unsigned int)(((*(int *)0x00743c18) + -4));
  }
  local_28 = (int *)FUN_0040cb70();
  while ((piVar17 = (int *)PTR_DAT_006f3df0, piVar29 != local_28 &&
         (piVar17 = piVar29, (int *)piVar29[3] != local_38))) {
    if (piVar29[1] == 0) {
      piVar29 = (int *)0x0;
    }
    else {
      piVar29 = (int *)(piVar29[1] + -4);
    }
  }
  param_1[0x134] = (int)piVar17;
  iVar19 = *(int *)(unsigned int)((param_2 + 0x618));
  iVar15 = 0x471a1dca;
  if (iVar19 != 0) {
    piVar17 = *(int **)(iVar19 + 0x14);
    piVar29 = piVar17 + *(short *)(iVar19 + 0x1c) * 2;
    if (piVar17 != (int *)0x0) {
      for (; piVar17 < piVar29; piVar17 = piVar17 + 2) {
        if (*piVar17 == 0x6ba02c05) {
          if (piVar17 != (int *)0x0) {
            iVar15 = piVar17[1];
            goto LAB_0056b5ab;
          }
          break;
        }
      }
    }
    iVar15 = 0;
  }
LAB_0056b5ab:
  if (*(int *)0x00743c18 == 0) {
    piVar29 = (int *)0x0;
  }
  else {
    piVar29 = (int *)(unsigned int)(((*(int *)0x00743c18) + -4));
  }
  while ((piVar17 = (int *)PTR_DAT_006f3df0, piVar29 != local_28 &&
         (piVar17 = piVar29, piVar29[3] != iVar15))) {
    if (piVar29[1] == 0) {
      piVar29 = (int *)0x0;
    }
    else {
      piVar29 = (int *)(piVar29[1] + -4);
    }
  }
  param_1[0x135] = (int)piVar17;
  local_ac = *(int **)(unsigned int)((param_2 + 0x4e8));
  local_24 = *(int **)(unsigned int)((param_2 + 0x4ec));
  local_a8 = *(int **)(unsigned int)((param_2 + 0x4e4));
  iVar19 = *(int *)(unsigned int)((param_2 + 0x4f0));
  if ((*(int *)(unsigned int)((param_2 + 0x490)) == 0) || (*(char *)(*(int *)(unsigned int)((param_2 + 0x490) + 0x11)) == '\0')) {
    iVar19 = 0;
  }
  if ((*(int *)(unsigned int)((param_2 + 0x488)) == 0) || (*(char *)(*(int *)(unsigned int)((param_2 + 0x488) + 0x11)) == '\0')) {
    local_24 = (int *)0x0;
  }
  if ((*(int *)(unsigned int)((param_2 + 0x48c)) == 0) ||
     (iVar15 = (int)local_ac, *(char *)(*(int *)(unsigned int)((param_2 + 0x48c) + 0x11)) == '\0')) {
    iVar15 = 0;
  }
  if ((*(int *)(unsigned int)((param_2 + 0x478)) == 0) ||
     (iVar24 = (int)local_a8, *(char *)(*(int *)(unsigned int)((param_2 + 0x478) + 0x11)) == '\0')) {
    iVar24 = 0;
  }
  local_34 = (uint *)0x0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_44 = (int *)0x0;
  if (iVar19 != 0) {
    piVar17 = *(int **)(iVar19 + 0x14);
    piVar29 = piVar17 + *(short *)(iVar19 + 0x1c) * 2;
    if (piVar17 != (int *)0x0) {
      for (; piVar17 < piVar29; piVar17 = piVar17 + 2) {
        if (*piVar17 == 0x6ba02c05) {
          if (piVar17 != (int *)0x0) {
            local_34 = (uint *)piVar17[1];
            goto LAB_0056b6cb;
          }
          break;
        }
      }
    }
    local_34 = (uint *)0x0;
  }
LAB_0056b6cb:
  if (local_24 != (int *)0x0) {
    piVar17 = *(int **)(unsigned int)(((int)local_24 + 0x14));
    piVar29 = piVar17 + *(short *)((int)local_24 + 0x1c) * 2;
    if (piVar17 != (int *)0x0) {
      for (; piVar17 < piVar29; piVar17 = piVar17 + 2) {
        if (*piVar17 == 0x6ba02c05) {
          if (piVar17 != (int *)0x0) {
            local_38 = (int *)piVar17[1];
            goto LAB_0056b6f9;
          }
          break;
        }
      }
    }
    local_38 = (int *)0x0;
  }
LAB_0056b6f9:
  if (iVar15 != 0) {
    piVar17 = *(int **)(iVar15 + 0x14);
    piVar29 = piVar17 + *(short *)(iVar15 + 0x1c) * 2;
    if (piVar17 != (int *)0x0) {
      for (; piVar17 < piVar29; piVar17 = piVar17 + 2) {
        if (*piVar17 == 0x6ba02c05) {
          if (piVar17 != (int *)0x0) {
            local_3c = piVar17[1];
            goto LAB_0056b724;
          }
          break;
        }
      }
    }
    local_3c = 0;
  }
LAB_0056b724:
  if (iVar24 != 0) {
    piVar17 = *(int **)(iVar24 + 0x14);
    piVar29 = piVar17 + *(short *)(iVar24 + 0x1c) * 2;
    if (piVar17 != (int *)0x0) {
      for (; piVar17 < piVar29; piVar17 = piVar17 + 2) {
        if (*piVar17 == 0x6ba02c05) {
          if (piVar17 != (int *)0x0) {
            local_44 = (int *)piVar17[1];
            goto LAB_0056b754;
          }
          break;
        }
      }
    }
    local_44 = (int *)0x0;
  }
LAB_0056b754:
  local_24 = (int *)0x0;
  if (local_34 != (uint *)0x0) {
    piVar29 = local_24;
    if ((*(int *)0x00743c18) != 0) {
      piVar29 = (int *)(unsigned int)(((*(int *)0x00743c18) + -4));
    }
    while ((local_24 = (int *)PTR_DAT_006f3df0, piVar29 != local_28 &&
           (local_24 = piVar29, (uint *)piVar29[3] != local_34))) {
      if (piVar29[1] == 0) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)(piVar29[1] + -4);
      }
    }
  }
  if (local_38 == (int *)0x0) {
    piVar17 = (int *)0x0;
  }
  else {
    if (*(int *)0x00743c18 == 0) {
      piVar29 = (int *)0x0;
    }
    else {
      piVar29 = (int *)(unsigned int)(((*(int *)0x00743c18) + -4));
    }
    while ((piVar17 = (int *)PTR_DAT_006f3df0, piVar29 != local_28 &&
           (piVar17 = piVar29, (int *)piVar29[3] != local_38))) {
      if (piVar29[1] == 0) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)(piVar29[1] + -4);
      }
    }
  }
  if (local_3c == 0) {
    piVar25 = (int *)0x0;
  }
  else {
    if (*(int *)0x00743c18 == 0) {
      piVar29 = (int *)0x0;
    }
    else {
      piVar29 = (int *)(unsigned int)(((*(int *)0x00743c18) + -4));
    }
    while ((piVar25 = (int *)PTR_DAT_006f3df0, piVar29 != local_28 &&
           (piVar25 = piVar29, piVar29[3] != local_3c))) {
      if (piVar29[1] == 0) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)(piVar29[1] + -4);
      }
    }
  }
  if (local_44 == (int *)0x0) {
    piVar22 = (int *)0x0;
  }
  else {
    if (*(int *)0x00743c18 == 0) {
      piVar29 = (int *)0x0;
    }
    else {
      piVar29 = (int *)(unsigned int)(((*(int *)0x00743c18) + -4));
    }
    while ((piVar22 = (int *)PTR_DAT_006f3df0, piVar29 != local_28 &&
           (piVar22 = piVar29, (int *)piVar29[3] != local_44))) {
      if (piVar29[1] == 0) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)(piVar29[1] + -4);
      }
    }
  }
  param_1[0x136] = (int)local_24;
  param_1[0x137] = (int)piVar17;
  param_1[0x138] = (int)piVar25;
  param_1[0x139] = (int)piVar22;
  FUN_0056c250();
  piVar29 = (*(int **)0x00734610);
  iVar19 = *(int *)(extraout_EDX + 0x14d8);
  piVar17 = (int *)0x0;
  fVar2 = (*(int *)0x006cc7a4);
  while (iVar19 != 0) {
    piVar25 = *(int **)(iVar19 + 0x80);
    if ((piVar25 == (int *)0x0) || (*(char *)(iVar19 + 0x1b) == 0)) {
LAB_0056b8f2:
      piVar25 = (int *)0x0;
    }
    else if (piVar17 != (int *)0x0) {
      if ((piVar17 < piVar25) || (piVar25 + (*(char *)(iVar19 + 0x1b) * 5 + -5) * 4 <= piVar17))
      goto LAB_0056b8f2;
      piVar25 = piVar17 + 0x14;
    }
    if (piVar25 == (int *)0x0) break;
    piVar17 = piVar25;
    if (*piVar25 == -0x157204fb) {
      fVar2 = (float)(unsigned int)(piVar25[0x11]);
    }
  }
  *(float *)(extraout_EDX + 0x540) = fVar2;
  local_2c = piVar29 + 4;
  piVar17 = piVar29;
  if ((piVar29[4] == 0) && ((*(byte *)(piVar29 + 5) & 1) != 0)) {
    FUN_00566e60();
    piVar17 = (*(int **)0x00734610);
  }
  piVar25 = (int *)(unsigned int)(*local_2c);
  iVar19 = piVar29[6] + 1;
  if (piVar25 == (int *)0x0) {
    piVar25 = (int *)0x0;
  }
  else {
    iVar15 = *piVar25;
    if (piVar29[7] < iVar19) {
      piVar29[7] = iVar19;
    }
    piVar29[6] = iVar19;
    bVar4 = *(byte *)(piVar29 + 5);
    *local_2c = iVar15;
    if (((bVar4 & 2) != 0) && (iVar19 = piVar29[10] >> 2, piVar29 = piVar25, 0 < iVar19)) {
      for (; iVar19 != 0; iVar19 = iVar19 + -1) {
        *piVar29 = 0;
        piVar29 = piVar29 + 1;
      }
    }
    piVar17 = (*(int **)0x00734610);
    piVar25[4] = 0;
    piVar25[1] = 0;
    piVar25[2] = 0;
    piVar25[3] = 0;
  }
  puVar18 = (undefined4 *)(unsigned int)(local_40[1]);
  local_40[1] = (int)piVar25;
  *puVar18 = piVar25;
  *piVar25 = (int)local_40;
  if (*param_1 != 0) {
    piVar29 = *(int **)(unsigned int)((*param_1 + 0x20));
    local_2c = piVar17 + 4;
    local_40 = piVar17;
    local_24 = piVar29;
    if ((piVar17[4] == 0) && ((*(byte *)(piVar17 + 5) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar17 = (int *)(unsigned int)(*local_2c);
    iVar19 = local_40[6] + 1;
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      iVar15 = *piVar17;
      if (local_40[7] < iVar19) {
        local_40[7] = iVar19;
      }
      local_40[6] = iVar19;
      *local_2c = iVar15;
      if (((*(byte *)(local_40 + 5) & 2) != 0) &&
         (iVar19 = local_40[10] >> 2, piVar25 = piVar17, 0 < iVar19)) {
        for (; piVar29 = local_24, iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar25 = 0;
          piVar25 = piVar25 + 1;
        }
      }
      fVar7 = ((float)(unsigned int)(piVar29[0x12]) + (float)(unsigned int)(piVar29[6])) * (*(int *)0x006cc7dc);
      fVar8 = ((float)(unsigned int)(piVar29[0x11]) + (float)(unsigned int)(piVar29[5])) * (*(int *)0x006cc7dc);
      fVar2 = (float)(unsigned int)(piVar29[4]);
      fVar3 = (float)(unsigned int)(piVar29[0x10]);
      piVar17[4] = 0;
      piVar17[1] = (int)((fVar2 + fVar3) * (*(int *)0x006cc7dc));
      piVar17[2] = (int)fVar8;
      piVar17[3] = (int)fVar7;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x18e]);
    param_1[0x18e] = (int)piVar17;
    *puVar18 = piVar17;
    *piVar17 = (int)(param_1 + 0x18d);
    piVar17 = (*(int **)0x00734610);
    local_2c = (*(int **)0x00734610) + 4;
    local_40 = (*(int **)0x00734610);
    if (((*(int **)0x00734610)[4] == 0) && ((*(byte *)((*(int **)0x00734610) + 5) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar25 = (int *)(unsigned int)(*local_2c);
    iVar19 = piVar17[6] + 1;
    if (piVar25 == (int *)0x0) {
      piVar25 = (int *)0x0;
    }
    else {
      iVar15 = *piVar25;
      if (piVar17[7] < iVar19) {
        piVar17[7] = iVar19;
      }
      piVar17[6] = iVar19;
      *local_2c = iVar15;
      if (((*(byte *)(piVar17 + 5) & 2) != 0) &&
         (iVar19 = piVar17[10] >> 2, piVar17 = piVar25, 0 < iVar19)) {
        for (; piVar29 = local_24, iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar17 = 0;
          piVar17 = piVar17 + 1;
        }
      }
      fVar7 = ((float)(unsigned int)(piVar29[0x2a]) + (float)(unsigned int)(piVar29[0x1e])) * (*(int *)0x006cc7dc);
      fVar8 = ((float)(unsigned int)(piVar29[0x29]) + (float)(unsigned int)(piVar29[0x1d])) * (*(int *)0x006cc7dc);
      fVar2 = (float)(unsigned int)(piVar29[0x28]);
      fVar3 = (float)(unsigned int)(piVar29[0x1c]);
      piVar25[4] = 0;
      piVar25[1] = (int)((fVar2 + fVar3) * (*(int *)0x006cc7dc));
      piVar25[2] = (int)fVar8;
      piVar25[3] = (int)fVar7;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[400]);
    param_1[400] = (int)piVar25;
    *puVar18 = piVar25;
    *piVar25 = (int)(param_1 + 399);
    piVar17 = (*(int **)0x00734610);
    local_2c = (*(int **)0x00734610) + 4;
    local_40 = (*(int **)0x00734610);
    if (((*(int **)0x00734610)[4] == 0) && ((*(byte *)((*(int **)0x00734610) + 5) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar25 = (int *)(unsigned int)(*local_2c);
    iVar19 = piVar17[6] + 1;
    if (piVar25 == (int *)0x0) {
      piVar25 = (int *)0x0;
    }
    else {
      iVar15 = *piVar25;
      if (piVar17[7] < iVar19) {
        piVar17[7] = iVar19;
      }
      piVar17[6] = iVar19;
      *local_2c = iVar15;
      if (((*(byte *)(piVar17 + 5) & 2) != 0) &&
         (iVar19 = piVar17[10] >> 2, piVar17 = piVar25, 0 < iVar19)) {
        for (; piVar29 = local_24, iVar19 != 0; iVar19 = iVar19 + -1) {
          *piVar17 = 0;
          piVar17 = piVar17 + 1;
        }
      }
      fVar7 = ((float)(unsigned int)(piVar29[0x2a]) + (float)(unsigned int)(piVar29[6])) * (*(int *)0x006cc7dc);
      fVar8 = ((float)(unsigned int)(piVar29[0x29]) + (float)(unsigned int)(piVar29[5])) * (*(int *)0x006cc7dc);
      fVar2 = (float)(unsigned int)(piVar29[4]);
      fVar3 = (float)(unsigned int)(piVar29[0x28]);
      piVar25[4] = 0;
      piVar25[1] = (int)((fVar2 + fVar3) * (*(int *)0x006cc7dc));
      piVar25[2] = (int)fVar8;
      piVar25[3] = (int)fVar7;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x192]);
    param_1[0x192] = (int)piVar25;
    *puVar18 = piVar25;
    *piVar25 = (int)(param_1 + 0x191);
    piVar17 = (int *)FUN_00567160();
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      fVar7 = ((float)(unsigned int)(piVar29[0x1e]) + (float)(unsigned int)(piVar29[0x12])) * (*(int *)0x006cc7dc);
      fVar8 = ((float)(unsigned int)(piVar29[0x1d]) + (float)(unsigned int)(piVar29[0x11])) * (*(int *)0x006cc7dc);
      fVar2 = (float)(unsigned int)(piVar29[0x1c]);
      fVar3 = (float)(unsigned int)(piVar29[0x10]);
      piVar17[4] = 0;
      piVar17[1] = (int)((fVar2 + fVar3) * (*(int *)0x006cc7dc));
      piVar17[2] = (int)fVar8;
      piVar17[3] = (int)fVar7;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x194]);
    param_1[0x194] = (int)piVar17;
    *puVar18 = piVar17;
    *piVar17 = (int)(param_1 + 0x193);
    piVar17 = (int *)FUN_00567160();
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      iVar19 = piVar29[6];
      iVar15 = piVar29[5];
      iVar24 = piVar29[4];
      piVar17[4] = 0;
      piVar17[1] = iVar24;
      piVar17[2] = iVar15;
      piVar17[3] = iVar19;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x196]);
    param_1[0x196] = (int)piVar17;
    *puVar18 = piVar17;
    *piVar17 = (int)(param_1 + 0x195);
    piVar17 = (int *)FUN_00567160();
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      iVar19 = piVar29[0x12];
      iVar15 = piVar29[0x11];
      iVar24 = piVar29[0x10];
      piVar17[4] = 0;
      piVar17[1] = iVar24;
      piVar17[2] = iVar15;
      piVar17[3] = iVar19;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x198]);
    param_1[0x198] = (int)piVar17;
    *puVar18 = piVar17;
    *piVar17 = (int)(param_1 + 0x197);
    piVar17 = (int *)FUN_00567160();
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      iVar19 = piVar29[0x1e];
      iVar15 = piVar29[0x1d];
      iVar24 = piVar29[0x1c];
      piVar17[4] = 0;
      piVar17[1] = iVar24;
      piVar17[2] = iVar15;
      piVar17[3] = iVar19;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x19a]);
    param_1[0x19a] = (int)piVar17;
    *puVar18 = piVar17;
    *piVar17 = (int)(param_1 + 0x199);
    piVar17 = (int *)FUN_00567160();
    if (piVar17 == (int *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      iVar19 = piVar29[0x2a];
      iVar15 = piVar29[0x29];
      iVar24 = piVar29[0x28];
      piVar17[4] = 0;
      piVar17[1] = iVar24;
      piVar17[2] = iVar15;
      piVar17[3] = iVar19;
    }
    puVar18 = (undefined4 *)(unsigned int)(param_1[0x19c]);
    param_1[0x19c] = (int)piVar17;
    *puVar18 = piVar17;
    *piVar17 = (int)(param_1 + 0x19b);
  }
  local_2c = (int *)0x0;
  do {
    if (*(char *)((int)local_2c + 0x6a4 + param_1[1]) != '\0') {
      local_40 = param_1 + (int)local_2c * 0x18 + 0x39b;
      iVar19 = local_40[3];
      if (iVar19 != 0) {
        local_30 = *(uint **)(iVar19 + 0x80);
        if ((local_30 == (uint *)0x0) || (*(char *)(iVar19 + 0x1b) == '\0')) {
          local_30 = (uint *)0x0;
        }
        while (local_30 != (uint *)0x0) {
          uVar13 = *local_30;
          local_28 = (int *)0x0;
          if (uVar13 < 0x9db90134) {
            if (uVar13 == 0x9db90133) {
LAB_0056bf45:
              local_28 = param_1 + 0x1b3;
              piVar29 = param_1 + 0x1af;
            }
            else if (uVar13 < 0x494ed281) {
              if (uVar13 != 0x494ed280) {
                if (uVar13 < 0x1b0763a1) {
                  if (uVar13 == 0x1b0763a0) {
LAB_0056be62:
                    piVar29 = param_1 + 0x1a5;
                    goto LAB_0056c015;
                  }
                  if (uVar13 < 0xab88f5e) {
                    if (uVar13 == 0xab88f5d) {
LAB_0056be4c:
                      piVar29 = param_1 + 0x1ad;
                      goto LAB_0056c015;
                    }
                    if (uVar13 == 0x2b52399) goto LAB_0056bf85;
                    if (uVar13 == 0x5f63788) goto LAB_0056be07;
                  }
                  else if (uVar13 == 0xbea251b) goto LAB_0056be1d;
                }
                else if (uVar13 < 0x3df28f6a) {
                  if (uVar13 == 0x3df28f69) goto LAB_0056c00f;
                  if (uVar13 == 0x2f96d0fd) goto LAB_0056be4c;
                  if (uVar13 == 0x31a66786) goto LAB_0056bfd5;
                }
                else if (uVar13 == 0x3f68f920) goto LAB_0056be62;
                goto LAB_0056c091;
              }
LAB_0056bfc2:
              piVar29 = param_1 + 0x1c1;
            }
            else if (uVar13 < 0x68100816) {
              if (uVar13 != 0x68100815) {
                if (uVar13 < 0x60f8b13d) {
                  if (uVar13 == 0x60f8b13c) {
LAB_0056beab:
                    piVar29 = param_1 + 0x1ab;
                    goto LAB_0056c015;
                  }
                  if (uVar13 == 0x4cdebfca) goto LAB_0056c007;
                  if (uVar13 == 0x59a55db5) {
                    piVar29 = param_1 + 0x19d;
                    goto LAB_0056c015;
                  }
                }
                else if (uVar13 == 0x64b0bb1c) goto LAB_0056beab;
                goto LAB_0056c091;
              }
              piVar29 = param_1 + 0x1a1;
            }
            else {
              if (uVar13 != 0x6ec7e79f) {
                if (uVar13 == 0x725758bf) goto LAB_0056bf59;
                if (uVar13 != 0x7b220ddf) goto LAB_0056c091;
              }
              piVar29 = param_1 + 0x1a3;
            }
LAB_0056c015:
            if (piVar29 != (int *)0x0) {
              puVar18 = (undefined4 *)FUN_00567160();
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = (undefined4 *)0x0;
              }
              else {
                puVar18[4] = local_30;
                puVar18[1] = local_30[0x10];
                puVar18[2] = local_30[0x11];
                puVar18[3] = local_30[0x12];
              }
              puVar6 = (undefined4 *)piVar29[1];
              piVar29[1] = (int)puVar18;
              *puVar6 = puVar18;
              *puVar18 = piVar29;
            }
            if (local_28 != (int *)0x0) {
              puVar18 = (undefined4 *)FUN_00567160();
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = (undefined4 *)0x0;
              }
              else {
                puVar18[4] = local_30;
                puVar18[1] = local_30[0x10];
                puVar18[2] = local_30[0x11];
                puVar18[3] = local_30[0x12];
              }
              puVar6 = (undefined4 *)(unsigned int)(local_28[1]);
              local_28[1] = (int)puVar18;
              *puVar6 = puVar18;
              *puVar18 = local_28;
            }
          }
          else {
            if (0xc4ec23c8 < uVar13) {
              if (uVar13 < 0xdf066a42) {
                if (uVar13 == 0xdf066a41) {
LAB_0056bfff:
                  piVar29 = param_1 + 0x19f;
                }
                else if (uVar13 < 0xd09091c7) {
                  if (uVar13 == 0xd09091c6) {
LAB_0056bf26:
                    local_28 = param_1 + 0x1b5;
                    piVar29 = param_1 + 0x1af;
                  }
                  else {
                    if (uVar13 != 0xc52bf01b) {
                      if (uVar13 == 0xc805f7e0) goto LAB_0056bfc2;
                      goto LAB_0056c091;
                    }
LAB_0056be1d:
                    piVar29 = param_1 + 0x1bd;
                  }
                }
                else {
                  if (uVar13 != 0xd947f346) goto LAB_0056c091;
LAB_0056bfd5:
                  local_28 = param_1 + 0x1b7;
                  piVar29 = param_1 + 0x1b1;
                }
              }
              else if (uVar13 == 0xe7e4ef49) {
LAB_0056c00f:
                piVar29 = param_1 + 0x1a7;
              }
              else {
                if (uVar13 != 0xe898cfaa) {
                  if (uVar13 != 0xf21be91e) goto LAB_0056c091;
                  goto LAB_0056bfff;
                }
LAB_0056c007:
                piVar29 = param_1 + 0x1a9;
              }
              goto LAB_0056c015;
            }
            if (uVar13 == 0xc4ec23c8) {
LAB_0056be07:
              piVar29 = param_1 + 0x1bb;
              goto LAB_0056c015;
            }
            if (uVar13 < 0xaa35c180) {
              if (uVar13 == 0xaa35c17f) {
LAB_0056bf59:
                piVar29 = param_1 + 0x1bf;
                goto LAB_0056c015;
              }
              if (uVar13 < 0xa5b28002) {
                if ((uVar13 == 0xa5b28001) || (uVar13 == 0xa2799c2b)) goto LAB_0056bfff;
                if (uVar13 == 0xa532fc46) goto LAB_0056bf26;
              }
              else if (uVar13 == 0xa7e6ea53) goto LAB_0056bf45;
            }
            else {
              if ((uVar13 == 0xbcf8a18b) || (uVar13 == 0xbd7cf15e)) goto LAB_0056bfff;
              if (uVar13 == 0xbf700a79) {
LAB_0056bf85:
                local_28 = param_1 + 0x1b9;
                piVar29 = param_1 + 0x1b1;
                goto LAB_0056c015;
              }
            }
          }
LAB_0056c091:
          iVar19 = local_40[3];
          if (iVar19 == 0) break;
          puVar28 = *(uint **)(iVar19 + 0x80);
          if ((((puVar28 == (uint *)0x0) || (*(char *)(iVar19 + 0x1b) == 0)) || (local_30 < puVar28)
              ) || (puVar28 + (*(char *)(iVar19 + 0x1b) * 5 + -5) * 4 <= local_30)) {
            local_30 = (uint *)0x0;
          }
          else {
            local_30 = local_30 + 0x14;
          }
        }
      }
    }
    local_2c = (int *)(unsigned int)(((int)local_2c + 1));
    if (0x1d < (int)local_2c) {
      puVar18 = ((int *)0x006f1bcc);
      do {
        FUN_00402ad0(*puVar18);
        puVar18 = puVar18 + 2;
      } while ((int)puVar18 < 0x6f1cb4);
      ExceptionList = local_1c;
      return param_1;
    }
  } while( true );
}
