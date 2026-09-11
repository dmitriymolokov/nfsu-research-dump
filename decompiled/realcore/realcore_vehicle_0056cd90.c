/* spd-match: far pct=42.86 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0056CD90 */
extern float DAT_006cc7a4; int FUN_0056cd90(float **p1, float **p2) { float f1 = **p1 - **p2; if (f1 > DAT_006cc7a4) return 1; if (f1 >= DAT_006cc7a4) { float f2 = (*p2)[1] - (*p1)[1]; if (f2 > DAT_006cc7a4) return 1; if (f2 >= DAT_006cc7a4) return 0; } return -1; }
