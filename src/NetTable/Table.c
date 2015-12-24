#include "Primitives.h"
#include "String.h"

Bool NetTable_Table__equal(Object self, Object other) {
    return self == other;
}

String NetTable_Table_str__g(Object self) {
    String ret = String_alloc(64);
    sprintf(ret->data, "%p", self);
    ret->length = strlen(ret->data);
    return ret;
}
