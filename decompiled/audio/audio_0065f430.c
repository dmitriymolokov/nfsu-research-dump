/* spd-match: far pct=7.65 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141742Z_w0_tp1 */
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

int __cdecl FUN_0065ea70(...);

struct ThisCallBox {
  void FUN_0065f430(int *param_2, int param_3);
};
void ThisCallBox::FUN_0065f430(int *param_2, int param_3) {
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  short sVar7;
  int *piVar8;
  
  iVar1 = ((int *)this)[0x355];
  iVar4 = ((int *)this)[0x351];
  if (iVar1 != 0) {
    ((int *)this)[0x353] = *param_2;
    if (iVar1 <= param_3) {
      param_3 = iVar1;
    }
    iVar1 = param_3;
    if (0 < param_3) {
      while( true ) {
        if (iVar1 < iVar4) {
          iVar4 = iVar1;
        }
        piVar5 = ((int *)this) + (0x351 - ((int *)this)[0x351]);
        piVar8 = (int *)((int *)this)[0x353];
        for (iVar3 = iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar8 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar8 = piVar8 + 1;
        }
        iVar1 = iVar1 - iVar4;
        ((int *)this)[0x353] = ((int *)this)[0x353] + iVar4 * 4;
        ((int *)this)[0x351] = ((int *)this)[0x351] - iVar4;
        if (iVar1 < 1) break;
        FUN_0065ea70(((int *)this));
        iVar4 = 0x1b0;
        ((int *)this)[0x351] = 0x1b0;
        if (((int *)this)[0x359] == 1) {
          puVar2 = (undefined1 *)*((int *)this);
          ((int *)this)[0x352] = (int)(puVar2 + -1);
          if (((int *)this)[0x358] != 0) {
            *(undefined1 *)((int)((int *)this) + 0xd52) = *puVar2;
            *(undefined1 *)((int)((int *)this) + 0xd53) = puVar2[-1];
            *(undefined1 *)(((int *)this) + 0x354) = puVar2[2];
            *(undefined1 *)((int)((int *)this) + 0xd51) = puVar2[1];
            iVar3 = ((int *)this)[0x352] + 4 + (short)((int *)this)[0x354] * 2;
            *((int *)this) = iVar3;
            puVar2 = puVar2 + 3;
            ((int *)this)[0x352] = iVar3;
            sVar7 = 0;
            *((int *)this) = iVar3 + 1;
            pfVar6 = (float *)(((int *)this) + *(short *)((int)((int *)this) + 0xd52) + 0x1a1);
            if (0 < (short)((int *)this)[0x354]) {
              do {
                (*(unsigned short *)&(param_2)) = CONCAT11(*puVar2,puVar2[1]);
                puVar2 = puVar2 + 2;
                sVar7 = sVar7 + 1;
                *pfVar6 = (float)(int)(short)param_2;
                pfVar6 = pfVar6 + 1;
              } while (sVar7 < (short)((int *)this)[0x354]);
            }
            ((int *)this)[0x358] = 0;
          }
          if (*(char *)((int *)this)[0x352] == -0x12) {
            ((int *)this)[0x358] = 1;
          }
          ((int *)this)[2] = 8;
          ((int *)this)[1] = (uint)*(byte *)*((int *)this);
          *((int *)this) = (int)((byte *)*((int *)this) + 1);
        }
      }
    }
    ((int *)this)[0x355] = ((int *)this)[0x355] - param_3;
    return;
  }
  return;
}
