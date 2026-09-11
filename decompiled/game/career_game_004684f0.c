/* spd-match: far pct=6.98 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141635Z_w0_tp1 */
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

int __cdecl FUN_00571c20(...);

struct ThisCallBox {
  void FUN_004684f0(int param_2);
};
void ThisCallBox::FUN_004684f0(int param_2) {
  int iVar1;
  
  iVar1 = param_2;
  if (*(char *)(param_2 + 0x3d) == '\0') {
    param_2 = CONCAT31(((unsigned int)(param_2) >> 8),*(char *)(((int)this) + 0x1d) * '\x10' + *(char *)(((int)this) + 0x1b))
    ;
    FUN_00571c20(iVar1,&param_2,1,1,0);
  }
  else {
    FUN_00571c20(param_2,&param_2,1,1,0);
    *(byte *)(((int)this) + 0x1d) = (byte)param_2 >> 4;
    *(byte *)(((int)this) + 0x1b) = (byte)param_2 & 0xf;
  }
  if ((*(char *)(iVar1 + 0x3e) != '\0') || (*(char *)(iVar1 + 0x3f) != '\0')) {
    FUN_00571c20(iVar1,((int)this) + 0x18,2,2,1);
  }
  if ((*(char *)(iVar1 + 0x3e) != '\0') || (*(char *)(iVar1 + 0x3f) != '\0')) {
    FUN_00571c20(iVar1,((int)this) + 0x15,1,1,1);
  }
  if ((*(char *)(iVar1 + 0x3e) != '\0') || (*(char *)(iVar1 + 0x3f) != '\0')) {
    FUN_00571c20(iVar1,((int)this) + 0x16,1,1,1);
  }
  return;
}
