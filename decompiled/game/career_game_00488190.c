/* spd-match: far pct=4.86 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00488190 */
/* Decompiled from Speed.exe @ 00488190 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
typedef struct { float x, y, z; } Vec3; extern float _DAT_006cc8bc; extern float _DAT_006cc7a4; float __fastcall FUN_00488190(Vec3 *pA, Vec3 *pB, int dummy, float f) { if ((_DAT_006cc8bc < (float)fabs(pB->x - pA->x)) || (_DAT_006cc8bc < (float)fabs(pB->y - pA->y)) || (_DAT_006cc8bc < (float)fabs(pB->z - pA->z))) { if (f != _DAT_006cc7a4) { float dx = pA->x - pB->x; float dy = pA->y - pB->y; float dz = pA->z - pB->z; return (float)sqrt(dx*dx + dy*dy + dz*dz) / f; } } return _DAT_006cc7a4; }

