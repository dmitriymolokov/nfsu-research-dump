/* spd-match: far pct=10.26 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00580400 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057f2b0();
extern int _DAT_006b5bf4;
extern int _DAT_006b5bf8;
extern int _DAT_006b5bfc;
extern int _DAT_006b5c00;
extern int _DAT_006b5c04;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc830;
extern int _DAT_006cc834;
extern int _DAT_006cc960;
extern int _DAT_006cca0c;
extern int _DAT_006ccc54;
extern int _DAT_006ccc58;
extern int _DAT_006ccc5c;
extern int _DAT_006f0d30;
extern int _DAT_006f0d34;
extern int _DAT_006f0d38;
extern int _DAT_006f0d3c;
extern int _DAT_006f0d40;
extern int _DAT_006f0d44;
extern int _DAT_006f0d48;
extern int _DAT_006f0d4c;
float10 __fastcall FUN_00580400(int obj)

{
  float fVar1;

  if (*(char *)(obj + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  if (*(float *)(obj + 0x220) <= _DAT_006cca0c) {
    fVar1 = (*(float *)(obj + 0x220) + _DAT_006cc960) * ((int)_DAT_006ccc5c);
  }
  else {
    fVar1 = (((int)_DAT_006cc7bc) - *(float *)(obj + 0x220)) * ((int)_DAT_006ccc54);
  }
  fVar1 = ((int)_DAT_006b5c04) * fVar1 +
          ((int)_DAT_006b5c00) * (((int)_DAT_006cc7bc) -
          (*(float *)(obj + 0x170) - _DAT_006f0d48) / (((int)_DAT_006f0d4c) - _DAT_006f0d48)) +
          ((int)_DAT_006b5bfc) * (((*(float *)(obj + 0x1e0) + *(float *)(obj + 0x1d4) +
            *(float *)(obj + 0x200) + *(float *)(obj + 500)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc) -
           _DAT_006f0d30) / (((int)_DAT_006f0d34) - _DAT_006f0d30)) +
          ((int)_DAT_006b5bf8) * (((*(float *)(obj + 0x2d4) * ((int)_DAT_006cc834) + *(float *)(obj + 0x2d8) * ((int)_DAT_006cc830)
            ) - _DAT_006f0d40) / (((int)_DAT_006f0d44) - _DAT_006f0d40)) +
          ((int)_DAT_006b5bf4) * (((*(float *)(obj + 0x140) + *(float *)(obj + 0x13c) +
            *(float *)(obj + 0x160) + *(float *)(obj + 0x15c)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc) - _DAT_006f0d38) / (((int)_DAT_006f0d3c) - _DAT_006f0d38));
  if (_DAT_006ccc58 < fVar1) {
    if (_DAT_006cc7bc < fVar1) {
      fVar1 = _DAT_006cc7bc;
    }
    return (float10)fVar1;
  }
  return (float10)((int)_DAT_006ccc58);
}
