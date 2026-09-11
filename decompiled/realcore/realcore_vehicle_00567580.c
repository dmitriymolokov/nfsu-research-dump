/* spd-match: far pct=21.24 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00567580 */
/* Decompiled from Speed.exe @ 00567580 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef struct { float x; float y; } vec2; extern float* global_esi; void __fastcall FUN_00567580(vec2* ecx, vec2* edx) { float* esi = global_esi; float v1, v2, v3, v4; v1 = (esi[0] < ecx->x) ? esi[0] : ecx->x; v2 = (esi[1] < ecx->y) ? esi[1] : ecx->y; v3 = (ecx->x < edx->x) ? edx->x : ecx->x; v4 = (ecx->y < edx->y) ? edx->y : ecx->y; esi[0] = v1; esi[1] = v2; edx->x = v3; edx->y = v4; }

