/* spd-match: far pct=28.16 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_004200A0 */
typedef void (__stdcall *CallbackFunc)(void*);
struct DataBlock {
  char pad1[0x2d4];
  float val;
  char pad2[0x10];
  void* cb;
  void* arg;
};
extern float DAT_006cc7a4;
extern float DAT_0073ad38;
void __fastcall FUN_004200a0(void* esi) {
  struct DataBlock* p = (struct DataBlock*)esi;
  if (p->val > DAT_006cc7a4) {
    p->val -= DAT_0073ad38;
    if (p->val <= DAT_006cc7a4) {
      p->val = 0.0f;
      if (p->cb) {
        ((CallbackFunc)p->cb)(p->arg);
        p->cb = 0;
        p->arg = 0;
      }
    }
  }
}
