/* spd-match: far pct=21.35 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00625C10 */
extern void __cdecl FUN_006240b0(int, int, int, int);
extern void __cdecl FUN_00624000(int, int, int, int);
extern void __cdecl FUN_0063f1b0(int, int, int);
void __cdecl FUN_00625c10(int p1, int p2, int p3, int p4, int p5, int p6) {
  int i = 0;
  int b = p4;
  int limit1 = p4;
  int limit2 = p4 + p5;
  int limit3 = limit2 + p6;
  if (i < limit1) {
    int ptr = p2;
    do {
      FUN_006240b0(i, p1, ptr, p3);
      i++;
      ptr += 0x40;
    } while (i < limit1);
  }
  if (i < limit2) {
    int ptr = i * 0x40 + p2;
    do {
      FUN_00624000(i, p1, ptr, p3);
      i++;
      ptr += 0x40;
    } while (i < limit2);
  }
  if (i < limit3) {
    int ptr = i * 0x40 + p2;
    unsigned int *src = (unsigned int *)(i * 0x10 + p3);
    do {
      FUN_0063f1b0(ptr, (*src & 0xFF) * 0x40 + p1, 0x40);
      src++;
      ptr += 0x40;
      i++;
    } while (i < limit3);
  }
}
