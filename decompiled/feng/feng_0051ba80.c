/* spd-match: far pct=25.53 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0051BA80 */
extern char DAT_0076323d; extern char DAT_0076777c; unsigned char __fastcall FUN_0051ba80(void) { register char *p = &DAT_0076323d; register unsigned int i = 0xb; while (p < (char *)0x76777d) { if (*p != 0 && (&DAT_0076777c)[i] != 0) return 1; p += 0x454; i++; } return 0; }
