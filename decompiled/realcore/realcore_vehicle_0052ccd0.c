/* spd-match: far pct=17.13 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052CCD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00584310();
extern int DAT_006b65a8;
extern int DAT_006b65b0;
extern int DAT_006b65b8;
extern int DAT_006b65c0;
extern int DAT_00705874;
extern int DAT_00705890;
extern int DAT_007361a4;
extern int DAT_0078a345;
extern int _DAT_006ccae0;
extern int _DAT_00705864;
extern int _DAT_00705868;
extern int _DAT_0070586c;
extern int _DAT_00705870;
extern int _DAT_00705878;
extern int _DAT_00705880;
extern int _DAT_00705884;
extern int _DAT_00705888;
extern int _DAT_0070588c;
extern int _DAT_00705894;
int unaff_ESI;
void __fastcall FUN_0052ccd0(int obj)

{

  int iVar1;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x10) = obj;
  *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(*(int *)(*(int *)(obj + 0x234) + 0x14) + 4)
  ;
  iVar1 = *(int *)(*(int *)(*(int *)(obj + 0x234) + 0x14) + 0x34);
  *(int *)(unaff_ESI + 0x3c) = iVar1;
  *(uint *)(unaff_ESI + 0x34) = (uint)(1 < iVar1);
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x38) = 1;
  }
  iVar1 = *(int *)(unaff_ESI + 0x34) * 4;
  _DAT_00705870 = *(float *)((&DAT_006b65c0) + iVar1);
  _DAT_00705864 = 0;
  _DAT_0070586c = *(float *)((&DAT_006b65b0) + iVar1);
  _DAT_00705868 = 0x3f800000;
  if (ABS(((int)_DAT_00705870) - _DAT_0070586c) < _DAT_006ccae0) {
    _DAT_00705870 = ((int)_DAT_00705870) + _DAT_006ccae0;
  }
  DAT_00705874 = 0;
  _DAT_00705878 = 0;
  _DAT_0070588c = (float)(&DAT_006b65b8)[*(int *)(unaff_ESI + 0x34)];
  _DAT_00705880 = 0;
  _DAT_00705888 = (float)(&DAT_006b65a8)[*(int *)(unaff_ESI + 0x34)];
  _DAT_00705884 = 0x3f800000;
  if (ABS(((int)_DAT_0070588c) - _DAT_00705888) < _DAT_006ccae0) {
    _DAT_0070588c = ((int)_DAT_0070588c) + _DAT_006ccae0;
  }
  DAT_00705890 = 0;
  _DAT_00705894 = 0;
  FUN_00584310(0);
  FUN_00584310(0);
  FUN_00584310(0);
  FUN_00584310(0);
  FUN_00584310(0);
  FUN_00584310(0);
  return;
}
