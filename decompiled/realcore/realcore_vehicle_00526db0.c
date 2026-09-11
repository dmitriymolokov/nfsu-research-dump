/* spd-match: far pct=12.26 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00526DB0 */
#include <windows.h>
extern int __cdecl FUN_00429ac0();
struct ObjStruct { char pad_0[0x234]; int data_234; char pad_238[0x4c]; char data_2c4; char pad_2c5[3]; float data_2c8; float data_244; };
void __fastcall FUN_00526db0(struct ObjStruct * obj, void* edx_ignored) {
  int local_stack[2];
  int* p_ptr = (int*)((char*)obj + 0x234);
  int ptr1 = *p_ptr;
  if (ptr1 != 0) {
    int ptr2 = *(int*)(ptr1 + 0x14);
    if (*(int*)(ptr2 + 4) == 1 && *(unsigned char*)(ptr2 + 0x734) == 0) {
       int res = FUN_00429ac0();
       if (*(float*)&res == *(float*)0x006cc7a4) {
          if (obj->data_2c4 == 0) {
             obj->data_2c4 = 1;
             obj->data_2c8 = 0.0f;
          }
          obj->data_2c8 += obj->data_244;
       }
    }
  }
}
