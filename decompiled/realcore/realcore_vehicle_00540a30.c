/* spd-match: far pct=18.60 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00540A30 */
#include "ghidra_compat.h"

void __fastcall FUN_00540a30(int* pDest, int* pSrc1, int* pSrc2) {
  int t0 = pSrc2[0];
  int t1 = pSrc2[1];
  int t2 = pSrc2[2];
  pSrc1[0] = t0;
  pSrc1[1] = t1;
  pSrc1[2] = t2;
  pDest[0] = pSrc1[0];
  pDest[1] = pSrc1[1];
  pDest[2] = pSrc1[2];
  pDest[3] = pSrc1[3];
}
