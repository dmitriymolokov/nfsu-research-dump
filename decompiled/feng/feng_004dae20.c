/* spd-match: far pct=9.64 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p1/batches/20260724T142733Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined4 _12_4_;
  undefined2 _16_2_;
} m375_s_nfs_underground_006cb164;
extern m375_s_nfs_underground_006cb164 s__NFS_Underground__006cb164;
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_004d7770();
int __cdecl FUN_004f6a10();
int __cdecl FUN_004f7b50();
extern int DAT_006b6b2c;
extern int DAT_00735e14;
extern int _DAT_00746de0;
extern unsigned char *PTR_LAB_006c3c14;
extern void LAB_0068715c(void);
void *ExceptionList;

void FUN_004dae20(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0068715c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_006c3c14;
  local_4 = 4;
  DAT_00735e14 = 0;
  _DAT_00746de0 = (unsigned int)(DAT_006b6b2c);
  FUN_004f6a10("MU_HorizontalBrowserBack.fng",1);
  _Memory = (int *)param_1[0x2cb];
  while (_Memory != param_1 + 0x2cb) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)param_1[0x2cb];
  }
  (*(unsigned int *)&(local_4) = (*(unsigned int *)&(local_4) & 0xffu) | (((unsigned int)((uint3)((uint)local_4 >> 8))) << 8));
  (*(unsigned char *)&(local_4)) = 2;
  _eh_vector_destructor_iterator_(param_1 + 0x161,0x2c,0x1e,FUN_004d7770);
  (*(unsigned char *)&(local_4)) = 1;
  _eh_vector_destructor_iterator_(param_1 + 0x85,0x2c,0x14,FUN_004d7770);
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  _eh_vector_destructor_iterator_(param_1 + 0x17,0x2c,10,FUN_004d7770);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}
