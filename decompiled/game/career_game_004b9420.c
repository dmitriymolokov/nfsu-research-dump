/* spd-match: far pct=14.56 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_cdecl_uchar/batches/20260724T142916Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl _atexit(void (__cdecl *)(void));
typedef void (__cdecl *_func_void_void_ptr)(void *);
extern char s_SND__FE_FrontEnd_006bf464[];
extern char s_SND__FE_Common_006bf41c[];
extern char s_SND__Nitrous_006bf0c0[];
extern char s_Right_Road_Noise_006befd8[];
extern char s_333_333__006b6c84[];
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *, void *);
int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);

int __cdecl FUN_004ab510(...);
int __cdecl FUN_004b9900(...);
int __cdecl FUN_004b9960(...);
int __cdecl FUN_004b99c0(...);
extern int DAT_00777cc8;
extern void *PTR_FUN_006c5bb8;
extern void LAB_0068683b(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_004b9420(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_004b9420(undefined4 *param_2) {
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (unsigned char *)(unsigned int)&LAB_0068683b;
  local_c = ExceptionList;
  puVar1 = param_2 + 1;
  ExceptionList = (void *)(unsigned int)&local_c;
  *param_2 = (unsigned int)&PTR_FUN_006c5bb8;
  *puVar1 = (unsigned int)(puVar1);
  param_2[2] = (unsigned int)(puVar1);
  param_2[3] = ((undefined4)this);
  param_2[5] = 0;
  local_4 = 0;
  if (DAT_00777cc8 == 4) {
    iVar2 = FUN_004ab510();
    param_2[4] = *(undefined4 *)(iVar2 + 0x20);
    FUN_004b9900();
    FUN_004b99c0(param_2);
    ExceptionList = (void *)(unsigned int)local_c;
    return param_2;
  }
  param_2[4] = 0;
  FUN_004b9960();
  ExceptionList = (void *)(unsigned int)local_c;
  return param_2;
}
