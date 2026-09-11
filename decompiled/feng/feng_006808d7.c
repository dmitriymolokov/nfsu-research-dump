/* spd-match: far pct=5.44 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_16/attempt2_recipe */
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

extern int DAT_006b1cf8;
extern int DAT_006eb720;
extern char stack0x00000000;
extern char stack0xffffffa8;
int unaff_retaddr;

LPSTR FUN_006808d7(UINT param_1,UINT param_2,char *param_3,size_t *param_4,LPSTR param_5,int param_6
                  )

{
  BOOL BVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  uint unaff_retaddr;
  LPCWSTR local_4c;
  size_t local_48;
  m375_cpinfo local_44;
  int local_30;
  size_t local_2c;
  int local_28;
  LPSTR local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006b1cf8;
  uStack_c = 0x6808e3;
  local_20 = DAT_006eb720 ^ unaff_retaddr;
  local_24 = (LPSTR)0x0;
  local_28 = 0;
  sVar4 = *param_4;
  local_30 = 0;
  local_2c = sVar4;
  if (param_1 != param_2) {
    BVar1 = GetCPInfo(param_1,&local_44);
    if ((((BVar1 != 0) && (local_44.MaxCharSize == 1)) &&
        (BVar1 = GetCPInfo(param_2,&local_44), BVar1 != 0)) && (local_44.MaxCharSize == 1)) {
      local_30 = 1;
    }
    if ((local_30 != 0) && (local_48 = sVar4, sVar4 == 0xffffffff)) {
      sVar2 = _strlen(param_3);
      local_48 = sVar2 + 1;
    }
    if ((local_30 == 0) &&
       (local_48 = MultiByteToWideChar(param_1,1,param_3,sVar4,(LPWSTR)0x0,0), local_48 == 0)) {
      return (LPSTR)0x0;
    }
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    local_4c = (LPCWSTR)&stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_48 * 2);
    local_8 = (undefined *)0xffffffff;
    if (&stack0x00000000 == (undefined1 *)0x58) {
      local_4c = _calloc(2,local_48);
      if (local_4c == (LPCWSTR)0x0) {
        return (LPSTR)0x0;
      }
      local_28 = 1;
    }
    iVar3 = MultiByteToWideChar(param_1,1,param_3,local_2c,local_4c,local_48);
    if (iVar3 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((local_30 != 0) ||
            (local_48 = WideCharToMultiByte(param_2,0,local_4c,local_48,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0), local_48 != 0)) &&
           (local_24 = _calloc(1,local_48), local_24 != (LPSTR)0x0)) {
          sVar4 = WideCharToMultiByte(param_2,0,local_4c,local_48,local_24,local_48,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (sVar4 == 0) {
            _free(local_24);
            local_24 = (LPSTR)0x0;
          }
          else if (local_2c != 0xffffffff) {
            *param_4 = sVar4;
          }
        }
      }
      else {
        iVar3 = WideCharToMultiByte(param_2,0,local_4c,local_48,param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar3 != 0) {
          local_24 = param_5;
        }
      }
    }
  }
  if (local_28 != 0) {
    _free(local_4c);
  }
  return local_24;
}
