/* spd-match: far pct=7.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005802C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
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

int __cdecl FUN_0057f2b0();
int __cdecl FUN_00583ea0();
extern int DAT_006f0d54;
extern int _DAT_006b5bcc;
extern int _DAT_006b5bd0;
extern int _DAT_006b5bd4;
extern int _DAT_006b5be8;
extern int _DAT_006b5bf0;
extern int _DAT_006cc7bc;
extern int _DAT_006cca58;
extern int _DAT_006ccc58;
extern int _DAT_006ccc60;
extern int _DAT_006f0d50;
float10 __fastcall FUN_005802c0(int obj)

{
  float fVar1;

  float10 fVar2;
  float10 fVar3;
  float local_8;
  float local_4;
  
  if (*(char *)(obj + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  local_8 = 0.0;
  local_4 = 0.0;
  do {
    fVar2 = (float10)FUN_00583ea0(local_4);
    fVar3 = ((float10)local_4 * (float10)*(float *)(unsigned int)(obj + 0x2c0) * (float10)local_4) /
            (float10)*(float *)(unsigned int)(obj + 0x170);
    if (fVar2 < fVar3) break;
    local_8 = (float)((fVar2 - fVar3) * (float10)((int)_DAT_006b5bd4) + (float10)local_8);
    local_4 = ((int)_DAT_006b5bd4) + local_4;
  } while (local_4 < _DAT_006ccc60);
  fVar1 = (float)*(int *)(obj + 0x20) * ((int)_DAT_006cca58) * ((int)_DAT_006b5bf0) +
          ((*(float *)(unsigned int)(obj + 0x30c) * *(float *)(unsigned int)(obj + 0x300) - _DAT_006f0d50) /
          (((int)DAT_006f0d54) - _DAT_006f0d50)) * ((int)_DAT_006b5be8) +
          (((int)_DAT_006cc7bc) - (((int)_DAT_006b5bf0) + _DAT_006b5be8)) *
          ((local_8 - _DAT_006b5bcc) / (((int)_DAT_006b5bd0) - _DAT_006b5bcc));
  if (fVar1 <= _DAT_006ccc58) {
    return (float10)((int)_DAT_006ccc58);
  }
  if (_DAT_006cc7bc < fVar1) {
    fVar1 = (unsigned int)(_DAT_006cc7bc);
  }
  return (float10)fVar1;
}
