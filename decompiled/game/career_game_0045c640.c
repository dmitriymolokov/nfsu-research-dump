/* spd-match: far pct=4.56 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_0045C640 */
#include <windows.h>
extern float DAT_006cc7a4;
void __fastcall FUN_0045c640(int obj, int edx, float* edi, int ecx, int esi, float p3, float p4, float p5) {
    float f1 = *edi;
    float f2 = *(float*)(*(char*)(obj + 0x388) * 0x38 + obj + 0x10);
    float f3;
    if (edx == 4) f3 = f1 + p3;
    else if (edx == 3) f3 = f1 - p3;
    else {
        if (p4 <= f1) { f3 = f1 - p3; if (p4 < f3) goto L_out; }
        else { f3 = f1 + p3; if (f3 < p4) goto L_out; }
        f3 = p4;
    }
L_out:
    {
        float f_res = (ecx < 0 || ecx > 4) ? ((ecx > 10 && ecx < 17) ? *(float*)(esi + ecx * 4 - 8) : DAT_006cc7a4) : *(float*)(esi + 0x20);
        float local_8 = f_res + f2 + p5;
        float f_res2 = (ecx < 0 || ecx > 4) ? ((ecx > 10 && ecx < 17) ? *(float*)(esi + ecx * 4 + 0x14) : DAT_006cc7a4) : *(float*)(esi + 0x3c);
        float p5_new = (f_res2 - f2) - p5;
        if (DAT_006cc7a4 <= local_8) local_8 = 0.0f;
        if (p5_new <= DAT_006cc7a4) p5_new = 0.0f;
        *edi = (f3 <= local_8) ? local_8 : ((f3 < p5_new) ? f3 : p5_new);
    }
}
