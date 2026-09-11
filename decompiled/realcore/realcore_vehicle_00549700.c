/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00549700 */
#include <string.h>
#define undefined4 int
#define undefined2 short
#define undefined1 char
extern int __cdecl FUN_00549980();
extern int __cdecl FUN_0054dd30(int);
extern int __cdecl FUN_006687e0(int);
extern int __cdecl FUN_00674898();
extern int __cdecl FUN_006655c0(void*, int, void*);
int __cdecl FUN_0040a880();
int __fastcall FUN_00549700(int obj) {
  char buf[516];
  FUN_00549980();
  memset(buf, 0, 516);
  FUN_0054dd30(0x200);
  *(int*)(obj + 0x28c) = FUN_006687e0(0x4b);
  *(int*)(obj + 0x290) = FUN_00674898();
  *(int*)(obj + 0x68) = FUN_006655c0(&buf[0x10], 0, (void*)FUN_0040a880);
  return 0;
}
