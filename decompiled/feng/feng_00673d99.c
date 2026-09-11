/* spd-match: close pct=85.05 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141805Z_w0_tc0 */
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

int __cdecl FUN_00673ccf();
extern int DAT_006eb500;
extern unsigned char *PTR_DAT_006eb554;

int FUN_00673d99(void)

{
  int *piVar1;
  int *piVar2;
  _ptiddata p_Var3;
  
  p_Var3 = __getptd();
  piVar1 = (int *)p_Var3->_tfpecode;
  if (piVar1 != (int *)PTR_DAT_006eb554) {
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xb];
      *piVar1 = *piVar1 + -1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xd];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xc];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0x10];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    }
    p_Var3->_tfpecode = (int)PTR_DAT_006eb554;
    *(int *)PTR_DAT_006eb554 = *(int *)PTR_DAT_006eb554 + 1;
    piVar2 = *(int **)(PTR_DAT_006eb554 + 0x2c);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = *(int **)(PTR_DAT_006eb554 + 0x34);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = *(int **)(PTR_DAT_006eb554 + 0x30);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = *(int **)(PTR_DAT_006eb554 + 0x40);
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    *(int *)(*(int *)(PTR_DAT_006eb554 + 0x4c) + 0xb4) =
         *(int *)(*(int *)(PTR_DAT_006eb554 + 0x4c) + 0xb4) + 1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != &DAT_006eb500)) {
      FUN_00673ccf(piVar1);
    }
  }
  return p_Var3->_tfpecode;
}
