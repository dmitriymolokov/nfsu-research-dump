/* spd-match: far pct=12.00 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0057A720 */
/* Decompiled from Speed.exe @ 0057a720 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
struct Data { char pad[0x90]; void* next; }; struct Root { char pad[0x1d4]; struct Data* d; }; extern int __stdcall FUN_00647b70(void* p); int __fastcall FUN_0057a720(struct Root* this, void* edx) { int res = FUN_00647b70((char*)this->d + 0x1c); if (res == 6) { int* p = (int*)((char*)this->d->next + 0x14); return (p[1] == 3); } return 0; }

