/* spd-match: far pct=0.83 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141700Z_w0_tc0 */
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

int __cdecl FUN_00591d00();
extern int DAT_006b8b98;
extern unsigned char *PTR_DAT_006b8b9c;
int unaff_ESI;

undefined4 FUN_00597e10(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_ESI;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0x158) + 0x8c);
  iVar6 = 0;
  local_8 = DAT_006b8b98;
  local_4 = PTR_DAT_006b8b9c;
  if (0 < iVar3) {
    do {
      (*(unsigned int *)&(local_4)) = (*(unsigned int *)&(local_4) & 0xff000000u) | ((unsigned int)(CONCAT12((char)iVar6 + '1',(undefined2)local_4)) & 0x00ffffffu);
      puVar5 = &local_8;
      cVar2 = (char)local_8;
      while (cVar2 != '\0') {
        pcVar1 = (char *)((int)puVar5 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        cVar2 = *pcVar1;
      }
      iVar4 = FUN_00591d00();
      if (iVar4 == 0) {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return 1;
}
