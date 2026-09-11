/* spd-match: far pct=26.92 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_005AF0CF */
extern int __cdecl FUN_005ab736(float, float);
extern float _DAT_00699488, _DAT_006cc7bc;
float sqrt(float);
void FUN_005af0cf(float *d, float *s) {
  float m = s[0]*s[0] + s[1]*s[1] + s[2]*s[2] + s[3]*s[3];
  if (FUN_005ab736(m, 1.0f)) {
    if (d != s) { d[0]=s[0]; d[1]=s[1]; d[2]=s[2]; d[3]=s[3]; }
  } else if (m > _DAT_00699488) {
    float r = _DAT_006cc7bc / sqrt(m);
    float t0=s[0]*r, t1=s[1]*r, t2=s[2]*r, t3=s[3]*r;
    d[0]=t0; d[1]=t1; d[2]=t2; d[3]=t3;
  } else {
    d[0]=d[1]=d[2]=d[3]=0.0f;
  }
}
