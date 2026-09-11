/* spd-match: far pct=10.20 flags=/O1 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_0062CB50 */
#include <windows.h>
typedef float float10;
struct ThisCallBox;
extern int __cdecl FUN_00629350(float);
extern void __cdecl FUN_0062c170(void);
extern int __cdecl FUN_0062c300(float, int, int);
class ThisCallBox {
public:
  int FUN_0062cb50(float f, int p2, int p3);
};
int ThisCallBox::FUN_0062cb50(float f, int p2, int p3) {
  if (*(int*)((char*)this + 0x18) == 0) FUN_0062c170();
  if (p3 != 0) return FUN_0062c300(f, p2, p3);
  return 0;
}
