/* spd-match: far pct=29.67 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00557690 */
extern void * _malloc(unsigned int); int __cdecl FUN_00557770(void *, int); int FUN_00557690(int param_1) { int ret = 0; __try { void *pv = _malloc(0x54); if (pv) { ret = FUN_00557770(pv, param_1); } else { ret = 0; } } __except(0x00688173) { ret = 0; } return ret; }
