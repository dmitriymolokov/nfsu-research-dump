/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p2/batches/20260724T142559Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct m375_ov12 { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr; void *_initarg; void *_translator; void *_terminate;
  void *_unexpected; void *_purecall; void *_token; void *_tpxcptinfoptrs;
  void *_pxcptacttab; unsigned int _holdrand; int _tfpecode; int _terrno;
  int _tdoserrno; int _NLG_dwCode; int _maxcharsize; char _con_ch_buf[32];
  unsigned int _thandle; unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

extern int _DAT_006df1d0;
extern unsigned int uRam006df1d2;
extern unsigned int uRam006df1d4;
extern unsigned int uRam006df1d6;
extern unsigned int uRam006df1d8;
extern unsigned int uRam006df1da;
extern unsigned int uRam006df1dc;
extern unsigned int uRam006df1de;

void FUN_005eccb7(void)

{
  ushort in_XMM0_Wa;
  ushort in_XMM0_Wb;
  ushort in_XMM0_Wc;
  ushort in_XMM0_Wd;
  ushort in_XMM0_We;
  ushort in_XMM0_Wf;
  ushort in_XMM0_Wg;
  ushort in_XMM0_Wh;
  undefined4 auVar1;
  
  (*(unsigned short *)&(auVar1)) = -(ushort)((((int)_DAT_006df1d0) & in_XMM0_Wa) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 2)) = -(ushort)((uRam006df1d2 & in_XMM0_Wb) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 4)) = -(ushort)((uRam006df1d4 & in_XMM0_Wc) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 6)) = -(ushort)((uRam006df1d6 & in_XMM0_Wd) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 8)) = -(ushort)((uRam006df1d8 & in_XMM0_We) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 10)) = -(ushort)((uRam006df1da & in_XMM0_Wf) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 12)) = -(ushort)((uRam006df1dc & in_XMM0_Wg) == 0);
  (*(unsigned short *)((unsigned char *)&(auVar1) + 14)) = -(ushort)((uRam006df1de & in_XMM0_Wh) == 0);
  if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
      ((*(unsigned short *)((unsigned char *)&(auVar1) + 14)) >> 7 & 1) != 0) || ((*(unsigned short *)((unsigned char *)&(auVar1) + 14)) & 0x8000) != 0) {
    return;
  }
  return;
}
