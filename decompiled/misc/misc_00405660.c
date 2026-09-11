/* spd-match: far pct=15.72 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141635Z_w0_tc0 */
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

int __cdecl FUN_004075e0();
int __cdecl FUN_00419c60();
extern int DAT_007187c0;
extern int DAT_007187c1;
extern int DAT_007187c2;
extern int DAT_007187c3;
extern int DAT_00719778;
extern int DAT_00719779;
extern int DAT_0071977a;
extern int DAT_0071977b;
extern int DAT_00719780;
extern int DAT_00719784;
extern int DAT_00719788;
extern int DAT_00719b38;
extern unsigned char *DAT_00736350;
extern int DAT_00736380;
extern int DAT_00736500;
extern unsigned char *DAT_00736510;
extern int _DAT_007187b8;
extern int _DAT_007187bc;
extern int _DAT_00719770;
extern int _DAT_00719774;
extern void LAB_00405630(void);
extern void LAB_00684ceb(void);
void *ExceptionList;

void FUN_00405660(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684ceb;
  pvStack_c = ExceptionList;
  DAT_00736510 = DAT_00736350;
  ExceptionList = &pvStack_c;
  (**(code **)(*DAT_00736350 + 4))(DAT_00736350);
  FUN_004075e0();
  puVar2 = &DAT_00719b38;
  (**(code **)(*DAT_00736510 + 0x24))(DAT_00736510,0,&DAT_00719b38,&LAB_00405630,&DAT_00719b38,0);
  pvVar1 = _malloc(0x2c18);
  if (pvVar1 == (void *)0x0) {
    DAT_00736500 = 0;
  }
  else {
    DAT_00736500 = FUN_00419c60(DAT_00736380);
  }
  _DAT_00719770 = 0xffffffff;
  _DAT_00719774 = 0xffffffff;
  DAT_00719780 = 0xffffffff;
  DAT_00719784 = 0xffffffff;
  _DAT_007187b8 = 0xffffffff;
  _DAT_007187bc = 0xffffffff;
  DAT_00719779 = 0;
  DAT_00719778 = 0;
  (*((unsigned char *)&(DAT_00719788) + 1)) = 0;
  (*(unsigned char *)&(DAT_00719788)) = 0;
  DAT_007187c1 = 0;
  DAT_007187c0 = 0;
  DAT_0071977b = 0x80;
  DAT_0071977a = 0x80;
  (*((unsigned char *)&(DAT_00719788) + 3)) = 0x80;
  (*((unsigned char *)&(DAT_00719788) + 2)) = 0x80;
  DAT_007187c3 = 0x80;
  DAT_007187c2 = 0x80;
  ExceptionList = puVar2;
  return;
}
