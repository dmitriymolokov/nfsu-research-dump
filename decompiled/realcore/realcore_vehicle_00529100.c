/* spd-match: far pct=16.67 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00529100 */
#include "ghidra_compat.h"
struct DataStruct { char _[0x20]; int field_4; int field_8; char field_c; int field_14; };
extern int DAT_006f1dd8; extern int DAT_006f7220; extern float _DAT_006b661c; extern float _DAT_006b6620; extern float _DAT_006cc7a4; extern float _DAT_006cc7bc; extern float _DAT_006b6624; extern float _DAT_006ccb30; extern float _DAT_006cc8e8; extern void *ExceptionList;
int __cdecl FUN_00674898();
void FUN_00529100(struct DataStruct *pData) {
  int esi, edi; short s1; float f1, f2;
  if (pData->field_c) {
    esi = ((short)*(short*)((int)pData->field_8 + 8) * 0x7fff) >> 15;
    edi = pData->field_4;
    f1 = *(float*)((char*)edi + 0x1f1c);
    f1 = (float)FUN_00674898();
    f1 = (f1 - _DAT_006b6620) / (_DAT_006b661c - _DAT_006b6620);
    if (f1 < _DAT_006cc7a4) {
      if (f1 > _DAT_006cc7bc) {
        f2 = (_DAT_006cc7bc - _DAT_006b6624) * _DAT_006b6624 + _DAT_006ccb30 + _DAT_006cc8e8;
      }
    }
  }
}
