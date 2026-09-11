/* spd-match: far pct=23.53 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00547700 */
#include <stddef.h>
extern void FUN_004392a0(void* p);
extern void FUN_004389b0(int val, void* p);
extern int FUN_004388d0(void* p);
extern char* FUN_006497c0(void* p);
extern void FUN_00547910(int x, void* p, int y);
void FUN_00547700(void* p_this) {
  char buf[1036];
  int i, count;
  char* data;
  FUN_004392a0(buf);
  FUN_004389b0(0xe, buf);
  count = FUN_004388d0(p_this);
  data = FUN_006497c0(p_this);
  for (i = 0; i < count; i++) {
    FUN_004389b0((unsigned char)data[i], buf);
  }
  FUN_00547910(0xe, buf, 1);
}
