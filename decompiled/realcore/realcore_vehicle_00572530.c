/* spd-match: far pct=27.85 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00572530 */
#define DAT_006f08a4 (*(int*)0x006f08a4)
#define DAT_006f1a08 ((int*)0x006f1a08)
extern void FUN_00565da0(char*, int);
extern void FUN_00572590(int, void*);
void __stdcall FUN_00572530(int param_1) {
  int i;
  int val = DAT_006f08a4;
  for (i = 0; i < 4; i++) {
    if (val == DAT_006f1a08[i]) {
      char buf[32];
      FUN_00565da0("CHECKSUM%d", i);
      FUN_00572590(param_1, buf);
      break;
    }
  }
}
