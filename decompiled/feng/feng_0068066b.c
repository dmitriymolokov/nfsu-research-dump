/* spd-match: far pct=40.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142558Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_00677f42();
int __cdecl FUN_00677f4b();
extern int DAT_00793224;
extern int DAT_00793240;

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  undefined4 *puVar2;
  
  if (((uint)_FileHandle < DAT_00793224) &&
     (piVar1 = (intptr_t *)((&DAT_00793240)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  puVar2 = (undefined4 *)FUN_00677f42();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_00677f4b();
  *puVar2 = 0;
  return -1;
}
