/* spd-match: far pct=28.57 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_16/attempt2_recipe */
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

extern unsigned char *PTR_DAT_006eb554;

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  m375_ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_006eb554) {
    ptVar2 = ___updatetlocinfo();
  }
  iVar3 = ___mbtowc_mt(ptVar2,_DstCh,_SrcCh,_SrcSizeInBytes);
  return iVar3;
}
