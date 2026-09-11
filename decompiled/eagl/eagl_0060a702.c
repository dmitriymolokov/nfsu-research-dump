/* spd-match: far pct=10.16 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060A702 */
#include <stddef.h>
#include <windows.h>
int __stdcall FUN_005fbec8(int a1, int a2, int a3, const char *fmt, ...);
unsigned int __fastcall FUN_0060a702(void *this_ptr) {
  int locals[9];
  int i;
  int *esi;
  esi = (int *)this_ptr;
  for(i=0; i<9; i++) locals[i] = 0;
  *(int*)((char*)esi + 0x12c) = 0;
  *(int*)((char*)esi + 0x130) = 0;
  for(i=0; i<8; i++) *(int*)((char*)esi + 0x10c + i*4) = 0;
  i = 0;
  if(esi[2] != 0) {
    do {
      int *p_instr_base = (int*)(*(int*)((char*)esi + 0x14));
      int *p_reg_base = (int*)(*(int*)((char*)esi + 0x10));
      int *instr = (int*)(p_instr_base + i);
      int *reg = (int*)(p_reg_base + (*instr));
      if(reg[1] != -1 && locals[6] == 0) {
        FUN_005fbec8((int)esi, instr[0x11], 0x119f, "relative addressing not supported in ps_1_x");
        locals[6] = 1;
        locals[8] = 1;
      }
      i++;
    } while((unsigned int)i < (unsigned int)esi[2]);
  }
  return (locals[8] != 0) ? 0x80004005 : 0;
}
