/* spd-match: far pct=5.26 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_006297C0 */
#include "ghidra_compat.h"
extern int DAT_006cc7a4;
extern unsigned char *DAT_0070d364;
extern float _DAT_006a7eb0;
int __cdecl FUN_00634b20(int, int, int, int, int, int, int);
int __cdecl FUN_00634ed0(int, int, int, int, int, int, float, int, int);
struct ThisCallBox {
  int pad1[3];
  int* ptr_data;
  int val_current_idx;
  int* ptr_base;
  int* ptr_result_buffer;
  int val_count;
  int FUN_006297c0(float param_2, int param_3, int param_4);
};
int ThisCallBox::FUN_006297c0(float param_2, int param_3, int param_4) {
  int* data = this->ptr_data;
  unsigned short count = *(unsigned short*)((char*)data + 8);
  if (this->ptr_result_buffer == 0 && (*(unsigned short**)((char*)data + 4)) != 0) {
    unsigned int n = (unsigned int)**(unsigned short**)((char*)data + 4);
    typedef int* (__stdcall *AllocFn)(unsigned int);
    AllocFn alloc = (AllocFn)(*(int**)(*DAT_0070d364 + 0x14 / 4));
    this->ptr_result_buffer = alloc(n * 2);
    this->val_count = 0;
    for (unsigned int i = 0; i < n; ++i) {
      unsigned short idx = *(unsigned short*)((char*)data + 10 + i * 2) / 12;
      if ((*(unsigned int*)(param_4 + ((idx & 0xFF) >> 5) * 4) & (1 << (idx & 0x1F))) != 0) {
        *(short*)((char*)this->ptr_result_buffer + this->val_count * 2) = (short)i;
        this->val_count++;
      }
    }
  }
  float f = (param_2 < (float)DAT_006cc7a4) ? (param_2 + _DAT_006a7eb0) : (param_2 - _DAT_006a7eb0);
  int idx = (int)f;
  int limit = (int)count;
  int target = (idx < limit) ? ((idx < 0) ? 0 : idx) : (limit - 1);
  FUN_00634b20(4, this->val_current_idx, target, (int)this->ptr_base, (int)this->ptr_base, this->val_count, (int)this->ptr_result_buffer);
  this->val_current_idx = target;
  return 1;
}
