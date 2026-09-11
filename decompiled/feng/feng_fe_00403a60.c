/* spd-match: far pct=4.59 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141635Z_w0_tc0 */
#include "ghidra_compat.h"

/* P3 ghidra_field_overlay — CRT soft structs (no pthreadlocinfo — in GHIDRA_COMPAT) */
typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr;
  void *_initarg;
  void *_translator;
  void *_terminate;
  void *_unexpected;
  void *_purecall;
  void *_token;
  void *_tpxcptinfoptrs;
  void *_pxcptacttab;
  unsigned int _holdrand;
  int _tfpecode;
  int _terrno;
  int _tdoserrno;
  int _NLG_dwCode;
  int _maxcharsize;
  char _con_ch_buf[32];
  unsigned int _thandle;
  unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375

int __cdecl FUN_00401e10();
int __cdecl FUN_00401f30();
int __cdecl FUN_00402500();
int __cdecl FUN_00402d30();
int __cdecl FUN_00403a00();
int __cdecl FUN_0040a880();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_007349c8;
extern unsigned char *DAT_0073652c;
extern unsigned char *DAT_00736530;
extern int DAT_0077a920;
extern int DAT_0078e974;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7cc;
extern int _DAT_006cc8a8;
extern int _DAT_006cc970;
extern int _DAT_006cca58;
extern int _DAT_006ccbec;
extern int _DAT_006ccd0c;
extern int _DAT_007301d0;

void FUN_00403a60(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  bool bVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  float10 fVar19;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float local_9c;
  float local_90;
  int local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  int local_70;
  int local_6c;
  int *local_68;
  int local_64;
  int local_60;
  float local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  undefined4 local_40;
  float local_3c;
  undefined4 local_30;
  float local_2c;
  undefined4 local_20;
  float local_1c;
  
  QueryPerformanceCounter(&local_80);
  local_80.s.LowPart = __allshr();
  local_70 = FUN_00674898();
  FUN_00403a00();
  bVar8 = false;
  piVar16 = (int *)param_1[2];
  do {
    if (piVar16 == param_1 + 2) break;
    iVar14 = piVar16[4];
    piVar18 = (int *)*piVar16;
    if (iVar14 == 1) {
      FUN_00402d30(param_1,piVar16,param_2,0);
    }
    else if (iVar14 != 0) {
      bVar8 = true;
    }
    if (((float)piVar16[5] != DAT_006cc7a4) && ((iVar14 == 1 || (iVar14 == 0)))) {
      fVar5 = (float)piVar16[5] - param_2;
      if (fVar5 < DAT_006cc7a4 == (fVar5 == DAT_006cc7a4)) {
        piVar16[5] = (int)fVar5;
      }
      else {
        iVar3 = piVar16[7];
        if (iVar14 != 0) {
          fVar1 = *(float *)(iVar3 + 0x28);
          fVar2 = *(float *)(iVar3 + 0x2c);
        }
        else {
          fVar1 = *(float *)(iVar3 + 0x20);
          fVar2 = *(float *)(iVar3 + 0x24);
        }
        uVar15 = (uint)(iVar14 == 0);
        if (fVar1 == DAT_006cc7a4) {
          piVar16[4] = uVar15;
          piVar16[5] = (int)fVar1;
          piVar16[6] = 0;
        }
        else {
          fVar19 = (float10)FUN_00401f30(fVar2 * fVar1);
          piVar16[4] = uVar15;
          piVar16[6] = 0;
          piVar16[5] = (int)(float)(((float10)fVar1 - (float10)(fVar2 * fVar1)) + fVar19 +
                                   (float10)fVar5);
        }
      }
    }
    piVar16 = piVar18;
  } while (!bVar8);
  puVar4 = DAT_0078e974;
  if (DAT_0077a920 == 3) {
    puVar13 = (undefined4 *)FUN_0040a880();
    for (; puVar4 != puVar13; puVar4 = (undefined4 *)*puVar4) {
      local_40 = puVar4[0x39];
      fVar5 = (float)puVar4[0x24] * _DAT_006cca58;
      local_50 = puVar4[0x38];
      local_30 = puVar4[0x3a];
      local_20 = puVar4[0x3b];
      fVar2 = (float)puVar4[0x25] * _DAT_006cca58;
      fVar1 = (float)puVar4[0x26] * _DAT_006cca58;
      fVar7 = (float)puVar4[0x27] * _DAT_006cca58;
      local_4c = (float)puVar4[0x3c] * _DAT_006ccd0c;
      local_3c = (float)puVar4[0x3d] * _DAT_006ccd0c;
      local_2c = (float)puVar4[0x3e] * _DAT_006ccd0c;
      local_1c = (float)puVar4[0x3f] * _DAT_006ccd0c;
      FUN_00402500(puVar4 + 0x40,puVar4 + 0x28,fVar5,fVar2,fVar1,fVar7);
      FUN_00402500(puVar4 + 0x50,&local_50,fVar5,fVar2,fVar1,fVar7);
    }
  }
  piVar16 = (int *)*param_1;
  local_78.s.LowPart = FUN_0040a880();
  if (piVar16 != (int *)local_78.s.LowPart) {
    do {
      iVar14 = piVar16[2];
      piVar18 = (int *)*piVar16;
      local_60 = (1 << (*(byte *)(iVar14 + 0x1a) & 0x1f)) * (1 << (*(byte *)(iVar14 + 0x19) & 0x1f))
                 + -1;
      local_6c = iVar14;
      local_68 = piVar18;
      if (*(char *)(iVar14 + 0x1b) == '\0') {
        local_88 = 0;
      }
      else {
        local_88 = FUN_00674898();
      }
      local_5c = -*(float *)(iVar14 + 0x84);
      fVar5 = *(float *)(iVar14 + 0x88);
      local_9c = 0.0;
      if (((*(char *)(iVar14 + 0x1e) != '\0') && (piVar16[4] != 0)) &&
         (DAT_006cc7a4 < *(float *)(iVar14 + 0x50))) {
        local_9c = param_2 * *(float *)(piVar16[4] + 0x78);
      }
      piVar17 = (int *)piVar16[5];
      if (piVar17 != piVar16 + 5) {
        do {
          piVar6 = (int *)*piVar17;
          iVar14 = (short)piVar17[2] - local_70;
          if (iVar14 < 1) {
            puVar4 = (undefined4 *)piVar17[1];
            *puVar4 = piVar6;
            piVar6[1] = (int)puVar4;
            iVar3 = DAT_0073652c;
            iVar14 = *(int *)(DAT_0073652c + 0x18);
            *piVar17 = *(int *)(DAT_0073652c + 0x10);
            *(int *)(iVar3 + 0x18) = iVar14 + -1;
            *(int **)(iVar3 + 0x10) = piVar17;
          }
          else {
            bVar10 = *(byte *)((int)piVar17 + 0x1f);
            if (local_88 != 0) {
              bVar10 = ((char)((int)(short)piVar17[2] / local_88) - (char)(iVar14 / local_88)) +
                       bVar10 & (byte)local_60;
            }
            local_58 = (int)*(char *)((int)piVar17 + 0x1e);
            local_54 = piVar17[5];
            local_64 = piVar17[4];
            fVar2 = (float)local_58 * _DAT_006ccbec *
                    (float)*(ushort *)(piVar17 + 3) * _DAT_006cc7cc;
            fVar1 = _DAT_006cc8a8;
            if (fVar2 < DAT_006cc7a4) {
              fVar1 = _DAT_006cc7bc;
            }
            local_90 = ((fVar1 * fVar2 * fVar2 * fVar5 + local_5c) * param_2 + fVar2) * param_2 +
                       (float)piVar17[6];
            if (*(char *)(local_6c + 0x1e) != '\0') {
              local_90 = (float)*(byte *)((int)piVar17 + 0xe) * _DAT_006cc970 * local_9c + local_90;
            }
            *(short *)(piVar17 + 2) = (short)iVar14;
            uVar12 = FUN_00674898();
            piVar17[4] = (int)(float)extraout_ST1;
            *(undefined2 *)(piVar17 + 3) = uVar12;
            piVar17[5] = (int)(float)extraout_ST0;
            piVar17[6] = (int)local_90;
            uVar11 = FUN_00674898();
            *(undefined1 *)(piVar17 + 7) = uVar11;
            uVar11 = FUN_00674898();
            *(undefined1 *)((int)piVar17 + 0x1d) = uVar11;
            uVar11 = FUN_00674898();
            *(byte *)((int)piVar17 + 0x1f) = bVar10;
            *(undefined1 *)((int)piVar17 + 0x1e) = uVar11;
          }
          piVar17 = piVar6;
          piVar18 = local_68;
        } while (piVar6 != piVar16 + 5);
      }
      if ((int *)piVar16[5] == piVar16 + 5) {
        iVar14 = *piVar16;
        piVar17 = (int *)piVar16[1];
        *piVar17 = iVar14;
        *(int **)(iVar14 + 4) = piVar17;
        FUN_00401e10();
        iVar3 = DAT_00736530;
        iVar14 = *(int *)(DAT_00736530 + 0x18);
        *piVar16 = *(int *)(DAT_00736530 + 0x10);
        *(int *)(iVar3 + 0x18) = iVar14 + -1;
        *(int **)(iVar3 + 0x10) = piVar16;
      }
      piVar16 = piVar18;
    } while (piVar18 != (int *)local_78.s.LowPart);
  }
  QueryPerformanceCounter(&local_78);
  uVar9 = DAT_007349c8;
  iVar14 = __allshr();
  local_9c = (float)(iVar14 - (*(undefined4 *)&(local_80)));
  if ((int)local_9c < 0) {
    local_9c = 0.0;
  }
  param_1[0x17] = (int)((float)(1 << ((byte)uVar9 & 0x1f)) * (float)(int)local_9c * _DAT_007301d0);
  return;
}
