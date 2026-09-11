/* spd-match: far pct=11.41 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141635Z_w0_tc0 */
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

int __cdecl FUN_00535c90();
int __cdecl FUN_00564b10();
int __cdecl FUN_00567280();
int __cdecl FUN_00674898();
extern int DAT_007349c8;
extern int DAT_00740500;
extern int _DAT_006b63bc;
extern int _DAT_006b63d0;
extern int _DAT_006cc7bc;
extern int _DAT_007301d0;
int unaff_ESI;

void FUN_00535710(void)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int *piVar4;
  int unaff_ESI;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  int local_34;
  LARGE_INTEGER local_30 [2];
  float local_20;
  float local_1c;
  float fStack_18;
  
  QueryPerformanceCounter(local_30);
  uVar2 = DAT_007349c8;
  local_34 = __allshr();
  local_34 = local_34 - *(int *)(unaff_ESI + 0xe0);
  if (local_34 < 0) {
    local_34 = 0;
  }
  (*(undefined4 *)&(local_30[0])) = 1 << ((byte)uVar2 & 0x1f);
  *(float *)(unaff_ESI + 0xdc) = (float)(int)(*(undefined4 *)&(local_30[0])) * (float)local_34 * _DAT_007301d0;
  QueryPerformanceCounter(local_30);
  uVar2 = __allshr();
  *(undefined4 *)(unaff_ESI + 0xe0) = uVar2;
  if (DAT_00740500 != 0) {
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x14) + 0x234);
    uVar2 = FUN_00674898();
    *(undefined4 *)(unaff_ESI + 0x314) = uVar2;
    FUN_00674898();
    uVar2 = FUN_00674898();
    fVar5 = (float10)_DAT_006cc7bc;
    *(undefined4 *)(unaff_ESI + 0xf0) = uVar2;
    fVar5 = (fVar5 - extraout_ST0) * (float10)_DAT_006b63bc;
    *(float *)(unaff_ESI + 0xec) = (float)fVar5;
    if (fVar5 < (float10)*(float *)(*(int *)(unaff_ESI + 0x14) + 0x260)) {
      *(float *)(unaff_ESI + 0xec) = _DAT_006b63d0 * *(float *)(*(int *)(unaff_ESI + 0x14) + 0x260);
    }
    fVar5 = (float10)FUN_00564b10();
    fVar6 = (float10)FUN_00564b10();
    (*(undefined4 *)&(local_30[0])) =
         (undefined4)
         (((float10)(float)fVar5 * (float10)*(float *)(iVar1 + 0x90) -
          fVar6 * (float10)*(float *)(iVar1 + 0x94)) * (float10)*(float *)(unaff_ESI + 0xec));
    (*(undefined4 *)((char *)&(local_30[0]) + 4)) =
         (undefined4)
         ((fVar6 * (float10)*(float *)(iVar1 + 0x90) +
          (float10)(float)fVar5 * (float10)*(float *)(iVar1 + 0x94)) *
         (float10)*(float *)(unaff_ESI + 0xec));
    fVar5 = (float10)FUN_00564b10();
    fVar6 = (float10)FUN_00564b10();
    piVar4 = (int *)(unaff_ESI + 0x100);
    local_20 = (float)(((float10)(float)fVar5 * (float10)*(float *)(iVar1 + 0x90) -
                       fVar6 * (float10)*(float *)(iVar1 + 0x94)) *
                      (float10)*(float *)(unaff_ESI + 0xec));
    local_34 = 2;
    local_1c = (float)((fVar6 * (float10)*(float *)(iVar1 + 0x90) +
                       (float10)(float)fVar5 * (float10)*(float *)(iVar1 + 0x94)) *
                      (float10)*(float *)(unaff_ESI + 0xec));
    do {
      if (piVar4[0x84] == 0) {
        pfVar3 = (float *)(unaff_ESI + 0x80);
        *pfVar3 = (float)(*(undefined4 *)&(local_30[0])) + *(float *)(iVar1 + 0x60);
        *(float *)(unaff_ESI + 0x84) = (float)(*(undefined4 *)((char *)&(local_30[0]) + 4)) + *(float *)(iVar1 + 100);
        *(undefined4 *)(unaff_ESI + 0x88) = *(undefined4 *)(iVar1 + 0x68);
      }
      else {
        pfVar3 = (float *)(unaff_ESI + 0x90);
        *pfVar3 = local_20 + *(float *)(iVar1 + 0x60);
        *(float *)(unaff_ESI + 0x94) = local_1c + *(float *)(iVar1 + 100);
        *(undefined4 *)(unaff_ESI + 0x98) = *(undefined4 *)(iVar1 + 0x68);
      }
      (**(code **)(*piVar4 + 0x28))(pfVar3,0);
      piVar4 = piVar4 + 0x88;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
    if (*(char *)(unaff_ESI + 0x11) == '\x01') {
      if (*(char *)(unaff_ESI + 0xd0) != '\0') {
        *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x90);
        *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_ESI + 0x94);
        *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_ESI + 0x98);
      }
      if (*(float *)(unaff_ESI + 0xc0) <
          (*(float *)(unaff_ESI + 0xd4) / *(float *)(unaff_ESI + 200)) *
          *(float *)(unaff_ESI + 0xc0)) {
        if (*(char *)(unaff_ESI + 0xd0) == '\0') {
          fVar5 = (float10)FUN_00567280();
          fStack_18 = *(float *)(unaff_ESI + 0x88) - *(float *)(unaff_ESI + 0x48);
          *(float *)(unaff_ESI + 0xa0) = *(float *)(unaff_ESI + 0x80) - *(float *)(unaff_ESI + 0x40)
          ;
          *(float *)(unaff_ESI + 0xa8) = fStack_18;
          *(float *)(unaff_ESI + 0xa4) = *(float *)(unaff_ESI + 0x84) - *(float *)(unaff_ESI + 0x44)
          ;
          fVar6 = (fVar5 / (float10)*(float *)(unaff_ESI + 0xc0)) *
                  (float10)*(float *)(unaff_ESI + 200);
          *(float *)(unaff_ESI + 200) = (float)fVar6;
          (*(undefined4 *)&(local_30[0])) = *(float *)(unaff_ESI + 0xa8);
          fVar6 = (float10)_DAT_006cc7bc / fVar6;
          *(float *)(unaff_ESI + 0xa0) = (float)(fVar6 * (float10)*(float *)(unaff_ESI + 0xa0));
          *(float *)(unaff_ESI + 0xa4) = (float)((float10)*(float *)(unaff_ESI + 0xa4) * fVar6);
          *(float *)(unaff_ESI + 0xa8) = (float)((float10)(float)(*(undefined4 *)&(local_30[0])) * fVar6);
          *(undefined1 *)(unaff_ESI + 0xd0) = 1;
          *(undefined4 *)(unaff_ESI + 0xd4) = 0;
          *(float *)(unaff_ESI + 0xc0) = (float)fVar5;
          *(float *)(unaff_ESI + 0x20) = *(float *)(unaff_ESI + 0x80);
          *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_ESI + 0x84);
          *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_ESI + 0x88);
        }
        else if (*(char *)(unaff_ESI + 0xd1) == '\x01') {
          *(undefined1 *)(unaff_ESI + 0x11) = 0;
        }
      }
      *(float *)(unaff_ESI + 0x40) = *(float *)(unaff_ESI + 0x40) + *(float *)(unaff_ESI + 0xa0);
      *(float *)(unaff_ESI + 0x44) = *(float *)(unaff_ESI + 0xa4) + *(float *)(unaff_ESI + 0x44);
      *(float *)(unaff_ESI + 0x48) = *(float *)(unaff_ESI + 0xa8) + *(float *)(unaff_ESI + 0x48);
      if (*(char *)(unaff_ESI + 0xd1) == '\x01') {
        *(undefined4 *)(unaff_ESI + 0x30) = *(undefined4 *)(unaff_ESI + 0x90);
        *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(unaff_ESI + 0x94);
        *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_ESI + 0x98);
      }
      if (*(float *)(unaff_ESI + 0xc4) <
          (*(float *)(unaff_ESI + 0xd8) / *(float *)(unaff_ESI + 0xcc)) *
          *(float *)(unaff_ESI + 0xc4)) {
        if (*(char *)(unaff_ESI + 0xd1) == '\0') {
          pfVar3 = (float *)(unaff_ESI + 0x90);
          fVar5 = (float10)FUN_00567280();
          fStack_18 = *(float *)(unaff_ESI + 0x98) - *(float *)(unaff_ESI + 0x58);
          *(float *)(unaff_ESI + 0xb0) = *pfVar3 - *(float *)(unaff_ESI + 0x50);
          *(float *)(unaff_ESI + 0xb8) = fStack_18;
          *(float *)(unaff_ESI + 0xb4) = *(float *)(unaff_ESI + 0x94) - *(float *)(unaff_ESI + 0x54)
          ;
          fVar6 = (fVar5 / (float10)*(float *)(unaff_ESI + 0xc4)) *
                  (float10)*(float *)(unaff_ESI + 0xcc);
          *(float *)(unaff_ESI + 0xcc) = (float)fVar6;
          (*(undefined4 *)&(local_30[0])) = *(float *)(unaff_ESI + 0xb8);
          fVar6 = (float10)_DAT_006cc7bc / fVar6;
          *(float *)(unaff_ESI + 0xb0) = (float)(fVar6 * (float10)*(float *)(unaff_ESI + 0xb0));
          *(float *)(unaff_ESI + 0xb4) = (float)((float10)*(float *)(unaff_ESI + 0xb4) * fVar6);
          *(float *)(unaff_ESI + 0xb8) = (float)((float10)(float)(*(undefined4 *)&(local_30[0])) * fVar6);
          *(undefined1 *)(unaff_ESI + 0xd1) = 1;
          *(undefined4 *)(unaff_ESI + 0xd8) = 0;
          *(float *)(unaff_ESI + 0xc4) = (float)fVar5;
          *pfVar3 = *pfVar3;
          *(undefined4 *)(unaff_ESI + 0x94) = *(undefined4 *)(unaff_ESI + 0x94);
          *(undefined4 *)(unaff_ESI + 0x98) = *(undefined4 *)(unaff_ESI + 0x98);
        }
        else if (*(char *)(unaff_ESI + 0xd0) == '\x01') {
          *(undefined1 *)(unaff_ESI + 0x11) = 0;
        }
      }
      pfVar3 = (float *)(unaff_ESI + 0x50);
      piVar4 = (int *)(unaff_ESI + 0x100);
      local_34 = 2;
      *pfVar3 = *pfVar3 + *(float *)(unaff_ESI + 0xb0);
      *(float *)(unaff_ESI + 0x54) = *(float *)(unaff_ESI + 0xb4) + *(float *)(unaff_ESI + 0x54);
      *(float *)(unaff_ESI + 0x58) = *(float *)(unaff_ESI + 0xb8) + *(float *)(unaff_ESI + 0x58);
      do {
        if (piVar4[0x84] == 0) {
          (**(code **)(*piVar4 + 0x28))(unaff_ESI + 0x40);
        }
        else {
          (**(code **)(*piVar4 + 0x28))(pfVar3,0);
        }
        piVar4 = piVar4 + 0x88;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
      *(float *)(unaff_ESI + 0xd8) = *(float *)(unaff_ESI + 0xd8) + *(float *)(unaff_ESI + 0xdc);
      *(float *)(unaff_ESI + 0xd4) = *(float *)(unaff_ESI + 0xd4) + *(float *)(unaff_ESI + 0xdc);
    }
    FUN_00535c90();
  }
  return;
}
