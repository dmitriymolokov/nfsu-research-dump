/* spd-match: far pct=65.22 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00643FF0 */
extern float _DAT_006cc7bc; extern float func_0x00644800(float *p); void fn_00643FF0(float *src, float *dst) { float f = _DAT_006cc7bc / func_0x00644800(src); float val; val = src[0]; dst[0] = val * f; val = src[1]; dst[1] = val * f; val = src[2]; dst[2] = val * f; }
