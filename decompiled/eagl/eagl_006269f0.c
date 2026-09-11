/* spd-match: far pct=9.79 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_006269F0 */
/* Decompiled from Speed.exe @ 006269f0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef struct { int count; int** items; } DataContainer; extern void __fastcall FUN_00622dd0(void* p); extern void __fastcall FUN_00622e30(void* p); extern void* PTR_FUN_006dfaa0; void __fastcall FUN_006269f0(DataContainer* p) { int i = 0; int n = p->count; if (n > 0) { do { int* item = p->items[i]; if (item != 0) { int t = item[2]; if (t == 6 || t == 8) { int* obj = (int*)item[3]; if (obj != 0) { FUN_00622dd0(obj); ((void (__cdecl*)(void*, int))PTR_FUN_006dfaa0)(obj, 0x20); } item[3] = 0; } else if (t == 7) { int* val = (int*)item[3]; if (val != 0 && (int)val != -1) { FUN_00622e30(val); ((void (__cdecl*)(int*, int))PTR_FUN_006dfaa0)(val, 0x14); } item[3] = 0; } ((void (__cdecl*)(int*, int))PTR_FUN_006dfaa0)(item, 0x10); } i++; } while (i < n); } if (p->items != 0) { ((void (__cdecl*)(int**, int))PTR_FUN_006dfaa0)(p->items, n << 2); } }

