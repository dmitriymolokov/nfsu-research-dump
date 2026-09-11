/* spd-match: far pct=14.47 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_16/attempt3_recipe */
#include "ghidra_compat.h"

typedef WCHAR *LPWSTR;
typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct m375_ptiddata_s {
  void *_tfpecode;
  void *_initaddr;
  int _holdrand;
  int _thandle;
  unsigned char _pad[128];
} *m375_ptiddata;
typedef int (__stdcall *m375_crit_init_fn)(int, int);

extern int DAT_00717a88;
extern int DAT_00717ee8;
extern void LAB_006800f1(void);

void ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if ((void *)DAT_00717ee8 == (void *)0) {
    if (DAT_00717a88 != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_00717ee8 = (code *)GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if ((void *)DAT_00717ee8 != (void *)0) goto LAB_006800f1;
      }
    }
    DAT_00717ee8 = (code *)___crtInitCritSecNoSpinCount_8;
  }
LAB_006800f1:
  (*(void (__stdcall *)(undefined4,undefined4))(void *)DAT_00717ee8)(param_1,param_2);
  return;
}
