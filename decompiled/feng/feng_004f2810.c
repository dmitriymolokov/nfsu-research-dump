/* spd-match: far pct=5.82 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_9/buckets/p09_feng/attempt5_f2810_thunk_stack */
#include "ghidra_compat.h"

void FUN_005abda2(void *, void *, float *);
void FUN_005ac68f(void);

int __cdecl FUN_004f1810();
int __cdecl FUN_004f27d0();
int __cdecl FUN_00567370();
extern void LAB_004f2ba7(void);

void FUN_004f2810(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 **ppuVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *extraout_EDX;
  undefined1 *puVar9;
  float *pfVar10;
  int iVar11;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  undefined4 *puStack_104;
  float fVar12;
  float fVar13;
  float afStack_f4 [6];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 *puStack_b8;
  int iStack_b4;
  uint uStack_b0;
  float fStack_a4;
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c [3];
  undefined1 local_50 [76];
  
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_5c[2] = 1.0;
  local_60 = 0x43a00000;
  local_5c[0] = 240.0;
  local_5c[1] = 0.0;
  puStack_108 = (undefined1 *)(uint)*(ushort *)(*(int *)(param_2 + 0x54) + 0x20);
  puStack_104 = (undefined4 *)0x3f800000;
  puStack_10c = local_a0;
  FUN_004f1810(param_1);
  puStack_104 = &local_90;
  puStack_108 = local_50;
  puStack_10c = local_50;
  ;
  iVar11 = *(int *)(*(int *)(param_2 + 0x54) + 0x18);
  if ((iVar11 != 1) && (iVar11 != 9)) {
    return;
  }
  fVar12 = -0.5;
  afStack_f4[0] = 0.0;
  afStack_f4[2] = 0.5;
  afStack_f4[3] = -0.5;
  afStack_f4[4] = 0.0;
  fStack_dc = 0.5;
  fStack_d8 = 0.5;
  fStack_d4 = 0.0;
  fStack_cc = -0.5;
  fStack_c8 = 0.5;
  fStack_c4 = 0.0;
  iVar11 = 4;
  ppuVar5 = &puStack_10c;
  do {
    puVar9 = (undefined1 *)((int)ppuVar5 + 0x10);
    ;
    *(undefined4 *)((int)ppuVar5 + 0x18) = 0;
    fVar13 = afStack_f4[2];
    fVar1 = afStack_f4[0];
    iVar11 = iVar11 + -1;
    ppuVar5 = (undefined1 **)puVar9;
  } while (iVar11 != 0);
  fVar2 = (*(float *)0x006b6760) + -0.5;
  uVar6 = *(uint *)(param_2 + 0xb0) & 0xfffffffe;
  *(uint *)(param_2 + 0xb0) = uVar6;
  if ((((fVar2 < fStack_cc) ||
       (-0.5 - (*(float *)0x006b6760) < fStack_cc == (-0.5 - (*(float *)0x006b6760) == fStack_cc))) ||
      ((*(float *)0x006b6760) + afStack_f4[2] < fStack_dc)) ||
     (((afStack_f4[2] - (*(float *)0x006b6760) < fStack_dc == (afStack_f4[2] - (*(float *)0x006b6760) == fStack_dc) ||
       ((*(float *)0x006b6760) + -0.5 < afStack_f4[3])) ||
      ((-0.5 - (*(float *)0x006b6760) < afStack_f4[3] == (-0.5 - (*(float *)0x006b6760) == afStack_f4[3]) ||
       (((*(float *)0x006b6760) + fStack_d8 < fStack_c8 ||
        (fStack_d8 - (*(float *)0x006b6760) < fStack_c8 == (fStack_d8 - (*(float *)0x006b6760) == fStack_c8))))))))) {
    if ((fVar2 < afStack_f4[2]) ||
       (((((-0.5 - (*(float *)0x006b6760) < afStack_f4[2] == (-0.5 - (*(float *)0x006b6760) == afStack_f4[2]) ||
           ((*(float *)0x006b6760) + fStack_dc < fStack_cc)) ||
          (fStack_dc - (*(float *)0x006b6760) < fStack_cc == (fStack_dc - (*(float *)0x006b6760) == fStack_cc))) ||
         (((*(float *)0x006b6760) + -0.5 < fStack_c8 ||
          (-0.5 - (*(float *)0x006b6760) < fStack_c8 == (-0.5 - (*(float *)0x006b6760) == fStack_c8))))) ||
        (((*(float *)0x006b6760) + afStack_f4[3] < fStack_d8 ||
         (afStack_f4[3] - (*(float *)0x006b6760) < fStack_d8 == (afStack_f4[3] - (*(float *)0x006b6760) == fStack_d8))
         ))))) goto LAB_004f2ba7;
    *(uint *)(param_2 + 0xb0) = uVar6 | 1;
    fStack_a4 = afStack_f4[0];
    afStack_f4[0] = afStack_f4[4];
    afStack_f4[2] = fStack_dc;
    afStack_f4[3] = fStack_d8;
    afStack_f4[4] = fStack_d4;
    fStack_dc = fStack_cc;
    fStack_d8 = fStack_c8;
    fStack_d4 = fStack_c4;
    fStack_c4 = fVar1;
    fStack_cc = fVar12;
    fStack_c8 = -0.5;
  }
  else {
    *(uint *)(param_2 + 0xb0) = uVar6 | 1;
    fVar13 = fVar12;
  }
  FUN_004f27d0();
  fVar12 = fVar13;
LAB_004f2ba7:
  iStack_b4 = (unsigned int)(float *)local_5c - (param_2 + 0x60);
  puStack_b8 = (unsigned char *)puStack_10c - (param_2 + 0x60);
  uVar6 = 0;
  pfVar10 = (float *)(param_2 + 0x68);
  iVar11 = 0;
  do {
    uStack_b0 = uVar6 + 1;
    uVar7 = uVar6 + 1 & 3;
    iVar8 = uVar7 * 0x10;
    fVar1 = *(float *)(((unsigned char *)puStack_10c + iVar8));
    fVar13 = *(float *)(((unsigned char *)puStack_10c + iVar11));
    *pfVar10 = 0.0;
    fVar2 = *(float *)(((unsigned char *)puStack_10c + 4 + iVar8));
    fVar3 = afStack_f4[uVar7 * 4];
    fVar4 = *(float *)((unsigned char *)((unsigned int)puStack_b8 + (unsigned int)pfVar10));
    fStack_a4 = fVar3 - fVar4;
    *(float *)((unsigned int)(float *)local_5c + iVar11) = fVar1 - fVar13;
    *(float *)((int)((unsigned int)pfVar10 + iStack_b4 - 4)) = fVar2 - *(float *)(((unsigned char *)puStack_10c + 4 + iVar11));
    *(float *)((int)((unsigned int)pfVar10 + iStack_b4)) = fVar3 - fVar4;
    fVar1 = *(float *)((unsigned int)(float *)local_5c + iVar11 + 4);
    pfVar10[-1] = *(float *)((unsigned int)(float *)local_5c + iVar11);
    pfVar10[-2] = -fVar1;
    FUN_00567370();
    iVar8 = iVar11 + 0x10;
    *(float *)(param_2 + 0xa0 + uVar6 * 4) =
         -(*extraout_EDX * *(float *)(((unsigned char *)puStack_10c + iVar11)) +
          *(float *)((unsigned char *)((unsigned int)puStack_b8 + (unsigned int)pfVar10)) * *pfVar10 +
          pfVar10[-1] * *(float *)(((unsigned char *)puStack_10c + 4 + iVar11)));
    uVar6 = uStack_b0;
    pfVar10 = pfVar10 + 4;
    iVar11 = iVar8;
  } while (iVar8 < 0x40);
  if ((*(byte *)(param_2 + 0xb0) & 1) != 0) {
    *(float *)(param_2 + 0xac) = fVar12;
    *(float *)(param_2 + 0xa0) = afStack_f4[3];
    *(float *)(param_2 + 0xa4) = fStack_dc;
    *(float *)(param_2 + 0xa8) = fStack_c8;
  }
  return;
}
