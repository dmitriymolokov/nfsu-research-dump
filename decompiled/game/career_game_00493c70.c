/* spd-match: far pct=4.04 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_9/buckets/p09_game_a/attempt3_c2440_thiscall */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_0040a880(...);
int __cdecl FUN_004387e0(...);
int __cdecl FUN_00440e00(...);
int __cdecl FUN_00442ed0(...);
int __cdecl FUN_004936e0(...);
int __cdecl FUN_00493a90(...);
int __cdecl FUN_00493bd0(...);
int __cdecl FUN_005825e0(...);
int __cdecl FUN_005829e0(...);
int __cdecl FUN_00582cf0(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b6c20;
extern int DAT_006b6c40;
extern int DAT_006cc7a4;
extern int DAT_007361f8;
extern int _DAT_006b6c3c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8bc;
extern void LAB_00493c60(...);
extern void LAB_00493e3c(...);
extern void LAB_00493e8a(...);
extern void LAB_00493f0f(...);
extern void LAB_00493f2f(...);
extern void LAB_00493f78(...);
extern void LAB_0068614b(...);
void *ExceptionList;

struct ThisCallBox {
  int FUN_00493c70(undefined4 param_2, undefined4 param_3, int param_4, int param_5, undefined4 param_6, float *param_7, float *param_8, int param_9, int param_10);
};
int ThisCallBox::FUN_00493c70(undefined4 param_2, undefined4 param_3, int param_4, int param_5, undefined4 param_6, float *param_7, float *param_8, int param_9, int param_10) {
  int ****ppppiVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ****_Memory;
  float fVar4;
  int ***_Memory_00;
  float *pfVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  float10 fVar17;
  float local_2174;
  int ***local_2170;
  int ***local_216c;
  int ***local_2168;
  float local_2164;
  int local_2160;
  float *local_215c;
  uint local_2158;
  int local_2154;
  float local_2150;
  float local_214c;
  float local_2148;
  int ***local_2134;
  float local_2130;
  float local_212c;
  float local_2128;
  char cStack_2121;
  undefined4 local_2120 [64];
  undefined4 local_2020 [4];
  undefined1 local_2010 [8];
  float local_2008 [2041];
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = (unsigned char *)(unsigned int)&LAB_0068614b;
  local_1c = ExceptionList;
  uStack_24 = 0x493c96;
  local_216c = (int ***)&local_216c;
  local_2168 = (int ***)&local_216c;
  iVar14 = 0;
  iVar7 = *(int *)(((int)DAT_007361f8) + 0x20) - *(int *)(((int)DAT_007361f8) + 0x1c);
  local_14 = 0;
  ExceptionList = &local_1c;
  uStack_20 = ((undefined4)this);
  if (0 < iVar7) {
    piVar16 = (int *)(((int)DAT_007361f8) + 0x28 + *(int *)(((int)DAT_007361f8) + 0x1c) * 4);
    do {
      if (*(char *)(*(int *)(*piVar16 + 0x1c) + 10) == '\x01') {
        ExceptionList = &local_1c;
        FUN_00493bd0(param_2,&local_216c,0);
        break;
      }
      iVar14 = iVar14 + 1;
      piVar16 = piVar16 + 1;
      ExceptionList = &local_1c;
    } while (iVar14 < iVar7);
  }
  iVar7 = *(int *)(((int)DAT_007361f8) + 0x1c);
  iVar15 = 0;
  iVar14 = DAT_007361f8;
  if (*(int *)(((int)DAT_007361f8) + 0x20) != iVar7 && -1 < *(int *)(((int)DAT_007361f8) + 0x20) - iVar7) {
    do {
      iVar7 = *(int *)(iVar14 + 0x28 + (iVar7 + iVar15) * 4);
      if ((*(char *)(*(int *)(iVar7 + 0x1c) + 10) == '\x02') || (*(int *)(iVar7 + 0x3cc) == 0)) {
        FUN_00493bd0(param_2,&local_216c,0);
        iVar14 = DAT_007361f8;
      }
      iVar7 = *(int *)(iVar14 + 0x1c);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(iVar14 + 0x20) - iVar7);
  }
  piVar16 = *(int **)(iVar14 + 0x10);
  if (piVar16 != (int *)(iVar14 + 0x10)) {
    do {
      if ((*(char *)(*(int *)(piVar16[0x19] + 600) + 0x15) == '\0') &&
         (*(char *)(*(int *)(piVar16[0x19] + 0x25c) + 0x15) == '\0')) {
        FUN_00493bd0(param_2,&local_216c,0);
        iVar14 = DAT_007361f8;
      }
      piVar16 = (int *)*piVar16;
    } while (piVar16 != (int *)(iVar14 + 0x10));
  }
  uVar10 = *(int *)(param_5 + 4) - 1;
  puVar9 = local_2120;
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  local_2160 = 0;
  local_2170 = local_216c;
  fVar13 = (float)0;
  local_2158 = uVar10;
  if (0 < param_10) {
    local_2134 = (int ***)FUN_0040a880();
    local_215c = local_2008;
    do {
      if (local_2170 == local_2134) break;
      FUN_00493a90();
      fVar17 = (float10)FUN_00582cf0(DAT_006b6c40,0x3c23d70a);
      local_2164 = (float)fVar17;
      iVar7 = *(int *)(param_4 + 8);
      if (iVar7 == 0) {
LAB_00493e3c:
        fVar13 = (float)(*(int *)(param_4 + 4) + -1);
      }
      else if (iVar7 == 1) {
        fVar13 = (float)*(int *)(param_4 + 4);
      }
      else {
        fVar13 = DAT_006cc7a4;
        if (iVar7 == 2) goto LAB_00493e3c;
      }
      if (ABS(*param_7) < _DAT_006cc8bc == (ABS(*param_7) == _DAT_006cc8bc)) {
        fVar13 = (local_2164 / fVar13 - param_7[1]) / *param_7;
      }
      else {
        fVar13 = param_7[1];
      }
      iVar7 = *(int *)(param_5 + 8);
      if (iVar7 == 0) {
LAB_00493e8a:
        fVar4 = (float)(*(int *)(param_5 + 4) + -1);
      }
      else if (iVar7 == 1) {
        fVar4 = (float)*(int *)(param_5 + 4);
      }
      else {
        fVar4 = DAT_006cc7a4;
        if (iVar7 == 2) goto LAB_00493e8a;
      }
      fVar4 = (fVar13 * *param_8 + param_8[1]) * fVar4;
      fVar17 = (float10)FUN_004387e0(fVar4);
      if ((float10)fVar4 < fVar17) {
        fVar17 = fVar17 - (float10)((int)_DAT_006cc7bc);
      }
      local_2174 = (float)fVar17;
      iVar7 = FUN_00674898();
      if (((iVar7 < 0) || ((int)uVar10 <= iVar7)) ||
         (pcVar11 = (char *)((int)local_2120 + iVar7), uVar10 = local_2158,
         *(char *)((int)local_2120 + iVar7) != '\0')) {
        iVar14 = iVar7 + -1;
        if (((-1 < iVar14) && (iVar14 < (int)uVar10)) &&
           (pcVar11 = (char *)((int)local_2120 + iVar7 + -1), uVar10 = local_2158, *pcVar11 == '\0')
           ) {
          local_2174 = (float)iVar14;
          goto LAB_00493f0f;
        }
      }
      else {
LAB_00493f0f:
        iVar7 = *(int *)(param_5 + 8);
        if (iVar7 == 0) {
LAB_00493f2f:
          local_2154 = *(int *)(param_5 + 4) + -1;
          fVar13 = (float)local_2154;
        }
        else if (iVar7 == 1) {
          fVar13 = (float)*(int *)(param_5 + 4);
        }
        else {
          fVar13 = DAT_006cc7a4;
          if (iVar7 == 2) goto LAB_00493f2f;
        }
        fVar13 = (*param_8 * ((float)(unsigned int)(DAT_006cc7a4)) + param_8[1]) * fVar13;
        uVar10 = local_2158;
        if (local_2174 < fVar13 == (local_2174 == fVar13)) {
          if (iVar7 == 0) {
LAB_00493f78:
            local_2154 = *(int *)(param_5 + 4) + -1;
            fVar13 = (float)local_2154;
          }
          else if (iVar7 == 1) {
            fVar13 = (float)*(int *)(param_5 + 4);
          }
          else {
            fVar13 = DAT_006cc7a4;
            if (iVar7 == 2) goto LAB_00493f78;
          }
          if (local_2174 < (param_8[1] + *param_8) * fVar13) {
            FUN_005829e0(local_2164);
            cVar6 = FUN_00440e00(&local_2130);
            uVar10 = local_2158;
            if ((cVar6 == '\0') &&
               (SQRT((local_2150 - local_2130) * (local_2150 - local_2130) +
                     (local_214c - local_212c) * (local_214c - local_212c) +
                     (local_2148 - local_2128) * (local_2148 - local_2128)) < _DAT_006b6c3c)) {
              local_215c[-6] = local_2174;
              local_215c[-1] = local_214c;
              local_215c[-2] = local_2150;
              local_2160 = local_2160 + 1;
              *local_215c = local_2148;
              local_215c = local_215c + 8;
              *pcVar11 = '\x01';
            }
          }
        }
      }
      local_2170 = (int ***)*local_2170;
      fVar13 = (float)local_2160;
    } while (local_2160 < param_10);
  }
  local_2164 = fVar13;
  FUN_00442ed0(local_2020,0x20,&LAB_00493c60);
  iVar7 = 0;
  if (0 < (int)fVar13) {
    puVar9 = local_2020;
    do {
      *(undefined4 *)(param_9 + iVar7 * 4) = *puVar9;
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 8;
    } while (iVar7 < (int)fVar13);
  }
  local_2170 = *(int ****)(param_5 + 0xc);
  iVar7 = 0;
  local_215c = (float *)0x0;
  if (0 < *(int *)(param_5 + 4)) {
    puVar12 = local_2010;
    do {
      pfVar5 = local_215c;
      if ((iVar7 < (int)local_2164) && ((float)(int)local_215c == *(float *)(param_9 + iVar7 * 4)))
      {
        FUN_005825e0(param_6,puVar12);
        iVar7 = iVar7 + 1;
        puVar12 = puVar12 + 0x20;
      }
      else {
        FUN_005825e0(param_6,local_2170);
      }
      local_2170 = (int ***)((int)local_2170 + 0x10);
      local_215c = (float *)((int)pfVar5 + 1);
      fVar13 = local_2164;
    } while ((int)local_215c < *(int *)(param_5 + 4));
  }
  FUN_004936e0(param_6,DAT_006b6c20,param_9,fVar13);
  if ((int ****)local_216c != &local_216c) {
    do {
      _Memory_00 = local_216c;
      pppiVar2 = (int ***)*local_216c;
      pppiVar3 = (int ***)local_216c[1];
      *pppiVar3 = (int **)pppiVar2;
      ppppiVar1 = (int ****)(local_216c + 2);
      pppiVar2[1] = (int **)pppiVar3;
      _Memory = (int ****)*ppppiVar1;
      while (_Memory != ppppiVar1) {
        pppiVar2 = *_Memory;
        pppiVar3 = _Memory[1];
        *pppiVar3 = (int **)pppiVar2;
        pppiVar2[1] = (int **)pppiVar3;
        _free(_Memory);
        _Memory = (int ****)*ppppiVar1;
      }
      _free(_Memory_00);
    } while ((int ****)local_216c != &local_216c);
  }
  ExceptionList = local_1c;
  return (int)fVar13;
}
