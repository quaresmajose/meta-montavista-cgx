inherit multilib_header

do_install:append () {
    oe_multilib_header libol/olconfig.h
}
