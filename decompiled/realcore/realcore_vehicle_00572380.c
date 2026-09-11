/* spd-match: far pct=18.18 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00572380 */
#include "ghidra_compat.h"
struct Object { int pad0[19]; int off4c; int pad1[12]; int off7c; int off88; int off94; int off8c; };
struct Snapshot { float val53; float val14c; int pad1[4]; int val30; };
extern int __cdecl FUN_00572b50(char*, int);
extern int __cdecl FUN_00572d60(int);
extern int __cdecl FUN_00572f20(char*);
extern float DAT_006cc7a4;
extern int DAT_006f08a0;
void __fastcall FUN_00572380(struct Object *obj)
{
  int *ebp_base, *esi, *ebx;
  if (DAT_006f08a0 < obj->off4c) return;
  obj->off4c = DAT_006f08a0 + 300;
  if (obj->off8c == 0 || obj->off8c < obj->off7c) goto LAB_00572510;
  ebp_base = (int *)FUN_00572b50("INSTANT_REPLAY", 0);
  esi = 0; ebx = 0;
  if (obj->off88 > 0) {
    do {
      if (ebx < obj->off94) {
        int *curr = (int *)FUN_00572b50("HIGHLIGHT_SNAPSHOT", ebx);
        if (ebp_base[12] < curr[13]) break;
        if (esi == 0 || *(float*)&curr[20] < *(float*)&esi[20]) esi = curr;
      }
      ebx++;
    } while (ebx < obj->off88);
  }
  if (*(float*)&ebp_base[83] <= DAT_006cc7a4 || (esi != 0 && *(float*)&ebp_base[83] <= *(float*)&esi[20])) {
     obj->off8c--;
     goto LAB_00572510;
  }
LAB_00572510:
  if (FUN_00572f20("INSTANT_REPLAY")) obj->off8c++;
}
