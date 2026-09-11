/* spd-match: far pct=56.99 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_005ABD45 */
/* Decompiled from Speed.exe @ 005abd45 */
/* Module: Loader */
/* Ghidra DecompileAll */
typedef struct { float x, y, z; } Vec3; void __stdcall FUN_005abd45(Vec3 *out, const Vec3 *v1, const Vec3 *v2, const Vec3 *v3, float s1, float s2) { out->x = (v3->x - v1->x) * s2 + (v2->x - v1->x) * s1 + v1->x; out->y = (v3->y - v1->y) * s2 + (v2->y - v1->y) * s1 + v1->y; out->z = (v3->z - v1->z) * s2 + (v2->z - v1->z) * s1 + v1->z; }

