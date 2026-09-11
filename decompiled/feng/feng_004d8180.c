/* spd-match: far pct=12.74 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D8180 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
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

int __cdecl FUN_0059e5c0();
int __cdecl FUN_005a1550();
extern int DAT_00735e10;
extern int DAT_00735e11;
extern int DAT_00735e12;
extern int DAT_00735ec1;
extern unsigned char *DAT_00737668;
extern int DAT_0073766c;
extern int DAT_0075eef8;
extern int DAT_007677ac;
extern void LAB_004d8258(void);
int _auStack_4;
bool __fastcall FUN_004d8180(int obj)

{
  undefined1 uVar1;
  char cVar2;

  uint uVar3;
  uint *puVar4;
  undefined1 uVar5;
  undefined1 auStack_4 [2];
  undefined2 local_2;
  
  uVar3 = 0;
  if (DAT_0073766c != 0) {
    puVar4 = (uint *)(DAT_00737668 + 0x24);
    do {
      if ((puVar4[-1] == 1) && (*puVar4 == (uint)*(byte *)(obj + 0x11))) {
        if (*(char *)(uVar3 * 0x34 + 0x30 + DAT_00737668) != '\0') {
          return true;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0xd;
    } while (uVar3 < DAT_0073766c);
  }
  if (DAT_007677ac != 0) {
    return true;
  }
  if (DAT_00735e12 != '\0') {
    return true;
  }
  if (DAT_00735ec1 != '\0') {
    return true;
  }
  uVar1 = *(undefined1 *)(obj + 0x11);
  uVar5 = 3;
  _auStack_4 = CONCAT13(uVar1,0x10000);
  cVar2 = FUN_005a1550(&DAT_0075eef8,0);
  if (((cVar2 == '\0') && (cVar2 = FUN_0059e5c0(), cVar2 == '\0')) && (DAT_00735e11 == '\0')) {
    uVar5 = 2;
    cVar2 = FUN_005a1550(&DAT_0075eef8,0);
    if (((cVar2 == '\0') && (cVar2 = FUN_0059e5c0(), cVar2 == '\0')) && (DAT_00735e10 == '\0'))
    goto LAB_004d8258;
  }
  local_2 = CONCAT11(uVar1,uVar5);
LAB_004d8258:
  return (*((unsigned char *)&(local_2) + 1)) <= (byte)local_2;
}
