/* spd-match: far pct=9.09 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/ghidra_field_overlay_p1/batches/20260724T141721Z_w0_tp1 */
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

int __cdecl FUN_005fbec8(...);

struct ThisCallBox {
  undefined4 FUN_00615fb8(int *param_2, uint param_3, uint *param_4, int param_5);
};
undefined4 ThisCallBox::FUN_00615fb8(int *param_2, uint param_3, uint *param_4, int param_5) {
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  uVar3 = *(uint *)(*(int *)(*(int *)(((int)this) + 0x14) + *param_2 * 4) + 0x20);
  local_c = 0;
  local_8 = 0;
  if ((uVar3 & 0x400) == 0) {
    if ((uVar3 & 0x800) == 0) {
      if ((uVar3 & 0x1000) == 0) {
        if ((uVar3 & 0x2000) == 0) {
          if ((uVar3 & 0x4000) == 0) {
            if ((char)(uVar3 >> 8) < '\0') {
              local_8 = 0xd000000;
            }
          }
          else {
            local_8 = 0xe000000;
          }
        }
        else {
          local_8 = 0xf000000;
        }
      }
      else {
        local_8 = 0x3000000;
      }
    }
    else {
      local_8 = 0x2000000;
    }
  }
  else {
    local_8 = 0x1000000;
  }
  if ((uVar3 & 0x200) != 0) {
    local_8 = CONCAT13((*((unsigned char *)&(local_8) + 3)),0x100000);
  }
  if (param_5 == 0) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(((int)this) + 0x14) + param_2[uVar3] * 4) + 0xc);
        uVar4 = 0;
        if (iVar2 == 0) {
          uVar4 = 0x10000;
        }
        else if (iVar2 == 1) {
          uVar4 = 0x20000;
        }
        else if (iVar2 == 2) {
          uVar4 = 0x40000;
        }
        else if (iVar2 == 3) {
          uVar4 = 0x80000;
        }
        if ((local_c & uVar4) != 0) {
          FUN_005fbec8(((int)this),*(undefined4 *)(*(int *)(((int)this) + 0x98) + 0x34),0x12d5,
                       "internal error: overlapping output writes");
        }
        local_c = local_c | uVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_3);
    }
  }
  else {
    local_c = 0xf0000;
  }
  uVar3 = 0;
  if ((*(byte *)(((int)this) + 0x92) & 0x40) != 0) {
    if ((local_c & 0x80000) == 0) {
      local_c = 0x70000;
    }
    else if ((local_c & 0x70000) != 0) {
      local_c = 0xf0000;
    }
  }
  if ((((*(byte *)(((int)this) + 0x34) & 1) != 0) && (*(int *)(((int)this) + 0xb8) != 0)) && (param_3 != 0))
  {
    do {
      piVar1 = param_2 + uVar3;
      iVar2 = uVar3 + *(int *)(((int)this) + 0xbc) * 6;
      uVar3 = uVar3 + 1;
      *(int *)(*(int *)(((int)this) + 0xb8) + -0x10 + iVar2 * 4) = *piVar1;
    } while (uVar3 < param_3);
  }
  *param_4 = local_8 | local_c;
  return 0;
}
