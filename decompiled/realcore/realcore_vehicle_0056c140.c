/* spd-match: far pct=8.57 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_misc_p2/batches/20260724T142512Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct m375_ov12 { undefined4 a,b,c; } m375_ov12;
typedef struct _m375_ptiddata {
  void *_initaddr; void *_initarg; void *_translator; void *_terminate;
  void *_unexpected; void *_purecall; void *_token; void *_tpxcptinfoptrs;
  void *_pxcptacttab; unsigned int _holdrand; int _tfpecode; int _terrno;
  int _tdoserrno; int _NLG_dwCode; int _maxcharsize; char _con_ch_buf[32];
  unsigned int _thandle; unsigned char _pad[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375
unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_004049f0();
int __cdecl FUN_0040a880();
int __cdecl FUN_0042ac80();
int __cdecl FUN_00571560();
extern void LAB_006856fb(void);
void *ExceptionList;

void FUN_0056c140(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006856fb;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x1ac0),0xa0,2,FUN_0040a880);
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),4);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x19e0),0x68,2,FUN_0040a880);
  piVar1 = *(int **)(param_1 + 0x19d8);
  while (piVar1 != (int *)(param_1 + 0x19d8)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = *(int **)(param_1 + 0x19d8);
  }
  (*(unsigned int *)&(local_4) = (*(unsigned int *)&(local_4) & 0xffu) | (((unsigned int)((uint3)((uint)local_4 >> 8))) << 8));
  (*(unsigned char *)&(local_4)) = 2;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xe6c),0x18,0x78,FUN_0042ac80);
  (*(unsigned char *)&(local_4)) = 1;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x62c),8,0x1c,FUN_00571560);
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x544),8,0x1d,FUN_004049f0);
  piVar1 = *(int **)(param_1 + 0x500);
  while (piVar1 != (int *)(param_1 + 0x500)) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = *(int **)(param_1 + 0x500);
  }
  ExceptionList = local_c;
  return;
}
