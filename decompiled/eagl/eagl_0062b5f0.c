/* spd-match: far pct=5.83 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_0062B5F0 */
#include <windows.h>
struct ThisCallBox { void FUN_0062b5f0(unsigned int* pSrc, int pDstBase); };
void ThisCallBox::FUN_0062b5f0(unsigned int* pSrc, int pDstBase) {
  int pData = *(int*)((char*)this + 0xc);
  unsigned char count = *(unsigned char*)(pData + 8);
  unsigned char* pTable = (unsigned char*)(pData + 10);
  unsigned char bit_pos = 0;
  for (int i = 0; i < count; ++i) {
    unsigned short entry = *(unsigned short*)(pTable + i * 2);
    unsigned char type = (entry >> 13);
    unsigned char mode = (entry >> 11) & 3;
    unsigned int v = 0;
    switch(type) {
      case 0: bit_pos += 1; v = (*(unsigned char*)pSrc >> (8 - bit_pos)) & 1; break;
      case 1: bit_pos += 2; v = (*(unsigned char*)pSrc >> (8 - bit_pos)) & 3; break;
      case 2: bit_pos += 4; v = (*(unsigned char*)pSrc >> (8 - bit_pos)) & 0xF; break;
      case 3: v = *(unsigned char*)pSrc; pSrc = (unsigned int*)((char*)pSrc + 1); break;
      case 4: v = *(unsigned short*)pSrc; pSrc = (unsigned int*)((char*)pSrc + 2); break;
      case 5: v = *pSrc++; break;
    }
    if (bit_pos >= 8) { pSrc = (unsigned int*)((char*)pSrc + 1); bit_pos = 0; }
    unsigned char offset = (unsigned char)entry;
    if (mode == 0) *(unsigned char*)(pDstBase + offset) = (unsigned char)v;
    else if (mode == 1) *(unsigned short*)(pDstBase + offset) = (unsigned short)v;
    else if (mode == 3) *(unsigned int*)(pDstBase + offset) = v;
  }
}
