/* spd-match: far pct=13.59 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00553360 */
#include <windows.h>
extern void* DAT_00734f6c;
void* FUN_00553420(void);
void* __stdcall FUN_0067121a(unsigned int size);
void FUN_00553360(void) {
  void* pObj;
  __try {
    pObj = DAT_00734f6c;
    if (pObj != 0) {
      int* p = (int*)pObj;
      p[2]++;
      p[0] = 0;
      ((char*)p)[4] = 0;
      ((char*)p)[5] = 0;
      p[4] = 0; p[5] = 0; p[6] = 0;
      p[103] = 0; p[104] = 0; p[111] = 0;
      ((char*)p)[440] = 0;
      p[112] = 0;
    } else {
      void* pNew = FUN_0067121a(0x1cc);
      if (pNew != 0) DAT_00734f6c = FUN_00553420();
      else DAT_00734f6c = 0;
    }
  } __finally {}
}
