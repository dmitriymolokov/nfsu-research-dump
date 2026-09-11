/* spd-match: far pct=7.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

int __cdecl FUN_00401c80();
int __cdecl FUN_00428170();
void __cdecl FUN_004282b0(float *param_1, float *param_2, int param_3);
int __cdecl FUN_00440a40();
int __cdecl FUN_00465530();
int __cdecl FUN_00569a00();
int __cdecl FUN_00572970();
int __cdecl FUN_00674898();
extern int DAT_006b7b7c;
extern int DAT_006b7b80;
extern int DAT_006cc7a4;
extern unsigned char *DAT_006ef314;
extern unsigned char *DAT_006ef318;
extern unsigned char *DAT_006ef320;
extern unsigned char *DAT_006ef324;
extern unsigned char *DAT_006ef32c;
extern unsigned char *DAT_006ef330;
extern unsigned char *DAT_006ef338;
extern unsigned char *DAT_006ef33c;
extern unsigned char *DAT_006ef344;
extern unsigned char *DAT_006ef348;
extern unsigned char *DAT_006f08a4;
extern int DAT_007000e4;
extern unsigned char *DAT_0073619c;
extern int DAT_0073ad34;
extern int DAT_0078a336;
extern int _DAT_006b7b48;
extern int _DAT_006b7b4c;
extern int _DAT_006b7b90;
extern int _DAT_006b7b94;
extern int _DAT_006b7b98;
extern int _DAT_006b7b9c;
extern int _DAT_006b7ba0;
extern int _DAT_006b7bc4;
extern int _DAT_006b7bc8;
extern int _DAT_006b7bcc;
extern int _DAT_006b7bd0;
extern int _DAT_006b7bd4;
extern int _DAT_006b7bd8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7c8;
extern int _DAT_006cc7dc;
extern int _DAT_006cc90c;
extern int _DAT_006cc9f0;
extern int _DAT_006cc9f8;
extern int _DAT_006cca08;
extern int _DAT_006cca38;
extern int _DAT_006cca94;
extern int _DAT_006ccac0;
extern int _DAT_006ccc00;
extern int _DAT_006ccd58;
extern int _DAT_006ffff0;
extern unsigned char *PTR_DAT_006ef310;
extern unsigned char *PTR_DAT_006ef31c;
extern unsigned char *PTR_DAT_006ef328;
extern unsigned char *PTR_DAT_006ef334;
extern void LAB_00428b95(void);
extern void LAB_00428c89(void);
extern void LAB_00428d42(void);
extern void LAB_00428d4a(void);
extern void LAB_00428df0(void);
extern void LAB_00428e63(void);

void FUN_004286a0(float param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  float10 fVar9;
  float *local_70;
  float fLocal_70;
  float local_6c;
  int local_64;
  float *local_60;
  int *local_58;
  int local_54;
  float local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float fStack_18;
  
  if (DAT_006cc7a4 == *(float *)(unaff_EBX + 0x8bc)) {
    *(float *)(unaff_EBX + 0x8bc) = (float)DAT_0073ad34 * _DAT_006cca38;
  }
  local_44 = *(float *)(unaff_EBX + 0x3d4) * _DAT_006cc9f0;
  local_4c = 0;
  bVar2 = false;
  local_50 = 0.0;
  local_64 = 0;
  local_54 = unaff_EBX + 0xf0;
  local_60 = (float *)(unaff_EBX + 0x8ac);
  local_70 = (float *)(unaff_EBX + 0x374);
  local_58 = (int *)(unaff_EBX + 0x354);
  local_6c = 4.59177e-40;
  do {
    if (*(char *)(unaff_EBX + 0x350 + local_64) != '\0') {
      local_50 = (float)((int)local_50 + 1);
      iVar5 = *local_58;
      iVar6 = iVar5 * 0x94;
      if ((iVar5 == 0xd) || (iVar5 == 0xe)) {
        local_4c = local_4c | 1 << ((byte)local_64 & 0x1f);
        bVar2 = (bool)(bVar2 | iVar5 == 0xe);
      }
      local_48 = SQRT(*local_70 * *local_70 + local_70[1] * local_70[1]);
      if ((_DAT_006b7b94 <= param_1) || (local_48 <= *(float *)(&DAT_006ef32c + iVar6))) {
        *local_60 = 0.0;
      }
      else {
        fVar7 = ((float)DAT_0073ad34 * _DAT_006cca38 - *(float *)(unaff_EBX + 0x8bc)) + *local_60;
        *local_60 = fVar7;
        if (((&PTR_DAT_006ef328)[iVar5 * 0x25] != (char *)0x0) &&
           (*(&PTR_DAT_006ef328)[iVar5 * 0x25] != '\0')) {
          fVar1 = (local_48 - *(float *)(&DAT_006ef32c + iVar6)) /
                  (*(float *)(&DAT_006ef330 + iVar6) - *(float *)(&DAT_006ef32c + iVar6));
          if (_DAT_006b7bc4 <= fVar7) {
            if (_DAT_006b7bc8 <= fVar7) {
              if (_DAT_006b7bcc <= fVar7) {
                if (fVar7 < _DAT_006b7bd0) {
                  fVar1 = fVar1 * _DAT_006cca08;
                }
              }
              else {
                fVar1 = fVar1 * _DAT_006cc7dc;
              }
            }
            else {
              fVar1 = fVar1 * _DAT_006cc90c;
            }
          }
          else {
            fVar1 = fVar1 * DAT_006cc7a4;
          }
          local_48 = DAT_006cc7a4;
          if ((DAT_006cc7a4 < fVar1) && (local_48 = fVar1, _DAT_006cc7bc < fVar1)) {
            local_48 = _DAT_006cc7bc;
          }
          local_60[-0x142] = local_48;
          if (DAT_006cc7a4 < local_48) {
            FUN_00569a00(unaff_EBX,local_48,(int)local_6c + iVar5,0);
          }
        }
      }
      if ((((param_1 < _DAT_006b7b90) && (local_6c != 4.59177e-40)) && (local_6c != 5.51013e-40)) &&
         (((*(float *)(&DAT_006ef338 + iVar6) < *local_70 &&
           ((&PTR_DAT_006ef334)[iVar5 * 0x25] != (char *)0x0)) &&
          (*(&PTR_DAT_006ef334)[iVar5 * 0x25] != '\0')))) {
        fVar9 = (float10)FUN_00401c80((*local_70 - *(float *)(&DAT_006ef338 + iVar6)) /
                                      (*(float *)(&DAT_006ef33c + iVar6) -
                                      *(float *)(&DAT_006ef338 + iVar6)),0,0x3f800000);
        local_48 = (float)fVar9;
        if ((float10)DAT_006cc7a4 < fVar9) {
          local_30 = *local_70;
          local_2c = local_70[1];
          local_28 = 0;
          FUN_004282b0(&local_40,&local_30,local_54);
          local_40 = local_40 + *(float *)(unaff_EBX + 0x70);
          fStack_3c = *(float *)(unaff_EBX + 0x74) + fStack_3c;
          fStack_38 = *(float *)(unaff_EBX + 0x78) + fStack_38;
          fStack_18 = fStack_38;
          FUN_00569a00(unaff_EBX,local_48,(int)local_6c + iVar5,&local_40);
        }
      }
    }
    local_58 = local_58 + 1;
    local_64 = local_64 + 1;
    local_60 = local_60 + 1;
    local_6c = (float)((int)local_6c + 0x10000);
    local_70 = local_70 + 2;
    local_54 = local_54 + 0x40;
  } while ((int)local_6c < 0x90000);
  if (2 < (int)local_50) {
    FUN_00440a40(unaff_EBX + 0x540,unaff_EBX + 0x60,&local_48,0,0);
    fVar7 = local_48;
    iVar5 = (int)local_48 * 0x94;
    local_6c = 0.0;
    if (((*(&PTR_DAT_006ef310)[(int)local_48 * 0x25] != '\0') &&
        (fVar1 = (local_44 - *(float *)(&DAT_006ef314 + iVar5)) /
                 (*(float *)(&DAT_006ef318 + iVar5) - *(float *)(&DAT_006ef314 + iVar5)),
        local_6c = DAT_006cc7a4, DAT_006cc7a4 < fVar1)) && (local_6c = fVar1, _DAT_006cc7bc < fVar1)
       ) {
      local_6c = _DAT_006cc7bc;
    }
    fLocal_70 = 0.0;
    if (((*(&PTR_DAT_006ef31c)[(int)local_48 * 0x25] != '\0') &&
        (fVar1 = (local_44 - *(float *)(&DAT_006ef320 + iVar5)) /
                 (*(float *)(&DAT_006ef324 + iVar5) - *(float *)(&DAT_006ef320 + iVar5)),
        fLocal_70 = DAT_006cc7a4, DAT_006cc7a4 < fVar1)) &&
       (fLocal_70 = fVar1, _DAT_006cc7bc < fVar1)) {
      fLocal_70 = _DAT_006cc7bc;
    }
    if (DAT_006cc7a4 < fLocal_70 + local_6c) {
      fVar1 = (fLocal_70 + local_6c) - _DAT_006cc7bc;
      if (fVar1 <= DAT_006cc7a4) {
LAB_00428b95:
        if (DAT_006cc7a4 < local_6c) {
          FUN_00569a00(unaff_EBX,local_6c,local_48,0);
        }
      }
      else {
        if (*(float *)(&DAT_006ef320 + iVar5) <= *(float *)(&DAT_006ef314 + iVar5)) {
          fLocal_70 = fLocal_70 - (fVar1 + fVar1);
          if (fLocal_70 <= DAT_006cc7a4) {
            fLocal_70 = 0.0;
          }
          goto LAB_00428b95;
        }
        local_6c = local_6c - (fVar1 + fVar1);
        if (DAT_006cc7a4 < local_6c) goto LAB_00428b95;
      }
      if (DAT_006cc7a4 < fLocal_70) {
        FUN_00569a00(unaff_EBX,fLocal_70,fVar7,0);
      }
    }
    fVar1 = ((*(float *)(unaff_EBX + 0x330) + *(float *)(unaff_EBX + 0x334) +
              *(float *)(unaff_EBX + 0x338) + *(float *)(unaff_EBX + 0x33c)) -
            *(float *)(&DAT_006ef344 + iVar5)) /
            (*(float *)(&DAT_006ef348 + iVar5) - *(float *)(&DAT_006ef344 + iVar5));
    local_50 = DAT_006cc7a4;
    if ((fVar1 <= DAT_006cc7a4) || (local_50 = fVar1, fVar1 <= _DAT_006cc7bc)) {
      if (local_50 <= DAT_006cc7a4) goto LAB_00428c89;
    }
    else {
      local_50 = 1.0;
    }
    if (*(int **)(unaff_EBX + 0x878) != (int *)0x0) {
      iVar5 = **(int **)(unaff_EBX + 0x878);
      uVar3 = FUN_00674898(0);
      (**(code **)(iVar5 + 0x5c))(5,uVar3);
      fVar7 = local_48;
    }
    FUN_00569a00(unaff_EBX,local_50,fVar7,0);
  }
LAB_00428c89:
  if (((_DAT_006b7b98 <= param_1) || ((int)local_4c < 1)) ||
     (*(float *)(unaff_EBX + 0x3d4) <= _DAT_006cca94)) {
LAB_00428d42:
    if (!bVar2) goto LAB_00428d4a;
  }
  else {
    FUN_00428170();
    if ((*(int *)(*(int *)(unaff_EBX + 0x14) + 4) != 1) ||
       (*(char *)(*(int *)(unaff_EBX + 0x14) + 0x734) != '\0')) goto LAB_00428d42;
    uVar4 = ((uintptr_t)DAT_006f08a4 + 3U) & 0x80000003;
    bVar8 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar8 = (uVar4 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((!bVar8) || (*(float *)(unaff_EBX + 0x3d4) <= _DAT_006ccac0)) goto LAB_00428d42;
    if (bVar2) {
      if (*(char *)(unaff_EBX + 0x8e8) == '\0') {
        FUN_00572970(DAT_006b7b7c,"InDeepWater");
        *(undefined1 *)(unaff_EBX + 0x8e8) = 1;
      }
      goto LAB_00428d42;
    }
    FUN_00572970(DAT_006b7b80,"InShallowWater");
LAB_00428d4a:
    *(undefined1 *)(unaff_EBX + 0x8e8) = 0;
  }
  iVar5 = *(int *)(unaff_EBX + 0x868);
  if (iVar5 != 0) {
    fVar7 = DAT_006cc7a4;
    if (DAT_0078a336 != '\0') {
      local_44 = (float)(uint)*(ushort *)(iVar5 + 0x34);
      fVar7 = (float)(int)local_44 * _DAT_006cc7c8;
    }
    if (fVar7 <= _DAT_006b7b48) {
      if ((*(uint *)(iVar5 + 0xe0) & 0x30000000) == 0x30000000) {
        fVar7 = DAT_006cc7a4;
        if (DAT_0078a336 != '\0') {
          local_44 = (float)(uint)*(ushort *)(iVar5 + 0x34);
          fVar7 = (float)(int)local_44 * _DAT_006cc7c8;
        }
        if (_DAT_006b7b4c < fVar7) goto LAB_00428df0;
      }
    }
    else {
LAB_00428df0:
      FUN_00569a00(unaff_EBX,0x3f800000,0,0);
    }
  }
  if (*(char *)(unaff_EBX + 0x83c) == '\0') {
    iVar5 = *(int *)(unaff_EBX + 0x3fc);
    if ((iVar5 == 0) || (iVar5 == 0x7fffffff)) goto LAB_00428e63;
    local_44 = (float)(DAT_0073ad34 - iVar5);
    if ((float)*(int *)(unaff_EBX + 0x3f8) * _DAT_006cca38 < (float)(int)local_44 * _DAT_006cca38) {
      FUN_00465530();
      goto LAB_00428e63;
    }
  }
  FUN_00569a00(unaff_EBX,0x3f800000,0,0);
LAB_00428e63:
  if (*(int *)(unaff_EBX + 0x3d8) == 1) {
    iVar5 = *(int *)(*(int *)(unaff_EBX + 0x10) + 0x14);
    local_44 = (float)iVar5;
    if (*(int *)(*(int *)(unaff_EBX + 0x10) + 0x40) != 0) {
      local_44 = (float)iVar5 + _DAT_006cc7dc;
    }
    if (_DAT_006ccc00 <= local_44) {
      fVar7 = *(float *)(*(int *)(unaff_EBX + 0x20) + 0x1f8) -
              *(float *)(*(int *)(unaff_EBX + 0x20) + 0x1f0);
      if (*(char *)(unaff_EBX + 0x83d) == '\0') {
        fVar1 = DAT_007000e4;
        if (DAT_007000e4 == _DAT_006cc9f8) {
          fVar1 = *(float *)(unaff_EBX + 0x3e0);
        }
        fVar7 = fVar7 * _DAT_006b7bd8;
        if (fVar1 < fVar7 != (fVar1 == fVar7)) {
          *(undefined1 *)(unaff_EBX + 0x83d) = 1;
        }
      }
      else {
        fVar1 = DAT_007000e4;
        if (DAT_007000e4 == _DAT_006cc9f8) {
          fVar1 = *(float *)(unaff_EBX + 0x3e0);
        }
        if (fVar7 * _DAT_006b7bd4 <= fVar1) {
          FUN_00569a00(unaff_EBX,local_44 * _DAT_006ccd58,1,0);
          *(undefined1 *)(unaff_EBX + 0x83d) = 0;
        }
      }
    }
  }
  if ((*(int *)(unaff_EBX + 0x3fc) != 0) && (*(int *)(unaff_EBX + 0x3fc) != 0x7fffffff)) {
    local_44 = (float)(DAT_0073ad34 - *(int *)(unaff_EBX + 0x3fc));
    if ((float)(int)local_44 * _DAT_006cca38 <= (float)*(int *)(unaff_EBX + 0x3f8) * _DAT_006cca38)
    {
      iVar5 = *DAT_0073619c;
      if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) || (iVar5 == 3)) {
        FUN_00569a00(unaff_EBX,0x3f800000,0,0);
      }
    }
    else {
      FUN_00465530();
    }
  }
  if (*(char *)(unaff_EBX + 0x86d) != '\0') {
    iVar6 = 0;
    iVar5 = 0x50000;
    do {
      if ((*(char *)(unaff_EBX + 0x350 + iVar6) != '\0') &&
         ((1 << ((byte)iVar6 & 0x1f) & (int)*(char *)(unaff_EBX + 0x86c)) != 0)) {
        fVar7 = (*(float *)(unaff_EBX + 0x3d4) * _DAT_006cc9f0 - _DAT_006b7b9c) /
                (_DAT_006b7ba0 - _DAT_006b7b9c);
        local_44 = DAT_006cc7a4;
        if ((DAT_006cc7a4 < fVar7) && (local_44 = fVar7, _DAT_006cc7bc < fVar7)) {
          local_44 = 1.0;
        }
        FUN_00569a00(unaff_EBX,local_44,iVar5,0);
      }
      iVar5 = iVar5 + 0x10000;
      iVar6 = iVar6 + 1;
    } while (iVar5 < 0x90000);
  }
  if (*(int *)(unaff_EBX + 0x28) == 1) {
    iVar5 = *(int *)(*(int *)(unaff_EBX + 0x34) + 0x48);
    if (_DAT_006ffff0 < *(float *)(iVar5 + 0x8c)) {
      FUN_00569a00(unaff_EBX,
                   (*(float *)(iVar5 + 0x8c) - _DAT_006ffff0) / (_DAT_006cc7bc - _DAT_006ffff0),0,0)
      ;
    }
    if (*(int *)(iVar5 + 0x94) != 0) {
      FUN_00569a00(unaff_EBX,0x3f800000,0,0);
    }
  }
  *(float *)(unaff_EBX + 0x8bc) = (float)DAT_0073ad34 * _DAT_006cca38;
  return;
}
