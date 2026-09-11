/* spd-match: far pct=5.68 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141814Z_w0_tc0 */
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

extern int DAT_006eb720;
extern void LAB_00674c03(void);
int unaff_retaddr;

uint FUN_00674b68(byte *param_1,byte *param_2)

{
  byte bVar1;
  _ptiddata p_Var2;
  int iVar3;
  byte *pbVar4;
  uint unaff_retaddr;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  p_Var2 = __getptd();
  pbVar4 = local_28;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *param_2;
    local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = (byte *)p_Var2->_token;
  }
  for (; (bVar1 = *param_1, pbVar4 = param_1, (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0
         && (bVar1 != 0)); param_1 = param_1 + 1) {
  }
  do {
    if (*pbVar4 == 0) {
LAB_00674c03:
      p_Var2->_token = (char *)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_28[*pbVar4 >> 3] & (byte)(1 << (*pbVar4 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_00674c03;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}
