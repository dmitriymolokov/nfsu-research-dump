/* spd-match: far pct=8.75 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0057F2B0 */
#include <windows.h>
extern int FUN_00473fc0();
extern int FUN_00575960(int, int*, int*);
extern int DAT_00734588;
extern float _DAT_006ccb88;
void __cdecl FUN_0057f2b0(int* edi, char param_1) {
  int iVar9;
  float fVar3;
  if (edi && *edi != -1) {
    edi[11] = 0;
    edi[12] = 0;
    iVar9 = (*edi * 0xc90) + DAT_00734588;
    fVar3 = (float)(edi[3] + edi[9] + edi[2]);
    fVar3 = fVar3 * _DAT_006ccb88;
    FUN_00575960(iVar9 + 0x110, edi + 24, edi + 2);
  }
}
