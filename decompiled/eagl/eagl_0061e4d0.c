/* spd-match: far pct=2.28 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141721Z_w0_tp1 */
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

extern void LAB_0061e567(...);

struct ThisCallBox {
  void FUN_0061e4d0(int *param_2, int param_3);
};
void ThisCallBox::FUN_0061e4d0(int *param_2, int param_3) {
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int local_c;
  uint local_4;
  
  iVar3 = *((int *)this);
  iVar7 = 0;
  if (iVar3 == 0) {
    *param_2 = 0;
    param_2[1] = local_c;
    param_2[2] = 0;
    param_2[3] = local_4;
    return;
  }
  if ((param_3 < 0) || (*(int *)(iVar3 + 0x10) <= param_3)) {
    *param_2 = 0;
    param_2[1] = local_c;
    param_2[2] = 0;
    param_2[3] = local_4;
    return;
  }
  iVar6 = *(int *)(iVar3 + 0x14) + param_3 * 0x10;
  pcVar1 = (char *)(*(int *)(iVar3 + 8) + *(int *)(*(int *)(iVar3 + 0x14) + param_3 * 0x10));
  pcVar4 = pcVar1;
  do {
    pcVar8 = pcVar4;
    pcVar4 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  if (pcVar8[1] == '\x7f') {
    pcVar8 = pcVar8 + 2;
  }
  cVar2 = *(char *)(iVar6 + 0xd);
  if (((cVar2 != '\x02') && (cVar2 != '\x03')) && (cVar2 != '\x04')) {
    local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
    if (cVar2 != '\x05') goto LAB_0061e567;
  }
  local_4 = local_4 & 0xffffff00;
LAB_0061e567:
  uVar5 = (uint)*(ushort *)(iVar6 + 0xe);
  if (cVar2 != '\x01') {
    if ((uVar5 != 0) && (uVar5 < *(ushort *)(*(int *)(iVar3 + 0x1c) + 0x30))) {
      iVar7 = *(int *)(*(int *)(iVar3 + 0x18) + 0x10 + uVar5 * 0x28) + *(int *)(iVar6 + 4);
    }
    *param_2 = (int)pcVar1;
    param_2[1] = (int)pcVar8;
    param_2[2] = iVar7;
    param_2[3] = local_4;
    return;
  }
  iVar3 = *(int *)(iVar6 + 4);
  *param_2 = (int)pcVar1;
  param_2[1] = (int)pcVar8;
  param_2[2] = iVar3;
  param_2[3] = local_4;
  return;
}
