/* spd-match: far pct=30.11 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00627B90 */
#include <stdlib.h>
extern int (*PTR_006dfa9c)(int, const char*);
extern int DAT_0070d364, DAT_0070d360, DAT_0070d3c8;
void __cdecl FUN_0061f540(const char*, void*, void*);
void __cdecl FUN_0040a880(void);
void __cdecl LAB_00627c20(void);
void __cdecl FUN_00627b90(int p1) {
  int* p = (int*)malloc(4);
  if (p) {
    *p = 0x6a7f5c;
    DAT_0070d364 = DAT_0070d360 = (int)p;
    (*(void (__cdecl **)(int))(*p + 4))(p1);
  } else {
    DAT_0070d364 = DAT_0070d360 = 0;
  }
  DAT_0070d3c8 = PTR_006dfa9c(1, "EAGLAnim::FnAnimFactory new");
  FUN_0061f540("AnimationBank", &LAB_00627c20, FUN_0040a880);
}
