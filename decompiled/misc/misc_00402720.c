/* spd-match: far pct=12.18 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00402720 */
#define NULL 0
extern void* __stdcall FUN_00566dc0(int size, const char* name, int flags);
extern void* DAT_0073652c, *DAT_00736530, *DAT_00736534, *DAT_0073d81c;
extern int DAT_0073d814;
extern int DAT_0073d818;
struct Pool { void* vptr; void* next; int data[4]; unsigned int flags; };
void FUN_00402720(void) {
  struct Pool* p = (struct Pool*)FUN_00566dc0(0x20, "AcidParticleSlotPool", 0);
  if (p && DAT_0073d814 == 1) {
    *(void**)DAT_0073d81c = p;
    p->next = DAT_0073d81c;
    DAT_0073d81c = p;
    p->vptr = &DAT_0073d818;
  }
  DAT_0073652c = p;
  p = (struct Pool*)FUN_00566dc0(0x1c, "AcidActiveGroupSlotPool", 0);
  if (p && DAT_0073d814 == 1) {
    *(void**)DAT_0073d81c = p;
    p->next = DAT_0073d81c;
    DAT_0073d81c = p;
    p->vptr = &DAT_0073d818;
  }
  DAT_00736530 = p;
  p = (struct Pool*)FUN_00566dc0(0xc0, "AcidEmitterSlotPool", 0);
  if (p && DAT_0073d814 == 1) {
    *(void**)DAT_0073d81c = p;
    p->next = DAT_0073d81c;
    DAT_0073d81c = p;
    p->vptr = &DAT_0073d818;
  }
  DAT_00736534 = p;
  ((struct Pool*)DAT_0073652c)->flags &= 0xFFFFFFFC;
  ((struct Pool*)DAT_00736530)->flags &= 0xFFFFFFFC;
}
