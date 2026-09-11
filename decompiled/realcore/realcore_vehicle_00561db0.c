/* spd-match: far pct=18.12 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00561DB0 */
#include <windows.h>
extern void* ExceptionList;
extern void* PTR_FUN_006bc74c;
extern void* DAT_0073578c;
extern void* DAT_00746104;
extern void* LAB_00687643;
void FUN_004f78e0(void*, void*);
void FUN_005627e0(void);
void FUN_005622d0(void);
int FUN_004ef050(int);
int FUN_004f65d0(void);
int FUN_004ffb70(void);
int FUN_004f3f90(void*);
int FUN_004fd1e0(int);
void* __stdcall FUN_00561db0(void* p1, void* p2) {
  void* p_local_c = ExceptionList;
  struct { void* prev; void* handler; } frame;
  int i, *pi;
  frame.prev = p_local_c;
  frame.handler = &LAB_00687643;
  ExceptionList = &frame;
  FUN_004f78e0(p1, p2);
  *(void**)p1 = &PTR_FUN_006bc74c;
  ((int*)p1)[0x17] = (int)((int*)p1 + 0x17);
  ((int*)p1)[0x18] = (int)((int*)p1 + 0x17);
  ((int*)p1)[0x19] = (int)((int*)p1 + 0x19);
  ((int*)p1)[0x1a] = (int)((int*)p1 + 0x19);
  ((int*)p1)[0x1b] = 0;
  ((int*)p1)[0x1c] = 0;
  ((int*)p1)[0x1d] = 0;
  ((int*)p1)[0x1e] = 10;
  ((int*)p1)[0x21] = 0;
  ((int*)p1)[0x22] = 0;
  ((unsigned char*)p1)[0x90] = 1;
  ((int*)p1)[0x61] = 0;
  FUN_005627e0();
  FUN_005622d0();
  ((unsigned char*)p1)[0x20] = 1;
  pi = (int*)p1 + 0x10;
  for(i=0; i<6; i++) { pi[i] = 0; }
  ExceptionList = p_local_c;
  return p1;
}
