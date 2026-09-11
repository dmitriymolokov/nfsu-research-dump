/* spd-match: far pct=8.82 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_005693D0 */
#include <math.h>
extern int __cdecl FUN_00567370(void);
struct Node { float x, y, z, pad; };
struct Table { int count; Node nodes[256]; };
extern Table* DAT_00704670;
extern float _DAT_006cc79c;
extern float _DAT_006cc7bc;
void __fastcall FUN_005693d0(int eax, int ecx, float* p2) {
  Table* t = (Table*)((char*)ecx + (eax * 32) + 0x704670);
  float* dest = (float*)((char*)ecx + (eax * 32));
  for (int i = 0; i < t->count; ++i) {
    Node* n = &t->nodes[i];
    float val = (float)sqrt(n->x * n->x + n->y * n->y + n->z * n->z);
    if ((float)fabs(_DAT_006cc7bc - val) > _DAT_006cc79c) {
      FUN_00567370();
    }
  }
  dest[0] = p2[0]; dest[1] = p2[1]; dest[2] = p2[2];
}
