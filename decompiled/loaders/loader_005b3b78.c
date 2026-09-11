/* spd-match: far pct=5.62 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/buckets/p1_05/attempt3_005b3b78_thiscall */
#include "ghidra_compat.h"

int __cdecl lstrcmpiA(const char *, const char *);
long __cdecl __ftol(void);
extern undefined *p08_PTR_s_ZENABLE_006d5660;
extern undefined *p08_PTR_s_TEXTURE_006d4da8;

int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b2ae3(...);
int __cdecl FUN_005b2b74(...);
int __cdecl FUN_005b2c79(...);
int __cdecl FUN_005b2d7a(...);
int __cdecl FUN_005b3675(...);
extern int DAT_006cc7a4;
extern unsigned char *DAT_006d5670;
extern int DAT_006d5674;
extern int _DAT_006cc7bc;
extern int _DAT_006cc858;
extern void LAB_005b3c43(...);
extern void LAB_005b3d19(...);
extern void LAB_005b3d34(...);
extern void LAB_005b3fc9(...);
extern void LAB_005b3fcb(...);
extern void LAB_005b403d(...);
extern void LAB_005b404a(...);
extern void LAB_005b4104(...);
extern void LAB_005b4110(...);
extern void LAB_005b415d(...);
extern void LAB_005b4211(...);
extern void LAB_005b4256(...);
extern void LAB_005b43ba(...);
extern void LAB_005b43cf(...);
extern void LAB_005b459f(...);
extern void LAB_005b476e(...);
extern void LAB_005b4775(...);
extern void LAB_005b4781(...);
extern void LAB_005b4798(...);
extern void LAB_005b4a60(...);
extern void LAB_005b4abb(...);
extern void LAB_005b4b72(...);
extern void LAB_005b4bdf(...);
extern void LAB_005b4bec(...);
extern void LAB_005b4c02(...);
extern void LAB_005b4c20(...);
extern void LAB_005b4c25(...);
extern void LAB_005b4c33(...);

struct ThisCallBox {
  int FUN_005b3b78(int param_2, int param_3, int param_4, int *param_5, undefined4 param_6, undefined4 param_7, undefined *param_8);
};
int ThisCallBox::FUN_005b3b78(int param_2, int param_3, int param_4, int *param_5, undefined4 param_6, undefined4 param_7, undefined *param_8) {
  int iVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar20;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  char *pcVar21;
  undefined *puVar22;
  undefined **local_4c;
  int *local_44;
  undefined *local_40;
  int local_3c;
  int local_38;
  undefined **local_34;
  float *local_30;
  int local_2c;
  int local_28;
  size_t local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined *local_c;
  int local_8;
  
  iVar13 = 0;
  local_3c = 0;
  local_30 = (float *)0x0;
  local_44 = (int *)0x0;
  local_2c = 0;
  bVar3 = false;
  ppuVar5 = &p08_PTR_s_ZENABLE_006d5660;
  if (param_8 != (undefined *)0xffffffff) {
    ppuVar5 = &p08_PTR_s_TEXTURE_006d4da8;
  }
  puVar22 = *ppuVar5;
  iVar10 = *(int *)(param_2 + 8);
  iVar9 = *(int *)(iVar10 + 0x10);
  local_18 = 0;
  local_1c = iVar9;
  local_34 = ppuVar5;
  local_8 = ((int)this);
  while ((puVar22 != (undefined *)0x0 &&
         (iVar6 = lstrcmpiA((const char *)*ppuVar5,*(LPCSTR *)(iVar9 + 0x18)), iVar6 != 0))) {
    local_18 = local_18 + 1;
    ppuVar5 = ppuVar5 + 7;
    puVar22 = *ppuVar5;
  }
  ppuVar5 = local_34 + local_18 * 7;
  puVar22 = *ppuVar5;
  if (puVar22 == (undefined *)0x0) {
    pcVar21 = "ID3DXEffectCompiler: Unrecognized state \'%s\'";
    puVar22 = *(undefined **)(iVar9 + 0x18);
    goto LAB_005b4bec;
  }
  local_40 = (undefined *)0x0;
  if (*(int *)(iVar10 + 0x14) == 0) {
    if (ppuVar5[4] != (undefined *)0x1) {
      pcVar21 = "ID3DXEffectCompiler: Index is required for state \'%s\'";
      goto LAB_005b4bec;
    }
  }
  else {
    puVar7 = ppuVar5[4];
    if (puVar7 == (undefined *)0x1) {
      pcVar21 = "ID3DXEffectCompiler: State \'%s\' is not indexed";
      goto LAB_005b4bec;
    }
    local_40 = *(undefined **)(*(int *)(iVar10 + 0x14) + 0x18);
    if ((puVar7 != (undefined *)0x0) && (puVar7 <= local_40)) {
      puVar7 = puVar7 + -1;
      pcVar21 = "ID3DXEffectCompiler: Max index for effect state \'%s\' is %d";
LAB_005b3c43:
      FUN_005b1f01(local_8 + 0xc,iVar9 + 0x10,0,pcVar21,puVar22,puVar7);
      return -0x7fffbffb;
    }
  }
  if (param_8 != (undefined *)0xffffffff) {
    local_18 = 0;
    local_34 = &p08_PTR_s_ZENABLE_006d5660;
    if (p08_PTR_s_ZENABLE_006d5660 != (undefined *)0x0) {
      local_4c = &p08_PTR_s_ZENABLE_006d5660;
      do {
        iVar6 = lstrcmpiA((const char *)*local_4c,*(LPCSTR *)(iVar9 + 0x18));
        if (iVar6 == 0) break;
        local_18 = local_18 + 1;
        local_4c = local_4c + 7;
      } while (*local_4c != (undefined *)0x0);
    }
    local_40 = param_8;
  }
  iVar6 = local_8;
  iVar4 = local_18;
  if (*(int *)(&DAT_006d5670 + local_18 * 0x1c) == 0x105) {
    if ((((local_40 < (undefined *)0x10) || (local_40 == (undefined *)0x101)) ||
        (local_40 == (undefined *)0x102)) ||
       ((local_40 == (undefined *)0x103 || (local_40 == (undefined *)0x104)))) {
      if ((&DAT_006d5674)[local_18 * 7] == 0x800000d) {
        pcVar21 = 
        "ID3DXEffectCompiler: DMAPOFFSET sampler state can only be used with D3DDMAPSAMPLER (i.e. sampler index 256)"
        ;
        goto LAB_005b3d19;
      }
    }
    else if (local_40 != (undefined *)0x100) {
      pcVar21 = "ID3DXEffectCompiler: Invalid sampler index %d";
      puVar22 = local_40;
      goto LAB_005b4bec;
    }
  }
  iVar1 = *(int *)(iVar10 + 0x18);
  if (*(int *)(iVar1 + 4) == 1) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      return -0x7fffbffb;
    }
    if (*(int *)(iVar6 + 4) == 2) {
      if ((*(int *)(iVar6 + 0x10) < 5) || (local_c = (undefined *)0x3, 8 < *(int *)(iVar6 + 0x10)))
      {
        local_c = (undefined *)0x2;
      }
      local_10 = 1;
      local_24 = 4;
    }
    else {
      if (*(int *)(iVar6 + 4) != 0xc) goto LAB_005b3d34;
      iVar6 = 0;
      for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        if (*(int *)(iVar1 + 4) != 1) {
          return -0x7fffbffb;
        }
        iVar13 = *(int *)(iVar1 + 8);
        if (iVar13 == 0) {
          return -0x7fffbffb;
        }
        if (*(int *)(iVar13 + 4) != 0xc) {
          return -0x7fffbffb;
        }
        if (*(int *)(iVar13 + 0x10) == 0) {
          return -0x7fffbffb;
        }
        local_3c = FUN_005b2d7a(*(int *)(iVar13 + 0x10),&local_c,&local_10,&local_14,&local_28,
                                &local_20,&local_24);
        if (local_3c < 0) {
          return local_3c;
        }
        if ((((local_c != (undefined *)0x3) && (local_c != (undefined *)0x2)) &&
            (local_c != (undefined *)0x1)) ||
           (((local_14 != 1 || (local_10 != 1)) || ((local_28 != 0 || (local_20 != 0)))))) {
          pcVar21 = "ID3DXEffectCompiler: Initializers must be numeric scalars";
          iVar6 = local_8;
          goto LAB_005b3d19;
        }
        iVar6 = iVar6 + 1;
        iVar13 = local_3c;
      }
      if ((local_34[iVar4 * 7 + 1] == (undefined *)0x3) ||
         (local_c = (undefined *)0x2, local_34[iVar4 * 7 + 1] == (undefined *)0xf20000)) {
        local_c = (undefined *)0x3;
      }
      local_24 = iVar6 << 2;
      local_10 = iVar6;
    }
    local_14 = 1;
    local_20 = 0;
    local_28 = 0;
  }
  else {
    if (*(int *)(iVar1 + 4) != 0xc) {
LAB_005b3d34:
      puVar22 = local_34[local_18 * 7];
      pcVar21 = "ID3DXEffectCompiler: State \'%s\' was assigned an unsupported value";
      goto LAB_005b4bec;
    }
    iVar13 = FUN_005b2d7a(*(undefined4 *)(iVar1 + 0x10),&local_c,&local_10,&local_14,&local_28,
                          &local_20,&local_24);
    if (iVar13 < 0) {
      return iVar13;
    }
    local_3c = iVar13;
    if (local_c == (undefined *)0x0) {
      pcVar21 = "ID3DXEffectCompiler: Assignment cannot be a structure";
      goto LAB_005b3d19;
    }
  }
  ppuVar5 = local_34 + iVar4 * 7;
  puVar22 = ppuVar5[1];
  if ((int)puVar22 < 0xb) {
    if (puVar22 == (undefined *)0xa) {
      if ((local_28 != 0) || (local_20 != 0)) {
LAB_005b4bdf:
        puVar22 = *ppuVar5;
        pcVar21 = "ID3DXEffectCompiler: State \'%s\' cannot be assigned an array or structure";
        goto LAB_005b4bec;
      }
      if (((local_10 != 1) || (local_14 != 1)) ||
         ((local_c != (undefined *)0xa &&
          ((((local_c != (undefined *)0xb && (local_c != (undefined *)0xc)) &&
            (local_c != (undefined *)0xd)) &&
           ((local_c != (undefined *)0xe && (local_c != (undefined *)0x2)))))))) {
        puVar22 = *ppuVar5;
        pcVar21 = "ID3DXEffectCompiler: State \'%s\' was not assigned a sampler type";
        goto LAB_005b4bec;
      }
    }
    else {
      if ((int)puVar22 < 1) goto LAB_005b4c02;
      if ((int)puVar22 < 3) goto LAB_005b403d;
      if (puVar22 != (undefined *)0x3) {
        if (puVar22 == (undefined *)0x5) {
          if ((local_28 != 0) || (local_20 != 0)) goto LAB_005b4bdf;
          if (((local_10 != 1) || (local_14 != 1)) ||
             (((((local_c != (undefined *)0x5 && (local_c != (undefined *)0x6)) &&
                (local_c != (undefined *)0x7)) &&
               ((local_c != (undefined *)0x8 && (local_c != (undefined *)0x9)))) &&
              (local_c != (undefined *)0x2)))) {
            puVar22 = *ppuVar5;
            pcVar21 = "ID3DXEffectCompiler: State \'%s\' was not assigned a texture type";
            goto LAB_005b4bec;
          }
          goto LAB_005b415d;
        }
        goto LAB_005b4c02;
      }
      puVar22 = ppuVar5[5];
      if (puVar22 < (undefined *)0x6000206) {
        if (puVar22 != (undefined *)0x6000205) {
          if (puVar22 < (undefined *)0x6000002) goto LAB_005b3fcb;
          if ((((undefined *)0x6000007 < puVar22) && (puVar22 != (undefined *)0x6000102)) &&
             (puVar22 != (undefined *)0x6000105)) {
            bVar16 = puVar22 == (undefined *)0x6000202;
            goto LAB_005b3fc9;
          }
        }
LAB_005b403d:
        if (local_20 != 0) goto LAB_005b415d;
      }
      else {
        if (((puVar22 == (undefined *)0x6000302) || (puVar22 == (undefined *)0x6000305)) ||
           (puVar22 == (undefined *)0x6000402)) goto LAB_005b403d;
        bVar16 = puVar22 == (undefined *)0x6000405;
LAB_005b3fc9:
        if (bVar16) goto LAB_005b403d;
LAB_005b3fcb:
        if (ppuVar5[2] != (undefined *)0x1) goto LAB_005b403d;
        puVar22 = ppuVar5[3];
        if (puVar22 != (undefined *)0x1) {
          if (((undefined *)0x2 < puVar22) && (puVar22 < (undefined *)0x5)) {
            if (((local_14 == 1) && ((local_10 == 3 || (local_10 == 4)))) &&
               ((local_28 == 0 && (local_20 == 0)))) goto LAB_005b404a;
            if (((local_c != (undefined *)0x2) || (local_10 != 1)) || (local_14 != 1)) {
              puVar22 = *ppuVar5;
              pcVar21 = 
              "ID3DXEffectCompiler: State \'%s\' must be assigned a 3-vector or a 4-vector or a uint scalar"
              ;
              goto LAB_005b4bec;
            }
          }
          goto LAB_005b403d;
        }
        if (((local_10 != 1) || (local_14 != 1)) || ((local_28 != 0 || (local_20 != 0)))) {
          puVar22 = *ppuVar5;
          pcVar21 = "ID3DXEffectCompiler: State \'%s\' must be assigned a scalar";
          goto LAB_005b4bec;
        }
      }
LAB_005b404a:
      if (((local_c != (undefined *)0x3) && (local_c != (undefined *)0x2)) &&
         (local_c != (undefined *)0x1)) {
        puVar22 = *ppuVar5;
        pcVar21 = "ID3DXEffectCompiler: State \'%s\' must be assigned a numeric value";
        goto LAB_005b4bec;
      }
    }
LAB_005b415d:
    if (iVar13 < 0) {
      FUN_005b1f01(local_8 + 0xc,iVar9 + 0x10,0,
                   "ID3DXEffectCompiler: State \'%s\' was assigned an expression of incompatible type"
                   ,*ppuVar5);
      return iVar13;
    }
    while (param_2 = *(int *)(param_2 + 0xc), param_2 != 0) {
      iVar9 = *(int *)(param_2 + 8);
      iVar6 = lstrcmpiA((const char *)*ppuVar5,*(LPCSTR *)(*(int *)(iVar9 + 0x10) + 0x18));
      if (iVar6 == 0) {
        if (param_8 != (undefined *)0xffffffff) {
          return iVar13;
        }
        iVar9 = *(int *)(iVar9 + 0x14);
        if (iVar9 == 0) {
          return iVar13;
        }
        if (local_40 == *(undefined **)(iVar9 + 0x18)) {
          return iVar13;
        }
      }
    }
    iVar9 = *(int *)(iVar10 + 0x18);
    if (*(int *)(iVar9 + 4) == 1) {
      iVar6 = *(int *)(iVar9 + 8);
      if (iVar6 == 0) {
        return -0x7fffbffb;
      }
      if (*(int *)(iVar6 + 4) == 2) {
        if ((*(int *)(iVar6 + 0x10) < 5) || (8 < *(int *)(iVar6 + 0x10))) {
          param_8 = (undefined *)0x0;
          for (param_2 = iVar9; iVar9 = local_1c, param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
            if (*(int *)(param_2 + 4) != 1) {
              return -0x7fffbffb;
            }
            iVar13 = *(int *)(param_2 + 8);
            if (iVar13 == 0) {
              return -0x7fffbffb;
            }
            if (*(int *)(iVar13 + 4) != 2) {
              return -0x7fffbffb;
            }
            iVar6 = *(int *)(iVar13 + 0x10);
            if (iVar6 < 2) {
LAB_005b4a60:
              pcVar21 = "ID3DXEffectCompiler: State \'%s\' accepts only dwords and ids";
              puVar22 = *ppuVar5;
              goto LAB_005b4bec;
            }
            if (iVar6 < 5) {
              uVar11 = *(uint *)(iVar13 + 0x18);
            }
            else {
              if (iVar6 != 9) goto LAB_005b4a60;
              if (*(int *)(iVar13 + 0x18) == 0) {
                return -0x7fffbffb;
              }
              piVar12 = (int *)ppuVar5[6];
              if (piVar12 == (int *)0x0) {
                puVar7 = *(undefined **)(iVar13 + 0x18);
                puVar22 = *ppuVar5;
                pcVar21 = "ID3DXEffectCompiler: State \'%s\' does not accept \'%s\' as a value";
                goto LAB_005b3c43;
              }
              iVar6 = 0;
              iVar9 = *piVar12;
              while ((iVar9 != 0 &&
                     (iVar9 = lstrcmpiA((LPCSTR)piVar12[iVar6 * 2],*(LPCSTR *)(iVar13 + 0x18)),
                     iVar9 != 0))) {
                piVar12 = (int *)ppuVar5[6];
                iVar6 = iVar6 + 1;
                iVar9 = piVar12[iVar6 * 2];
              }
              if (*(int *)(ppuVar5[6] + iVar6 * 8) == 0) {
                FUN_005b1f01(local_8 + 0xc,local_1c + 0x10,0,
                             "ID3DXEffectCompiler: State \'%s\' does not accept \'%s\' as a value",
                             *ppuVar5,*(undefined4 *)(iVar13 + 0x18));
                return -0x7fffbffb;
              }
              uVar11 = *(uint *)((int)(ppuVar5[6] + iVar6 * 8) + 4);
            }
            param_8 = (undefined *)((uint)param_8 | uVar11);
            iVar13 = local_3c;
          }
          puVar22 = ppuVar5[5];
          if (puVar22 == (undefined *)0x5000000) {
LAB_005b4abb:
            if (param_8 != (undefined *)0x0) {
              pcVar21 = 
              "ID3DXEffectCompiler: Dword expressions for state \'%s\' must be evaluate to NULL";
              puVar22 = *ppuVar5;
LAB_005b4bec:
              FUN_005b1f01(local_8 + 0xc,iVar9 + 0x10,0,pcVar21,puVar22);
              return -0x7fffbffb;
            }
          }
          else if (puVar22 == (undefined *)0x6000000) {
            if (param_8 != (undefined *)0x0) {
              puVar22 = *local_34;
              local_18 = 0;
              ppuVar5 = local_34;
              while ((puVar22 != (undefined *)0x0 && (ppuVar5[5] != (undefined *)0x6000008))) {
                local_18 = local_18 + 1;
                ppuVar5 = ppuVar5 + 7;
                puVar22 = *ppuVar5;
              }
              bVar3 = true;
            }
          }
          else {
            if (puVar22 == (undefined *)0x6000001) goto LAB_005b4abb;
            if (puVar22 == (undefined *)0x6000008) {
              if (param_8 == (undefined *)0x0) {
                pcVar21 = "ID3DXEffectCompiler: FVFs must not evaluate to NULL";
                param_2 = 0;
                param_8 = (undefined *)0x0;
                iVar6 = local_8;
LAB_005b3d19:
                FUN_005b1f01(iVar6 + 0xc,iVar9 + 0x10,0,pcVar21);
                return -0x7fffbffb;
              }
            }
            else if (puVar22 == (undefined *)0x9000000) {
              return iVar13;
            }
          }
          iVar13 = FUN_005b2b74(&param_8,4,&param_2);
          if (iVar13 < 0) {
            return iVar13;
          }
        }
        else {
          param_8 = (undefined *)(uintptr_t)(unsigned int)(float)*(double *)(iVar6 + 0x18);
          iVar13 = FUN_005b2b74(&param_8,4,&param_2);
          if (iVar13 < 0) {
            return iVar13;
          }
        }
      }
      else if (*(int *)(iVar6 + 4) == 0xc) {
        local_30 = (float *)_malloc(local_24);
        if (local_30 == (float *)0x0) {
LAB_005b459f:
          iVar13 = -0x7ff8fff2;
          goto LAB_005b4c33;
        }
        pfVar14 = local_30;
        for (uVar11 = local_24 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pfVar14 = 0.0;
          pfVar14 = pfVar14 + 1;
        }
        for (uVar11 = local_24 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)pfVar14 = 0;
          pfVar14 = (float *)((int)pfVar14 + 1);
        }
        pfVar14 = local_30;
        for (param_2 = *(int *)(iVar10 + 0x18); param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
          if (((*(int *)(param_2 + 4) != 1) || (iVar13 = *(int *)(param_2 + 8), iVar13 == 0)) ||
             (*(int *)(iVar13 + 4) != 0xc)) goto LAB_005b4798;
          param_8 = (undefined *)0x0;
          if (((*(int *)(iVar13 + 0x1c) == 5) && (iVar9 = *(int *)(iVar13 + 0x20), iVar9 != 0)) &&
             (*(int *)(iVar9 + 4) == 0xc)) {
            param_8 = (undefined *)0x1;
            while ((iVar13 = iVar9, *(int *)(iVar13 + 0x1c) == 0 &&
                   (iVar9 = *(int *)(iVar13 + 0x20), iVar9 != 0))) {
              if ((*(int *)(iVar9 + 4) != 1) ||
                 ((iVar9 = *(int *)(iVar9 + 8), iVar9 == 0 || (*(int *)(iVar9 + 4) != 0xc)))) break;
            }
          }
          if ((*(int *)(iVar13 + 0x1c) != 0) ||
             ((((iVar13 = *(int *)(iVar13 + 0x20), iVar13 == 0 || (*(int *)(iVar13 + 4) != 1)) ||
               (iVar13 = *(int *)(iVar13 + 8), iVar13 == 0)) ||
              ((*(int *)(iVar13 + 4) != 0xd || (*(int *)(iVar13 + 0x10) == 6)))))) {
            pcVar21 = 
            "ID3DXEffectCompiler: Initializer list elements cannot be complex expressions or variables"
            ;
LAB_005b4781:
            FUN_005b1f01(local_8 + 0xc,local_1c + 0x10,0,pcVar21);
            goto LAB_005b4798;
          }
          puVar22 = ppuVar5[1];
          if ((int)puVar22 < 1) {
LAB_005b4775:
            pcVar21 = "ID3DXEffectCompiler: Error in type checking";
            goto LAB_005b4781;
          }
          if ((int)puVar22 < 3) {
            iVar9 = *(int *)(iVar13 + 0x10);
            if (iVar9 == 0) {
              *pfVar14 = (float)(uint)(*(int *)(iVar13 + 0x18) != 0);
            }
            else if ((iVar9 == 1) || (iVar9 == 2)) {
              *pfVar14 = *(float *)(iVar13 + 0x18);
            }
            else {
              if (iVar9 != 3) {
LAB_005b476e:
                pcVar21 = "ID3DXEffectCompiler: Unexpected error";
                goto LAB_005b4781;
              }
              fVar8 = (float)__ftol();
              *pfVar14 = fVar8;
            }
            if (param_8 != (undefined *)0x0) {
              *pfVar14 = (float)-(int)*pfVar14;
            }
          }
          else {
            if ((puVar22 != (undefined *)0x3) && (puVar22 != (undefined *)0xf20000))
            goto LAB_005b4775;
            iVar9 = *(int *)(iVar13 + 0x10);
            if (iVar9 == 0) {
              fVar8 = (float)(*(int *)(iVar13 + 0x18) != 0);
            }
            else if (iVar9 == 1) {
              fVar8 = (float)*(int *)(iVar13 + 0x18);
            }
            else if (iVar9 == 2) {
              fVar8 = (float)*(int *)(iVar13 + 0x18);
              if (*(int *)(iVar13 + 0x18) < 0) {
                fVar8 = fVar8 + _DAT_006cc858;
              }
            }
            else {
              if (iVar9 != 3) goto LAB_005b476e;
              fVar8 = (float)*(double *)(iVar13 + 0x18);
            }
            *pfVar14 = fVar8;
            if (param_8 != (undefined *)0x0) {
              *pfVar14 = -*pfVar14;
            }
          }
          pfVar14 = pfVar14 + 1;
        }
        if (ppuVar5[1] == (undefined *)0xf20000) {
          fVar17 = (float10)local_30[3];
          fVar18 = (float10)_DAT_006cc7bc;
          fVar8 = local_30[1];
          fVar2 = local_30[2];
          fVar19 = (float10)DAT_006cc7a4;
          if ((float10)*local_30 < fVar18) {
            fVar20 = (float10)*local_30;
            if (fVar20 < fVar19 == (fVar20 == fVar19)) {
              fVar17 = fVar18;
              param_8 = (undefined *)(uintptr_t)__ftol();
              fVar19 = extraout_ST0;
              fVar18 = extraout_ST1;
            }
            else {
              param_8 = (undefined *)0x0;
            }
          }
          else {
            param_8 = (undefined *)0xff;
          }
          if ((float10)fVar8 < fVar18) {
            fVar20 = (float10)fVar8;
            if (fVar20 < fVar19 == (fVar20 == fVar19)) {
              fVar17 = fVar18;
              uVar11 = __ftol();
              fVar19 = extraout_ST0_00;
              fVar18 = extraout_ST1_00;
            }
            else {
              uVar11 = 0;
            }
          }
          else {
            uVar11 = 0xff;
          }
          if ((float10)fVar2 < fVar18) {
            fVar20 = (float10)fVar2;
            if (fVar20 < fVar19 == (fVar20 == fVar19)) {
              uVar15 = __ftol();
              fVar18 = extraout_ST0_01;
              fVar17 = extraout_ST1_01;
            }
            else {
              uVar15 = 0;
            }
          }
          else {
            uVar15 = 0xff;
          }
          if (fVar17 < fVar18) {
            if (fVar17 < (float10)DAT_006cc7a4 == (fVar17 == (float10)DAT_006cc7a4)) {
              iVar13 = __ftol();
            }
            else {
              iVar13 = 0;
            }
          }
          else {
            iVar13 = 0xff;
          }
          param_8 = (undefined *)(((iVar13 << 8 | (uint)param_8) << 8 | uVar11) << 8 | uVar15);
          local_10 = 1;
          local_14 = 1;
          local_24 = 4;
          local_c = (undefined *)0x2;
          iVar13 = FUN_005b2b74(&param_8,4,&param_2);
        }
        else {
          iVar13 = FUN_005b2b74(local_30,local_24,&param_2);
        }
        if (iVar13 < 0) goto LAB_005b4c33;
        _free(local_30);
        local_30 = (float *)0x0;
      }
    }
    else {
      if (*(int *)(iVar9 + 4) != 0xc) {
        pcVar21 = "ID3DXEffectCompiler: State \'%s\' was assigned an unsupported value";
        param_2 = 0;
        puVar22 = *ppuVar5;
        iVar9 = local_1c;
        goto LAB_005b4bec;
      }
      if ((int)local_c < 5) {
LAB_005b4211:
        local_30 = (float *)_malloc(local_24);
        if (local_30 == (float *)0x0) goto LAB_005b459f;
        pfVar14 = local_30;
        for (uVar11 = local_24 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pfVar14 = 0.0;
          pfVar14 = pfVar14 + 1;
        }
        for (uVar11 = local_24 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)pfVar14 = 0;
          pfVar14 = (float *)((int)pfVar14 + 1);
        }
        iVar13 = FUN_005b2b74(local_30,local_24,&param_2);
        if (iVar13 < 0) goto LAB_005b4c33;
      }
      else {
        if (9 < (int)local_c) {
          if ((int)local_c < 0xf) {
            iVar6 = *(int *)(*(int *)(iVar9 + 0x20) + 8);
            if (*(int *)(iVar6 + 0x10) != 6) {
              iVar10 = *(int *)(iVar6 + 0x18);
              param_2 = 0;
              while( true ) {
                if (iVar10 == 0) {
                  return iVar13;
                }
                iVar13 = FUN_005b3b78(iVar10,param_3,param_4,param_5,param_6,param_7,local_40);
                if (iVar13 < 0) break;
                iVar10 = *(int *)(iVar10 + 0xc);
              }
              return iVar13;
            }
            iVar13 = FUN_005b2b74(&local_2c,4,&param_2);
            if (iVar13 < 0) {
              return iVar13;
            }
            goto LAB_005b4256;
          }
          if (0x10 < (int)local_c) goto LAB_005b4211;
        }
        piVar12 = (int *)(local_8 + 0x108);
        iVar13 = FUN_005b2b74(piVar12,4,&param_2);
        if (iVar13 < 0) {
          return iVar13;
        }
        *piVar12 = *piVar12 + 1;
      }
LAB_005b4256:
      local_44 = (int *)_malloc(0x20);
      if (local_44 == (int *)0x0) {
        local_44 = (int *)0x0;
      }
      else {
        local_44[5] = 0;
      }
      if (local_44 == (int *)0x0) {
LAB_005b4798:
        iVar13 = -0x7fffbffb;
        goto LAB_005b4c33;
      }
      *local_44 = local_18;
      local_44[1] = param_3;
      local_44[2] = param_4;
      local_44[3] = *param_5;
      local_44[4] = iVar9;
    }
    if (local_c == (undefined *)0x0) {
      iVar10 = FUN_005b3675(*(undefined4 *)(*(int *)(iVar10 + 0x18) + 0x10),0,0,0,param_7,0,
                            &local_38,0);
      if (iVar10 < 0) {
        FUN_005b1f01(local_8 + 0xc,local_1c + 0x10,0,
                     "ID3DXEffectCompiler: Error initializing assignment type");
        goto LAB_005b4c25;
      }
LAB_005b43cf:
      iVar13 = FUN_005b2b74(&local_18,4,0);
      if (((-1 < iVar13) && (iVar13 = FUN_005b2b74(&local_40,4,0), -1 < iVar13)) &&
         ((iVar13 = FUN_005b2c79(local_38,0), -1 < iVar13 &&
          (iVar13 = FUN_005b2c79(param_2,0), -1 < iVar13)))) {
        if (local_44 != (int *)0x0) {
          local_44[7] = local_38;
          local_44[6] = param_2;
          local_44[5] = *(int *)(local_8 + 0x128);
          *(int *)(local_8 + 0x128) = (int)local_44;
          local_44 = (int *)0x0;
        }
        *param_5 = *param_5 + 1;
        if (bVar3) {
          local_c = (undefined *)0x10;
          param_8 = (undefined *)0x4;
          iVar13 = FUN_005b2b74(&local_c,4,&local_38);
          if (((-1 < iVar13) && (iVar13 = FUN_005b2b74(&param_8,4,0), -1 < iVar13)) &&
             ((iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13 &&
              ((iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13 &&
               (iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13)))))) {
            puVar22 = *local_34;
            local_18 = 0;
            ppuVar5 = local_34;
            while ((puVar22 != (undefined *)0x0 && (ppuVar5[5] != (undefined *)0x6000000))) {
              local_18 = local_18 + 1;
              ppuVar5 = ppuVar5 + 7;
              puVar22 = *ppuVar5;
            }
            iVar13 = FUN_005b2b74(&local_18,4,0);
            if ((((-1 < iVar13) && (iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13)) &&
                (iVar13 = FUN_005b2c79(local_38,0), -1 < iVar13)) &&
               (iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13)) {
              *param_5 = *param_5 + 1;
            }
          }
        }
      }
    }
    else {
      if ((int)local_c < 1) {
LAB_005b4b72:
        FUN_005b1f01(local_8 + 0xc,local_1c + 0x10,0,"ID3DXEffectCompiler: Internal error");
        goto LAB_005b4c20;
      }
      if ((int)local_c < 4) {
        param_8 = (undefined *)0x2;
        iVar13 = FUN_005b2b74(&local_c,4,&local_38);
        if (((((-1 < iVar13) && (iVar13 = FUN_005b2b74(&param_8,4,0), -1 < iVar13)) &&
             (iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13)) &&
            ((iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13 &&
             (iVar13 = FUN_005b2b74(&local_28,4,0), -1 < iVar13)))) &&
           (iVar13 = FUN_005b2b74(&local_10,4,0), -1 < iVar13)) {
          piVar12 = &local_14;
LAB_005b43ba:
          iVar13 = FUN_005b2b74(piVar12,4,0);
          if (-1 < iVar13) goto LAB_005b43cf;
        }
      }
      else {
        if (((int)local_c < 5) || (0x10 < (int)local_c)) goto LAB_005b4b72;
        param_8 = (undefined *)0x4;
        iVar13 = FUN_005b2b74(&local_c,4,&local_38);
        if ((((-1 < iVar13) && (iVar13 = FUN_005b2b74(&param_8,4,0), -1 < iVar13)) &&
            (iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13)) &&
           (iVar13 = FUN_005b2b74(&local_2c,4,0), -1 < iVar13)) {
          piVar12 = &local_2c;
          goto LAB_005b43ba;
        }
      }
    }
  }
  else {
    if (0xe < (int)puVar22) {
      if ((int)puVar22 < 0x11) {
        if ((local_28 != 0) || (local_20 != 0)) goto LAB_005b4bdf;
        if (((puVar22 != local_c) || ((local_10 != 1 || (local_14 != 1)))) &&
           ((local_c != (undefined *)0x2 || ((local_10 != 1 || (local_14 != 1)))))) {
          puVar22 = *ppuVar5;
          pcVar21 = "ID3DXEffectCompiler: State \'%s\' was assigned an incompatible type";
          goto LAB_005b4bec;
        }
        goto LAB_005b415d;
      }
      if (puVar22 == (undefined *)0xf20000) {
        if (local_c == (undefined *)0x3) {
          if (local_10 != 4) {
LAB_005b4104:
            if (local_10 != 1) goto LAB_005b4110;
          }
          if (local_14 == 1) goto LAB_005b415d;
        }
        else if ((local_c == (undefined *)0x2) || (local_c == (undefined *)0x1)) goto LAB_005b4104;
LAB_005b4110:
        puVar22 = *ppuVar5;
        pcVar21 = 
        "ID3DXEffectCompiler: State \'%s\' must be assigned a numeric scalar or a 4-float vector";
        goto LAB_005b4bec;
      }
    }
LAB_005b4c02:
    FUN_005b1f01(local_8 + 0xc,iVar9 + 0x10,0,
                 "ID3DXEffectCompiler: Unexpected value type of state \'%s\' (internal error)",
                 *ppuVar5);
LAB_005b4c20:
    iVar13 = -0x7fffbffb;
  }
LAB_005b4c25:
  if (local_44 != (int *)0x0) {
    FUN_005b2ae3(1);
  }
LAB_005b4c33:
  if (local_30 != (float *)0x0) {
    _free(local_30);
    return iVar13;
  }
  return iVar13;
}
