/* spd-match: far pct=9.64 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_11/attempt4_00579c00 */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_005ac68f();
int __cdecl FUN_005abda2();

int __cdecl FUN_00401cd0(...);
int __cdecl FUN_00440740(...);
int __cdecl FUN_00440a40(...);
int __cdecl FUN_0047b290(...);
int __cdecl FUN_0047b3d0(...);
int __cdecl FUN_00579190(...);
int __cdecl FUN_005abda2(...);
int __cdecl FUN_005ac68f(...);
extern int DAT_006b5c34;
extern int DAT_007361bc;
extern int DAT_007361c4;
extern int DAT_00779860;
extern int _DAT_006b5c30;
extern int _DAT_006cc7bc;
extern int _DAT_006ccab0;
extern void LAB_00579e9d(...);
extern void LAB_0068628b(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_00579c00(float param_2);
};
void ThisCallBox::FUN_00579c00(float param_2) {
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_390;
  float local_38c;
  float fStack_388;
  float local_378;
  float local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  undefined4 local_338;
  undefined4 local_334;
  float local_328;
  undefined1 local_320 [48];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [32];
  int aiStack_2c0 [160];
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = (unsigned char *)(unsigned int)&LAB_0068628b;
  local_1c = ExceptionList;
  if (*(int *)(((int)this) + 0x14) == 0) {
    iVar3 = *(int *)(((int)this) + 0x10);
    ExceptionList = &local_1c;
    FUN_00401cd0();
    iVar3 = *(int *)(iVar3 + 0xe4);
    goto joined_r0x00579f61;
  }
  iVar3 = *(int *)(((int)this) + 0x10);
  fVar1 = *(float *)(iVar3 + 0x80);
  local_378 = *(float *)(iVar3 + 0x84);
  local_374 = *(float *)(iVar3 + 0x88);
  ExceptionList = &local_1c;
  FUN_0047b290(param_2);
  FUN_0047b3d0();
  iVar3 = *(int *)(*(int *)(((int)this) + 0x14) + 0x1c);
  if ((*(uint *)(*(int *)(((int)this) + 0x14) + 0x34) & 1) == 0) {
    *(undefined4 *)(*(int *)(((int)this) + 0x10) + 0xe8) = 0;
    local_370 = 0x3f800000;
    local_36c = 0;
    local_368 = 0;
    local_364 = 0;
    local_360 = 0;
    local_35c = 0x3f800000;
    local_358 = 0;
    local_354 = 0;
    local_350 = 0;
    local_34c = 0;
    local_348 = 0x3f800000;
    local_344 = 0;
    local_340 = 0.0;
    local_33c = 0.0;
    local_338 = 0;
    local_334 = 0x3f800000;
    FUN_005ac68f(&local_370,iVar3 + 0x40,((int)this) + 0x20);
LAB_00579e9d:
    iVar3 = *(int *)(((int)this) + 0x10);
    FUN_00401cd0();
    if (*(int *)(iVar3 + 0xe4) == 0) {
      FUN_00579190();
    }
  }
  else {
    *(int *)(*(int *)(((int)this) + 0x10) + 0xe8) = iVar3;
    if (*(char *)(((int)this) + 0x71) == '\0') goto LAB_00579e9d;
    FUN_00401cd0();
    if (0 < DAT_007361c4) {
      iVar4 = 0;
      do {
        if ((*(int **)((&DAT_007361bc)[iVar4] + 0x27c) != (int *)0x0) &&
           (cVar2 = (**(code **)(**(int **)((&DAT_007361bc)[iVar4] + 0x27c) + 0x24))(),
           cVar2 == '\0')) {
          local_390 = 0.0;
          local_38c = DAT_006b5c34;
          fStack_388 = 0.0;
          FUN_005abda2(&local_390,&local_390,&DAT_00779860);
          local_340 = local_340 + local_390;
          local_33c = local_33c + local_38c;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_007361c4);
    }
    FUN_005ac68f(local_320,iVar3 + 0x40,&local_370);
    iStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_00440740();
    uStack_14 = 0;
    fVar5 = (float10)FUN_00440a40(auStack_2e0,auStack_2f0,0,0,0);
    if (*(char *)(((int)this) + 0x72) == '\0') {
      *(float *)(((int)this) + 0x6c) = (float)fVar5;
    }
    else {
      *(float *)(((int)this) + 0x6c) =
           (float)((float10)_DAT_006b5c30 * fVar5 +
                  ((float10)_DAT_006cc7bc - (float10)_DAT_006b5c30) *
                  (float10)*(float *)(((int)this) + 0x6c));
    }
    iVar3 = *(int *)(((int)this) + 0x10);
    local_338 = *(undefined4 *)(((int)this) + 0x6c);
    *(undefined1 *)(((int)this) + 0x72) = 1;
    FUN_00401cd0();
    if (*(int *)(iVar3 + 0xe4) == 0) {
      FUN_00579190();
    }
    iVar3 = 0;
    uStack_14 = 0xffffffff;
    if (0 < iStack_40) {
      do {
        *(char *)(aiStack_2c0[iVar3] + 8) = *(char *)(aiStack_2c0[iVar3] + 8) + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack_40);
    }
  }
  if (param_2 <= _DAT_006ccab0) {
    ExceptionList = local_1c;
    return;
  }
  iVar3 = *(int *)(((int)this) + 0x10);
  local_328 = *(float *)(iVar3 + 0x88);
  local_390 = *(float *)(iVar3 + 0x80) - fVar1;
  local_38c = *(float *)(iVar3 + 0x84) - local_378;
  param_2 = _DAT_006cc7bc / param_2;
  fStack_388 = (local_328 - local_374) * param_2;
  *(float *)(iVar3 + 0xa8) = fStack_388;
  *(float *)(iVar3 + 0xa0) = local_390 * param_2;
  *(float *)(iVar3 + 0xa4) = local_38c * param_2;
  iVar3 = *(int *)(iVar3 + 0xe4);
joined_r0x00579f61:
  if (iVar3 == 0) {
    FUN_00579190();
  }
  ExceptionList = local_1c;
  return;
}
