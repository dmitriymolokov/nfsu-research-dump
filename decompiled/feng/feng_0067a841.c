/* spd-match: far pct=3.76 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141731Z_w0_tp1 */
#include "ghidra_compat.h"

typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct m375_pthreadmbcinfo_s {
  int mbulinfo;
  int mbcodepage;
  int ismbcodepage;
  unsigned char mbctype[257];
} *m375_pthreadmbcinfo;
typedef struct m375_ptiddata_s {
  void *_initaddr;
  void *_initarg;
  void *_translator;
  void *_terminate;
  void *_unexpected;
  void *_purecall;
  void *_token;
  m375_pthreadmbcinfo _tpxcptinfoptrs;
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
} *m375_ptiddata;
float10 __cdecl __set_exp(unsigned __int64, short, int, int);
void _FindAndUnlinkFrame(FrameInfo *);

extern int _DAT_006ccaf8;

struct ThisCallBox {
  float10 FUN_0067a841(uint param_2, uint param_3, int *param_4);
};
float10 ThisCallBox::FUN_0067a841(uint param_2, uint param_3, int *param_4) {
  bool bVar1;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  
  if ((double)(__int64)CONCAT17((*((unsigned char *)&(param_3) + 3)),CONCAT16((*((unsigned char *)&(param_3) + 2)),CONCAT24((ushort)param_3,param_2))) ==
      _DAT_006ccaf8) {
    fVar3 = (float10)0;
    iVar2 = 0;
  }
  else if (((param_3 & 0x7ff00000) == 0) && (((param_3 & 0xfffff) != 0 || (param_2 != 0)))) {
    if (_DAT_006ccaf8 <=
        (double)(__int64)CONCAT17((*((unsigned char *)&(param_3) + 3)),CONCAT16((*((unsigned char *)&(param_3) + 2)),CONCAT24((ushort)param_3,param_2)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    while (((*((unsigned char *)&(param_3) + 2)) & 0x10) == 0) {
      iVar2 = CONCAT13((*((unsigned char *)&(param_3) + 3)),CONCAT12((*((unsigned char *)&(param_3) + 2)),(ushort)param_3)) << 1;
      (*(unsigned short *)&(param_3)) = (ushort)iVar2;
      (*((unsigned char *)&(param_3) + 2)) = (byte)((uint)iVar2 >> 0x10);
      (*((unsigned char *)&(param_3) + 3)) = (byte)((uint)iVar2 >> 0x18);
      if ((param_2 & 0x80000000) != 0) {
        (*(unsigned short *)&(param_3)) = (ushort)param_3 | 1;
      }
      param_2 = param_2 << 1;
    }
    if (bVar1) {
      (*((unsigned char *)&(param_3) + 3)) = (*((unsigned char *)&(param_3) + 3)) | 0x80;
    }
    fVar3 = (float10)__set_exp(CONCAT17((*((unsigned char *)&(param_3) + 3)),
                                        CONCAT16((*((unsigned char *)&(param_3) + 2)),CONCAT24((ushort)param_3,param_2))) &
                               0xffefffffffffffff,0,((undefined4)this),((undefined4)this));
    iVar2 = extraout_EDX;
  }
  else {
    fVar3 = (float10)__set_exp(CONCAT17((*((unsigned char *)&(param_3) + 3)),
                                        CONCAT16((*((unsigned char *)&(param_3) + 2)),CONCAT24((ushort)param_3,param_2))),0
                               ,((undefined4)this),((undefined4)this));
    iVar2 = ((param_3 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_4 = iVar2;
  return (float10)(double)fVar3;
}
