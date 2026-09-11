/* spd-match: matched pct=100.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0057BF70 */
#define DAT_007345ac (*(volatile int*)0x007345ac)
extern void __stdcall FUN_00578370(void);
void __fastcall FUN_0057bf70(int* pThis) {
  int val = DAT_007345ac;
  --val;
  *pThis = 0x6ba438;
  DAT_007345ac = val;
  FUN_00578370();
}
