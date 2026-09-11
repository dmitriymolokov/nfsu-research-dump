/* spd-match: far pct=9.09 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.2-n5/va_005D8A02 */
#include <windows.h>
extern int __stdcall FUN_005d7885(void*);
extern void* PTR_FUN_006a0cb4;
void* __stdcall FUN_005d8a02(void* ecx_val, int* p2, int* p3) {
  int* b = (int*)ecx_val;
  b[2]=0; b[3]=0; b[1]=0xd; b[0]=(int)&PTR_FUN_006a0cb4;
  b[4]=p2[0]; b[5]=p2[1]; b[6]=p2[2]; b[7]=p2[3];
  for(int i=0; i<8; i++) b[8+i] = p3[i];
  if(b[4]==5 && b[6]) { void** v=(void**)b[6]; ((void(__stdcall*)(int))v[1])(b[6]); }
  if(b[4]==4 && b[6]) b[6] = FUN_005d7885((void*)b[6]);
  return b;
}
