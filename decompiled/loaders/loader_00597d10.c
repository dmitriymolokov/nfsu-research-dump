/* spd-match: far pct=6.90 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141635Z_w0_tc0 */
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

int __cdecl FUN_00597140();
int __cdecl FUN_00597c90();
extern int DAT_006b8b98;
extern code *DAT_0073168c;
extern unsigned char *DAT_00736070;
extern unsigned char *PTR_DAT_006b8b9c;
int unaff_EDI;

int FUN_00597d10(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *unaff_EDI;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)(unaff_EDI[0x56] + 0x8c);
  iVar8 = 0;
  local_8 = DAT_006b8b98;
  local_4 = PTR_DAT_006b8b9c;
  if (0 < iVar3) {
    iVar4 = 0x90 - (int)param_1;
    do {
      iVar5 = *(int *)(unaff_EDI[0x112] + 8);
      (*(unsigned int *)&(local_4)) = (*(unsigned int *)&(local_4) & 0xff000000u) | ((unsigned int)(CONCAT12((char)iVar8 + '1',(undefined2)local_4)) & 0x00ffffffu);
      puVar7 = &local_8;
      bVar2 = (byte)local_8;
      while (bVar2 != 0) {
        iVar5 = iVar5 * 0x21 + (uint)bVar2;
        pbVar1 = (byte *)((int)puVar7 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        bVar2 = *pbVar1;
      }
      uVar6 = (*DAT_0073168c)(*(undefined2 *)(DAT_00736070 + 8),
                              *(undefined4 *)((int)param_1 + unaff_EDI[0x56] + iVar4),iVar5);
      if (unaff_EDI[0x128] == 0) {
        puVar7 = unaff_EDI + 0x118;
      }
      else {
        puVar7 = (undefined4 *)(unaff_EDI[0x128] + 0x50);
      }
      FUN_00597140(puVar7,0);
      FUN_00597c90(uVar6);
      *param_1 = uVar6;
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 1;
    } while (iVar8 < iVar3);
  }
  (**(code **)*unaff_EDI)(1);
  return iVar3;
}
