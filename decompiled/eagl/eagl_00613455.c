/* spd-match: far pct=22.54 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00613455 */
#define NULL 0
extern const void* PTR_FUN_006a6120;
void __stdcall FUN_005d7803(void);
typedef void (__fastcall *Callback)(void* obj, int val);
void __fastcall FUN_00613455(int* pThis) {
  int* pIter;
  int i;
  pThis[0] = (int)&PTR_FUN_006a6120;
  if (pThis[0x3c/4] != 0) {
    ((Callback)(**(int**)(pThis[0x3c/4])))( (void*)pThis[0x3c/4], 1);
  }
  if (pThis[0x40/4] != 0) {
    ((Callback)(**(int**)(pThis[0x40/4])))( (void*)pThis[0x40/4], 1);
  }
  pIter = pThis + (0x44/4);
  i = 4;
  do {
    if (*pIter != 0) {
      ((Callback)(**(int**)(*pIter)))( (void*)*pIter, 1);
    }
    pIter++;
    i--;
  } while (i != 0);
  FUN_005d7803();
}
