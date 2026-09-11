/* spd-match: far pct=26.14 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00572970 */
#include <stddef.h>
struct Node { struct Node* next; char pad[0x148]; float value; };
struct Container { int dummy; int count; char reserved[0x68]; struct Node* head; };
void __fastcall FUN_00572970(struct Container* obj, void* edx_ignored, float f) {
    struct Node* sentinel = (struct Node*)((char*)obj + 0x70);
    if (obj->count != 0) {
        struct Node* curr = obj->head;
        while (curr != sentinel) {
            const char* s1 = (const char*)((char*)curr - 0x6cad90);
            const char* s2 = (const char*)0x6cad90;
            while (*s1 && *s1 == *s2) { s1++; s2++; }
            if (*s1 == *s2) {
                curr->value += f;
            }
            curr = curr->next;
        }
    }
}
