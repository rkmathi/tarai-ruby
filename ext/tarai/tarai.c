#include "ruby.h"

int tak(int x, int y, int z)
{
    if (x <= y) {
        return z;
    } else {
        tak(tak((x-1), y, z), tak((y-1), z, x), tak((z-1), x, y));
    }
}

int tarai(int x, int y, int z)
{
    if (x <= y) {
        return y;
    } else {
        tarai(tarai((x-1), y, z), tarai((y-1), z, x), tarai((z-1), x, y));
    }
}

VALUE tak_m(VALUE self, VALUE x_val, VALUE y_val, VALUE z_val)
{
    int x = NUM2INT(x_val);
    int y = NUM2INT(y_val);
    int z = NUM2INT(z_val);
    return INT2FIX(tak(x, y, z));
}

VALUE tarai_m(VALUE self, VALUE x_val, VALUE y_val, VALUE z_val)
{
    int x = NUM2INT(x_val);
    int y = NUM2INT(y_val);
    int z = NUM2INT(z_val);
    return INT2FIX(tarai(x, y, z));
}

void Init_tarai(void)
{
    VALUE cTarai = rb_define_class("Tarai", rb_cObject);

    rb_define_method(cTarai, "tak", tak_m, 3);
    rb_define_method(cTarai, "tarai", tarai_m, 3);
}

